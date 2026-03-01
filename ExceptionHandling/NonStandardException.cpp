#include <iostream>
using namespace std;

class CustomExcept {
    public: CustomExcept(const string &msg) : message(msg) {}
    //Handle custom exception using what() method
    const char* what() const{
        return message.c_str();
    }
    private: string message;
};

int main(){
    try{
        throw CustomExcept(
            "This is a Custom Exception!"
        );
    }
    catch(const CustomExcept& e){
        cout << e.what();
    }
    return 0;
}