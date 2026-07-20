#include<iostream>
using namespace std;
class name{
	public:
	void display();	//DECLARATION
	void show();
};
class op{
	public:
	void display();
	int add(int a,int b);
};
//FUNCTION DEFINITION
void name::display(){
	cout<<"Lohitha"<<endl;
}
void name::show(){
	cout<<"ADITYA UNIVERSITY"<<endl;
}
void op::display(){
	cout<<"CSE-TT-1"<<endl;
}
int op::add(int a,int b){
	return a+b;
}
int main(){
	name a;
	op b;
	a.show();
	a.display();
	b.display();
	cout<<b.add(10,10)<<endl;
	return 0;
}
