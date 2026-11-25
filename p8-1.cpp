#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
void DisplayHeader()
{
    cout<<"-----------------Student Registration------------------"<<endl;
}
void AcceptStudentDetails(string &en,string &name,string &br,int &sem,int (&marks)[5])
{
    int i;
    cout<<"Enrollment Number : ";
    cin>>en;
    cout<<"Student Name : ";
    getline(cin,name);
    cin.ignore();
    cout<<"Braanch : ";
    cin>>br;
    cout<<"Semester : ";
    cin>>sem;
    cout<<endl;
    for(i=0; i<5; i++)
    {
        cout<<"Subject "<<i+1<<":";
        cin>>marks[i];
    }
}
void CalculateAcademicResult(int (&marks)[5],int &total,float &per,string &result,string &grade)
{
    int i;
    total=0;
    for(i=0; i<5; i++)
    {
        total=total+marks[i];
    }
    per=total/5.0;
    result="pass";
    for(i=0; i<5; i++)
    {
        if(marks[i]<=32)
        {
            result="Fail";
            grade="F";
            goto M;
        }
    }
    if(per>=90)
    {
        grade="O";
    }
    else if(per>=80)
    {
        grade="A+";
    }
    else if(per>=70)
    {
        grade="A";
    }
    else if(per>=60)
    {
        grade="B+";
    }
    else if(per>=50)
    {
        grade="B";
    }
    else if(per>=40)
    {
        grade="C";
    }
    else
    {
        grade="F";
    }
M:
    cout<<"-------------------------------------------------------------------"<<endl;
}
void DisplayStudentReport(string &en,string &name, string &br,int &sem,int &total,float &per,string &grade,string &result)
{
    cout<<"Enrollment Number"<<setw(2)<<":"<<en<<endl;
    cout<<"Name"<<setw(15)<<":"<<name<<endl;
    cout<<"Branch"<<setw(13)<<":"<<br<<endl;
    cout<<"Semester"<<setw(11)<<":"<<sem<<endl;
    cout<<endl;
    cout<<"Total"<<setw(7)<<":"<<total<<endl;
    cout<<"Percentage"<<setw(2)<<":"<<fixed<<setprecision(2)<<per<<"%"<<endl;
    cout<<"Grade"<<setw(7)<<":"<<grade<<endl;
    cout<<"Result"<<setw(6)<<":"<<result<<endl;
    cout<<endl;
    cout<<"Program Executed Successfully with using user defined Functions!"<<endl;
}
int main()
{
    string en,name,br;
    int sem;
    int marks[5];

    int total;
    float per;
    string grade,result;
    DisplayHeader();
    AcceptStudentDetails(en,name,br,sem,marks);
    CalculateAcademicResult(marks,total,per,result,grade);
    DisplayStudentReport(en,name,br,sem,total,per,grade,result);

    return 0;
}
