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
        while(t->link!=NULL)
        {
            t=t->link;
        }
        t->link=temp;

    }
}


int main()
{
    head=NULL;
    insertion(1);
    insertion(5);
    insertion(7);
    insertion(10);
    insertion(8);
    print();
}
