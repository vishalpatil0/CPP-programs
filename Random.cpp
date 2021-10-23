#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
int random(int lower_bound, int upper_bound)
{
    srand(time(0));
    return rand()%upper_bound+lower_bound;
}
