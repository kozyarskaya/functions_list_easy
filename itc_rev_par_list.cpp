#include "easy_list.h"

void itc_rev_par_list(vector <int> &mass){
    int c = 0;
    for (int i = 1 ; i < mass.size(); i += 2){
        c = mass[i];
        mass[i] = mass[i - 1];
        mass[i - 1] = c;
    }
}
