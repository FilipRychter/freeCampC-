#include <iostream>

#define MAX 100

void indeksowanie_tablicy(int x, int * tab);
void zerowanie_tablicy(int x, int * tab);
void wypisz_tablice(int * tab);
void mod_tablicy(int x, int * tab);
int main(){


int tab[6] = {0,-2,-4,-5,0,0};
unsigned int x; 
std::cout << "na ilu komurkach wykonc operacje: ";
std::cin >> x;

// for(int i = 0 ; i < 6;i++){
// std::cout << tab[i] <<  std::endl;
// }


mod_tablicy(x,tab);
wypisz_tablice(tab);
return 0;
}


void indeksowanie_tablicy(int x, int * tab){

for(int i = 0 ; i < x;i++){
    *(tab + i) = i;
}
}

void zerowanie_tablicy(int x, int * tab){
for(int i = 0 ; i < x;i++){
    *(tab + i) = 0;

}
}
void wypisz_tablice(int * tab){
for(int i = 0 ; i < sizeof(tab);i++){
    std::cout << *(tab+i);
}
std::cout << "\n----------------\n";
}

void mod_tablicy(int x, int * tab){

void mod_tablicy(int x, int * tab);

for(int i = 0 ; i < x;i++){
    if(tab[i] < 0){
    tab[i] = (-1 * tab[i]);
    std::cout << "iteracja\n";
    }
}
}  