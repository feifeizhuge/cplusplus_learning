#include <iostream>
/* 
 * namespace can help us better to distinguish the name of varibles and functions,
 * which are in the different library but have same name.
 *
*/
namespace myns1 {	
	int pow(int n) {
		return n*n;
	}
}

namespace myns2{
	int pow(int n){
		return n*n*n;
	}
}

int main( int argc, char* argv[] ) {
	std::cout << myns1::pow(5) << std::endl;
	using namespace std;
	cout << myns2::pow(5) << endl;

	return 0;
}

/* 
 * run out:
 * 25
 * 125
*/
