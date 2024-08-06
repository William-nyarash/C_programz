#include<stdio.h>
 main()
{
    FILE*llale;
    llale=fopen("ratewe.txt","w");
    fprintf(llale,"My name is William Nyaranga\n");
    fprintf(llale,"Am  twenty years old\n");
    fprintf(llale," I currently stay in Juja\n");
    fprintf(llale,"Thats all\n");
    fclose(llale);
    return 0;
}

