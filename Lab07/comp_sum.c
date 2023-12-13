#include <stdio.h>

struct comp
    {
        float real;
        float imag;
    };

void compsum(struct comp c1, struct comp c2, struct comp sum)
{
    sum.real = c1.real + c2.real;
    sum.imag = c1.imag + c2.imag;
    printf("c1 + c2 = %.1f + %.1fi",sum.real,sum.imag);
}

int main()
{
    struct comp c1,c2,sum;
    printf("c1 = a + bi, enter a and b:\n");
    scanf("%f %f",&c1.real,&c1.imag);
    printf("c2 = a + bi, enter a and b:\n");
    scanf("%f %f",&c2.real,&c2.imag);
    compsum(c1,c2,sum);
    return 0;
}

/*Output
c1 = a + bi, enter a and b:
1
3
c2 = a + bi, enter a and b:
2
4
c1 + c2 = 3.0 + 7.0i*/