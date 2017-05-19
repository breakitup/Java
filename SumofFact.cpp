/*
 * SumofFact.cpp
 *
 *  Created on: 24-Apr-2017
 *      Author: asingha6
 */


#include<stdio.h>
#include<iostream>
using namespace std;

int fact(int n){
	if(n==1)
		return 1;
	else
		return n*fact(n-1);
}

long long sumoffact(int n,int i){
	if(n==i)
		return n;
	else
		return (sumoffact(n,i+1)+1)*i;
}

void fun(int *a){
(*a)++;
}


  class base{
	 public:
	  virtual void fun(){
		cout<<"base class\n";
	}
};

class Derived:public base{
public:
	   void fun(){
		  cout<<"Derived class\n";
	  }
	   Derived fun1();
  };

Derived Derived::fun1(){
	Derived obj;
return obj;
}

Derived fun2(){
	Derived obj;
return obj;
}

int main(){
	int n;
	cin>>n;
	cout<<sumoffact(n,1)<<endl;
	fun(&n);
	cout<<n<<endl;
	base *b=new Derived();
	b->fun();
	int *n1=new int[10];
	n1[0]=8;
	return 0;
	 int c=5;
	 int const* d =&c;
	 const int *a=&c;
c=6;
	 //d=&f;
	//a=8;
	//a=9;
Derived obj;
Derived (*fun_ptr)();
fun_ptr=&(fun2);
(*fun_ptr)();
}

