#include <iostream>
using namespace std;

class Animal{
public: void printSound(){
    cout << "The sound of animal constructor: " << endl;
  }
    virtual ~Animal(){}
};

class Cat: public Animal{
public: void soundCat(){
    cout << "The sound of a cat is a meow: " << endl;
}
    virtual~ Cat(){}
};

class Snake: public Animal{
public: void soundSnake(){
    cout << "The sound produced by a snake is a hiss: "<< endl;
}
    virtual~ Snake(){}
};


class Dog: public Animal{
public: void soundDog(){
    cout << "The sound of a dog is a bark: " << endl;
}
    virtual~ Dog(){}
};

int main(){
    Dog object;
    Cat object2;
    Snake object3;
    object2.soundCat();
    object3.soundSnake();
    object.soundDog();
    return 0;
}