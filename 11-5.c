#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	char *pc;
	int *pi;
	double *pd;
	
	pc = (char*)10000;
	pi = (int*)10000;
	pd = (double*)10000;
	
	printf("���� �� : pc = %d, pi = %d, pd = %d\n", pc, pi, pd);
	
	pc++;
	pi++;
	pd++;
	
	printf("���� �� : pc = %d, pi = %d, pd = %d\n", pc, pi, pd);
	
	system("PAUSE");
	return 0;
}