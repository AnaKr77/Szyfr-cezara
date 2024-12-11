#include <iostream>
using namespace std;

int i = 1, tab[31];
    
int main()
{
    int liczba;
    cin>>liczba;
    while (liczba) {
        tab[i++] = liczba % 2;
        liczba /= 2;
    }
    
    for (int j =0; j <i; j++) {
        if(tab[j]==1)
        {
            cout<<j<<" ";
        }
    }
}
