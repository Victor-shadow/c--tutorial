#include <iostream>
using namespace std;

class Person{
    //Data members of Person
    public: Person(int age){
        cout << "Person::Person(int) called " << endl;
    }
};

class Student: public Person{
//Data members
public: Student(int age): Person(age){
    cout << "Color::Color(int) called " << endl;
   }
};

class Teacher: public Person{
    //Data members
public: Teacher(int age) : Person(age){
    cout << "Teacher::Teacher(int) called " << endl;
    }
};

class TA: public Teacher, public Student{
public: TA(int age) : Student(age), Teacher(age){
    cout << "TA::TA(int) called " << endl;
   }
};

int main(){
    //The constructor of person is called Twice, Destructor of Person is also called Twice when object is destroyed
    //The object has two copies of all members of person
    TA object(30);
    return 0;
};
