#include<iostream>
#include"cal.h"
using namespace std;
/*/int add(int a,int b){	//function definition
	return a+b;
}
int sub(int a,int b){
	return a-b;
}
int mul(int a,int b){
	return a*b;
}
int div(int a,int b){
	return a/b;
}/*/
int main(){
 int a,b,choice;
 	cout<<"ENTER A AND B VALUES:";
 	cin>>a>>b;
 	cout<<"\nCALCI MENU. ";
 	cout<<"\n1.ADDITION.";
 	cout<<"\n2.SUBTRACTION.";
 	cout<<"\n3.MULTIPLICATION.";
 	cout<<"\n4.DIVISION.";
 	cin>>choice;
 	switch(choice){
 		case 1:
 			cout<<"ADDITION:"<<add(a,b);
 			break;
 			case 2:
 			cout<<"SUBTRACTION:"<<sub(a,b);
 			break;
 			case 3:
 			cout<<"MULTIPLICATION:"<<mul(a,b);
 			break;
 			case 4:
 				if(b!=0)
 			cout<<"DIVISION:"<<div(a,b);
 			else
 			cout<<"CANNOT DIVIDE WITH ZERO";
 			break;
 			default:
 			cout<<"INVALID OPTIONS";
	 }
}
