#include<cstdio>
#include<malloc.h>
#include<windows.h>
#include<time.h>
void SHU(int ,int *&);
//void SHA(int , int *&);
int main()
{
	srand((unsigned)time(NULL));
	int n;
	int count;
	printf("��������Ҫ�ظ�ʵ��Ĵ�����");
	scanf("%d", &count);
	int *p = NULL;
	for (n = 100; n < 1000; n += 100)
	{
		for (int i = 0; i < count; i++)
		{
			SHU(n, p);
			//SHA(n, p);
		}
	}
	return 0;
}
void SHU(int n, int *&p)
{
	p = (int *)malloc(n * sizeof(int));
	for (int i = 0; i < n; i++)
	{
		p[i] = rand() % (2 * n) - n;
	}
}