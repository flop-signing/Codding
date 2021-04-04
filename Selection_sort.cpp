#include<bits/stdc++.h>
using namespace std;
void selection_sort(int a[],int n)
{
    int i,j,index_min,temp;
    for(int i=0;i<n-1;i++)
    {
        index_min=i;
        for(int j=i+1;j<n;j++)
        {
            if(a[j]<a[index_min])
            {
                index_min=j;
            }
        }

        if(i!=index_min)
        {
            temp=a[index_min];
            a[index_min]=a[i];
            a[i]=temp;
        }

    }
}

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    selection_sort(a,n);

    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }


}
