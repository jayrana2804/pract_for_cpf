#include<iostream>
#include<iomanip>
#include<cstring>
using namespace std;
int main()
{
    int n,i;
    char pID[8][8];
    char name[5][20];
    int score[100];

    cout<<"****************************************************"<<endl;
    cout<<"          SPORTS EVENT SCORE ANALYSIS"<<endl;
    cout<<"****************************************************"<<endl;
    cout<<"Enter Number of Participants:";
    cin>>n;

    //input details
    for(i=0;i<n;i++)
   {
       cout<<"Enter participantID:";
       cin>>pID[i];

        cin.ignore();
       cout<<"Enter participantName:";
       cin.getline(name[i],20);

       cout<<"Enter score:";
       cin>>score[i];
   }
    //display participant performance
    cout<<"*****************************************************************"<<endl;
    cout<<"           Participant Performance"<<endl;
    cout<<"*****************************************************************"<<endl;

  cout<<"-------------------------------------------------------------------"<<endl;
    cout<<left<<setw(10)<<"ID"<<setw(15)<<"Name"<<"score"<<endl;

    for(i=0;i<n;i++)
    {
        cout<<left<<setw(10)<<pID[i]<<setw(15)<<name[i]<<score[i]<<endl;
    }
    cout <<"------------------------------------"<< endl;

      //calculate total,highest,lowest.
      int tot=0;
      int highest=score[0];
      int lowest=score[0];
      for(i=0;i<n;i++)
      {
          tot=tot+score[i];
          if(score[i]>highest)
          {
            highest=score[i];
          }
          if(score[i]<lowest)
          {
            lowest=score[i];
          }
      }
    float average = (float)tot/n;
   strstr(1,2);
      //result
      cout<<"Total score:"<<tot<<endl;
      cout<<"average score:"<<average<<endl;
      cout<<"Highest score:"<<highest<<endl;
      cout<<"Lowest score:"<<lowest<<endl;
      cout <<"------------------------------------"<< endl;

  return 0;

}
