#include<stdio.h>
struct patient{
	char name[34];
	int wardno ;
	int patNum;
	char disease[50];
	int charge;
	int days;
};
main ()
{
	struct patient msick;
	printf("Enter patient name:");
	gets(msick.name);
	printf("Enter patient Illness:");
	gets(msick.disease);
	printf("Enter patient number:");
	scanf("%d",&msick.patNum);
	printf("Enter ward number:");
	scanf("%d",&msick.wardno);
	printf("Enter days admitted:");
	scanf("%d",&msick.days);
	printf("Enter charges per day:");
	scanf("%d",&msick.charge);
	printf("***output**\n");
	FILE *djanabi;
djanabi= fopen("hospit.txt","r");
    fprintf(djanabi,"pateint details");
	fprintf(djanabi,"Name:%s\n",msick.name);
	fprintf(djanabi,"Number:%d\n",msick.patNum);
	fprintf(djanabi,"Disease:%s\n",msick.disease);
	fprintf(djanabi,"Ward number:%d\n",msick.wardno);
	fprintf(djanabi,"Bill:%d\n",msick.charge*msick.days);
	fprintf(djanabi,"WILL HOSPITAL CARES");
	fclose;
	return 0;
}

