#include<stdio.h>
#include<time.h>
#include<string.h>
#include<stdlib.h>
char * compa;
char person[6];
void comp(){
    char * str [] = {"rock","paper","scissor"};
    srand(time(0));
    compa = str[rand()%3];
}
void check(){
    if(strcmp(compa,person)==0){
        printf("Both same");
    }
    else if((strcmp(person,"rock")==0 && strcmp(compa,"scissor")==0)||(strcmp(person,"paper")==0&&strcmp(compa,"rock")==0)||(strcmp(person,"scissor")==0&&strcmp(compa,"paper")==0)){
        printf("Player Win");
    }
    else if((strcmp(person,"scissor")==0 && strcmp(compa,"rock")==0)||(strcmp(person,"rock")==0 && strcmp(compa,"paper")==0)||(strcmp(person,"paper")==0&&strcmp(compa,"scissor")==0)){
        printf("Computer wins");
    }
}
void takeInput(){
    scanf("%s",person);
}

int main(int argc, char**argv){
    comp();
    printf("%s\n",compa);
    takeInput();
    
    check();
    return 0;
}