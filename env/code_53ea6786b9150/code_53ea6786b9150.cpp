#include <iostream>
#include <sstream>
using namespace std;

int main() {
	// your code goes here
	
	int i = 4;
	
	ostringstream os;
	os.width(2);
	os << i;
	cout << os.str() << endl;
	return 0;
}