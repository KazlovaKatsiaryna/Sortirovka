#include <iostream>
#include <cstring>
#include <fstream>
#include "Sorting.h"
#include <iomanip>
using namespace std;
const int n = 7;

int main()
{
    juv a[n];
    vvod(a);
    output(a);
    cout<<endl;
    sortprice(a);
    output(a);
    sortname(a);
    output(a);
    sortdate(a);
    output(a);
    sortsurname(a);
    output(a);
    return 0;
}
