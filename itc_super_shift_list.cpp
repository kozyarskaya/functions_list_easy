#include "easy_list.h"

void itc_super_shift_list(vector <int> &mass, int n){
    if (n < 0){
        n = n * (-1);
        for (int i = 0; i < n; i++){
            itc_lshift_list(mass);
        }
    }
    else{
        for (int i = 0; i < n; i++){
            itc_rshift_list(mass);
        }
    }
}
