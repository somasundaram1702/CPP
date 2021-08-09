#include <iostream>
#include <string>
using namespace std;


class school{
       public:
       string name;
       string inp_name;
       school(string inp)
       :inp_name(inp)
       {
       }

       void setname(){
	     cout << "The name is set as: ";
	     name = inp_name;
	     cout << name << endl;
       }

    private: 
       //string name;
       //string inp_name;

};


class college: public school{
    public:
      string name1;
      college(string inp1, string inp2)
      :school(inp2)
      {
      name1 = inp1;
      }
    void get_name(){
    cout << name1 << endl;
    } 

};

int main() {

//school obj("som");
//obj.setname();
//cout << obj.name << endl;
college obj2("som","shan");
obj2.get_name();
//cout << obj2.inp_name << endl;
obj2.setname();
//obj2.print_name();


}
