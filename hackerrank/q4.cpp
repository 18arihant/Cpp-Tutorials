#include <iostream>
using namespace std;

// The function is declared with a void return type, so there is no value to return. 
// Modify the values in memory so that a contains their sum and b contains their absoluted difference.

void update(int *a, int *b)
{
	int temp = *a;
	*a = *a + *b;
	*b = temp - *b;

	if (*b < 0)
	{
		*b = -(*b);
	}
}

int main() 
{
	int a, b;
	int *pa = &a, *pb = &b;

	cin >> a >> b;
	update(pa, pb);
	cout << a << "\n" << b;

	return 0;
}