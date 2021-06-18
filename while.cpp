// Take 5 numbers as input and sum all the 5 numbers


#include<iostream>
using namespace std;

int main(){

     int l = 5;
     int total = 0;
     int number;
     while (l>0){
	     cout << "Enter a number"<<endl;
	     cin >> number;
	     total = total + number;
             l-=1;
     }

    cout << "Sum of all the five numbers: " << total << endl;
}

