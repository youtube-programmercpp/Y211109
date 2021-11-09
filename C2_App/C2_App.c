#include <stdio.h>
void f1()
{
}
int f2()
{
	return 1;
}
void f3()
{
}
void f4()
{
}
int main()
{
	for (f1(); f2(); f3())
		f4();
}
