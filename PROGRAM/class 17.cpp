#include <iostream>
using namespace std;

class Distance {
	int feet;
	float inch;

public:
	Distance() {
		feet = 0;
		inch = 0;
	}

	Distance(int f, float i) {
		feet = f;
		inch = i;
	}

	Distance operator+(Distance d3) {
		Distance temp;
		temp.feet = feet + d3.feet;
		temp.inch = inch + d3.inch;
		return temp;
	}

	void display() {
		cout << "feet = " << feet << endl;
		cout << "inches = " << inch << endl;
	}
};

int main() {
	Distance d1;
	Distance d2(9, 6.7);
	Distance d3(7, 5.9);
	d1 = d2 + d3;
	d1.display();
	return 0;
}
