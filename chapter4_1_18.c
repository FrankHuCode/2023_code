#define _CRT_SECURE_NO_WARNINGS 1

//第4章  表达式

//一般有以下三种运算符：

//1.算术运算符，包括加、减、乘、除。
//2.关系运算符，大于，等于，小于，等等。
//3.逻辑运算符，与、或、非

//一元运算符，只需要一个操作数
//二元运算符，需要两个操作数

//运算符/和运算符%需要特别注意以下几点：
//1.运算符/可能产生意外的结果，当两个操作数都是整数时，运算符/会丢掉分数部分来“截取”结果，因此，1/2的结果是0而不是0.5
//2.运算符%要求操作数是整数，如果两个操作数中有一个不是整数，程序将无法编译通过。
//3.把0用作/或%的右操作数会导致未定义的行为
//4.当运算符/和%用于负操作数时，其结果难以确定。

//运算符的优先级和结合性

//一元运算符的优先级高于二元运算符
//一元运算符都是右结合性，二元运算符都是左结合性

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


//赋值运算符

//1.简单赋值 =
//2.左值 目前为止（这一章为止），变量是已知的唯一左值
//3.复合赋值 += -= *= /= %= 需要考虑优先级的问题

//自增和自减运算符
//++ --
//前缀和后缀
//

//demo:
//
//#include<stdio.h>
//int main()
//{
//	int i = 1;
//	
//	//前缀：先计算后使用
//	printf("%d\n", ++i); //prints "i is 2"  ++i表达式的值是i+1
//	printf("%d\n", i);   //prints "i is 2"
//
//	i = 1;
//	//后缀：先使用后计算
//	printf("%d\n", i++); //prints "i is 1"   i++表达式的值是i
//	printf("%d\n", i);   //prints "i is 2"
//
//	return 0;
//}

//注意：后缀i++和后缀i--比一元的+和-优先级高，而且这两个后缀都是左结合的。
//      前缀++i和前缀--i与一元的+和-优先级相同，而且这两个前缀都是右结合的。


//表达式求值

//表达式语句

//问与答：

//1.C语言没有指数运算符，求幂可以重复乘法运算，非整数次幂可以调用pow函数
//2.%运算符要求操作数都是整数，浮点数可以试试fmod函数
//

//练习题：
//1.给出下列程序片段的输出结果，假设i、j、和k都是int型变量
//（a）i=5,j=3;
//     printf("%d %d\n",i/j,i%j);
//（b）int i = 2, j = 3;
//     printf("%d\n", (i + 10) % j);
//（c）int i = 7, j = 8, k = 9;
//     printf("%d\n", (i + 10) % k / j);
//（d）int i = 1, j = 2, k = 3;
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
//	printf("Check digit:%d\n", 9 - ((total - 1) % 10));//结果范围0-9
//	printf("Check digit:%d\n", 10 - (total % 10));//结果范围1-10
//	printf("Check digit:%d\n", (10 - (total % 10)) % 10);//结果范围0-9
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


//编程题
//1.编写一个程序，要求用户输入一个两位数，然后按数位的逆序打印出这个数。
//
//Enter a two-digit number:28
//The reversal is:82

//#include<stdio.h>
//int main()
//{
//	int i = 0, j = 0;//负数可能无法得到想要的结果
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


//2.扩展上题中的程序，使其可以处理3位数
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

//3.重新编写编程题2中的程序，使新程序不需要利用算术分割就可以显示出3位数的逆序。提示：参考4.1节的upc.c程序
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

//4.编写一个程序，读入用户输入的整数并按八进制（基数为8）显示出来：

//Enter a number between 0 and 32767:1953
//In octal,your number is:03641

//输出应为5位数，即便不需要这么多数位也要如此。提示：要把一个数转换成八进制，首先将其除以8，所得的余数是八进制数的
//最后一位，然后把原始的数除以8，对除法结果重复上述过程，得到倒数第二位。（如第7章所示，printf可以显示八进制的数，
//所以这个程序实际上有更简单的写法）。

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

//5.重写4.1节的upc.c程序，使用户可以一次输入11位数字，而不用先输入1位，再输入5位，最后再输入5位。
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
//以土耳其软糖（开心果和椰子口味）为例，其EAN码为8691484260008.第一个和为6+1+8+2+0+0=17，第二个和为8+9+4+4+6+0=31。
//第一个和乘以3再加上第二个和得到82，减1得到81，这个结果除以10的余数是1，再用9减去余数得到8，与原始编码的最后一位一致。

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