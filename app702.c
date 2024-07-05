#include <stdio.h>
void main(){
    int score;
    printf("Please enter score:");
    scanf("%d",&score); 
    if(score >= 80 && score<=100)
    printf("Grafe A:%d\n",score);
    if (score >= 75 && score<=79)
     printf("Grafe B+:%d\n",score);
    else if(score >= 70 && score <= 79)
        printf("Grade B:%d\n",score);
    if (score >= 65 && score<=69)
        printf("Grafe C+:%d\n",score);
     else if(score >= 60 && score <=69)
        printf("Grade C:%d\n",score);
    if (score >= 55 && score<=59)
        printf("Grade D+:%d\n",score);
     else if(score >=50 && score <= 59)
        printf("Grade D:%d\n",score);
     else if(score >=0 && score <= 49)
        printf("Grade F:%d\n",score);
    else
    printf("ERROR\n");
    printf("Finish");
}
