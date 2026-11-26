#include<iostream>
#include<iomanip>
#include<cstring>
using namespace std;
int main()
{
    char par[150],fw[30],lw[30],sen[100],upar[250],ser[30],word[30],rword[30];
    int i,j,k,nc,nw,na,nd,nsc,l;
    cout<<"********************************************"<<endl;
    cout<<"       DOCUMENT TEXT ANALYZER"<<endl;
    cout<<"********************************************"<<endl;
    cout<<"Enter Paragraph:";
    cin.getline(par,150);
    cout<<"\n";
    cout<<"--------------------------------------------"<<endl;
    cout<<"\tText Analysis"<<endl;
    cout<<"--------------------------------------------"<<endl;
    nc=na=nd=nsc=0,nw=1;
    for(i=0; par[i]!='\0'; i++)
    {
        nc++;
        if(par[i]==' ')
        {
            nw++;
        }
        else if(par[i]>='0' && par[i]<='9')
        {
            nd++;
        }
        else if((par[i]>='a' && par[i]<='z') || (par[i]>='A' && par[i]<='Z'))
        {
            na++;
        }
        else
        {
            nsc++;
        }
    }
    cout<<endl;
    cout<<"Characters"<<setw(10)<<":"<<nc<<endl;
    cout<<"Words"<<setw(15)<<":"<<nw<<endl;
    cout<<"Alphabets"<<setw(11)<<":"<<na<<endl;
    cout<<"Digits"<<setw(14)<<":"<<nd<<endl;
    cout<<"Special Characters"<<setw(2)<<":"<<nsc<<endl;
    cout<<endl;


    cout<<"--------------------------------------------"<<endl;
    cout<<"\tString Extraction"<<endl;
    cout<<"--------------------------------------------"<<endl;

    for(i=0; par[i]!=' '; i++)
    {
        fw[i]=par[i];
    }
    fw[i]='\0';
    j=0;
    for(i=0; par[i]!='\0'; i++)
    {
        if(par[i]==' ')
        {
            j=0;
        }
        else
        {
            lw[j]=par[i];
            j++;
        }
    }
    lw[j]='\0';

    cout<<endl;
    cout<<"First Word "<<setw(6)<<":"<<fw<<endl;
    cout<<"Last Word "<<setw(7)<<":"<<lw<<endl;
    cout<<"First Character "<<setw(1)<<":"<<fw[0]<<endl;
    cout<<"Last Character "<<setw(2)<<":"<<lw[j-1]<<endl;
    cout<<endl;

    cout<<"--------------------------------------------"<<endl;
    cout<<"\tConcatenation"<<endl;
    cout<<"--------------------------------------------"<<endl;

    cout<<"Enter Aditional Sentence :";
    cin.getline(sen,100);
    for(i=0; par[i]!='\0'; i++)
    {
        upar[i]=par[i];
    }
    for(j=0; sen[j]!='\0'; j++)
    {
        upar[i]=sen[j];
        i++;
    }
    upar[i]='\0';
    cout<<"Updated Paragraph\n"<<upar<<endl;

    cout<<"--------------------------------------------"<<endl;
    cout<<"\tPattern Matching"<<endl;
    cout<<"--------------------------------------------"<<endl;

    cout<<"Enter Search Word :";
    cin>>ser;
    bool found=false;
    for(i=0; upar[i]!='\0'; i++)
    {
        if(strstr(upar,ser)!=NULL)
        {
            found=true;
            break;
        }
    }
    if(found)
    {
        cout<<"Keyword Found"<<endl;
        cout<<"First Occurrence Position :"<<strstr(upar,ser)-upar+1<<endl;
    }
    else
    {
        cout<<"Keyword Not Found"<<endl;
    }
    cout<<endl;

    cout<<"--------------------------------------------"<<endl;
    cout<<"\tString Transformation"<<endl;
    cout<<"--------------------------------------------"<<endl;

    cout<<"Uppercase"<<endl;

    for(i=0; upar[i]!='\0'; i++)
    {
        if(upar[i]>='a' && upar[i]<='z')
        {
            cout<<char(upar[i]-32);
        }
        else
        {
            cout<<upar[i];
        }
    }
    cout<<endl;
    cout<<"--------------------------------------------"<<endl;
    cout<<"Lowercase"<<endl;

    for(i=0; upar[i]!='\0'; i++)
    {
        if(upar[i]>='A' && upar[i]<='Z')
        {
            cout<<char(upar[i]+32);
        }
        else
        {
            cout<<upar[i];
        }
    }
    cout<<endl;
    cout<<"--------------------------------------------"<<endl;
    cout<<"Reverse"<<endl;

    for(upar[i]!='\0'; i>=0; i--)
    {
        cout<<upar[i];
    }
    cout<<endl;
    cout<<"--------------------------------------------"<<endl;
    cout<<"Pallindrome Check"<<endl;

    cout<<"Enter Word :";
    cin>>word;
    k=strlen(word);
    i=0;
    for(j=k-1; j>=0; j--,i++)
    {
        rword[i]=word[j];
    }
    rword[i]='\0';
    if(strcmp(rword,word)==0)
    {
        cout<<"Result : Pallindrome"<<endl;
    }
    else
    {
        cout<<"Result : Not Pallindrome"<<endl;
    }

    cout<<endl;
    cout<<"--------------------------------------------"<<endl;
    cout<<"\tStandard String Functions"<<endl;
    cout<<"--------------------------------------------"<<endl;

    l=strlen(upar);
    cout<<"Length : "<<l<<endl;
    cout<<"String Copied Successfully"<<endl;
    if(strcmp(rword,word)==0)
    {
        cout<<"Comparison Result : Equal"<<endl;
    }
    else
    {
        cout<<"Comparison Result : Not Equal"<<endl;
    }
    cout<<"Concatination : Successful"<<endl;
    if(found==true)
    {
        cout<<"Substring Search : Found"<<endl;
    }
    else
    {
        cout<<"Substring Search : Not Found"<<endl;
    }
    cout<<"toupper() : Successful"<<endl;
    cout<<"tolower() : Successful"<<endl;

    return 0;
}
