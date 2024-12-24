#include<iostream>
using namespace std;
int User_num(int number1, int number2){
	int result = number1 + number2;
	return result;
		
}
int main(){
	
	int number1, number2;
	cout<<" Enter Num1 "<<endl;
	cin>>number1;
	
	cout<<" Enter Num2 "<<endl;
	cin>>number2;
	
	int	result = User_num(number1 , number2);
	cout<<" Your total sum is : "<<result;

	
}


