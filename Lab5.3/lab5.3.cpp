#include <iostream>
#include <cmath>

using namespace std;

double k(const double x);

int main()
{
	double zp, zk, r;
	int n;
	cout << "zp = "; cin >> zp;
	cout << "zk = "; cin >> zk;
	cout << "n = "; cin >> n;
	double dz = (zk - zp) / n;
	double z = zp;
	while (z <= zk) {
		r = k(pow(z, 2) + 1) - k(pow(z, 2) - 1) + 2 * k(z);
		cout << z << " " << r << endl;
		z += dz;
	}
	return 0;
}
double k(const double x) {
	if (abs(x) >= 1)
		return (exp(x) + sin(x))/((pow(cos(x), 2) + 1));
	else {
		double S = 0;
		int i = 0;
		double a = 1;
		S = a;
		do {
			i++;
			double R = x/i;
			a *= R;
			S += a;
		} while (i < 5);
		double S1 = (1 / exp(x) * S);
		return S1;
	}
}