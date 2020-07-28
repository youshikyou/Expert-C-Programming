#include <time.h>
#include <stdio.h>


int main() {

	time_t biggest = 0x7FFFFFFF;
	printf("biggest  = %s \n", ctime(&biggest));  //local time
	printf("biggest  = %s \n", asctime(gmtime(&biggest))); //UTC time

	/*Page 38*/
	int *q = 10;
	int p, apple;
	p = 10 * sizeof(*q);
	apple = sizeof(int) *p;  // 这里是sizeof int类型之后乘以 p。
	printf("apple is %d \n", apple);
	printf("%d", sizeof(int));

	return 0;
}
