#include <time.h>
#include <stdlib.h>


float total;
int a, b, c, d;
extern float money[12][7][10][8];

float sumTotal()
{
    for (a = 0; a < 12; a++) {
        for (b = 0; b < 7; b++) {
            for (c = 0; c < 10; c++) {
                for (d = 0; d < 8; d++) {
                    total += money[a][b][c][d];
                 }
             }
        }
    }


}
float sumWeekday(float day)
{
    b = day;
    for (a = 0; a < 12; a++) {
            for (c = 0; c < 10; c++) {
                for (d = 0; d < 8; d++) {
                    total += money[a][b][c][d];
                 }
             }
    }

}
float sumEmployee(float employee)
{
    d = employee;
    for (a = 0; a < 12; a++) {
        for (b = 1; b < 6; b++) {
            for (c = 0; c < 10; c++) {
                 total += money[a][b][c][d];
             }
        }
    }
    
}