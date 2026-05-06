//simple_ptr.cpp

#include <iostream>

using namespace std;

int main(void) {
	int x = 5;
	int y = 10;

	int* p = &x;
	int* q = &y;

	cout << "x =" << x << " , y=" << y << endl;

	*p = 6;
	cout << "x =" << x << " , y=" << y << endl;

	return 0;

}
