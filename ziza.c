/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int num;
    scanf("%d", &num);
    int i= 1;
    for(int index = 1; index <= num; index += 1)
    {
        for(int ind = 1; ind <= num; ind += 1)
        {
            //printf("%d ", i++);
            if(index%2 != 0){
                printf("%d ", i++);
            }
            else
            {
                printf("%d ", i+(num-1));
                --i;
            }
            
        }
        printf("\n");
        if(index%2==0)
        i += (num*2);
    }

    return 0;
}

