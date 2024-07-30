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
void  printsetook(struct setook);
void  readsetook(struct  setook *setbok);
int main(void)
{
    struct setook me;
    readsetook(&me);
    printsetook(me);    
    return 0;
}
void readsetook(struct setook *setbok)
{
    printf("Enter book name:");
    scanf("%s",(*setbok).bookn);
    printf("Enter author's name :");
    scanf("%s",(*setbok).author);
    printf("Enter publisher's name :");
    scanf("%s",(*setbok).publisher);
    printf("Enter book edition :");
    scanf("%s",(*setbok).edition);
    printf("Enter your best actor's name :");
   scanf("%s",(*setbok).favactor);
    printf("Moral lesson learned :");
    scanf("%s",(*setbok).moral);
}
void printsetook(struct setook setbok)
{
    FILE *apolina;
    apolina=fopen("setbook2.txt","w");
    fprintf(apolina,"Book name :%s\n",setbok.bookn);
    fprintf(apolina,"Author    :%s\n",setbok.author);
    fprintf(apolina,"PUblisher :%s\n",setbok.publisher);
    fprintf(apolina,"Edition   :%s\n",setbok.edition);
    fprintf(apolina,"Best actor:%s\n",setbok.favactor);
    fprintf(apolina,"Moral     :%s",setbok.moral);
    fclose(apolina);  
}
