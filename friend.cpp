#include <iostream>
using namespace std;



class friend{
	
	public:
	double probability;
	int percentage;
        friend(double a, int b)
	:probability(a),percentage(b)
	{}
	int prob_calc(){
         output = probability/percentage;
	}

	void get_output(){
            cout << "The output is calculated: " << output << endl;
	}

        private:
	int output;
};



int main()
