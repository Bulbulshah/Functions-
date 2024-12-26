#include<iostream>
using namespace std;

int factorial(int);

int main(){
	int j;
	cout<<" Enter any number to find their factorial :"<<endl;
	cin>>j;
	
	cout<<" Factorial of: "<< j <<" is "<<factorial(j)<<endl;
	return 0;
}
int factorial(int f){
	
	int fact=1;
	for(int i=1; i<=f; i++){
		fact=fact*i;
	}
	return fact;
}