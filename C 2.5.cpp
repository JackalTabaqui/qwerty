#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

//�������������� ���������� ������: ��� ������������ ������ ����������� ���� ����� ������� ��������
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