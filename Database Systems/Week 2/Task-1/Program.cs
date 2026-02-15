using System;

class Person {
    public int age;

    public void Greet() {
        Console.WriteLine("Hello!");
    }

    public void SetAge(int age) {
        this.age = age;
    }
}

class Student : Person {
    public void Study() {
        Console.WriteLine("I'm studying");
    }

    public void ShowAge() {
        Console.WriteLine($"My age is: {age} years old");
    }
}

class Professor : Person {
    public void Explain() {
        Console.WriteLine("I'm explaining");
    }
}

class Program {
    static void Main(string[] args) {
        Person person = new Person();
        person.Greet();

        Student student = new Student();
        student.SetAge(21);
        student.Greet();
        student.ShowAge();
        student.Study();

        Professor professor = new Professor();
        professor.SetAge(40);
        professor.Greet();
        professor.Explain();
    }
}
