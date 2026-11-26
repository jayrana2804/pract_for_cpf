#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int n,i;
    char en[20][8],grade[20][3],name[20][20],sID[10];
    float per[20];
    int pos;

    cout<<"Enter number of students : ";
    cin>>n;
    cout<<endl;


    cout<<"Enter Student Details"<<endl;
    for(i=0; i<n; i++)
    {

        cout<<"Enter Enrollment Number : ";
        cin>>en[i];

        cin.ignore();
        cout<<"Enter Student Name : ";
        cin.getline(name[i],20);

        cout<<"percentage : ";
        cin>>per[i];

        cout<<"Grade  : ";
        cin>>grade[i];
        cout<<endl;

    }
    cout<<endl;
    cout<<endl;
    cout<<"--------------------------------------------------------"<<endl;
    cout<<"Current student records"<<endl;
    for(i=0; i<n; i++)
    {
        cout<<en[i]<<" "<<name[i]<<" "<<per[i]<<" "<<grade[i]<<endl;
    }
    cout<<"--------------------------------------------------------"<<endl;
    cout<<"Insert new Student"<<endl;
    cout<<endl;
    cout<<"Enter the position: ";
    cin>>pos;
    if(pos<1 || pos>n+1)
    {
        cout<<"Invalid Position"<<endl;
    }
    else
    {
        pos=pos-1;

        for(i=n; i>pos; i--)
        {
            strcpy(en[i],en[i-1]);
            strcpy(name[i],name[i-1]);
            per[i]=per[i-1];

            strcpy(grade[i],grade[i-1]);
        }
        //enter new student details
        cout<<"Enter Enrollment Number:";
        cin>>en[pos];
        cout<<"Student Name:";
        cin.ignore();
        cin.getline(name[pos], 20);

        cout<<"Enter percentage:";
        cin>>per[pos];
        cout<<"enter the grade:";
        cin>>grade[pos];
        n++;
        cout<<"Record insterted successfully"<<endl;
        // Display after insertion
        cout << "\n\nUpdated Student Records\n";

        for(i = 0; i < n; i++)
        {
            cout << en[i] << "  "
                 << name[i] << "  "
                 << per[i] << "  "
                 << grade[i] << endl;
        }


    }
    cout<<"Record Inserted Successfully"<<endl;

    cout<<"-------------------------------------------- "<<endl;
    cout<<endl;
    cout<<"Update Student Records "<<endl;

M:
    cout<<"Enter enrollment number:";
    cin>>sID;
    int found=0;
    for(i=0; i<n; i++)
    {
        if(strcmp(en[i],sID)==0)
        {
            cout<<"Enter new percentage:";
            cin>>per[i];
            cout<<"Enter new grade:";
            cin>>grade[i];
            found=1;
            cout << "\nRecord Updated Successfully.";
            break;
        }
    }
    if(found==0)
    {
        cout<<"Student not found!"<<endl;
    }
    cout<<"-------------------------------------------- "<<endl;
    // Display after updating
    cout << "\n\n Update Student Records\n";

    for(i = 0; i < n; i++)
    {
        cout << en[i] << "  "
             << name[i] << "  "
             << per[i] << "  "
             << grade[i] << endl;
    }
    cout<<"----------------------------------------------"<<endl;
    cout<<endl;
//delete the record of student
    cout<<"Delete student record"<<endl;
    cout<<endl;
    cout<<"Enter the position:";
    cin>>pos;
    if(pos<1 || pos>n)
    {
        cout<<"Invalid position"<<endl;
    }
    else
    {
        pos=pos-1;
        for(i = pos; i < n-1; i++)
        {
            strcpy(en[i], en[i+1]);
            strcpy(name[i], name[i+1]);

            per[i] = per[i+1];

            strcpy(grade[i], grade[i+1]);
        }

        n--;

        cout << "\nRecord Deleted Successfully.";
    }
    cout<<endl;
    cout<<"----------------------------------------------------"<<endl;
    cout<<endl;
    // FINAL STUDENT RECORDS
    cout << "\n\nFinal Student Records\n";

    for(i = 0; i < n; i++)
    {
        cout << en[i] << "  "
             << name[i] << "  "
             << per[i] << "  "
             << grade[i] << endl;
    }


    return 0;

}
