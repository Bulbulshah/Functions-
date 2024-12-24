#include <iostream>
using namespace std;

//// Function to calculate the factorial
//int factorial(int n) {
//    int fact = 1;
//    for (int i = 1; i <= n; i++) {
//        fact *= i; // Multiply fact by the current number
//    }
//    return fact; // Return the factorial
//}
//
//int main() {
//    int number;
//    
//    // Ask the user to enter a number
//    cout << "Enter a positive integer: ";
//    cin >> number;
//    
//   
//        // Call the user-defined function to calculate factorial
//        int result = factorial(number);
//        
//        // Display the result
//        cout << "The factorial of " << number << " is " << result << "." << endl;
//    
//
int factorial(int n){
	int fact = 1;
	for(int i=1; i<=n; i++){
		fact = fact*i;
	}
	return fact;
}
int main(){
	int number;
	cout<<"Enter any number "<<endl;
	cin>>number;
	
	int result =  factorial(number);
	
	cout<<result;
	

    return 0;
}
