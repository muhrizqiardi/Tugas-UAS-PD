#include <string.h>
#include <math.h>
using namespace std;

// Konverter heksadesimal ke desimal
int h_ke_d(char heksadesimal[100])
{
    int hasil = 0;
    for (int i = 0; i < strlen(heksadesimal); i++)
    {
        switch (heksadesimal[strlen(heksadesimal) - i - 1])
        {
        case '0':
        {
            hasil += 0;
            break;
        }
        case '1':
        {
            hasil += 1 * pow(16, i);
            break;
        }
        case '2':
        {
            hasil += 2 * pow(16, i);
            break;
        }
        case '3':
        {
            hasil += 3 * pow(16, i);
            break;
        }
        case '4':
        {
            hasil += 4 * pow(16, i);
            break;
        }
        case '5':
        {
            hasil += 5 * pow(16, i);
            break;
        }
        case '6':
        {
            hasil += 6 * pow(16, i);
            break;
        }
        case '7':
        {
            hasil += 7 * pow(16, i);
            break;
        }
        case '8':
        {
            hasil += 8 * pow(16, i);
            break;
        }
        case '9':
        {
            hasil += 9 * pow(16, i);
            break;
        }
        case 'A':
        case 'a':
        {
            hasil += 10 * pow(16, i);
            break;
        }
        case 'B':
        case 'b':  
        {
            hasil += 11 * pow(16, i);
            break;
        }
        case 'C':
        case 'c':
        {
            hasil += 12 * pow(16, i);
            break;
        }
        case 'D':
        case 'd':
        {
            hasil += 13 * pow(16, i);
            break;
        }
        case 'E':
        case 'e':
        {
            hasil += 14 * pow(16, i);
            break;
        }
        case 'F':
        case 'f':
        {
            hasil += 15 * pow(16, i);
            break;
        }
        default:
            break;
        }
    }
    return hasil;
}

// Konverter desimal ke heksadesimal