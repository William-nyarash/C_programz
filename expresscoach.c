#include<stdio.h>
#include<string.h>
struct bus{
    char name[50];
    long int Idnum;
    char tiketi;
    char lok[80];
    char dest[70];
    int  fare;
    char tiketId;
    char seatno[3];
    int yr[4];
    int month[2];
    int date[2];
    float tim;
    
};
void  printbus(struct bus);
void readbus(struct bus *abiria);
int main (void)
{
    struct bus easy;
    readbus(&easy);
    printbus(easy);
    return 0;
}
void readbus(struct bus *abiria)
{
    printf("enter your name:");
    scanf("%s",&(*abiria).name);
    printf("Enter your current location:");
    scanf("%s",&(*abiria).lok);
    printf("Enter your destination:");
    scanf("%s",&(*abiria).dest);
    printf("Enter your prefered seat number:");
    scanf("%s",&(*abiria).seatno);
    printf("Enter your Id number:");
    scanf("%d",&(*abiria).Idnum);
    printf("Enter date of travell:");
    scanf("%d/%d/04d",&(*abiria).date,&(*abiria).month,&(*abiria).yr);
    printf("Enter time of travel");
    scanf("%f",&(*abiria).tim); 
}
void printbus(struct bus abiria)
{
    FILE *problem;
    problem=fopen("expresscoach.txt","w");
    fprintf(problem,"ticket Id:eas%sy%dware \n",abiria.seatno,abiria.Idnum);
    fprintf(problem,"Traveller Name:%s \n",abiria.name);
    fprintf(problem,"Traveller's Id:%d \n");
    fprintf(problem,"Ticket number:Ap%dAb%ddYU \n",abiria.month,abiria.Idnum);
    fprintf(problem,"Seat number:%s \n",abiria.seatno);
    fprintf(problem,"Current location:%s \n",abiria.lok);
    fprintf(problem,"Destination:%s \n",abiria.dest);
    fprintf(problem,"fare payable:%d \n",1550);
    fprintf(problem,"Date :%d/%d/04d \n",abiria.date,abiria.month,abiria.yr);
    fprintf(problem,"departure time:%.2f \n",abiria.tim);
    fclose;
}

