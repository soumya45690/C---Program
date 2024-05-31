#include <iostream>
#include <windows.h>
using namespace std;
void print_tasks(string tasks[],int count)
{
    cout<<"Tasks to do:"<<endl;
    cout<<"-----------------------------------------";
    for(int i=0;i<count;i++)
    {
        cout<<"Task "<<i<<" : "<<tasks[i]<<endl;
    }
        cout<<"-----------------------------------------";

}
int main()
{
    system("color b");
    string tasks[10]={""};
    int count = 0;
    int option = -1;
    while(option !=0)
    {
        cout<<"--TO DO LIST--"<<endl;
        cout<<"1- TO ADD NEW TASK"<<endl;
        cout<<"2- TO VIEW TASKS"<<endl;
        cout<<"3- TO DELETE THE TASK"<<endl;
        cout<<"0- TERMINATE THE PROGRAM"<<endl;
        cin>>option;
        switch(option)
        {
            case 1:
            {
                if(count>9)
                {
                    cout<<"'''TASK LIST IS FULL'''";
                }
                else
                {
                    cout<<"Enter a new task: ";
                    cin.ignore();
                    getline(cin,tasks[count]);
                    count++;
                }
                break;
            }
            case 2:
            system("cls");
            print_tasks(tasks,count);
            break;
            case 3:
            {
                system("cls");
                print_tasks(tasks,count);
                int del_task=0;
                cout<<"Enter the task to delete";
                cin>>del_task;
                if(del_task<0 || del_task>9)
                {
                    cout<<"You entered invalid task no."<<endl;
                    break;
                }
                for(int i=del_task;i<count;i++)
                {
                    tasks[i]=tasks[i+1];
                }
                count=count-1;
                break;
            }
                case 0:
cout<<"Terminating the program -- - - - -- - - - - - - ----";
break;
default:
cout<<"You entered invalid value";
            }
        }
return 0;
}