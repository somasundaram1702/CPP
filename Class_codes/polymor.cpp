#include <iostream>
using namespace std;


class batsman{
	public:
         int runs;
	 void set_runs(int r){
 	     runs = r;
	}
};

class kohli:public batsman
{
	public:
	 void get_runs(){
	     cout << "Kohli scored :" << runs << endl;
	 }

};

class Dhoni:public batsman
{
	public:
	 void get_runs(){
	     cout << "Dhoni scored :" << runs << endl;
	 }

};

int main(){

kohli k;
Dhoni D;
	
batsman  *obj1 = &k;
batsman  *obj2 = &D;

obj1 -> set_runs(10);
obj2 -> set_runs(100);

k.get_runs();
D.get_runs();

}
