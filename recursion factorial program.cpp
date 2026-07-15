#include<iostream>
using namespace std;
int fact(int n){
		if (n==0||n==1){
			return 1;
	}
		else{
			return n*fact(n-1);
	}
}
int main(){
	int n;
	cout<<"ENTER N VALUE:";
	cin>>n;
	cout<<"FACTORIAL OF "<<n<<" IS:"<<fact(n);
	return 0;
}
