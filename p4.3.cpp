#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int enrollment_number,mobile_number,semester;
        char student_name[23];
        char branch[20];
    int total_marks;
          float average_marks,percentage;
    short int choice;
    cout<<"****************************************************"<<endl;
    cout<<"STUDENT RECORD MANAGMENT SYSTEM"<<endl;
    cout<<"****************************************************"<<endl;


 M:   cout<<"-----------------------Main menu--------------------"<<endl;

    cout<<"Enter Your Choice:";
    cin>>choice;

    switch(choice)
    {
    case 1:
        cout<<"Register New Student"<<endl;
        cout<<"----------------------------------------------------"<<endl;
        cout<<"STUDENT INFORMATION"<<endl;
        cout<<"----------------------------------------------------"<<endl;

        cout<<"Enrollment Number"<<setw(9)<<":";
        cin>>enrollment_number;
        cout<<"Student Name"<<setw(14)<<":";
        cin>>student_name;
        cout<<"Branch"<<setw(20)<<":";
        cin>>branch;
        cout<<"Semester"<<setw(18)<<":";
        cin>>semester;
        cout<<"Mobile number"<<setw(13)<<":";
        cin>>mobile_number;



        break;
    case 2:
        cout<<"Display Student Record";
        cout<<endl;
        cout<<"Enrollment Number"<<setw(9)<<":"<<enrollment_number<<endl;
        cout<<"Student Name"<<setw(14)<<":"<<name<<endl;
        cout<<"Branch"<<setw(20)<<":"<<branch<<endl;
        cout<<"Semester"<<setw(18)<<":"<<semester<<endl;
        cout<<"Mobile number"<<setw(13)<<":"<<mobile_number<<endl;
        cout<<endl;
        break;
    case 3:
        cout<<"Enter Student Marks";
        cout<<endl;
        cout<<"Total marks:";
        cin>>total_marks;
        cout<<"Average marks:";
        cin>>average_marks;
        cout<<"Percentage:";
        cin>>percentage;

        break;
    case 4:
        cout<<"Display Academic Result";
        cout<<endl;
        cout<<"****************************************************"<<endl;
        cout<<"Academic result"<<endl;
        cout<<"****************************************************"<<endl;
    if(percentage<=40)
    {
        cout<<"Result        :fail";
        cout<<endl;
        cout<<"better luck next time";
    }
    else
    {
        cout<<"Result      :pass";
        cout<<endl;

        break;
    default :
        cout<<"Exit";
        cout<<endl;
        goto M;
    }
    goto M;
 }
}


