#include "easy_list.h"

int itc_sl_list(const vector <int> &mass){
    int kol = 0;
    if (mass.size() > 0){
    for (int i = 1; i < mass.size(); i ++){
        if (mass[i] > mass[i - 1])
             kol ++;
    }
    }
    return kol;
}

