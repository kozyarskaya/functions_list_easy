#include "easy_list.h"

void itc_super_shift_list(vector <int> &mass, int n){
    if (mass.size() > 0){
    if (n < 0){
        n = n * (-1);
        for (int i = 0; i < (n % mass.size()); i++){
            itc_lshift_list(mass);
        }
    }
    else{
        for (int i = 0; i < (n % mass.size()); i++){
            itc_rshift_list(mass);
        }
    }
    }
}
