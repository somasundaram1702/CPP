// difference between character and string i.e., "" &''
// signed, unsigned, long, short, float, int, double, long double ?
// use set precision to get the complete float values
// str, char, bool

#include<iostream>
#include<iomanip>
using namespace std;

int main(){

   long double k =53.1684432312342394235435;
   cout << "Defined float  k:" << setprecision(20) <<  k << endl;
   string name = "somasundaram";
   cout << "Given name:" << name << endl;
   bool f = true;
   cout << "Given bool is :" << f << endl;
   char fc = 'S';
   cout << "Given char is :" << fc << endl;
   float _k = 5.32;
// playing with arrays

   int arr[2][2] = {{5,5},{3,3}};
   int o =0 ;
   arr[0][0]=9;
   cout << "first row first element in array: " << arr[0][0]<<endl;
   for (int i=0; i <2;i++){
	   for(int j =0; j<2;j++){
	   cout <<"array values"<< arr[i][j]<<endl;
	   o+=arr[i][j];
}
}

   float *_kk;
   _kk = &_k;
   cout <<"number of iterations"<< o <<endl;
   cout << "address of variable kk:"<< &_k <<endl;
   cout << "Print address variable:"<< _kk << endl;
}
