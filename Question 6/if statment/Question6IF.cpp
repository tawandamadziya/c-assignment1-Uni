#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
   float amount, finalamount;
   char customerType;
   cout<<"Please enter current amount due: ";
   cin>>amount;
   cout<<"Please enter customer type: ";
   cin>>customerType;
customerType=toupper(customerType);

if (customerType=='S')
{
  finalamount=amount-(0.1*amount);
  cout<<"The amount to be paid is R"<<fixed<<setprecision(2)<<finalamount<<endl;
}
else
if (customerType=='D')
{
 finalamount=amount-(0.12*amount);
  cout<<"The amount to be paid is R"<<fixed<<setprecision(2)<<finalamount<<endl;
}
else
if (customerType=='P')
{
  finalamount=amount-(0.15*amount);
  cout<<"The amount to be paid is R"<<fixed<<setprecision(2)<<finalamount<<endl;
}
else
if (customerType=='O')
{
    if(amount>200)
{
    finalamount=amount-(0.1*amount);
  cout<<"The amount to be paid is R"<<fixed<<setprecision(2)<<finalamount<<endl;

}
 finalamount=amount;
  cout<<"The amount to be paid is R"<<fixed<<setprecision(2)<<finalamount<<endl;

}
else
    cout<<"Please enter the correct customer type!!!"<<endl;

return 0;
}
