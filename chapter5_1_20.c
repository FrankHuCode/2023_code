#define _CRT_SECURE_NO_WARNINGS 1

//��5�� ѡ�����

//1.�߼����ʽ
// a.C�����еĲ�������
// b.C�����еĲ���ֵ��0��ʾ���١�����0��ʾ���桱

//2.if�������
//������ʽ��if�����ʽ�� ���
//          if�����ʽ�����
//          else if ���
//          else ���

//3.switch���
// switch�����ʽ��
// {
//    case �������ʽ : ��� ;
//    ...
//    case �������ʽ : ��� ;
//    break;
//    default : ��� ;
// }

//4.����֪ʶ��
//�������ʽ
//���ʽ1 �� ���ʽ2 �����ʽ3
//

//���������C������ͨ���߼��ж�ѡ��ͬ����֧����Ҫ��䣬if��估����ֱ��κ�Ƕ���ܹ�ʵ�ֶ���������֧������
//��Ҫע���֧�еĸ���������⣬����if���Ƕ���еġ����ա�else���⡣



//��ϰ��


//5.1��
//1.
//#include<stdio.h>
//int main()
//{
//	int i, j, k;
//
//	//a.
//	i = 2; j = 3;
//	k = i * j == 6;
//	printf("%d\n", k);//k=1
//
//	//b.
//	i = 5; j = 10; k = 1;
//	printf("%d\n", k > i < j);//1
//
//	//c.
//	i = 3; j = 2; k = 1;
//	printf("%d\n", i < j == j < k);//1
//
//	//d.
//	i = 3; j = 4; k = 5;
//	printf("%d\n", i % j + i < k);//0
//
//	return 0;
//}


//2.
//#include<stdio.h>
//int main()
//{
//	int i, j, k;
//
//	//a
//	i = 10; j = 5;
//	printf("%d\n", !i < j);//Ϊ���桱��Ϊ1
//
//	//b.
//	i = 2; j = 1;
//	printf("%d\n", !!i + !j);//1
//
//	//c.
//	i = 5; j = 0; k = -5;
//	printf("%d\n", i && j || k);//1
//
//	//d.
//	i = 1; j = 2; k = 3;
//	printf("%d\n", i < j || k);//1
//
//	return 0;
//}


//3.
//#include<stdio.h>
//int main()
//{
//	int i, j, k;
//
//	//a.
//	i = 3; j = 4; k = 5;
//	printf("%d\n", i < j || ++j < k);//1
//	printf("%d %d %d\n", i, j, k);//i=3,j=4,k=5
//
//	//b.
//	i = 7; j = 8; k = 9;
//	printf("%d\n", i - 7 && j++ < k);//0
//	printf("%d %d %d\n", i, j, k);//i=7,j=8,k=9
//
//	//c.
//	i = 7; j = 8; k = 9;
//	printf("%d\n", (i = j) || (j = k));//1
//	printf("%d %d %d\n", i, j, k);//i=8,j=8,k=9
//
//	//d.
//	i = 1; j = 1; k = 1;
//	printf("%d\n", ++i || ++j && ++k);//1
//	printf("%d %d %d\n", i, j, k);//i=2,j=1,k=1
//
//	return 0;
//}

//4.��дһ�����ʽ��Ҫ��������i�Ƿ�С�ڡ����ڻ����j���ֱ�ȡֵΪ-1��0��+1��

//�������ж����ֹ�ϵ����Ƕ���������ʽ
//�������ʽ�ĸ�ʽ��
//���ʽ1 �� ���ʽ2 �����ʽ3

//#include<stdio.h>
//int main()
//{
//	int i = 2, j = 2;
//
//	printf("%d\n", i > j ? 1 : (i < j ? -1 : 0));
//
//	return 0;
//}

//7.���i��ֵΪ17������������ʾ�Ľ����ʲô�����i��ֵΪ-17������������ʾ�Ľ������ʲô��

//#include<stdio.h>
//int main()
//{
//	int i = 17;
//
//	printf("%d\n", i >= 0 ? i : -i);//�������ʽ����������Ϊ17��ʵ������i�ľ���ֵ
//
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int i = 1;
//	switch (i % 3)
//	{
//	case 0:printf("zero");
//	case 1:printf("one");
//	case 2:printf("two");
//	}
//	return 0;
//}//onetwo

//ע�⣺ʹ��switch���ʱ�����Ʊ��ʽ�ͳ������ʽ����ʱ���ͱ��ʽ�����⣬break���ͨ����������ʣ������

//11.
//#include<stdio.h>
//int main()
//{
//	int area_code = 0;
//
//	printf("Enter the area code: ");
//	scanf("%d", &area_code);
//
//	switch (area_code)
//	{
//	case 229:printf("Albany");   break;
//	case 404:printf("Atlanta");  break;
//	case 470:printf("Atlanta");  break;
//	case 478:printf("Macon");    break;
//	case 678:printf("Atlanta");  break;
//	case 706:printf("Columbus"); break;
//	case 762:printf("Columbus"); break;
//	case 770:printf("Atlanta");  break;
//	case 912:printf("Savannah"); break;
//	default:printf("Area code not recognized"); break;
//	}
//
//	return 0;
//}


//�����
//1.��дһ������ȷ��һ������λ����

//Enter a number:374
//The number 374 has 3 digits

//#include<stdio.h>
//int main()
//{
//	int num = 0;
//
//	printf("Enter a number: ");
//	scanf("%d", &num);
//
//	if (num >= 0 && num <= 9)
//		printf("The number %d has 1 digit\n", num);
//	else if (num >= 10 && num <= 99)
//		printf("The number %d has 2 digits\n", num);
//	else if (num >= 100 && num <= 999)
//		printf("The number %d has 3 digits\n", num);
//	else
//		printf("The number %d has 4 digits\n", num);
//
//	return 0;
//}

//2.��дһ������Ҫ���û�����24Сʱ�Ƶ�ʱ�䣬Ȼ����ʾ12Сʱ�Ƶĸ�ʽ��

//Enter a 24-hour time:21:11
//Equivalent 12-hour time:9:11 PM

//ע�ⲻҪ��12��00��ʾ��0��00

//#include<stdio.h>
//int main()
//{
//	int h, m;
//
//	printf("Enter a 24-hour time: ");
//	scanf("%d:%d", &h, &m);
//
//	if (h > 12 && h <= 24)
//		printf("Equivalent 12-hour time:%2d:%02d PM\n", h % 12, m);
//	else
//		printf("Equivalent 12-hour time:%2d:%02d AM\n", h, m);
//
//	return 0;
//}
/*broker.c*/
/*Calculates a broker's commission*/
//#include<stdio.h>
//int main()
//{
//	float commission, value;
//
//	printf("Enter value of trade: ");
//	scanf("%f", &value);
//
//	if (value < 2500.00f)
//		commission = 30.00f + 0.017f * value;
//	else if (value < 6250.00f)
//		commission = 56.00f + 0.0066f * value;
//	else if (value < 20000.00f)
//		commission = 76.00f + 0.0034f * value;
//	else if (value < 50000.00f)
//		commission = 100.00f + 0.0022f * value;
//	else if (value < 500000.00f)
//		commission = 155.00f + 0.0011f * value;
//	else
//		commission = 255.00f + 0.0009f * value;
//	
//	if (commission < 39.00f)
//		commission = 39.00f;
//
//	printf("Commission:$%.2f\n", commission);
//
//	return 0;
//}
//3.
//a.
//#include<stdio.h>
//int main()
//{
//	float commission, value, price,other_commission;
//	int num;
//
//	printf("Enter amount and the price of stock: ");
//	scanf("%d %f",&num, &price);
//
//	value = num * price;
//
//	if (value < 2500.00f)
//		commission = 30.00f + 0.017f * value;
//	else if (value < 6250.00f)
//		commission = 56.00f + 0.0066f * value;
//	else if (value < 20000.00f)
//		commission = 76.00f + 0.0034f * value;
//	else if (value < 50000.00f)
//		commission = 100.00f + 0.0022f * value;
//	else if (value < 500000.00f)
//		commission = 155.00f + 0.0011f * value;
//	else
//		commission = 255.00f + 0.0009f * value;
//
//	if (commission < 39.00f)
//		commission = 39.00f;
//
//	printf("Commission:$%.2f\n", commission);
//
//	if (num < 2000)
//		other_commission = 33.00f + 0.03 * num;
//	else
//		other_commission = 33.00f + 0.02 * num;
//
//	printf("Commission of others:$%.2f\n", other_commission);
//
//	return 0;
//}

//4.
//#include<stdio.h>
//int main()
//{
//	int velocity;
//
//	printf("Enter the wind velocity (n mile/hour): ");
//	scanf("%d", &velocity);
//
//	if (velocity < 1)
//		printf("Calm���޷磩\n");
//	else if (velocity <= 3)
//		printf("Light air����磩\n");
//	else if (velocity <= 27)
//		printf("Breeze��΢�磩\n");
//	else if (velocity <= 47)
//		printf("Gale����磩\n");
//	else if (velocity <= 63)
//		printf("Storm�����磩\n");
//	else
//		printf("Hurricane��쫷磩\n");
//
//	return 0;
//}

//5.
//#include<stdio.h>
//int main()
//{
//	float income, taxes;
//
//	printf("Enter the taxable incom: ");
//	scanf("%f", &income);
//
//	if (income < 750.00f)
//		taxes = income * 0.01f;
//	else if (income < 2250.00f)
//		taxes = 7.50f + (income - 750.00f) * 0.02f;
//	else if (income < 3750.00f)
//		taxes = 37.50f + (income - 2250.00f) * 0.03f;
//	else if (income < 5250.00f)
//		taxes = 82.50f + (income - 3750.00f) * 0.04f;
//	else if (income < 7000.00f)
//		taxes = 142.50f + (income - 5250.00f) * 0.05f;
//	else
//		taxes = 230.00f + (income - 7000.00f) * 0.06f;
//
//	printf("You need to payment the taxes:$%.2f\n", taxes);
//
//	return 0;
//}

//6.
//#include<stdio.h>
//int main()
//{
//	int d, i1, i2, i3, i4, i5, j1, j2, j3, j4, j5, scan_digit, first_sum, second_sum, total, check_digit;
//
//	printf("Enter the first (single) digit: ");
//	scanf("%1d", &d);
//	printf("Enter first group of five digits: ");
//	scanf("%1d%1d%1d%1d%1d", &i1, &i2, &i3, &i4, &i5);
//	printf("Enter second group of five digits: ");
//	scanf("%1d%1d%1d%1d%1d", &j1, &j2, &j3, &j4, &j5);
//	printf("Enter the last (single) digit: ");
//	scanf("%1d", &scan_digit);
//
//	first_sum = d + i2 + i4 + j1 + j3 + j5;
//	second_sum = i1 + i3 + i5 + j2 + j4;
//	total = first_sum * 3 + second_sum;
//	check_digit = 9 - (total - 1) % 10;
//
//	if (check_digit == scan_digit)
//		printf("VALID\n");
//	else
//		printf("NOT VALID\n");
//
//	return 0;
//}

//7.��дһ�����򣬴��û������4���������ҳ����ֵ����Сֵ��

//Enter four integers:21 43 10 35
//Largest:43
//Smallest:10

//Ҫ�󾡿�������if��䣬��ʾ��4��if�����㹻�ˡ�

//#include<stdio.h>
//int main()
//{
//	int a, b, c, d, largest, smallest;
//
//	printf("Enter four integers: ");
//	scanf("%d %d %d %d", &a, &b, &c, &d);
//
//	largest = a > b ? a : b;
//	largest = largest > c ? largest : c;
//	largest = largest > d ? largest : d;
//	smallest = a < b ? a : b;
//	smallest = smallest < c ? smallest : c;
//	smallest = smallest < d ? smallest : d;
//
//	printf("Largest:%d\n", largest);
//	printf("Smallest:%d\n", smallest);
//
//	return 0;
//}

//8.��дһ������Ҫ���û�����һ��ʱ�䣨��24Сʱ�Ƶ�ʱ�ֱ�ʾ��������ѡ�����ʱ�����û�������ӽ��ĺ��࣬��ʾ��
//��Ӧ�����ʱ��͵ִ�ʱ�䡣

//Enter a 24-hour time:13:15
//Closest departure time is 12:47 p.m.,arriving at 3:00 p.m.

//��ʾ���������ô���ҹ��ʼ�ķ�������ʾ�������ʱ�������Ҳ�ô���ҹ��ʼ�ķ�������ʾ�������ʱ����ȡ����磺
//      13��15����ҹ��ʼ��13x60+15=795���ӣ�������12��47������ҹ��ʼ��767���ӣ���ӽ���


//#include<stdio.h>
//int main()
//{
//	int hour, minute, minutes;
//
//	printf("Enter a 24-hour time: ");
//	scanf("%d:%d", &hour, &minute);
//
//	minutes = hour * 60 + minute;
//
//	if (minutes < 8 * 60)
//		printf("Closest departure time is 8:00 a.m.,arriving at 10:16 a.m.\n");
//	else if(minutes<(8 * 60+9*60+43)/2)
//		printf("Closest departure time is 9:43 a.m.,arriving at 11:52 a.m.\n");
//	else if(minutes<(9 * 60 + 43+11*60+19)/2)
//		printf("Closest departure time is 11:19 a.m.,arriving at 1:31 p.m.\n");
//	else if(minutes<(11 * 60 + 19+12*60+47)/2)
//		printf("Closest departure time is 12:47 p.m.,arriving at 3:00 p.m.\n");
//	else if(minutes<(12 * 60 + 47+14*60)/2)
//		printf("Closest departure time is 2:00 p.m.,arriving at 4:08 p.m.\n");
//	else if(minutes<(14 * 60+15*60+45)/2)
//		printf("Closest departure time is 3:45 p.m.,arriving at 5:55 p.m.\n");
//	else if(minutes<(15 * 60 + 45+19*60)/2)
//		printf("Closest departure time is 7:00 p.m.,arriving at 9:20 p.m.\n");
//	else if(minutes<(19 * 60+21*60+45)/2)
//		printf("Closest departure time is 9:45 p.m.,arriving at 11:58 p.m.\n");
//	else 
//		printf("Closest departure time is 8:00 a.m.,arriving at 10:16 a.m.\n");
//
//	return 0;
//}

//9.��дһ��������ʾ�û������������ڣ�Ȼ����ʾ��һ�����ڸ��硣

//Enter first date (mm/dd/yy):3/6/08
//Enter second date (mm/dd/yy):5/17/07
//5/17/07 is earlier than 3/6/08


//#include<stdio.h>
//int main()
//{
//	int mm1, dd1, yy1, mm2, dd2, yy2;
//
//	printf("Enter first date (mm/dd/yy): ");
//	scanf("%d/%d/%02d", &mm1, &dd1, &yy1);
//	printf("Enter second date (mm/dd/yy): ");
//	scanf("%d/%d/%02d", &mm2, &dd2, &yy2);
//
//	/*if (yy1 < yy2)
//		printf("%d/%d/%d is earlier than %d/%d/%02d\n", mm1, dd1, yy1, mm2, dd2, yy2);
//	else if(yy1>yy2)
//		printf("%d/%d/%d is earlier than %d/%d/%02d\n", mm2, dd2, yy2, mm1, dd1, yy1);
//	else
//		if(mm1<mm2)
//			printf("%d/%d/%02d is earlier than %d/%d/%02d\n", mm1, dd1, yy1, mm2, dd2, yy2);
//		else if(mm1>mm2)
//			printf("%d/%d/%02d is earlier than %d/%d/%02d\n", mm2, dd2, yy2, mm1, dd1, yy1);
//		else
//			if(dd1<dd2)
//				printf("%d/%d/%02d is earlier than %d/%d/%02d\n", mm1, dd1, yy1, mm2, dd2, yy2);
//			else 
//				printf("%d/%d/%02d is earlier than %d/%d/%02d\n", mm2, dd2, yy2, mm1, dd1, yy1);*/
//	if (yy1 < yy2 || (yy1 == yy2 && mm1 < mm2) || (yy1 == yy2 && mm1 == mm2 && dd1 < dd2)) {
//		printf("%d/%d/%02d is earlier than %d/%d/%02d\n", mm1, dd1, yy1, mm2, dd2, yy2);
//	}
//	else {
//		printf("%d/%d/%02d is earlier than %d/%d/%02d\n", mm2, dd2, yy2, mm1, dd1, yy1);
//	}
//	return 0;
//}

//10.����switch����дһ�����򣬰������ֱ�ʾ�ĳɼ�ת������ĸ��ʾ�ĵȼ���

//Enter numerical grade: 84
//Letter grade:B

//ʹ������ĵȼ���������AΪ90-100��BΪ80-89��CΪ70-79��DΪ60-69��FΪ0-59.����ɼ�����100�����0������ʾ������Ϣ
//��ʾ���ѳɼ���ֳ�2�����֣�Ȼ��ʹ��switch����ж�ʮλ�ϵ�����

//#include<stdio.h>
//int main()
//{
//	int score, digit;
//
//	printf("Enter numerical grade: ");
//	scanf("%d", &score);
//	
//	if (score > 100 || score < 0)
//	{
//		printf("Enter numerical grade is error,exit.");
//		return 0;
//	}
//	digit = score / 10;
//	switch (digit)
//	{
//	case 10:
//	case 9:printf("Letter grade:A\n"); break;
//	case 8:printf("Letter grade:B\n"); break;
//	case 7:printf("Letter grade:C\n"); break;
//	case 6:printf("Letter grade:D\n"); break;
//	default:printf("Letter grade:F\n"); break;
//	}
//
//	return 0;
//}

//11.��дһ������Ҫ���û�����һ����λ����Ȼ����ʾ������Ӣ�ĵ��ʡ�

//Enter a two-digit number:45
//You entered the number forty-five.

//��ʾ�������ֽ�Ϊ�������֣���һ��switch�����ʾ��һλ���ֶ�Ӧ�ĵ��ʣ���twenty""thirty"�ȣ���
//      �õڶ���switch�����ʾ�ڶ�λ���ֶ�Ӧ�ĵ��ʣ���Ҫ����11-19��Ҫ���⴦��

#include<stdio.h>
int main()
{
	int number, one_digit, two_digit;

	printf("Enter a two-digit number: ");
	scanf("%d", &number);

	printf("You entered the number ");
	
	if (number >= 20)
	{
		two_digit = number / 10;
		one_digit = number % 10;
		switch (two_digit)
		{
		case 9:printf("Ninety"); break;
		case 8:printf("Eighty"); break;
		case 7:printf("Seventy"); break;
		case 6:printf("Sixty"); break;
		case 5:printf("Fifty"); break;
		case 4:printf("Forty"); break;
		case 3:printf("Thirty"); break;
		case 2:printf("Twenty"); break;
		default:printf("...."); break;
		}
		switch (one_digit)
		{
		case 9:printf("-nine"); break;
		case 8:printf("-eight"); break;
		case 7:printf("-seven"); break;
		case 6:printf("-six"); break;
		case 5:printf("-five"); break;
		case 4:printf("-four"); break;
		case 3:printf("-three"); break;
		case 2:printf("-two"); break;
		case 1:printf("-one"); break;
		default:printf(""); break;
		}
	}
	else
	{
		switch (number)
		{
		case 10:printf("Ten"); break;
		case 11:printf("ELeven"); break;
		case 12:printf("Twelve"); break;
		case 13:printf("Thirteen"); break;
		case 14:printf("Fourteen"); break;
		case 15:printf("Fifteen"); break;
		case 16:printf("Sixteen"); break;
		case 17:printf("Seventeen"); break;
		case 18:printf("Eighteen"); break;
		case 19:printf("Nineteen"); break;
		default:printf("..."); break;
		}
	}
	return 0;
}