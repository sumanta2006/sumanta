/* write a c program to implement of the structure of user defined data type using pointer*/
#include <stdio.h>
struct example
{
    int x;
    float *p;
};

int main() 
{
    struct example *s;
    struct example s1,s2;
    s1.x = 10;
    s1.p = &s1.x;
    s2=s1;
    printf("\n s1.x = %d,s1.p = %u,",s1.x,s1.p);
    s=&s2;
    printf("\n s1.x = %d,s1.p = %u",s->x,s->p);
    printf("\n s->x = %d,s->p = %u",(*s).x,(*s).p);
    return 0;
}
