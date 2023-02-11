#include<iostream>
using namespace std;
int main()
{
int numberOfItems;
int counter=1; //loop counter for the loop
int caloriesForItem=0;
int totalCalories=0;

cout << "How many items did you eat today? ";
cin >> numberOfItems;

for(counter=1;counter<=numberOfItems;counter++)//Beginning of my code
{

 cout << "Enter the number of calories in each of item "<< counter << " eaten: " << endl;
  cin>>caloriesForItem;
  totalCalories=totalCalories+caloriesForItem;

}//End of my code
cout << "Total calories eaten today = " << totalCalories;
return 0;
}

