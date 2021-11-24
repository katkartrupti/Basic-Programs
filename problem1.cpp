#include<iostream>
#include<string.h>
#include<math.h>
using namespace std;
class Calculator
{
   double a,b;
   public: void get()
   {
       cout<<"Enter first number"<<endl;
       cin>>a;
       cout<<"Enter second number"<<endl;
       cin>>b;
   }
   double add()
   {
       return a+b;
   }
   double sub()
   {
       return a-b;
   }
   double mul()
   {
       return a*b;
   }
   double div()
   {
       if(b==0)
       {
           cout<<"second number should be greater than 0";
           return INFINITY;
       }
       else{
        return a/b;
       }
   }
};
int main()
{
    string operationType;
    cout<<"Addition"<<endl<<"Subtraction"<<endl<<"Multiplication"<<endl<<"Division"<<endl;
    cout<<"enter which operation you want to apply on the numbers(string)"<<endl;
    cin>>operationType;

    Calculator cal;
    if(operationType=="Addition" || operationType=="addition")
    {
        cal.get();
        cout<<"Addition is :"<<cal.add()<<endl;
    }
    else if(operationType=="Subtraction" || operationType=="subtraction")
    {
        cal.get();
        cout<<"Subtraction is :"<<cal.sub()<<endl;
    }
    else if(operationType=="Multiplication" || operationType=="multiplication")
    {
        cal.get();
        cout<<"Multiplication is :"<<cal.mul()<<endl;
    }
    else if(operationType=="Division" || operationType=="division")
    {
        cal.get();
        cout<<"Division is :"<<cal.div()<<endl;
    }
    else
        cout<<"invalid input..";

    return 0;
}
