#include<iostream>
using namespace std;
int main()
{
    int programsDone, result;
    result=0;

    while(result<=49 || programsDone<=4)
        {//Begin loop
      cout<< "Please enter the results obtained: ";
      cin>>result;
      cout<< "Please enter the number of programs done: ";
      cin>>programsDone;
    }//End loop

    cout<< "Good! You can now proceed to the next exercis";
    return 0;
}
