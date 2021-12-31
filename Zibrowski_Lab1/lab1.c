#include <stdio.h>
#include "lab1.h"



float money[12][7][10][8];
  
int main() {
        char sel;

        srand(time(NULL));
        for (a = 0; a < 12; a++) {
            for (b = 0; b < 7; b++) {
                for (c = 0; c < 10; c++) {
                    for (d = 0; d < 8; d++) {
                    float n = (float)(rand() % 1000 + 1);
                    float m = (float)rand() / RAND_MAX;
                    money[a][b][c][d] = n + m;
                }
            }
        }
    }
        
        while (1) {
                printf("MENU\n");
                printf("=====\n");
                printf("1) Total sum\n");
                printf("2) Total weekday\n");
                printf("3) Total employee\n");
                printf("4) Exit\n");
                printf("Enter selection : ");
                sel = getchar();
                getchar();
                
                printf("The selection was %c\n", sel);

                switch(sel)
                {
                    case '1':
                        total = sumTotal();
                        printf("Total = %f \n", total );
                        break;
                    case '2':
                        total = sumWeekday(3);
                        printf("Wednesday total = %f \n", total );
                        break;
                    case '3':
                        printf("Enter employee number:");
                        float employee = getchar();
                        employee = employee - 48;
                        getchar();
                        if(employee < 1 || employee >8)
                        {
                            printf("Invalid employee number\n");
                            printf("Enter employee number:");
                            float employee = getchar();
                            employee = employee - 48;
                            getchar();
                        }
                        total = sumEmployee(employee);
                        printf("Employee total = %f \n", total );
                        break;
                    case '4':
                        return 0;
                    default:
                        printf("Invalid entry\n");
                        continue;
                }
                
        }
}




