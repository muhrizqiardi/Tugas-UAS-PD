#include <string.h>
#include <string>
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

string d_ke_h(double desimal)
{
    string hasil = "";
    for (double i = desimal; i != 0; i = (int)i / 16)
    {
        int x = (i / 16 - ((int)i / 16)) * 16;
        switch (x)
        {
        case 0:
        {
            hasil = '0' + hasil;
            break;
        }
        case 1:
        {
            hasil = '1' + hasil;
            break;
        }
        case 2:
        {
            hasil = '2' + hasil;
            break;
        }
        case 3:
        {
            hasil = '3' + hasil;
            break;
        }
        case 4:
        {
            hasil = '4' + hasil;
            break;
        }
        case 5:
        {
            hasil = '5' + hasil;
            break;
        }
        case 6:
        {
            hasil = '6' + hasil;
            break;
        }
        case 7:
        {
            hasil = '7' + hasil;
            break;
        }
        case 8:
        {
            hasil = '8' + hasil;
            break;
        }
        case 9:
        {
            hasil = '9' + hasil;
            break;
        }
        case 10:
        {
            hasil = 'A' + hasil;
            break;
        }
        case 11:
        {
            hasil = 'B' + hasil;
            break;
        }
        case 12:
        {
            hasil = 'C' + hasil;
            break;
        }
        case 13:
        {
            hasil = 'D' + hasil;
            break;
        }
        case 14:
        {
            hasil = 'E' + hasil;
            break;
        }
        case 15:
        {
            hasil = 'F' + hasil;
            break;
        }
        default:
            break;
        }
    }
    return hasil;
}
// Konverter desimal ke heksadesimal