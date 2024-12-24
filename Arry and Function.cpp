#include<iostream>
using namespace std;

float calculateAverage(int marks[], int size);

int main(){
	int size;
	cout<<" Enter size : "<<endl;
	cin>>size;
	
	int studentmarks[size];
	
	for( int i = 0; i< size ; i++){
		cout<<" Enter marks "<<i+1<< " : "<<endl;
		cin>>studentmarks[i];
	}
	
	float avg = calculateAverage(studentmarks, size);
	cout<<" Your Average is : "<<avg;
	return 0;
}

float calculateAverage(int marks[], int size){
	
	int sum = 0;
	for(int i = 0; i< size ; i++){
		sum += marks[i]; 
		 
	}
	return (float)sum /size;
}