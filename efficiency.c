#include<stdio.h>
#include<math.h>
#include<stdlib.h>
struct player{
      char name[50];
      long long int score[5];
    };
int main()
{
    struct player player,player2;
    scanf("%s",player.name);
    int i;
    double sum = 0,SD1=0;
    for(i=0;i<5;i++){
        scanf("%lld",&player.score[i]);
        sum = sum + player.score[i];
    }
    sum = sum/5;
    for(i=0;i<5;i++){
        SD1 = SD1 + (sum-player.score[i])*(sum-player.score[i]);
    }
    SD1 = sqrt(SD1/4);
    scanf("%s",player2.name);
    sum = 0;
    double SD2=0;
    for(i=0;i<5;i++){
        scanf("%lld",&player2.score[i]);
        sum = sum + player2.score[i];
    }
    sum = sum/5;
    for(i=0;i<5;i++){
        SD2 = SD2 + (sum-player2.score[i])*(sum-player2.score[i]);
    }
    SD2 = sqrt(SD2/4);
    if(SD1>SD2){
        printf("The more consistant player is %s",player2.name,SD2,SD1);
    }
    else if(SD1<SD2){
        printf("The more consistant player is %s",player.name,SD1,SD2);
    }
    else{
        printf("Both the players are equally consistant");
    }

    return 0;
}