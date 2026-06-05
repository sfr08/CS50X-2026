#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
int score1=0,score2=0,i,j,n,n1,n2;
char word1[100],word2[100];

printf("Player1: ");
scanf("%s",word1);

printf("Player2: ");
scanf("%s",word2);

for (int i = 0, n = strlen(word1); i < n; i++)
    {
        word1[i]= toupper(word1[i]);
    }
i=0,n=0;
for (int i = 0, n = strlen(word2); i < n; i++)
    {
        word2[i]=toupper(word2[i]);
    }
i=0,n=0;

char alpha[]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
int score[]={1,3,3,2,1,4,2,4,1,8,5,1,3,1,1,3,10,1,1,1,1,4,4,8,4,10};

for (int i = 0, n1 = strlen(word1); i < n1; i++)
    {
        for (int j= 0, n2 = strlen(alpha); j < n2; j++)
            {
                if(word1[i]==alpha[j]){
                    score1=score1+score[j];
                }
            }}

i=0,j=0,n1=0,n2=0;

for (int i = 0, n1 = strlen(word2); i < n1; i++)
    {
        for (int j= 0, n2 = strlen(alpha); j < n2; j++)
            {
                if(word2[i]==alpha[j]){
                    score2=score2+score[j];
                }
            }}


if(score1>score2){
    printf("Player 1 wins!\n");
}
else if(score1<score2){
    printf("Player 2 wins!\n");
}
else{
    printf("Tie\n");
}

return 0;
}
