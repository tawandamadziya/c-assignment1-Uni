 #include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int votesForA=0, votesForB=0, votesForC=0, spoiltVotes=0;
    char LetterVoter;


    for (int i=0;i<4;i++)
   {//begin for loop

        while(LetterVoter!='X')
    {//begin while loop
            cout<<"Please enter your chosen candidated using initial given: ";
            cin>>LetterVoter;
            LetterVoter=toupper(LetterVoter);

            switch(LetterVoter)
      {//begin switch

        case 'A':
            votesForA=votesForA+1;
             break;

        case 'B':
            votesForB=votesForB+1;
             break;

        case 'C':
            votesForC=votesForC+1;
             break;
        case 'X':

          break;

        default:
             spoiltVotes=spoiltVotes+1;
          break;
      }//End switch


    }//End while loop
    LetterVoter='A';//initialising the value to A so that loop does not end immedietly due to LetterVoter=X
    }//End for loop

    cout<<"Total candidate A: "<<votesForA<<endl;
    cout<<"Total candidate B: "<<votesForB<<endl;
    cout<<"Total candidate C: "<<votesForC<<endl;
    cout<<"Total spoilt votes: "<<spoiltVotes<<endl;
    return 0;
}
