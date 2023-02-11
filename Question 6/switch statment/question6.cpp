#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
    float amount, finalAmount;
    char customerType;
    cout<< "Please enter the amount currently due: ";
    cin>>amount;
    cout<< "Please enter type of customer: ";
    cin>>customerType;
    customerType= toupper(customerType);

    switch(customerType)
    { case 'D':
        finalAmount=(amount-(0.12*amount));
        cout<<"The total amount due is R"<< fixed<<setprecision(2)<<finalAmount;
        break;

         case 'P':
        finalAmount=(amount-(0.15*amount));
        cout<<"The total amount due is R"<< fixed<<setprecision(2)<<finalAmount;
        break;

         case 'S':
        finalAmount=(amount-(0.1*amount));
        cout<<"The total amount due is R"<< fixed<<setprecision(2)<<finalAmount;
        break;

         case 'O':
             finalAmount=amount;
             if(finalAmount>200){
        finalAmount=(amount-(0.1*amount));
        cout<<"The total amount due is R"<< fixed<<setprecision(2)<<finalAmount;
        break;}
       cout<<"The total amount due is R"<< fixed<<setprecision(2)<<finalAmount;
        break;

         default:
            cout<< "Please enter a valid customer type!!!"<<endl;
    }
    return 0;
}
