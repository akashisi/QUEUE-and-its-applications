#include<iostream>
#include<stdlib.h>
#define N 5
using namespace std;

int q[N];
int fr=-1;
int rear=-1;

void insertion(int x)
{
    int i=0;
    if(fr==-1 && rear==-1)
        {
            rear=fr=0;
            q[rear]=x;
        }
    else if((rear+1)%N==fr)
        cout<<endl<<"QUEUE IS FULL";
    else
    {
        rear=(rear+1)%N;
        q[rear]=x;
    }
}

void deletion()
{
    int x;
    if(fr==-1 && rear==-1)
        cout<<endl<<"QUEUE IS EMPTY";
    else if(rear==fr)
    {
        x=q[rear];
        cout<<endl<<"DELETED ELEMENT IS ::"<<x;
        rear=fr=-1;
    }
    else
    {
       x=q[fr];
       fr=(fr+1)%N;
       cout<<endl<<"DELETED ELEMENT IS ::"<<x;
    }
}
void display()
{
    int i=fr;
    if(fr==-1 && rear==-1)
        cout<<endl<<"QUEUE IS EMPTY";
    else
    {
      cout<<endl<<"CONTENT OF QUEUE "<<endl;
      while(i!=rear)
      {
            cout<<q[i]<<"  ";
            i=(i+1)%N;
      }
    }
}

int main()
{
    int ch,x;
    while(1)
    {
        cout<<"\n1. INSRTION IN QUEUE \n2. DELETION FROM QUEUE\n3. DISPLAY CONETENT OF QUEUE\n4. EXIT\n";
        cout<<"Enter your choice ::";
        cin>>ch;
        switch(ch)
        {
            case 1:cout<<"\nEnter the number to insert in queue::";
                   cin>>x;
                   insertion(x);
                   break;
            case 2:deletion();
                   break;
            case 3:display();
                   break;
            case 4:exit(1);
            default:exit(1);
        }
    }
    return(0);
}

