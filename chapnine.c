#include<stdio.h>
#include<string.h>
struct emp{
    int code;
    int sal;
    char nam[30];
};
typedef struct empl{
    int code;
    float sal;
    char name [30];
} emp;
void show(emp e){
    struct empl * ptr = &e;
    printf("%s\n",ptr->name);
    printf("%f\n",ptr->sal);
    printf("%d\n",ptr->code);
    ptr->code = 8001;
    printf("%d\n",ptr->code);
}
int main(){
    // struct emp e1;
    // e1.code = 110;
    // e1.sal = 90000000;
    // strcpy(e1.nam,"name");
    // printf("%d\n",e1.code);
    // printf("%s\n",e1.nam);
    // printf("%d\n",e1.sal);
    // printf("%.9f");
    struct empl el;
    // scanf("%d",&el.code);
    // fflush(stdin);
    // scanf("%f",&el.sal);
    // fflush(stdin);
    // gets(el.name);
    // printf("%d\n",el.code);
    // printf("%.3f\n",el.sal);
    // printf("%s\n",el.name);
    // char arr [] = "name this is";
    // char * ptr = el.name;
    // char * pt = arr;
    // while(*pt!='\0'){
    //     *ptr = *pt;
    //     pt++;
    //     ptr++;
    // }
    // *ptr = '\0';
    // printf("%s",el.name);
    // struct empl face[10];
    // // face[0].code = 100;
    // // face[0].sal = 66.3434;
    // // char * str = "homer";
    // // char * ptr = face[0].name;
    // // while(*str!='\0'){
    // //     *ptr = *str;
    // //     ptr++;
    // //     str++;
    // // }
    // // *ptr = '\0';
    // face[1].code = 101;
    // face[1].sal = 16.0000;
    // strcpy(face[1].name,"somename");
    // struct empl emp ={100,100.23,"hello"};
    // // printf("%d\n",emp.code);
    // // printf("%f\n",emp.sal);
    // // printf("%s\n",emp.name);
    // struct empl *ptr = &emp;
    // printf("%s\n",(*ptr).name);
    // printf("%f\n",ptr->sal);
    emp em ={100,100.32,"hellp"};
    show(em);
    return 0;
}