/* weight caculate v.2. */
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main(void)
{
	int day=1;
	float weight,total=0.0f;
	char ch;
	
	while(1)
	{
		printf("�п�J��%d�Ѫ��魫: ",day);
		scanf("%f",&weight);

		total+=weight;
		
		ch=getch();
		(int) ch;
		if(ch==107)
			break;
		
		day++;
	}

	total/=day;
	
	printf("%d�Ѫ������魫��:%.2f����.\n",day,total);
	
	system("pause");
	return 0;
}
