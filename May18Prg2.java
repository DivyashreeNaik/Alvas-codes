public class Main extends Thread {
    static StringBuilder object = new StringBuilder("");
    public static void main(String[] args) throws InterruptedException {
        Thread t1 = new Main();
        Thread t2 = new Main();
        t1.setName("\nping");
        t2.setName(" pong");
        t1.start();
        t2.start();
    }	
        public void run() {
            working();
        }
        void working() {
            while (true) {
                synchronized (object) {
                    try {
                        System.out.print(Thread.currentThread().getName());
                        object.notify();
                        object.wait();
                    } 
                    catch (InterruptedException e) {
                        e.printStackTrace();
                    }
                }
            }
        }
}
