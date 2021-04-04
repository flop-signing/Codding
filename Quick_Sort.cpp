#include<bits/stdc++.h>
using namespace std;
int swap(a,b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
}

int Partition(l,h,a){
    int pivot=A[l];
    int i=l;
    int j=h;
    while(i<j)
    {
        do
        {
            i++;
        }while(a[i]<=pivot);

        do{
            j--;
        }while(a[j]>pivot);

        if (i<j)
        {
            swap(a[i],a[j]);

        }
        swap(a[l],a[j]);
        return j;
    }
}




int main()
{
    int n;
    cin>>n;
    int a[n];
    for (int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    Partition(0,n,a[]);
}