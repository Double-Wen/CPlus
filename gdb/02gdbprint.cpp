#include <stdio.h>
 
 
int func()
{
    int p = 0;
    int q = 0;
 
    for(p = 0; p < 5; p++)
    {
        q++;
        printf("p = %d\n", p);
        printf("q = %d\n", q);
    }
    return 0;
}
 
int main()
{
    int i = 1;
    i = i + 1;
    printf("func= %s, line= %d, i= %d\n", __func__, __LINE__, i);
    func();
    i++;
    printf("func= %s, line= %d, i= %d\n", __func__, __LINE__, i);
    return 0;
}
