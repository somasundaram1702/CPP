/* This is my first 
 cpp program 
*/

// Do you remember what is identifier in CPP


#include <iostream>
using namespace std;

int main(){
        float  m;
	//automatically defines n as int as input is an int
	auto n=5;
	float x;
	//auto does not work in the below command as value for o is not defined
	int o;
	// prints asking for input value
	cout << "Please enter an input value in float:"<< endl;
        //taking two input values
	cin >>m>>o;
	//output
	cout << "Hello world\\ "<< "this is my first " << "program" << endl;
        //bracket takes the priority
	x= m*(n+o);
	cout << "value plus 6 and multiply gives : " << x << endl;
	//first assign then increment
	x++;
	//first increment then assign
	++x;
	cout << "Incrementing the value by 2: " << x << endl;
	return 0;
}
