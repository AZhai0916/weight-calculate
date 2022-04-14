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
		printf("請輸入第%d天的體重: ",day);
		scanf("%f",&weight);

		total+=weight;
		
		ch=getch();
		(int) ch;
		if(ch==107)
			break;
		
		day++;
	}

	total/=day;
	
	printf("%d天的平均體重為:%.2f公斤.\n",day,total);
	
	system("pause");
	return 0;
}
