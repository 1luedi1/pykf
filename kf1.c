     //kf1
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
int num = 1;

void change()
{
	MessageBoxA(0, "金币+1", "信息", 0);

}
void add()
{
	num + 1;
	printf("\n金币加1!");
	printf("\n金币:%d", num++);
	change();
}
void main()
{
	printf("%x,%x,%x", change, &num, add);
	while (1)
	{
		add();
		Sleep(20000);
	}
}





