class Mythread1 extends Thread {
    public void run() {
        int i = 0;
        while (i < 10) {
            System.out.println("my thread1 is running");
            i++;
        }
    }
}

class Mythread2 extends Thread {
    public void run() {
        int i = 0;
        while (i < 10) {
            System.out.println("my thread2 is running");
            i++;
        }
    }
}

public class threading {
    public static void main(String[] args) {
        Mythread1 t1 = new Mythread1();
        Mythread2 t2 = new Mythread2();
        t1.start();
        t2.start();
    }

}
