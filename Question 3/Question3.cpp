#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    float var1, var2;
    char operation;
    cout<<"Please enter first value: ";
    cin>>var1;
    cout<<"Please enter second value: ";
    cin>>var2;
    cout<<"Please enter operation character: ";
    cin>>operation;

      if(operation=='+'){
cout<<"The sum of "<<var1<<" and "<<var2<< " is "<< fixed<<setprecision(2)<< var1+ var2 <<endl;}
 if(operation=='-'){
cout<<"The sum of "<<var1<<" and "<<var2<< " is "<< fixed<<setprecision(2)<< var1- var2 <<endl;}
 if(operation=='*'){
cout<<"The sum of "<<var1<<" and "<<var2<< " is "<< fixed<<setprecision(2)<< var1* var2 <<endl;}
 if(operation=='/'){
cout<<"The sum of "<<var1<<" and "<<var2<< " is "<< fixed<<setprecision(2)<<var1/var2<<endl;}






    return 0;
}
