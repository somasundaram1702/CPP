#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

//function overloading
void addtwo(int x, int y){
	cout << x+y << endl;
}

void addtwo(float x, float y){

	cout <<  x+y << endl;
}


int main(){

	srand(time(0));
	//Prints random number less than 9
	int x = rand();
	cout << 1 + (x % 9) <<endl;
	int a = 5;
	int b = 6;
	float c = 10.5;
	float d = 9.8;
	// for function overload make the variables are declared before hand
	addtwo(a,b);
	addtwo(c,d);
//	cout << "Overload func int" << out_int << endl;
//	cout << "Overload func float" << out_float << endl;

}


