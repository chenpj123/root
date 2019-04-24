#include <stdio.h>

int main()
{
	unsigned long t1 =0;
	char ch[13] = "155";
	char ch2[13] = "123456000000";

	if (0  != strncmp(ch,ch2, 6))
			{

				printf("==========\n");
			}
	t1 = strtol(ch, NULL, 16);
	printf("t1 =%#x\n",t1);
	return 0;
}
