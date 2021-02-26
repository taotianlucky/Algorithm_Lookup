#include <stdio.h>
int Search(int a[],int n,int k);
int main() {

	int a[] = { 1,3,2,6 };

	printf("%d\n",Search(a,4,2));
	getchar();
}
/*****************************************************
* Name: 直接查找
* 
*****************************************************/
int Search(int a[], int n, int k) {
	int i;
	for (i = 1; i <= n; ++i) {
		if (a[i] == k) {
			return i;
		}
	}
	return 0;
}
