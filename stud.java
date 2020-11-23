import java.lang.*;
import java.util.*;

class student {
    private int rollNo;
    private String dept, name;
    private String subjects[] = new String[3];

    public int getRollNo() {
        return rollNo;
    }

    public String getDept() {
        return dept;
    }

    public String getName() {
        return name;
    }

    public String[] getSubjects() {
        return subjects;
    }

    public student(String name, String dept, int rollNo) {
        this.name = name;
        this.dept = dept;
        this.rollNo = rollNo;
    }

    public void setSubjects(String... subject) {
        for (int i = 0; i < subject.length; i++) {
            this.subjects[i] = subject[i];
        }
    }

    public void print() {
        System.out.println("Name: " + getName() + "\nDept: " + getDept() + "\nRoll No.: " + getRollNo());
        String s[] = new String[3];
        s = getSubjects();
        for (int i = 0; i < s.length; i++) {
            System.out.println(i + 1 + ". " + s[i]);
        }
    }
}

public class stud {
    public static void main(String[] args) {
        student stu = new student("Name", "Dept", 001);
        stu.setSubjects("Maths", "Not Maths", "math");
        stu.print();
    }
}