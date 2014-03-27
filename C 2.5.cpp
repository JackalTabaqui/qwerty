#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

//преобразование символьной строки: при формировании строки дублируются пары рядом стоящих символов
void doublepair(char A[])
{
	int i;
	for (i = 0; i <= strlen(A)-2; i+=2)
		cout << A[i] << A[i + 1] << A[i] << A[i + 1];
}
void main()
{
	char str[] = "abcd";
	doublepair(str);
	getchar();
}
