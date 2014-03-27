#include <iostream>
#include <stdio.h>
#define M 6
#define N 6
using namespace std;
//Преобразование матрицы: при передаче в выходную матрицу столбцы с четными номерами меняются местами с нечетными: 1234 -> 2143
void output(int A[M][N])
{
	int x, y;
	for (x = 1; x <= M; x++)
	{
		for (y = 1; y <= M; y++)
		{
			cout << A[x][y] << " ";
		}
		cout << endl;
	}
}
void randomize(int A[M][N])
{
	int x, y;
	for (x = 0; x <= M; x++)
		for (y = 0; y <= N; y++)
		{
			A[x][y] = 10 + rand() % 50;
		}
}
void changeclmns(int A[M][N])
{
	int x, y;
	int tmp;
	for (x = 1; x <= M; x++)
	{
		for (y = 1; y <= N-1; y++)
		if ((y % 2 != 0) || (y==0))
			{
				tmp = A[x][y];
				A[x][y] = A[x][y + 1];
				A[x][y + 1] = tmp;
			}
	}
}
void main()
{
	int m[M][N];
	cout << "source massive:" << endl;
	randomize(m);
	output(m);
	changeclmns(m);
	cout << endl;
	cout << "changed massive:" << endl;
	output(m);
	getchar();
}