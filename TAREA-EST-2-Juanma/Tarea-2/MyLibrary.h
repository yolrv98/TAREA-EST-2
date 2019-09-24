#ifndef MYLIBRARY_H
#define MYLIBRARY_H

//------------------------------------------//
#include <math.h> 
#include <string>
#include <sstream>
#include <fstream>
#include <iostream>

using namespace std;
//------------------------------------------//

//------------------------------[CONVERTIDORES]-------------------------------//

int str2int(string pData) {
    stringstream conv(pData);
    int temp = 0;
    conv >> temp;
    return temp;
}

string int2str(int pData) {
    string conv = to_string(pData);
    return conv;
}

float str2float(string str) {
    float val = stof(str);
    return val;
}

//------------------------------[N\ CONVERTIDORES]----------------------------//

#endif /* MYLIBRARY_H */

