#include<iostream>
using namespace std;
int partition(int a[],int p,int r)
{
    int x=a[r];
    int i=p-1;
    for(int j=p;j<r;j++)
    {
        if(a[j]<=x)
        {
            i++;
            swap(a[i],a[j]);
        }
    }
     swap(a[i+1],a[r]);
    return i+1;
}
void quicksort(int a[],int p,int r)
{
   if(p<r)
   {
     int  q=partition(a,p,r);
      quicksort(a,p,q-1);
      quicksort(a,q+1,r);
   } 
}




int main()
{
    int n ;
    cout<<"enter the size of array"<<endl;
    cin>>n;
    int a[n];
    cout<<"enter the elements in array"<<endl;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
   // cout << "Unsorted array  \n";
    // display(a, n);
    
    quicksort(a,1,n);
 
    cout << "Sorted array  \n";
    for(int i=1;i<=n;i++)
    {
        cout<<a[i]<<" ";
    }
}