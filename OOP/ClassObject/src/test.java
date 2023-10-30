public class test {

    static int findSum(int a, int b) {
        return a + b;
    }

    static int findSum(int x, int y, int z) {
        return x + y + z;
    }

    static double findSum(double i, double j) {
        return i + j;
    }

    public static void main(String[] ar) {
        int sum1 = findSum(1, 2);
        int sum2 = findSum(1, 2, 3);
        double sum3 = findSum(45.6, 78.3);

        System.out.println(sum1);
        System.out.println(sum2);
        System.out.println(sum3);
    }
}