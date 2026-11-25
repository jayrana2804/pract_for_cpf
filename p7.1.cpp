#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char en[8],stuname[25],br[5],rfn[33],fn[15],ln[15],key[10];
    int j,k,i;
    cout<<"********************************************"<<endl;
    cout<<"  STUDENT RECORD MANAGEMENT SYSTEM"<<endl;
    cout<<"********************************************"<<endl;
    cout<<"Enter Enrollment Number:";
    cin>>en;
    cout<<"Enter Student Name:";
    cin.ignore();
    cin.getline(stuname,25);
    cout<<"Enter Branch:";
    cin>>br;
    cout<<"--------------------------------------------"<<endl;
    cout<<endl;
    cout<<"Student Reference"<<endl;
    for(i=0; stuname[i]!='\0'; i++)
    {
        rfn[i]=stuname[i];
    }
    rfn[i]='-';
    i++;
    for(j=0; en[j]!='\0'; j++,i++)
    {
        rfn[i]=en[j];
    }
    rfn[i]='\0';
    for(i=0; rfn[i]!='\0'; i++)
    {
        cout<<rfn[i];
    }
    cout<<endl;
    cout<<"--------------------------------------------"<<endl;
    for(i=0; stuname[i]!='\0' && stuname[i]!=' '; i++)
    {
        fn[i]=stuname[i];
    }
    fn[i]='\0';
    if(stuname[i]==' ')
    {
        i++;
    }
    for(j=0; stuname[i]!='\0'; j++,i++)
    {
        ln[j]=stuname[i];
    }
    ln[i]='\0';
    cout<<endl;
    cout<<"First Name"<<endl;
    cout<<fn<<endl;
    cout<<endl;
    cout<<"Last Name"<<endl;
    cout<<ln<<endl;
    cout<<"--------------------------------------------"<<endl;
    cout<<"Enter Keyword:";
    cin>>key;
    bool found=false;
    for(i=0; stuname[i]!='\0'; i++)
    {
        if(strstr(stuname,key)!=NULL)
        {
            found=true;
            break;
        }
    }
    if(found)
    {
        cout<<"Keyword Found"<<endl;
    }
    else
    {
        cout<<"Keyword Not Found"<<endl;
    }

    cout<<"--------------------------------------------"<<endl;
    cout<<endl;
    cout<<"Student Report"<<endl;
    cout<<"\nEnrollment Number:"<<en<<endl;
    cout<<"Student Name:"<<stuname<<endl;
    cout<<"Branch:"<<br<<endl;
    return 0;
}
