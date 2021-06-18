#include <iostream>
using namespace std;

int palindrome(int x)

{
        int n =0;
	int y;
	do{
        y = x%10;		
        n = n*10 + y;		
	x = x/10;
	
	}while(x!=0);
return n;
}


int main(){
   int x;
   int out;
   cin >> x;
   out = palindrome(x);
   
   if(out == x){
	  cout << "The number is palindrome: "<< out << endl;
   }
   else{
	   cout << "The number is not palindrome: "<< out << endl;
   }
}

