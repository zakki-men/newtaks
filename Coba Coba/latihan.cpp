#include <iostream>

using namespace std;

int main() {
	int i, nilai_max, nilai_minim;
	cout << "input data nilai min: ";
	cin >> nilai_minim;
	cout << "input data nilai max: ";
	cin >> nilai_max;
	cout << endl;
	for (i = nilai_minim; i <= nilai_max; i = i + 1) {
		cout << i << "\n";
    }
}
