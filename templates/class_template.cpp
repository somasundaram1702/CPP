#include <iostream>
using namespace std;

template <typename T, typename U>
class multi{

	public:
	       T x;
	       U y;
	multi(T a , U b)
	:x(a),y(b){}
        ~multi(){}

	T multi_out(){

               return(x*y);
	}
        };



int main(){

multi<double,double> obj(5.3,4.34);
cout << "Multiplied values :" << obj.multi_out() << endl;

}

