#include<iostream>
using namespace std;
int main()
{
    cout<<"*********************************************************"<<endl;
    cout<<"               Memory address explorer"<<endl;
    cout<<"*********************************************************"<<endl;

    int x=20;
    char a='A';
    float f=1.2;
    int *p;
    cout<<"Integer value: "<<x<<endl;
    cout<<"Memory Address"<<":"<<&x;
    cout<<"\n --------------------------------------------------------"<<endl;
    cout<<"Character value   :"<<a<<endl;

    cout<<"Memory Address    :";
    cout<<&a;
    cout<<"\n --------------------------------------------------------"<<endl;

    cout<<"\n --------------------------------------------------------"<<endl;
    cout<<"Floating value   :"<<f<<endl;

    cout<<"Memory Address    :";
    cout<<&f;
    cout<<"\n --------------------------------------------------------"<<endl;
    // Indirect refrencing

    cout<<"Stored value :"<<x<<endl;
    p=&x;
    *p=30;

    cout<<"Modified value :"<<x<<endl;
    cout<<"\n --------------------------------------------------------"<<endl;
    // sequential data collection
    int j[5]= {10,20,30,40,50};
    cout<<"Array using index:"<<endl;
    for(int i=0; i<5; i++)
    {
        cout<<j[i]<<" ";
    }
    cout<<endl;
    cout<<"Array using address based access"<<endl;
    for(int i=0; i<5; i++)
    {
        cout<<*(j+i)<<" ";
    }
    cout<<"\n --------------------------------------------------------"<<endl;
    cout<<"Observation"<<endl;
    cout<<endl;
    cout<<"Both Approaches access the same memory locations."<<endl;

    return 0;

}



