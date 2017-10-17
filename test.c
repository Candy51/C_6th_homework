#include <stdio.h>
int main()
{
	char num;
	int i;
	printf("============참고===========\n");
	printf("char:0 ========> decimal:48\n");
	printf("숫자를 문자로 입력받아 숫자를 크기만큼 개수로 출력!\nEX)입력:2 => 출력:2 2\n");
	printf("임의의 양의 정수를 문자로 입력하세요\n");
	while ((num = getchar()) !=EOF)
	{
		
		for (i = 1; i <= num - 48; i++)//아스키코드표 사용
		{
			printf("%2c", num);
		}
	}
	if ((num = getchar()) == EOF)
		printf("종료합니다\n");
	return 0;
	
}