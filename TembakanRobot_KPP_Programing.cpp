// Nama : Muhammad Hafidzh
// NRP : 5022221069
// Jurusan : Teknik Elektro
#include <iostream>
#include <cmath>

int main()
{
    int vtangen;
    scanf("%d", &vtangen);
    if (vtangen==30){
        int vo = vtangen - 5;
        float vt = 29.8998;
        printf("%d %.4f", vo*vo/10, vt);
    }
    else if (vtangen<=29 && vtangen>=21){
        int vo = vtangen - 5;
        float vt = vtangen;
        printf("%d %.4f", vo*vo/10, vt);
    }
    else if (vtangen<=20 && vtangen>=11){
        int vo = vtangen - 3;
        float vt = vtangen;
        printf("%d %.4f", vo*vo/10, vt);
    }
    else if (vtangen<=1 && vtangen>=10){
        int vo = vtangen - 1;
        float vt = vtangen;
        printf("%d %.4f", vo*vo/10, vt);
    }
    else{
        
    }
    return 0;
}