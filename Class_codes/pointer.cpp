#include <iostream>
using namespace std;


class star{

	public:
	int r;
	int set_star(int a){
         r = a;
	cout << "the set value is :" << r << endl;
	}
};


int main(){
star s;
star* ptr = &s;
ptr->set_star(10);
(*ptr).set_star(40);
}
