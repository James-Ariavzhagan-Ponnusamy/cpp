#include <iostream>
using namespace std;

static void compute(int sdata, int xdata) {
	int a = 0, b = 0;
	int adata = (sdata - xdata) / 2;
	for (int i = 0; i < 8 * sizeof(int); i++) {
		unsigned int xi = xdata & (1 << i);
		unsigned int ai = adata & (1 << i);
		if (xi && ai) {
			cout << "Invalid combination " << endl;
			return;
		}

		if (xi && !ai) {
			a = a | (1 << i);
		}
		if (!xi && ai) {
			a = a | (1 << i);
			b = b | (1 << i);
		}
	}
	cout << "A " << a << endl; // 15
	cout << "B " << b << endl; // 2

}

int main()
{
	unsigned long int S = 17, X = 13;
	compute(S, X);
	return 0;

}