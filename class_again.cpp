#include <iostream>
using namespace std;

class employee{

	public:
	int number = 589;

	int receive_total(){
         return calculate()+numb;
	}

	private:
	int numb= number;

	int calculate(){

	 int total = numb*2;

	 return total;
	}


};


int main(){

	cout << "accessed public variable" << endl;
	employee obj;
	cout << obj.receive_total() << endl;
	//cout << obj.number << endl;

}
