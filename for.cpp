// for loop examples and switch cases

#include<iostream>
using namespace std;

int main(){

int x;
for (int i=0; i<9; i+=2){
         cout << "The value is " << i << endl;
	 x=i;
}

switch (x){


case 6:
	cout << " The number is 6" << endl;
	break;

default:
	cout << " Default print \n";
	break;

}

if (x>1 && x>3){
	cout << "X is greather than 1 and 3" << endl;

}
}
