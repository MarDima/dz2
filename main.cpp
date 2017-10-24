

#include <stdio.h>
#include <iostream>
#include <stdlib.h>

int main()
{
    int choice;
     int k[50];
     for(int i = 0; i<51; i++)
     {
         k[i] = rand()% 10;
         if (k[i] % 2 != 0)
         {
             printf("%d\n ", k[i]);
         }
     }

    scanf("%d", &choice);
    printf("%d\n ", choice);



    switch (choice)
    {


        case 1:
            for(int i = 15; i<50; i++)
            {
              printf("%d\n ", k[i]);
            }
            break;

        case 2:
            for(int i = 20; i<40; i=i+2)

            {
                for(int j=0;j<i;j++)
                    std::cout<<' ';
                std::cout<<k[i]<< std::endl;
             //   printf("%d\n ", k[i]);
            }
            break;

        case 3:
            for(int i = 50; i>24; i--)
            {
                printf("%d", k[i]);
            }
            break;

    }

    return 0;
}