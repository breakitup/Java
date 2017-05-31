#include <iostream>
using namespace std;

int* mergeSortedArray(int a[],int b[],int n,int m){
    static int c[2000001];
    int i=0,j=0,k=0;
    while(i<n || j<m){
        if(i<n && j <m){
            if(a[i]<b[j]){
                c[k++]=a[i++];
            }
            else{
                 c[k++]=b[j++];
            }
        }
        else if(i<n){
            c[k++]=a[i++];
        }
        else{
            c[k++]=b[j++];
        }
    }
    return c;
}

int main()
{
    int n,m;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    cin>>m;
    int b[m];
    for(int i=0;i<m;i++)
    cin>>b[i];
    int *c;
    c=mergeSortedArray(a,b,n,m);
    for(int i=0;i<n+m;i++)
    cout<<c[i]<<" ";
    cout<<endl;
    return 0;
}
