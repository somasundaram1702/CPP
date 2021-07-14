// Class example with encapsulation

#include <iostream>
using namespace std;

class storenam
{
public:
//string x;
void store(string name)
{
string x = name;
}

string getname(){
	return x;

}
private:
string x;
};

int main()
{
storenam obj;
obj.store("Soma");
string cname = obj.getname();
cout << "class executed : " << cname <<  endl;
}







