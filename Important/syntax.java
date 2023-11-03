//Class

class Student {
    int id;
    string name;
}

class Test {
    public static void main(String ar[]) {
        Student s1 = new Student();
        System.out.println(s1.id);
        System.out.println(s1.name);
    }
}

// Method

public class Calculator {
    static int add(int a, int b) {
        return a + b;
    }

    public static void main(String[] a[]){
            int sum = add(5,7);
            System.out,println("Sum: "+sum);
        }
}

// Constructor
// Defualt

class Bike {
    Bike() {
        System.out.println("Splendor");
    }

    public static void main(String args[]) {
        Bike b = new Bike();
    }
}
