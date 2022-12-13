#include <stdio.h>

extern int tong(int x, int y);
extern int hieu(int x, int y);
extern int max(int x, int y);


int main(int argc, char const *argv[])
{
    
    printf("Tong = %d", tong(2,3));

    printf("\nHieu = %d", tong(5,3));
    

    printf("\nmax = %d", max(5,7));

    printf("\nHello World!!!\n");
    
    return 0;
}
