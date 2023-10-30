class Student {

    int rollno;
    String name;
    static String college = "ITS";

    Student(int r, String n) {
        rollno = r;
        name = n;
    }

    void display() {
        System.out.println(rollno + " " + name + " " + college);
    }
}

class test extends Student {
    test(int r, String n) {
        super(r, n);
        // TODO Auto-generated constructor stub
    }

    int a;

    void hai() {
        System.out.println("Hai");
    }
}