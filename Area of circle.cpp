//Program to Calculate Area of a Circle using functions
#include<iostream>
using namespace std;
float circle (int r);
int main (){
int radius;
float area;
cout<<"enter radius"<<endl;
cin>>radius;
area=circle (radius);
cout<<"The area is"<<area<<endl;
    return 0;
}
float circle(int r){
float area;
area=3.142*r*r;
return area;
}