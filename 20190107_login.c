#include <stdio.h>
#include <stdlib.h>

#define SUCCESS 1
#define FAIL 2
#define LIMIT 3
int check(int id, int password);

int main(void)
{
	int id, password, result;

	while(1) {
		printf("id: ____\b\b\b\b");
		scanf("%d", &id);
		printf("pass: ____\b\b\b\b");
		scanf("%d", &password);
		result = check(id, password);
		if (result == SUCCESS) break;
	}
	printf("Login Success\n");
	return 0;
}

int check(int id, int password)
{
	static int super_id = 1234;
	static int super_password = 5678;
	static int try_count = 0;

	try_count++;
	if (try_count >= LIMIT) {
		printf("LIMIT OVER\n");
		exit(1);
	}

	if (id == super_id && password == super_password)
		return SUCCESS;
	else
		return FAIL;
}