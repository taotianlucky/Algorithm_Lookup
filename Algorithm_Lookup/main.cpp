#include <stdio.h>
int Search(int a[],int n,int k);
int main() {

	int a[] = { 1,3,2,6 };

	printf("%d\n",Search(a,4,2));
	getchar();
}
/*****************************************************************************
* Name: 顺序查找法 
* Func: 
* O(n)：
* 
*****************************************************************************/
int Search(int a[], int n, int k) {
	int i;
	for (i = 1; i <= n; ++i) {
		if (a[i] == k) {
			return i;
		}
	}
	return 0;
}

int Bsearch(int R[], int low, int high, int k) {
	int mid;
	while (low<=high) {
		mid = (low + high) / 2;
		if (R[mid] == k) {
			return mid;
		}else if (R[mid]>k) {
			high = mid - 1;
		}else {
			low = mid + 1;
		}
	}
	return 0;
}
