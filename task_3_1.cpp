//TASK 3 NUMBER 1

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <math.h>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Rus");
	
	int n, i;
	float a, s1 = 0, s2 = 0;
	double s = 0;

	printf("�������� �������. ���� �� ������ ����� ����� ��� ������� ���� 1+(1/2^3)+(1/3^3)+...+(1/n^3), ������� 1.  ���� �� ������ ����� ����� ��� ������� ���� (1/2^2)+(1/4^2)+(1/6^2)+...+(1/(2n)^2), ������� 2:\n");
	scanf_s("%f", &a); //����� ����� �� ���� �������

	while (a != 1 && a != 2) //�� ������ �������� �� 1 ��� 0
	{
		printf("������, ������� 1 ��� 2:\n");
		scanf_s("%f", &a);
	}

	printf("������� n-���� (����������� �����), �� �������� ����� ����������� �������:\n");
	scanf_s("%i", &n);

	if (a == 1)
	{
		for (i = 1; i <= n; i++)
		{
			s1 = 1 / (pow(i, 3));
			s = s + s1;
		}
		printf ("����� ������ ������������������: %f \n", s);
	}
	else
	{
		for (i = 1; i <= n; i++)
		{
			s2 = 1/(pow(2*i,2));
			s = s + s2;
		}
		printf("����� ������ ������������������: %f \n", s);
	}
	
	system ("pause");
}