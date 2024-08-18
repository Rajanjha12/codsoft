#include<iostream>
#include<ctime>
#include<string>
#include<vector>
using namespace std;
int main()
{   time_t now =time(nullptr);
     cout<<ctime(&now);
       cout<<"<------TO DO LIST------->"<<endl;
       cout<<"1.ADD TASK"<<endl;
       cout<<"2.LIST TASK"<<endl;
       cout<<"3.REMOVE THE TASK"<<endl;
       cout<<"4.QUIT THE APPLICATION"<<endl;
    int  n=100,i;
    string Task;
    vector<string>tasks;
        while(n!=0)
     {cout<<"<--which u want to do--> :";
        cin>>i;
       if(i==1)
       {
        cout<<"1.ADD TASK:"<<endl;
        cin>>Task;
        tasks.push_back(Task);
        n--;
       }
     else{
        if(i==2)
        {
            cout<<"2.LIST TASK"<<endl;
            int k;
            for(k=0;k<tasks.size();k++)
        cout<<tasks[k]<<endl;
        n--;
        }
        else
        {
            if(i==3)
            { 
                 int k;
            for(k=0;k<tasks.size();k++)
        cout<<tasks[k]<<endl;
        cout<<" which you want remove the task:";
        int index;
        cin>>index;
        tasks.erase(tasks.begin()+index);
          for(k=0;k<tasks.size();k++)
        cout<<tasks[k]<<endl;
        n--;
         }
         else
        {
            cout<<"---YOU choice quit---"<<endl;
            cout<<"<---- Available task in to-do list---> "<<endl;
            int k;
            for(k=0;k<tasks.size();k++)
        cout<<tasks[k]<<endl;
            cout<<"<---THANK YOU USER--->";
        }

        }

        } 
        }
        return 0;
}