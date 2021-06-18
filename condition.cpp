/* CPP program for loops and conditional loops
   along with others */

#include<iostream>
using namespace std;

int main(){
        float x = 2.5;
	cout<<"hello testing\n";
        
        if (x==2.2){
		cout << "checked x value and the value is 2.5\n";
	}
	else if (x>2){
	        cout << " X value is greather than 2\n";
	}

	while (x<3){
		++x;
		cout << " X value increased " << x << endl;
	}
	return 0;
}
