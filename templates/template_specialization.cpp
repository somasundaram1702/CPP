#include <iostream>
using namespace std;

template<typename U>
class check{
	public:
		check(U a){
		cout << "The input is number :" << a << endl;
		}

};

template<>
class check<char>{
    public:
	 check(char a){
	 cout << "The input is character: " << a << endl;
	 }
};

int main(){

check<int> obj(5);
check<char>  obj2('s');


}
