#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <math.h>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Rus");
	float x1, x2, x3, y1, y2, y3, s, p, pp, a, b, c;
	printf("������� ���������� x1 � y1: \n");
	scanf_s("%f %f", &x1, &y1);

	printf("������� ���������� x2 � y2: \n");
	scanf_s("%f %f", &x2, &y2);

	printf("������� ���������� x3 � y3: \n");
	scanf_s("%f %f", &x3, &y3);

	while ((x1 == x2) && (y1 == y2) || (x2 == x3) && (y2 == y3) || (x1 == x3) && (y1 == y3)) {
		printf("������� ���������� x1 � y1: \n");
		scanf_s("%f %f", &x1, &y1);

		printf("������� ���������� x2 � y2: \n");
		scanf_s("%f %f", &x2, &y2);

		printf("������� ���������� x3 � y3: \n");
		scanf_s("%f %f", &x3, &y3);
	}
	a = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
	b = sqrt((x1 - x3) * (x1 - x3) + (y1 - y3) * (y1 - y3));
	c = sqrt((x2 - x3) * (x2 - x3) + (y2 - y3) * (y2 - y3));
	p = a + b + c;//��������
	printf("�������� p ����� %f: \n", p);
	pp = p / 2;//������������
	s = sqrt(pp * (pp - a) * (pp - b) * (pp - c));//�������
	printf("������ ����� %f: \n", s);
}