#include<bits/stdc++.h>
using namespace std;
void change(int *px)
{
    //cout<<px<<" "<<*px;
    *px=20;
    printf("%d\n",*px);
}
int main()
{
    int x;
    x=10;
    change(&x);
    cout<<x;
}
