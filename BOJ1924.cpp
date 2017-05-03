#include <cstdio>
int main()
{
	int x, y;
	char day[7][4] = {"SUN","MON","TUE","WED","THU","FRI","SAT"};
	int month[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
	scanf("%d%d",&x,&y);
	for (;x--;y+=month[x]);
	printf("%s",day[y%7]);
}