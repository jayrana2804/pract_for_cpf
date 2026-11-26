#include<iostream>
using namespace std;
int main()
{
    int matrixA[3][3],matrixB[3][3],matrixC[3][3];
    int i,j,k;
    cout<<"Enter Elements of Firsrt Matrix:";
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            cin>>matrixA[i][j];
        }
    }
    cout<<"Enter Elements of Second Matrix:";
    for(j=0; j<3; j++)
    {
        for(k=0; k<3; k++)
        {
            cin>>matrixB[j][k];
        }
    }
    cout<<endl;
    cout<<"First Matrix"<<endl;
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            cout<<matrixA[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"Second Matrix"<<endl;
    for(j=0; j<3; j++)
    {
        for(k=0; k<3; k++)
        {
            cout<<matrixB[j][k]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    for(i=0; i<3; i++)
    {
        for(k=0; k<3; k++)
        {
            matrixC[i][k]=0;
            for(j=2; j>=0; j--)
            {
                matrixC[i][k]=matrixC[i][k]+(matrixA[i][j]*matrixB[j][k]);
            }
        }
    }
    cout<<"Multiplication of Matrix"<<endl;
    for(i=0; i<3; i++)
    {
        for(k=0; k<3; k++)
        {
            cout<<matrixC[i][k]<<" ";

        }
        cout<<endl;
    }

    return 0;
}
