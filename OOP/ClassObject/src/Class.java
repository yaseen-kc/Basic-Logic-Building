//Main inside the class
class Student {
    int rollno;
    String name;
}

public class Class {
    public static void main(String[] args) {
        Student s1 = new Student(); // Inside
        ClassOut s2 = new ClassOut(); // Outside

        s1.rollno = 25;
        s1.name = "Name";
        s2.address = "ABC";
        s2.age = 15;

        System.out.println(s2.age);
        System.out.println(s2.address);

        System.out.println(s1.rollno);
        System.out.println(s1.name);
    }
}
