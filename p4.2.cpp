#include<iostream>
using namespace std;
int main()
{
    int total_marks;
    float average_marks,percentage;
    cout<<"****************************************************"<<endl;
    cout<<"STUDENT RECORD MANAGMENT SYSTEM"<<endl;
    cout<<"****************************************************"<<endl;
    cout<<"****************************************************"<<endl;
    cout<<"Academic summary"<<endl;
    cout<<"****************************************************"<<endl;
    cout<<"Total marks:";
    cin>>total_marks;
    cout<<"Average marks:";
    cin>>average_marks;
    cout<<"Percentage:";
    cin>>percentage;
    cout<<"****************************************************"<<endl;
    cout<<"Academic result"<<endl;
    cout<<"****************************************************"<<endl;

    if(percentage>=90 && percentage<=100)
    {
        cout<<"Grade :O";
        cout<<endl;
        cout<<"Performance remark :Op bhai";
    }
    else if(percentage>80 && percentage<89)
    {
        cout<<"Grade :A+";
        cout<<endl;
        cout<<"Performance remark :Outstanding";
    }
    else if(percentage>70 && percentage<79)
    {
        cout<<"Grade :A";
        cout<<endl;
        cout<<"Performance remark :Excellent";
    }
    else if(percentage>60 && percentage<69)
    {
        cout<<"Grade :B+";
        cout<<endl;
        cout<<"Performance remark :Very Good";
    }
    else if(percentage>50 && percentage<59)
    {
        cout<<"Grade :B";
        cout<<endl;
        cout<<"Performance remark :Satisfactory";
    }
    else if(percentage=>40 && percentage<49)
    {
        cout<<"Grade :C";
        cout<<endl;
        cout<<"Performance remark :Needs Improvement";
    }
    else
    {
        cout<<"Result        :fail";
        cout<<endl;
        cout<<"better luck next time";
    }
    return 0;
}








