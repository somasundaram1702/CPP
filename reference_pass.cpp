#include <iostream>
using namespace std;

void refer(int *x){
	*x = 100;
}

int main(){
    int var = 56;
    refer(&var);
    cout << "Variable var :" << var << endl;
    return 0;
}
