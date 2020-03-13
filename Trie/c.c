#include <stdio.h>
#include <stdlib.h>
int main (){
	int *v;

	v = (int*)malloc(4*sizeof(int));

	scanf("%d", &v[1]);
	printf("%d\n", v[1]);

}
