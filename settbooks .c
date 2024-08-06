#include<stdio.h>
#include<string.h>
struct setook{
    char bookn[40];
    char edition[7];
    char favactor[40];
    char publisher[56];
    char moral[256];
    char author[79];
}setbok;
int main()
{
    printf("Enter book name:");
    gets(setbok.bookn);
    printf("Enter author's name :");
    gets(setbok.author);
    printf("Enter publisher's name :");
    gets(setbok.publisher);
    printf("Enter book edition :");
    gets(setbok.edition);
    printf("Enter your best actor's name :");
    gets(setbok.favactor);
    printf("Moral lesson learned :");
    gets(setbok.moral);
    FILE *apolina;
    apolina=fopen("setbook.txt","w");
    fprintf(apolina,"Book name :%s\n",setbok.bookn);
    fprintf(apolina,"Author    :%s\n",setbok.author);
    fprintf(apolina,"PUblisher :%s\n",setbok.publisher);
    fprintf(apolina,"Edition   :%s\n",setbok.edition);
    fprintf(apolina,"Best actor:%s\n",setbok.favactor);
    fprintf(apolina,"Moral     :%s",setbok.moral);
    fclose(apolina);
    return 0;
}
