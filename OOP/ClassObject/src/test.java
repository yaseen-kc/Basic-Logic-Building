public class test {
    public static void main(String ar[]) {
        Hello h = new Hello();

        h.add(7, 8);

        h.add(7, 8, 9);

        h.add(7.8, 9.10);
    }

}

class Hello {
    void add(int i, int j) {
        System.out.println(i + j);
    }

    void add(int i, int j, int k) {
        System.out.println(i + j + k);
    }

    void add(double i, double j) {
        System.out.println(i + j);
    }
}
