// c++ program to demonstrate inheritance
#include<iostream>
using namespace std;
//base class
class animal {
    public:
    void eat(){
        cout<<"I Can Eat"<<endl;
    }
    void sleep(){
        cout<<"I can sleep"<<endl;
    }
};
// derived class
class dog: public animal{
    public:
    void bark(){
        cout<<"I can bark! Woof Woof!"<<endl;
    }
};
int main(){
    //create object of the dog class
dog dog1;
//calling members of the base class
dog1.eat();
dog1.sleep();
//calling member of derived class
dog1.bark();
return 0;
}