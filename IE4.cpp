#include <iostream>

struct Vector{
	int x, y;
};


int main(){
	int xa, ya, xb, yb, xc, yc;
	std::cin >> xa >> ya 
		>> xb >> yb 
		>> xc >> yc;
	
	if ((xb-xa)/(xc-xa) == (yb-ya)/(yc-ya)){
		std::cout << "YES";
	} else {
		std::cout << "NO";
	}
	
	return 0;
}