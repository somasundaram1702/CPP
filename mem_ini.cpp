#include <iostream>
using namespace std;

class birthday{
        public:
	birthday(int dy, int mn, int yr)
	:d(dy),m(mn),y(yr)
	{
	}

	void _print_date(){
          cout << d << "/" << m << "/" << y << endl;
	}

	private:
	int d;
	int m;
	int y;


};


class myclass{

	public:
	myclass(int a, int b, birthday bd)
	:x(a),y(b),xy(bd)	
	{
	xy._print_date();
	}
        int _add(){
		return(x+y);
	}
	private:
	const int x;
	const int y;
	birthday xy;
};

int main(){
birthday _obj(17,02,1990);
myclass obj(5,4,_obj);
cout << &_obj << endl;
// _obj._print_date();	
//int ty = obj._add();
//cout << ty << '\n';
return 0;
}
