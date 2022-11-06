#include <stdio.h>
#include <stdlib.h>
void a1(void);
void b1(void);
int main()
{
	a1();
	b1();
	system("pause");
	return 0;
}
void a1()
{
	int a[10] = { 9,2,3,1,5,4,8,7,10,6 };
	int i, j;
	printf("---------------(a)---------------\n");
	for (i = 0; i < 10; i++) {
		for (j = 0; j < i; j++) {
			if (a[j] < a[i]) {
				int temp = a[j];
				a[j] = a[i];
				a[i] = temp;
			}
		}
	}
	for (i = 0; i < 10; ++i) {
		printf("a[%d] = %d", i, a[i]);
		printf("\n");
	}
}
void b1()
{
	int a[10] = { 9,2,3,1,5,4,8,7,10,6 };
	int i, j;
	printf("---------------(b)---------------\n");
	for (i = 0; i < 10; i++) {
		for (j = 0; j < i; j++) {

			if (a[j] < a[i]) {
				int temp = a[j];
				a[j] = a[i];
				a[i] = temp;
				continue;
			}
		}
	}
	for (i = 0; i < 10; ++i) {
		printf("a[%d] = %d", i, a[i]);
		printf("\n");
	}
}