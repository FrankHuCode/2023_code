#define _CRT_SECURE_NO_WARNINGS 1

//��4��  ���ʽ

//һ�������������������

//1.����������������ӡ������ˡ�����
//2.��ϵ����������ڣ����ڣ�С�ڣ��ȵȡ�
//3.�߼���������롢�򡢷�

//һԪ�������ֻ��Ҫһ��������
//��Ԫ���������Ҫ����������

//�����/�������%��Ҫ�ر�ע�����¼��㣺
//1.�����/���ܲ�������Ľ������������������������ʱ�������/�ᶪ����������������ȡ���������ˣ�1/2�Ľ����0������0.5
//2.�����%Ҫ��������������������������������һ�����������������޷�����ͨ����
//3.��0����/��%���Ҳ������ᵼ��δ�������Ϊ
//4.�������/��%���ڸ�������ʱ����������ȷ����

//����������ȼ��ͽ����

//һԪ����������ȼ����ڶ�Ԫ�����
//һԪ����������ҽ���ԣ���Ԫ���������������

//upc.c
/*Computes a Universal Product Code check digit*/
//#include<stdio.h>
//int main()
//{
//	int d, i1, i2, i3, i4, i5, j1, j2, j3, j4, j5, first_sum, second_sum, total;
//
//	printf("Enter the first (single) digit: ");
//	scanf("%1d", &d);
//	printf("Enter first group of five digits: ");
//	scanf("%1d%1d%1d%1d%1d", &i1, &i2, &i3, &i4, &i5);
//	printf("Enter second group of five digits: ");
//	scanf("%1d%1d%1d%1d%1d", &j1, &j2, &j3, &j4, &j5);
//
//	//d i1 i2 i3 i4 i5 j1 j2 j3 j4 j5
//	first_sum = d + i2 + i4 + j1 + j3 + j5;
//	second_sum = i1 + i3 + i5 + j2 + j4;
//	total = first_sum * 3 + second_sum;
//
//	printf("Check digit:%d\n", 9 - ((total - 1) % 10));
//
//	return 0;
//}


//��ֵ�����

//1.�򵥸�ֵ =
//2.��ֵ ĿǰΪֹ����һ��Ϊֹ������������֪��Ψһ��ֵ
//3.���ϸ�ֵ += -= *= /= %= ��Ҫ�������ȼ�������

//�������Լ������
//++ --
//ǰ׺�ͺ�׺
//

//demo:
//
//#include<stdio.h>
//int main()
//{
//	int i = 1;
//	
//	//ǰ׺���ȼ����ʹ��
//	printf("%d\n", ++i); //prints "i is 2"  ++i���ʽ��ֵ��i+1
//	printf("%d\n", i);   //prints "i is 2"
//
//	i = 1;
//	//��׺����ʹ�ú����
//	printf("%d\n", i++); //prints "i is 1"   i++���ʽ��ֵ��i
//	printf("%d\n", i);   //prints "i is 2"
//
//	return 0;
//}

//ע�⣺��׺i++�ͺ�׺i--��һԪ��+��-���ȼ��ߣ�������������׺�������ϵġ�
//      ǰ׺++i��ǰ׺--i��һԪ��+��-���ȼ���ͬ������������ǰ׺�����ҽ�ϵġ�


//���ʽ��ֵ

//���ʽ���

//�����

//1.C����û��ָ������������ݿ����ظ��˷����㣬���������ݿ��Ե���pow����
//2.%�����Ҫ�������������������������������fmod����
//

//��ϰ�⣺
//1.�������г���Ƭ�ε�������������i��j����k����int�ͱ���
//��a��i=5,j=3;
//     printf("%d %d\n",i/j,i%j);
//��b��int i = 2, j = 3;
//     printf("%d\n", (i + 10) % j);
//��c��int i = 7, j = 8, k = 9;
//     printf("%d\n", (i + 10) % k / j);
//��d��int i = 1, j = 2, k = 3;
//     printf("%d\n", (i + 5) % (j + 2) / k);

//#include<stdio.h>
//int main()
//{
//	//a
//	int i = 5, j = 3;
//	printf("%d %d\n", i / j, i % j);//1 2
//
//	//b
//	i = 2, j = 3;
//	printf("%d\n", (i + 10) % j);//0
//
//	//c
//	i = 7; j = 8;int k = 9;
//	printf("%d\n", (i + 10) % k / j);//1
//
//	//d
//	i = 1; j = 2; k = 3;
//	printf("%d\n", (i + 5) % (j + 2) / k);//0
//
//	return 0;
//}

//7.8.
/*Computes a Universal Product Code check digit*/
//#include<stdio.h>
//int main()
//{
//	int d, i1, i2, i3, i4, i5, j1, j2, j3, j4, j5, first_sum, second_sum, total;
//
//	printf("Enter the first (single) digit: ");
//	scanf("%1d", &d);
//	printf("Enter first group of five digits: ");
//	scanf("%1d%1d%1d%1d%1d", &i1, &i2, &i3, &i4, &i5);
//	printf("Enter second group of five digits: ");
//	scanf("%1d%1d%1d%1d%1d", &j1, &j2, &j3, &j4, &j5);
//
//	//d i1 i2 i3 i4 i5 j1 j2 j3 j4 j5
//	first_sum = d + i2 + i4 + j1 + j3 + j5;
//	second_sum = i1 + i3 + i5 + j2 + j4;
//	total = first_sum * 3 + second_sum;
//
//	printf("Check digit:%d\n", 9 - ((total - 1) % 10));//�����Χ0-9
//	printf("Check digit:%d\n", 10 - (total % 10));//�����Χ1-10
//	printf("Check digit:%d\n", (10 - (total % 10)) % 10);//�����Χ0-9
//
//	return 0;
//}

//9.
//#include<stdio.h>
//int main()
//{
//	//a
//	int i, j, k;
//	i = 7; j = 8;
//	i *= j + 1;
//	printf("%d %d\n", i, j);//i=i*(j+1)=63,j=8
//
//	//b
//	i = 1; j = 1; k = 1;
//	i += j += k;
//	printf("%d %d %d\n", i, j, k);//i=3,j=2,k=1
//
//	//c
//	i = 1; j = 2; k = 3;
//	i -= j -= k;
//	printf("%d %d %d\n", i, j, k);//i=2,j=-1,k=3
//
//	//d
//	i = 2; j = 1; k = 0;
//	i *= j *= k;
//	printf("%d %d %d\n", i, j, k);//i=j=k=0
//
//	return 0;
//}


//10.
//#include<stdio.h>
//int main()
//{
//	//a
//	int i, j;
//	i = 6;
//	j = i += i;
//	printf("%d %d\n", i, j);//i=12,j=12
//
//	//b
//	i = 5;
//	j = (i -= 2) + 1;
//	printf("%d %d\n", i, j);//i=3,j=4
//
//	//c
//	i = 7;
//	j = 6 + (i = 2.5);
//	printf("%d %d\n", i, j);//i=2,j=8
//
//	//d
//	i = 2; j = 8;
//	j = (i = 6) + (j = 3);
//	printf("%d %d\n", i, j);//i=6,j=9
//
//	return 0;
//}


//11.
//#include<stdio.h>
//int main()
//{
//	int i, j, k;
//
//	//a
//	i = 1;
//	printf("%d ", i++ - 1);//0
//	printf("%d\n", i);//2
//
//	//b
//	i = 10; j = 5;
//	printf("%d ", i++ - ++j);//4
//	printf("%d %d\n", i, j);//i=11,j=6
//
//	//c
//	i = 7; j = 8;
//	printf("%d ", i++ - --j);//0
//	printf("%d %d\n", i, j);//i=8,j=7
//
//	//d
//	i = 3; j = 4; k = 5;
//	printf("%d ", i++ - j++ + --k);//3
//	printf("%d %d %d\n", i, j, k);//i=4,j=5,k=4
//
//	return 0;
//}

//12.

//#include<stdio.h>
//int main()
//{
//	int i, j;
//
//	//a
//	i = 5;
//	j = ++i * 3 - 2;
//	printf("%d %d\n", i, j);//i=6,j=16
//
//	//b
//	i = 5;
//	j = 3 - 2 * i++;
//	printf("%d %d\n", i, j);//i=6,j=-7
//
//	//c
//	i = 7;
//	j = 3 * i-- + 2;
//	printf("%d %d\n", i, j);//i=6,j=23
//
//	//d
//	i = 7;
//	j = 3 + --i * 2;
//	printf("%d %d\n", i, j);//i=6,j=15
//
//	return 0;
//}

//15.


//�����
//1.��дһ������Ҫ���û�����һ����λ����Ȼ����λ�������ӡ���������
//
//Enter a two-digit number:28
//The reversal is:82

//#include<stdio.h>
//int main()
//{
//	int i = 0, j = 0;//���������޷��õ���Ҫ�Ľ��
//
//	printf("Enter a two-digit number: ");
//	scanf("%2d", &i);
//
//	j = i % 10 * 10 + i / 10;
//	
//	printf("The reversal is:%d\n", j);
//	printf("The reversal is:%d%d\n", i % 10, i / 10);
//
//	return 0;
//}


//2.��չ�����еĳ���ʹ����Դ���3λ��
//#include<stdio.h>
//int main()
//{
//	int number = 0;
//
//	printf("Enter a three-digit number: ");
//	scanf("%3d", &number);
//
//	printf("The reversal is:%d%d%d\n", number % 10, number / 10 % 10, number / 100);
//
//	return 0;
//}

//3.���±�д�����2�еĳ���ʹ�³�����Ҫ���������ָ�Ϳ�����ʾ��3λ����������ʾ���ο�4.1�ڵ�upc.c����
//#include<stdio.h>
//int main()
//{
//	int i1, i2, i3;
//	
//	printf("Enter a three-digit number: ");
//	scanf("%1d%1d%1d", &i1, &i2, &i3);
//
//	printf("The reversal is:%d%d%d\n", i3, i2, i1);
//
//	return 0;
//}

//4.��дһ�����򣬶����û���������������˽��ƣ�����Ϊ8����ʾ������

//Enter a number between 0 and 32767:1953
//In octal,your number is:03641

//���ӦΪ5λ�������㲻��Ҫ��ô����λҲҪ��ˡ���ʾ��Ҫ��һ����ת���ɰ˽��ƣ����Ƚ������8�����õ������ǰ˽�������
//���һλ��Ȼ���ԭʼ��������8���Գ�������ظ��������̣��õ������ڶ�λ�������7����ʾ��printf������ʾ�˽��Ƶ�����
//�����������ʵ�����и��򵥵�д������

//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	int i1, i2, i3, i4,i5;
//
//	printf("Enter a number between 0 and 32767: ");
//	scanf("%d", &n);
//
//	i1 = n % 8;
//	i2 = n / 8 % 8;
//	i3 = n / 8 / 8 % 8;
//	i4 = n / 8 / 8 / 8 % 8;
//	i5 = n / 8 / 8 / 8 / 8 % 8;
//
//	printf("In octal,your number is:%d%d%d%d%d\n", i5, i4, i3, i2, i1);
//	printf("In octal,your number is:%05o\n", n);
//
//	return 0;
//}

//5.��д4.1�ڵ�upc.c����ʹ�û�����һ������11λ���֣�������������1λ��������5λ�����������5λ��
//#include<stdio.h>
//int main()
//{
//	int i1, i2, i3, i4, i5, i6, i7, i8, i9, i10, i11, first_sum, second_sum, total;
//	
//	printf("Enter the first 11 digits of a UPC: ");
//	scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &i1, &i2, &i3, &i4, &i5, &i6, &i7, &i8, &i9, &i10, &i11);
//
//	first_sum = i1 + i3 + i5 + i7 + i9 + i11;
//	second_sum = i2 + i4 + i6 + i8 + i10;
//	total = 3 * first_sum + second_sum;
//
//	printf("Check digit:%d", 9 - (total - 1) % 10);
//
//	return 0;
//}

//6.EAN(European Article Number)
//�����������ǣ����Ĺ���Ҭ�ӿ�ζ��Ϊ������EAN��Ϊ8691484260008.��һ����Ϊ6+1+8+2+0+0=17���ڶ�����Ϊ8+9+4+4+6+0=31��
//��һ���ͳ���3�ټ��ϵڶ����͵õ�82����1�õ�81������������10��������1������9��ȥ�����õ�8����ԭʼ��������һλһ�¡�

#include<stdio.h>
int main()
{
	int i1, i2, i3, i4, i5, i6, i7, i8, i9, i10, i11, i12, first_sum, second_sum, total;
	
	printf("Enter the first 12 digits of a UPC: ");
	scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &i1, &i2, &i3, &i4, &i5, &i6, &i7, &i8, &i9, &i10, &i11, &i12);

	first_sum = i2 + i4 + i6 + i8 + i10+i12;
	second_sum = i1 + i3 + i5 + i7 + i9+i11;
	total = 3 * first_sum + second_sum;

	printf("Check digit:%d", 9 - (total - 1) % 10);

	return 0;
}