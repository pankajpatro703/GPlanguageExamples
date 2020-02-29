#include<stdio.h>
#include<string.h>
struct player
{
	char name[10], team_name[10];
	int avg;
};

void main()
{
	struct player p[10],temp;
	int n,i,j;
	printf("Enter no. of players: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter player name: \n");
		scanf("%s",p[i].name);
		printf("Enter team name: ");
		scanf("%s",p[i].team_name);
		printf("Enter batting average of player: ");
		scanf("%d",&p[i].avg);
	}
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(p[i].avg<p[j].avg)
			{
				temp=p[i];
				p[i]=p[j];
				p[j]=temp;
			}
		}
	}
	printf("After sorting:\n");
	printf("Player name\t Team name\t Batting average\n");
	printf("-------------------------------------------------\n");
	for(i=0;i<n;i++)
		printf("%s\t\t %s\t\t %d\n",p[i].name,p[i].team_name,p[i].avg); 
}
