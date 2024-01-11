#include <stdio.h>

#define hasA 1
#define hasB 2
#define YES 3

int main(void)
{
	char str[128];
	int	len;
	int	flag = 0;

	scanf("%d", &len);
	scanf("%s", str);

	for(int i = 0; i < len; i++) {
		if (flag == hasA && str[i] == 'b') {
			flag = YES;
			break;
		}
		if (flag == hasB && str[i] == 'a') {
			flag = YES;
			break;
		}
		if (str[i] == 'a') {
			flag = hasA;
		} else if (str[i] == 'b') {
			flag = hasB;
		} else {
			flag = 0;
		}
	}
	if (flag == YES) {
		printf("Yes");
	} else {
		printf("No");
	}
	return 0;
}