#include<iostream>
#include<set>

using namespace std;
int a[101];


int main(){
	int n,k;

	set <int> s;
	cin>>n>>k;
	for(int i=1;i<=k;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++)
		s.insert(i);
	int leader=1;
	for(int i=1;i<=k;i++){
		int size=n-i+1;
		int removeindex=(a[i])%(size);
		set<int>::iterator it;
		int j;
		for(it=s.begin(),j=1;j<removeindex;++it,j++){
		}
		int cv;
		if(it==s.end()){
			leader=*(s.begin());
			cv=*it;
			s.erase(cv);
		}
		else{
			 cv=*it;
			 it++;
			leader=*it;
			 s.erase(cv);
		}
		cout<<cv<<" ";
	}
	return 0;
}
