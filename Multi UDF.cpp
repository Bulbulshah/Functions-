#include<iostream>
using namespace std;

int UdfSum(int , int );

int UdfSum2(int);
	
int main(){
	int num1, num2;
	cout<<" Enter Two Numbers : "<<endl;
	cin>>num1>>num2;
	
	cout<<UdfSum(num1,num2)<<endl; 
	return 0;    
}
int UdfSum(int z, int x ){
	int b,a;
	b=UdfSum2(z);
	a=UdfSum2(x);
	return b+a;
	
}

int UdfSum2(int y){
	return (y*y);
}
