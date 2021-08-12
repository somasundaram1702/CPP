#include <iostream>
using namespace std;

template <typename T, typename  U>
U sum(T a, U b){

return(a+b);
}




int main(){

 int x = 7;
 double y = 7.12;
 cout << sum(x,y) << endl;

}
