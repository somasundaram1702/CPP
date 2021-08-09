#include <iostream>
using namespace std;

class calcs{
        
	public:
	int xy = 100;
	calcs (int x){
	 int y = x;
	cout << x << endl;
	};	
        
	//int y = x;
        //cout << "printed class values" << int y;
	int multi(int a, int b){
		cout << "accessed public" << xy << endl;
		return a*b;
           }
        int _print(){
		//xx = 23;
		cout << "Constant values " << xx << " " << yy << endl;
                return 0;   
	}
        private:
	const int xx=123;
	const int yy=456;

	};



int func_division(int x, int y){

	int z = x/y;
	return z;

}

int main(){

	cout << "Test initial program" << '\n';
        cout << "Returned divion value " << func_division(10,3) << '\n';
        calcs obj(5);
	cout << "class multiplication " << obj.multi(5,4) << endl;
	obj._print();
}


