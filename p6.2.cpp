#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int n=5,i,j;
    char PID[5][8],tempid[8];
    char name[5][24],tempname[24];
    int score[100];
    char searchID[10];
    cout<<"-----------------------------------------------------------------------------------------------"<<endl;
     cout<<"                 SPORT RECORD MANAGEMENT SYSTEM"  <<endl;
     cout<<"-----------------------------------------------------------------------------------------------"<<endl;

     for(i=0;i<n;i++)
     {
    cout<<"Enter details of participants:"<<i+1<<endl;
     cout<<"Enter Participant ID:";
     cin>>PID[i];
     cin>>PID[i];

     cin.ignore();
     cout<<"Enter name:";
     cin.getline(name[i],24);

     cout<<"Enter score:";
     cin>>score[i];
     }
     //search for participant
     bool found =false;
     cout<<"search id:";
     cin>>searchID;
     for(i=0;i<n;i++)
     {
     if(strcmp(PID[i],searchID)==0)
      {
        cout<<"id found:"<<endl;
        cout<<"id:"<<endl<<PID[i]<<endl;
        cout<<"Name:"<<name[i]<<endl;
        cout<<"Score:"<<score[i]<<endl;
        found=true;
        break;
      }
     }
      if(found==false)
       {
           cout<<"id not found!";
       }
       //sorting the participants data//
        for(i=0;i<n;i++)
        {
            for(j=i+1;j<n;j++)
            {
                if(score[i]<score[j])
                {
                    //swap id
                    strcpy(tempid,PID[i]);
                    strcpy(PID[i],PID[j]);
                    strcpy(PID[j],tempid);
                    //swap name
                    strcpy(tempname,name[i]);
                    strcpy(name[i],name[j]);
                    strcpy(name[j],tempname);
                    //swap score

               int  tempscore=score[i];
                score[i]=score[j];
                score[j]=tempscore;
                }
            }
        }
        //ranking list
        cout<<"---------------------------------------------------------------"<<endl;
         cout<<"                      Ranking List "<<endl;
        cout<<"---------------------------------------------------------------"<<endl;
      cout<<"Rank\tName\tScore"<<endl;
      for(i=0;i<n;i++)
      {
          cout<<" "<<i+1<<"\t"<<name[i]<<"\t"<<score[i]<<endl;

      }
                     //top 3
              cout<<"---------------------------------------------------------------"<<endl;
              cout<<"Top 3 performers"<<endl;
              cout<<"---------------------------------------------------------------"<<endl;
              for(i=0;i<3;i++)
              {
                  cout<<"\n"<<i+1<<"."<<name[i]<<"-"<<score[i];
              }
return 0;



     }
