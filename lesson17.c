#include <stdio.h>
#define Size 4


void printstring (const char * string)
{
	printf("%s\r\n", string);
	
}

void printA (const char **string)
{

	printf("City1: %s\r\n", string[0]);
	printf("City2: %s\r\n", string[1]);
	printf("City3: %s\r\n", string[2]);
	
}

int main (int argc, char **argv)
{

	printf("%d\r\n", argc);
	printf("\r\n");
	
	printf("%s\r\n", argv[0]);
	printf("%s\r\n", argv[1]);
	printf("%s\r\n", argv[2]);


	/*char hello1[] = { 'H', 'E', 'L', 'L', 'O', '1', '\0' };
	char hello2[] = "hello2";

	const char * hello3 = "hello3";
	const char * hello4 = "hello4";
	const char * states[] = { "Moscow", "New-York", "Kiev" };


	printf("\r\nHello1: %s\r\n", hello1);
	printf("Hello1 adress: %p\r\n", hello1);
	
	printf("\r\n");
	printf("Hello2: %s\r\n", hello2);
	printf("Hello2 adress: %p\r\n", hello2);
	
	printf("\r\n");	
	printf("Hello3: %s\r\n", hello3);
	printf("Hello3 adress: %p\r\n", hello3);
	
	printf("\r\n");	
	printf("Hello4: %s\r\n", hello4);
	printf("Hello4 adress: %p\r\n", hello4);

	hello4 = hello3;

	printf("\r\n");
	printf("Hello3 adress: %p\r\n", hello3);
	printf("Hello4 adress: %p\r\n", hello4);

	printf("\r\n");	
	printA(states);
	*/



	return 0;
}