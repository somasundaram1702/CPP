#include<iostream>
using namespace std;


int addtwo(int a, int b){
	int sum;
	sum = a + b;
	return sum;
}


void printsome(int x,int y){

	cout << " EXecuted function" << endl;
	cout << "inputted value :" << x <<","<<y << endl;

}

int y = 5;

int  main(){

	int x = 89;
	int y = 56;
	printsome(89,56);
	int tot = addtwo(89,56);
	cout << "Sum of two numbers:" << tot << endl;
}



