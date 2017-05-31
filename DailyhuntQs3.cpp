#include <iostream>
using namespace std;

string* countChar(string s,int &size){
    static string number[10000];
    int l=s.length();
    int j=0;
    for(int i=0;i<l;){
        bool flag=0;
        while(i<l && s[i]>=48 && s[i]<=57){
            number[j]+=s[i];
            flag=1;
            i++;
        }
        if(flag)
        j++;
        i++;
    }
    size=j;
    return number;
}


int main()
{
    string s;
   getline(cin,s);
  int size;
    string *arr=countChar(s,size);
    for(int i=0;i<size;i++)
    cout<<arr[i]<<endl;
    cout<<endl;
    return 0;
}
