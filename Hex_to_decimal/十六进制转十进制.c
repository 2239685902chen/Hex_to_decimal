#include <stdio.h>
int main()
{
	int q = 0xABCDEF;
	printf("%015d\n", q);//十进制的域宽是15，只要输出时的域宽设为15就可以输出十进制了
	return 0;
}