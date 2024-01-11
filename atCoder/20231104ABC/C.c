#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int jugde3_3(char *str[], int start_i, int start_j)
{
	int check[9]= {0, 0, 0, 0, 0, 0, 0, 0, 0};

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			check[str[start_i + i][start_j + j] - '0' - 1]++;
		}
	}
	for (int i = 0; i < 9; i++) {
		if (check[i] == 0 || check[i] > 1) {
			return (0);
		}
	}
	return (1);
}

int jugde(char *str)
{
	int check[9]= {0, 0, 0, 0, 0, 0, 0, 0, 0};

	bzero(check, 10); //checkがポインタだった時の名残で要らない
	for (int i = 0; i < 9; i++) {
		check[str[i] - '0' - 1]++;
	}
	for (int i = 0; i < 9; i++) {
		if (check[i] == 0 || check[i] > 1)
			return (0);
	}
	return (1);
}

int main(void)
{
	char **str;

	str = (char **)malloc(sizeof(char*) * 10);
	for (int i = 0; i < 10; i++) {
		str[i] = (char *)malloc(sizeof (char) * 10);
		str[i][9] = '\0';
	}
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			scanf("%s", &str[i][j]);
		}
	}
	for (int i = 0; i < 9; i++) {
		if (jugde(str[i]) == 0) {
			printf("No\n");
			return (0);
		}
	}

	for (int i = 0; i < 9; i++) {
	int check[9]= {0, 0, 0, 0, 0, 0, 0, 0, 0};
		for (int j = 0; j < 9; j++) {
			check[str[j][i] - '0' - 1]++;
		}
		for (int i = 0; i < 9; i++) {
			if (check[i] == 0 || check[i] > 1) {
				printf("No\n");
				return (0);
			}
		}
	}

	for (int i = 0; i < 9; i = i + 3) {
		for (int j = 0; j < 9; j = j + 3) {
			if (jugde3_3(str, i, j) == 0) {
				printf("No\n");
				return (0);
			}
		}
	}
	printf("Yes\n");
	return (0);
	}