#include <stdio.h>


//整数在内存中以补码的形式存储

//理由：
//1. CPU只有加法器
//2.使用补码，可以将符号位和数值域统一
//3.补码与原码相互转换，计算过程相同（取反后 +1）
//int main()
//{
//	int a = -10; //0x0000004A3232F824 f6 ff ff ff --> -10的补码
//	int b = 10;  //0x0000004A3232F844 0a 00 00 00 -->  10的补码 
//	return 0;
//}


//写代码判断当前机器的字节序
//int main()
//{
//
//	int a = 0x00000001;	
//	char* p = (char*) & a;
//	if (*p)
//		printf("小端");
//	else
//		printf("大端");
//	return 0;
//}


//int main()
//{
//	char a = -1;
//	//11111111  -->有符号位整形提升
//	//11111111111111111111111111111111  --> -1
//	signed char b = -1;
//	//同理
//	unsigned char c = -1;  
//	//11111111 -->无符号位整形提升
//	//00000000000000000000000011111111 --> 255
//	printf("%d,%d,%d", a, b, c);
//	return 0;
//}

//int main()
//{
//	char a = -128; // 11111111111111111111111110000000  -->  10000000  
//	//整形提升 --> 11111111111111111111111110000000 
//	printf("%u", a);  // 2^32 - 2^7
//	return 0;
//}

//int main()
//{
//	char a = 256; // 256  00000000000000000000000100000000  00000000
//	//整形提升 --> 00000000000000000000000000000000
//	printf("%d", a);
//	return 0;
//}
//有符号char的取值范围是-128 ~ 127



//int main()
//{
//	int i = -20;        //11111111111111111111111111101100   
//	unsigned int j = 10;//00000000000000000000000000001010
//	                    //11111111111111111111111111110110
//	                    //11111111111111111111111111110101
//	                    //00000000000000000000000000001010   --> 10
//	printf("%d", i + j);
//
//	return 0;
//}


//int main()
//{
//	unsigned int  i; // 无符号位
//	for (i = 9; i >= 0; i--)
//	{
//		printf("%u\n", i);
//	}
//	//无限循环
//	return 0;
//}


#include <string.h>

//int main()
//{
//	char a[1000];
//	int i;
//	for (i = 0; i < 1000; i++)
//	{
//		a[i] = -1 - i;
//	}
//	printf("%d", strlen(a));
//	return 0;
//}

//unsigned char i = 0;
//
//int main()
//{
//	for (i = 0; i <= 255; i++)  
//		printf("hello,world\n");  //无限循环，i永远小于255
//	return 0;
//}



//int main()
//{
//	int n = 9;  //1001    1.001 * 2^3
//
//	float* pFloat = (float*)&n;   // 00000000 00000000 00000000 00001001	
//	printf("n的值为：%d\n", n);   // 0 00000000  00000000000000000001001
//	printf("*pFloat的值为：%f\n", *pFloat); // e全为0  无穷小
//
//	*pFloat = 9.0;  // 0 10000010 00100000000000000000000
//	printf("n的值为：%d\n", n); 
//	printf("*pFloat的值为：%f\n", *pFloat);
//
//	return 0;
//
//}
//

