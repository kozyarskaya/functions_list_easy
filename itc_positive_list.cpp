#include "easy_list.h"

int itc_positive_list(const vector <int> &mass){
    int kol = 0;
    for (int i = 0; i < mass.size(); i ++){
        if (mass[i] > 0)
             kol ++;
    }
    return kol;
}
