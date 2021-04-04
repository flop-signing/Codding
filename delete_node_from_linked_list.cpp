#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    struct Node* link;
};

struct Node* head;
void print()
{
    struct Node* temp;
    temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->link;
    }
    cout<<endl;

}

void deletion(int position)
{
    struct Node* t;
    t=head;
    for (int i=1;i<=position-2;i++)
    {
        t=t->link;
    }
    struct Node* p;
    p=t->link;
    t->link=p->link;
    free(p);


}
void insertion(int value)
{
    struct Node* temp;
    temp=(struct Node*) malloc (sizeof(struct Node));
    temp->data=value;
    temp->link=NULL;
    if (head==NULL)
    {
        head=temp;
    }
    else
    {
        struct Node* t;
        t=head;
        while(t!=NULL)
        {
            t=t->link;
        }
        t->link=temp;

    }
}
void searching(int value)
{
    int flag=0;
    struct Node* temp;
    temp=head;
    while(temp!=NULL)
    {
        if(temp->data==value)
        {
            cout<<"Found: "<<temp->data<<endl;
            flag=1;
            break;
        }
        else{
            temp=temp->link;
        }

    }
    if (flag==0){
    cout<<"Not Found"<<endl;
    }

}


int main()
{
    head=NULL;


    insertion(10);
    insertion(4);
    insertion(3);
    insertion(1);
    insertion(5);
    print();
    deletion(4);
    searching(5);

}
