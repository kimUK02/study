#include <stdio.h>
enum Week {Sun=0,Mon,Tue,Wed,Thu,Fri,Sat};
int main(int argc, char const *argv[])
{
    int firstDay = Sat;
    int Days[3] = {30,31,30};

    printf("           2019\n");
    for(int i =0;i<3;i++){
        printf("             %d               \n",i+9);
        printf("  Sun Mun Tue Wed Thu Fri Sat\n");
        for(int i = 0;i<firstDay;i++){
            printf("%*s",4,"");
        }
        for(int j = 1; j<=Days[i];j++){
            printf("%4d",j);
            firstDay+=1;
            if(firstDay>6){
                firstDay = Sun;
                printf("\n");
            }
        }
        printf("\n\n");
    }

    return 0;
}

