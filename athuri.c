#include<stdio.h>
main()
{
    float size;
    FILE *llale;
    llale=fopen("me.txt","w");
	printf("Enter the  size =");
	scanf("%f",&size);
	if(size > 5)
	{
    printf("price per acre is 1.2M \n");
    printf("you will pay ksh %.2f M \n",size*1.2);	
	}
	else
	{
    printf("price per acre is 1.48M \n");
    printf("you will pay ksh %.2f M \n",size*1.48);
	}
	fclose(llale);
	return 0;
}
