//program to convert temperature from Fareinheit to Degrees Celcius
#include<iostream>
using namespace std;
float c (int f);//function prototype 
int main(){
int f;
float celcius;
cout<<"Enter Fareinheit";
cin>>f;

celcius=c(f);//function calling
cout<<"the degree is"<<celcius;
return 0;
}
float c(int f){//function definition
float celcius;
celcius=(f-32)*5/9;
return celcius;
}