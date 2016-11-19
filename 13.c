/*
Program13
题目：打印出所有的“水仙花数”，所谓“水仙花数”是指一个三位数，其各位数字立方和等于该数
　　　 本身。例如：153是一个“水仙花数”，因为153=1的三次方＋5的三次方＋3的三次方。
1.程序分析：利用for循环控制100-999个数，每个数分解出个位，十位，百位。
2.程序源代码：*/

#include <stdio.h>

int main(int argc, char *argv[]){


    int i;

    for(i = 0; i < 1000; i ++){
    
        int a = i/100;
        int b = (i/10)%10;
        int c = i%10;
        if(a*a*a + b*b*b +c*c*c == i){
        
            printf("the shuixianhua is %d\n", i);

        }

    }


    return 0;

    


}
