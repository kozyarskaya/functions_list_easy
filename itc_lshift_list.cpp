#include "easy_list.h"

void itc_lshift_list(vector <int> &mass){
    int c = mass[0];
    for (int i = 1 ; i < mass.size(); i++){
        mass[i - 1] = mass[i];
    }
    mass[mass.size() - 1] = c;
}
