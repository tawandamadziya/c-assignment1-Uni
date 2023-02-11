#include<iostream>
using namespace std;
int main()
{
 int nrPupils=56, nrGroups, nrLeft;
 int groupSize;
 cout<<"Please enter the size of each group: ";
 cin>>groupSize;
 nrGroups=nrPupils/groupSize;
 nrLeft=nrPupils%groupSize;
 cout<<"There are "<< nrGroups <<" groups consisting of "<< groupSize <<endl;
cout<<" pupils. There are "<< nrLeft <<" remaining pupils"<<endl;


 return 0;
}
