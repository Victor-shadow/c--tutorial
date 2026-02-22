#include <iostream>
using namespace std;

class Person{
public: Person(int x){
    cout << " Person::Person() called: " << endl;
   }
    Person(){
    cout << " Person::Person() constructor called: " << endl;
  }
};

class Teacher: virtual public Person{
  public: Teacher(int x): Person(x){
      cout << " Teacher::Teacher() called: " << endl;
  }
};

class Student: virtual public Person{
public: Student(int x) : Person(x){
    cout << "Student::Student() called: " << endl;
  }
};

class TA: public Teacher, public Student{
public: TA(int x) : Person(x), Teacher(x), Student(x){
    cout << " TA::TA() called: " << endl;
  }
};

int main(){
    //the default constructor of person is called
    //when virtual keyword is used, the default constructor of grandparent class is called by default even if the parent class
    //explicitly call parameterized constructor
    TA object(50);
    return 0;
}