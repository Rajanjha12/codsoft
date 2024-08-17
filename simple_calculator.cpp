#include<iostream>
using namespace std;
int main()
{
    cout<<"<--HELLO USER---> "<<endl;
    cout<<"<--SIMPLE CALCULATOR--->"<<endl;
    char oprt;//operant;
    cout<<"ENTER OPERANT:"<<endl;
    cin>>oprt;
    // ENTER A NUMBER BY USER;
    double N1,N2,RESULT;
    cout<<"<--ENTER THE N1 NUMBER-->:"<<endl;
    cin>>N1;
    cout<<"<--ENTER THE N2 NUMBER-->:"<<endl;
    cin>>N2;
    // RESULT AS CHOICE OF USER;
    if(oprt=='+')
    {
        RESULT=N1+N2;
        cout<<"RESULT"<<endl;
        cout<<RESULT<<endl;
        cout<<"<---END CALCULATION--->"<<endl;
        cout<<"<---THANK YOU USER--->"<<endl;
    }
    else{
        if(oprt=='-')
    {
        RESULT=N1-N2;
         cout<<"RESULT"<<endl;
        cout<<RESULT<<endl;
        cout<<"<---END CALCULATION--->"<<endl;
        cout<<"<---THANK YOU USER--->"<<endl;
    }
    else
    {
        if(oprt=='*')
    {
        RESULT=N1*N2;
       cout<<"RESULT"<<endl;
        cout<<RESULT<<endl;
        cout<<"<---END CALCULATION--->"<<endl;
        cout<<"<---THANK YOU USER--->"<<endl;
    }
    else
    {
        if(oprt=='/')
    {
        RESULT=N1/N2;
          cout<<"RESULT"<<endl;
        cout<<RESULT<<endl;
        cout<<"<---END CALCULATION--->"<<endl;
        cout<<"<---THANK YOU USER--->"<<endl;
    }
    else
    cout<<"<---Invalid operant--->"<<endl;
    cout<<"<---THANK TOU USER--->";
    }
    }
    return 0;
    }

}