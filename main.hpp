//
#include <iomanip>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
using namespace std;

int getRandom(void);
int getClosestMed(int, int, int);

int getRandom(void)
{
    // TODO
    return (rand() % 100);  
}

int getClosestMed(int rdnum1, int rdnum2, int rdnum3)
{
    // TODO
    int mean = (rdnum1 + rdnum2 + rdnum3) / 3.0;
    int closest;
    int temp1 = mean - rdnum1;
    int temp2 = mean - rdnum2;
    int temp3 = mean - rdnum3;   

    if(abs(temp1) < abs(temp2) & abs(temp3)){
        closest = rdnum1;
    }
    else if(abs(temp2) < abs(temp1) & abs(temp3)){
        closest = rdnum2;
    }
    else if(abs(temp3) < abs(temp2) & abs(temp1)){
        closest = rdnum3;
    }
    return closest; 
}
