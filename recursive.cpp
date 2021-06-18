#include <iostream>
using namespace std;

int factl(int x){

	if(x == 1)
	   return 1;
	else
	   return x*factl(x-1);

}

int main(){
  int out = factl(5);
  cout << "Factorial: " << out  << endl;

}  
