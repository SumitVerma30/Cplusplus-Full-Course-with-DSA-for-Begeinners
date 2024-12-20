#include <iostream>
using namespace std;

class Number {
    private:
        int a;
    public:
        Number() {
            a = 0;
        }
        Number(int num) {
            a = num;
        }
        Number(Number &obj) {                 //Copy Constructor //When there is no copy consrtuctor found compiler gives its own copy constructor
            cout << "Copy constructor called." << endl;
            a = obj.a;
        }
        void display (){
            cout << "The number for this ojbect is: " << a << endl;
        }
};

int main() {
    Number x, y, z(45), z2;
    x.display();
    y.display();
    z.display();

    Number z1(z);       //copy constructor invoked.
    z1.display();

    z2 = z;             //copy constructor not called.
    z2.display();

    Number z3 = z;      //copy constructor invoked.
    z3.display();

    return 0;
}