#include <iostream>
using namespace std;
int main() {
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	int a, b, c, d, e, f, g, h, i;
	cin >> a;
	cin >> b;
	cin >> c;
	cin >> d;
	cin >> e;
	cin >> f;
	cin >> g;
	cin >> h;
	cin >> i;
	if (a > b && a > c && a > d && a > e && a > f && a > g && a > h && a > i) {
		cout << a << '\n';
		cout << "1" << '\n';
	}
	else if (b > a && b > c && b > d && b > e && b > f && b > g && b > h && b > i) {
		cout << b << '\n';
		cout << "2" << '\n';
	}
	else if (c > a && c > b && c > d && c > e && c > f && c > g && c > h && c > i) {
		cout << c << '\n';
		cout << "3" << '\n';\
	}
	else if (d > a && d > c && d > b && d > e && d > f && d > g && d > h && d > i) {
		cout << d << '\n';
		cout << "4" << '\n';
	}
	else if (e > a && e > c && e > d && e > b && e > f && e > g && e > h && e > i) {
		cout << e << '\n';
		cout << "5" << '\n';
	}
	else if (f > a && f > c && f > d && f > e && f > b && f > g && f > h && f > i) {
		cout << f << '\n';
		cout << "6" << '\n';
	}
	else if (g > a && g > c && g > d && g > e && g > f && g > b && g > h && g > i) {
		cout << g << '\n';
		cout << "7" << '\n';
	}
	else if (h > a && h > c && h > d && h > e && h > f && h > g && h > h && h > i) {
		cout << h << '\n';
		cout << "8" << '\n';
	}
	else {
		cout << i << '\n';
		cout << "9" << '\n';
	}
	return 0;
}