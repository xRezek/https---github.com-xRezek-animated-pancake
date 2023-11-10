#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int tab[] = { 45,76,23,456,3,65,221,46,84,10,71 };
    int min = 0;

    cout << "Before:" << endl;
    for (int i = 0; i <sizeof(tab) / sizeof(int); i++) {
        cout << tab[i] << " ";
    }
 
        for (int i = 0; i <= sizeof(tab) / sizeof(int); i++) {
            min = i;
            for (int j = i + 1; j < sizeof(tab) / sizeof(int); j++) {
                if (tab[j] < tab[min])
                    min = j;
            }
            if (i != min) {
                swap(tab[i], tab[min]);
            }
        }

    cout << endl << "After:" << endl;
    for (int i = 0; i < sizeof(tab) / sizeof(int); i++) {
        cout << tab[i] << " ";
    }
}
