//single inheritance program
#include<iostream>
using namespace std;
class king{
    public:
    void palace(){
        cout<<"I have a palace"<<endl;
    }
    void wealth(){
        cout<<"I own wealth"<<endl;
    }
};
class prince: public king{
    public:
    void princess(){
        cout<<"I have two princesses!"<<endl;
    }
};
int main(){
    prince queen;
queen.palace();
queen.wealth();
queen.princess();
return 0;
}