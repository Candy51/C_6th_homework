#include <stdio.h>
int main()
{
	char num;
	int i;
	printf("============����===========\n");
	printf("char:0 ========> decimal:48\n");
	printf("���ڸ� ���ڷ� �Է¹޾� ���ڸ� ũ�⸸ŭ ������ ���!\nEX)�Է�:2 => ���:2 2\n");
	printf("������ ���� ������ ���ڷ� �Է��ϼ���\n");
	while ((num = getchar()) !=EOF)
	{
		
		for (i = 1; i <= num - 48; i++)//�ƽ�Ű�ڵ�ǥ ���
		{
			printf("%2c", num);
		}
	}
	if ((num = getchar()) == EOF)
		printf("�����մϴ�\n");
	return 0;
	
}