#include<iostream>
using namespace std;

//Global Variable
int sum,ans;
int function(int, int);

int main(){
	
	int Sum; //local variable

	cout<<"Enter First number "<<endl;
	cin>>Sum;
	cout<<" Enter Second Number "<<endl;
	cin>>sum; //access global variable
	ans=Sum+sum;
	cout<<" Total Sum is : "<<ans;
	cout<<function(Sum,  sum)<<endl;
	
	return 0;
}
int function(int num1,int num2){
	int fac,fac1;
	fac = num1*num2;
	fac1 = num2*num2;
	return fac+fac1;
}