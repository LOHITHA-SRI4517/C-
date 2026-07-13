#include<iostream>
using namespace std;
int main(){
int a=7;
int b=18,c=45;
	if(a>b&&a>c){
		cout<<a<<" IS BIGGEST";
	}
	else if(b>c&&b>a){
		cout<<b<<" IS BIGGEST";		
	}
	else{
		cout<<c<<" IS BIGGEST";
	}
	return 0;
	}
