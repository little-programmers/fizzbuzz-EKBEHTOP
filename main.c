#include <stdio.h>

void fizzbuzz (int n,int m) {
	for (int i = n; i <= m; i++) {

		if (i % 15 == 0) printf("fizzbuzz\n");
		else if (i % 3 == 0) printf("fizz\n");
		else if (i % 5 == 0) printf("buzz\n");
		else printf("%d\n",i);
		
	}
}

int main() {
	fizzbuzz(6, 36);
}