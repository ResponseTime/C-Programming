#include<stdio.h>
#include<string.h>
#include<stdbool.h>
#include<math.h>
typedef struct inf{
    char * str;
    int port;
}info;
void takeInfo(info * c){
    FILE * people = fopen("Info.txt","a");
    fprintf(people,"%s, ",c->str);
    fprintf(people,"%d, ",c->port);
    
}
int main(int argc, char**argv){
    // for(int i =1;i<argc;i++){
    //     printf("%s\n",argv[i]);
    // }
    // float po = M_PI;
    // printf("%0.4f",po);
    // FILE * fi = fopen("Read.md","w");
    // char str[34];
    // gets(str);
    // fprintf(fi,"%s",str);
    // fclose(fi);
    // FILE * pt = fopen("Read.md","r");
    // char st [34];
    // // int i =0;
    // // char c;
    // // while((c=fgetc(pt))!=EOF){
    // //     printf("%c",c);
    // // }
    // fgets(st,34,pt);
    // puts(st);
    // FILE * fi = fopen("three.txt","r");
    // int num;
    // for(int i =0;i<3;i++){
    //     fscanf(fi,"%d",&num);
    //     printf("%d\n",num);
    // }
    // FILE * mul = fopen("Multi.txt","w");
    // int num;
    // scanf("%d",&num);
    // for(int i =1;i<=10;i++){
    //     fprintf(mul,"%d X %d = %d\n",num,i,i*num);
    // }
    // FILE * cbc = fopen("cbc.txt","r");
    // FILE * cb = fopen("cb.txt","w");
    // char c;
    // while((c=fgetc(cbc))!=EOF){
    //     for(int i = 0;i<2;i++){
    //         fprintf(cb,"%c",c);
    //     }
    // }
    // while((c=fgetc(cbc))!=EOF){
    //     fprintf(cb,"%c",c);
    // }
    // info p1 = {"aayush",8009};
    // info p2 = {"mio",9000};
    // takeInfo(&p1);
    // takeInfo(&p2);
    // FILE * f = fopen("double.txt","r");
    // FILE * fi = fopen("double2.txt","w");
    // int num;
    // fscanf(f,"%d",&num);
    // fclose(f);
    // fprintf(fi,"%d",num*2);
    // fclose(fi);
    return 0;
}