#include <iostream>

#define MAX 10

void indeksowanie_tablicy(int x, int * tab);
int srednia_tablicy(int * tab);
int sum_tablicy(int * tab);
int sum_c_tablicy(int * tab);

void wypisz_tablice(int * tab);

int main(){


int * tab = new int[MAX];
std::cout << "tutaj wykonamy pare operacji na tablicy\n";

indeksowanie_tablicy(10,tab);
wypisz_tablice(tab);
std::cout << sum_tablicy(tab);
delete [] tab;
return 0;
}


int srednia_tablicy(int * tab){

    int sum;
    for(int i = 0 ; i < sizeof(tab);i++){
    sum += tab[i];
    }

    return sum/sizeof(tab);
}

int sum_tablicy(int * tab){

    int sum;
    for(int i = 0 ; i < sizeof(tab);i++){
    sum += tab[i];
    }

    return sum;
}

int sum_c_tablicy(int * tab){

    int sum;
    for(int i = 0 ; i < sizeof(tab);i++){
    sum += tab[i] * tab[i];
    }

    return sum;
}

void wypisz_tablice(int * tab){
for(int i = 0 ; i < sizeof(tab);i++){
    std::cout << *(tab+i);
}
std::cout << "\n----------------\n";
}

void indeksowanie_tablicy(int x, int * tab){

for(int i = 0 ; i < x;i++){
    *(tab + i) = i;
}
}