#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n;
	cin >> n;
	float s = 0;
	int i = 2;
	while (i <= n)
	{
		s = pow(i + s, (float)1 / i);
		i = i + 1;
	}
	cout << s;
	return 0;
}