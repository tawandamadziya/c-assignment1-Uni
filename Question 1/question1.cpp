#include<iostream>
using namespace std;
int main()
{
    int mfactor;
    cout<<"Please enter the factor to multiply the ingredients with: ";
   cin>>mfactor;
   cout<<"Recipe Name: Making Dries"<<endl;
   cout<<"Ingridients:"<<endl;
   cout<<"     Flour, Milk Solids, Instant Starch, Gums, Egg Whites"<<endl;
   cout<<"     including "<<mfactor*2<<" of flour"<<endl;
   return 0;
}
