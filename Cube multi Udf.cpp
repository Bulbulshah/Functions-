#include<iostream>
using namespace std;

int UdfCube(int, int, int);
int UdfCube2(int);

int main(){
	int num1, num2, num3;
	cout<<" Enter three Numbers : "<<endl;
	cin>> num1 >> num2 >> num3;
	
	cout<<UdfCube(num1, num2, num3)<<endl;
	
	
	return 0;
}

int UdfCube(int a, int b, int c){
	int ab, bc, cd;
	ab = UdfCube2(a);
	bc = UdfCube2(b);
	cd = UdfCube2(c);
	return ab+bc+cd;
	
}

int UdfCube2(int d){
	return d*d*d;
}