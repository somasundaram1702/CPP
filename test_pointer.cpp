//This keyword usage

#include <iostream>
using namespace std;

class this_class{

	public:
        this_class(int a, int b)
	:x(a),y(b)
	{}

	void _print(){
	cout << x << endl;
	}
	private:

	int x;
	int y;

};

int main(){

this_class obj(4,5);
obj._print();
cout << this->x << endl;
}
