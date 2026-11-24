#include<iostream>
using namespace std;

struct contact_info
{
    long int mob;
    string email;
};
struct stu_data
{
    string enr,stdname,branch,grade;
    int sem;
    float per;
    contact_info con;
};

int main()
{
    int n,i;
    cout<<"*************************************************"<<endl;
    cout<<"        STUDENT RECORD MANAGEMENT SYSTEM "<<endl;
    cout<<"*************************************************"<<endl;
    cout<<"Enter the number of students: ";
    cin>>n;
    stu_data s[n];
    for(int i=0; i<n; i++)
    {
        cout<<"Enter enrollment number:"<<i+1<<":";
        cin>>s[i].enr;
        cout<<"Enter student name:";
        cin>>s[i].stdname;
        cin.ignore();

        cout<<"Enter branch:";
        cin>>s[i].branch;
        cin.ignore();

        cout<<"Enter the semester:";
        cin>>s[i].sem;
        cin.ignore();

        cout<<"Enter the percentage:";
        cin>>s[i].per;
        cin.ignore();

        cout<<"Enter grade:";
        cin>>s[i].grade;
        cin.ignore();

        cout<<"Enter the mobile number:";
        cin>>s[i].con.mob;
        cin.ignore();

        cout<<"Enter the email:";
        cin>>s[i].con.email;
        cin.ignore();
    }

    cout<<endl;
    for(i=0; i<n; i++)
    {
        cout<<"Enrollment Number   :"<<s[i].enr<<endl;
        cout<<"Student name        :"<<s[i].stdname<<endl;
        cout<<"Branch              :"<<s[i].branch<<endl;
        cout<<"Semester            :"<<s[i].sem<<endl;
        cout<<"Percentage          :"<<s[i].per<<endl;
        cout<<"Grade               :"<<s[i].grade<<endl;
        cout<<"Mobile number       :"<<s[i].con.mob<<endl;
        cout<<"Email               :"<<s[i].con.email<<endl;
        cout<<endl;
    }
    cout<<"*************************************************"<<endl;
        cout<<"          Programm executed succesfully";
            cout<<"*************************************************"<<endl;
    return 0;
}

