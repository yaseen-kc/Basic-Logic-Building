class Car {
    int year;
    String name;
    String make;
}

public class ClassObject {
    public static void main(String[] args) {
        Car bmw = new Car();

        bmw.make = "Germany";
        bmw.name = "ABC";
        bmw.year = 2023;

        System.out.println(bmw.make);
        System.out.println(bmw.name);
        System.out.println(bmw.year);
    }
}
