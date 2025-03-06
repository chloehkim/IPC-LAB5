#include <stdio.h>

struct Lab5
{
    int apple;
    char orange[6];
};

int main(void){
    struct Lab5 one = {1, "Tnjmf"};
    struct Lab5 two = {2, "cpf"};
    struct Lab5 three = {3, "vkloh"};
    int i;

    printf("%d - %s\n", one.apple, one.orange);
    printf("%d - %s\n", two.apple, two.orange);
    printf("%d - %s\n", three.apple, three.orange);
//아스키 코드 사용하는 것 숫자로 변환해서 수식하고 다시 문자로 변환
    for(i =0; one.orange[i] !='\0'; i++)
    { one.orange[i] -= one.apple;}

    for(i=0; two.orange[i] !='\0'; i++)
    { two.orange[i] -= two.apple;}

    for(i=0; three.orange[i] !='\0'; i++)
        {three.orange[i] -= three.apple;}

        printf("%s %s %s\n", one.orange, two.orange, three.orange);

        return 0;
    }