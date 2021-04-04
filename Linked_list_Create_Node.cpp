#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    struct Node* link;
};

struct Node* head;

int main()
{
    head = NULL;
    head = (struct Node*)malloc(sizeof(struct Node));
    head->data = 4;
    head->link =(struct Node*) malloc(sizeof(struct Node));
    head->link->data = 10;
    head->link->link = NULL;


    cout<<head->data<<endl;
    cout<<head->link->data<<endl;

    cout<<"Here we can see just the memory location of these Nodes: \n";
    cout<<head<<endl<<head->link<<head->link->link;

}
