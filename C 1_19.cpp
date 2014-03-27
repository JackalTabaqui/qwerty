#include <iostream>
#include <stdio.h>
using namespace std;
//19. Рассчитайте значение числового ряда n/((n+1)!)
void main()
{
	int n, N;
	double x=1, sum = 0;
	cout << "insert N" << endl;
	cin >> N;
	for (n = 0; n <= N; n++)
	{
		x *= n+1;
		sum += n / x;
	}
	cout << "sum = " << sum;
	getchar();
	getchar();
}
