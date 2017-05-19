#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	int a[200001],n;
	int mindiff=2000000002,count=0;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a,a+n);
	int currdiff;
	for(int i=1;i<n;i++){
		 currdiff=(a[i]-a[i-1]);
		 if(currdiff<mindiff){
			 mindiff=currdiff;
			 count=1;
		 }
		 else if(currdiff==mindiff){
			 count++;
		 }
	}
	cout<<mindiff;
	cout<<" ";
	cout<<count<<endl;
	return 0;
}
