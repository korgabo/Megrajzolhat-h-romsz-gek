#include <stdio.h>
#include <stdbool.h>

bool valid_triangle(int oldala, int oldalb, int oldalc){
    if (oldala + oldalb > oldalc && oldala + oldalc > oldalb && oldalb + oldalc > oldala){
        return 1;
    }
    else{
        return 0;
    }
    
}


int main()
{
    printf("Adja meg a háromszög A oldalát: ");
    int a;
    do{
    scanf("%d",&a);
    }while(a<=0);
        printf("A háromszög A oldala: %d\n",a);
        printf("Adja meg a háromszög B oldalát: ");
    int b;
    do{
    scanf("%d",&b);
    }while(b<=0);
    printf("A háromszög B oldala: %d\n",b);
    printf("Adja meg a háromszög C oldalát: ");
    int c;
    do{
    scanf("%d",&c);
    }while(c<=0);
     printf("A háromszög C oldala: %d\n",c);
    bool szerkesztheto = valid_triangle(a,b,c);
    if(szerkesztheto == 1){
        printf("Szerkeszthető");
    }
    else{
        printf("Nem szerkeszthető");
    }
    return 0;
}
