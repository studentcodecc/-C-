#define _CRT_SECURE_NO_WARNINGS 1
#define PI 3.1415926
#include<stdio.h>
#include<math.h>
int main(void)
{

	/*float a;
	float b;
	float c;
	float p;
	float area;
	printf("�����������ε������߳�\n");
	scanf("%f,%f,%f", &a, &b, &c);
	p = 0.5 * (a + b + c);
	area = sqrt(p*(p - a)*(p - b)*(p - c));
	printf("�����ε����Ϊ = %f\n ", area);*/
	//=====================������ı���������==========
	double r;
	double surface;
	double volume;
	printf("������İ뾶=");
	scanf("%lf", &r);
	surface = 4 * PI * r * r;
	volume = (4 * PI * r * r * r) / 3;
	printf("surface = %lf\n", surface);
	printf("volume = %lf\n", volume);

	return 0;
}