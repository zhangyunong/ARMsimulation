#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define max32 2147483648
#define min32 4294967296
#define maxinstruction 1000
#define maxmemory 1000
#define ling32 "00000000000000000000000000000000"
int instype=0;  //指令类型，1为数据处理指令
char instruction[maxinstruction][100];
char memory[maxmemory][9];
char CPSR[33];
char constins[100][40];
int re[15];     //R0-PC
int line=0;     //指令条数
int main()
{
    initial();
    read();
    printf("%s\n",CPSR);
    return 0;
}
void read(){            //从文件中读取指令或者内存设置文件
    FILE *in,*out;
    in=fopen("test.txt","r");
    //out=fopen("result.txt","w");
    int i=0;
    while(!feof(in))
    {
        fgets(instruction[i],100,in);
        i++;
        line++;
    }
    printf("read success!\n");
}
void initial(){         //将各个寄存器值初始化化为0
    int i=0;
    strcpy(CPSR,ling32);
    for(i=0;i<16;i++){
        re[i]=0;
    }
}
int findinstruction(int n,char s[]){
    if(n==3){
        if(strcmp(s,"add")==0){
            return 1;
        }
        else return 0;
    }
    else if(n==4){

    }
    else if(n==5){

    }
    return 0;
}

void getIns(char s[]){

}
void error(int n){

}

void Data_processing_ins(){

}

void outInstruction(){
    int i=0;
    for(i=0;i<line;i++){
        printf("%s",instruction[i]);
    }
}


int zhixing(){
    int now=0;  //现在执行到的第几个命令
    while(now<line){

    }           //当命令存在时，依次执行
}
