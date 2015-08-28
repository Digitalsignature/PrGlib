#include <iostream>
#include "PrGlib.h"

using namespace std;
#define _TIME int starts,finishs;
#define STARTS_TIME starts=clock();
#define FINISHS_TIME finishs=clock(); cout<<(double)(finishs-starts)/CLOCKS_PER_SEC<<endl;

int main()
{
    PrGlib genprime;
    genprime.PrG_set_size(3072);
    _TIME
    while(true)
    {
        STARTS_TIME
        genprime.PrG_renew();
        cout<<genprime.PrG_generate_strong_prime().get_str()<<endl;
        FINISHS_TIME
    }
    return 0;
}
