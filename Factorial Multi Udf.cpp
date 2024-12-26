#include<iostream>
using namespace std;

int UdfFac(int);


int main(){
	
	int num1, num2,fact1,fact2,sum;
	cout<<" Enter Two Numbers "<<endl;
	cin>>num1>>num2;
	
	
	fact1= UdfFac(num1);
	fact2= UdfFac(num2);
	
	sum = fact1+fact2;
	cout<<" Sum Is "<<sum<<endl;
	
	
	return 0;
}

int UdfFac(int sd){
	
	int fact1 = 1;
	for( int i=1; i<=sd; i++){
		fact1 = fact1*i;
	}
	return fact1;
	
	
}

