#include <iostream>
using namespace std;


class const_test
{
        public:
	const_test(int x){
	cout << "Constructor activated" << endl;
	setsalary(x);
	
}
	int setsalary(int a){
          salary = a;
	}
        int getsalary(){
	return salary;
	}
        
        private:
	int salary;
	
	};


int main(){
        const_test obj(25);
	cout << "salary passed :" << obj.getsalary() << endl;
	//cout << obj.z << endl;
	cout << "program executed" << endl;
}
