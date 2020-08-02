#include<stdio.h>
#include<conio.h>
#include<string.h>
struct cricket
{
	char name[100];
	char team_name[100];
	int batting_average;
	
	};
void main()
{
	struct cricket player[200];
	int i,n;
	char ch,team[100];
	printf("how many players?\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\n INPUT THE NAME OF THE PLAYER %d\n:",i+1);
		scanf("%s",player[i].name);
		printf("\n INPUT THE TEAM NAME OF THE PLAYER %d:",i+1);
		scanf("%s",player[i].team_name);
		printf("\n INPUT THE BATTING AVERAGE OF THE PLAYER %d:",i+1);
		scanf("%d",&player[i].batting_average);
		
	}
	printf("==============================================================\n");
	printf(" PLAYER'S  NAME  COUNTRY  BATTING AVERAGE \n");
	printf("==============================================================\n");
	for(i=0;i<=n;i++)
	{
		printf("%10s%10s%10d\n",player[i].name,player[i].team_name,player[i].batting_average);
		
	}
	
	read:
	printf("\n\n INPUT FOR WHICH TEAM YOU WANT TO LIST:");
	scanf("%s",team);
	printf("\n                   %s                \n",team);
	printf("==========================================================\n");
	printf("PAYER'S NAME    BATTING    AVERAGE    \n");
	printf("==========================================================\n");
	for(i=0;i<=n;i++)
	printf("%10s%10s%10d\n",player[i].name,player[i].team_name,player[i].batting_average);	
	printf("\n\n DO YOOU WANT TO LIST ANY ANOTHER TEAM?(Y/N)");
	ch=getch();
	if(ch=='Y'||ch=='y')
        goto read;
		getch();	
	
	
}	
