#include<iostream>
#include<stdlib.h>
#define N 5
using namespace std;
int que[N];
int fr=-1;
int rear=-1;

void enqueue(int x)
{
    if(rear==(N-1))
    {
        cout<<endl<<"QUEUE  IS  FULL \n";
    }

    else if(fr==-1 && rear==-1)
    {
        fr=rear=0;
        que[rear]=x;
    }
    else
    {
        rear++;
        que[rear]=x;
    }
}

void dqueue()
{
    if(fr==-1 && rear==-1)
    {
        cout<<endl<<"QUEUE  IS  EMPTY \n";
    }
    else if(fr==rear)
    {
        cout<<endl<<"DELETED  ELEMENT  IS :: "<<que[fr];
        fr=rear=-1;
    }
    else
    {
        cout<<endl<<"DELETED  ELEMENT  IS :: "<<que[fr];
        fr++;
    }
}

void peek()
{
    if(fr==-1 && rear==-1)
        cout<<endl<<"QUEUE  IS  EMPTY \n";
    else
    {
        cout<<endl<<"TOP MOST  ELEMENT  IS :: "<<que[fr];
    }
}

void display()
{
    int i=0;
    if(fr==-1 && rear==-1)
        cout<<endl<<"QUEUE  IS  EMPTY \n";
    else
    {
        cout<<endl<<"CONTENT  OF  LINKED  LIST \n";
        for(i=fr;i<(rear+1);i++)
            cout<<que[i]<<" ";
    }
}

int main()
{
    int x,ch;
    while(1)
    {
        cout<<endl<<"1. INSERTION IN QUEUE\n2. DELETITION FROM QUEUE\n";
        cout<<"3. TOP MOST ELEMENT\n4. DISPLAY\n5. EXIT\n";
        cout<<"Enter your choice :: ";
        cin>>ch;
        switch(ch)
        {
            case 1: cout<<endl<<"Enter the value to insert in queue :: ";
                    cin>>x;
                    enqueue(x);
                    break;
            case 2: dqueue();
                    break;
            case 3: peek();
                    break;
            case 4: display();
                    break;
            case 5: exit(1);
            default:exit(1);
        }
    }
    return(0);
}
