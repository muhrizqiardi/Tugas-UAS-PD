#include<string>
#include<string.h>

long b_ke_d(long biner) 
{
    long x = 1;
    long hasil = 0;

    while (biner != 0)
    {
        hasil += (biner % 10) * x;
        biner /= 10;
        x *= 2;
    }
    return hasil;
}

void d_ke_b(long desimal)
{
    int i = 1;
    char hasil[1000];
    long arr_desimal[1000];
    // Konversi desimal ke biner dan menaruhnya ke array hasil_desimal
    while (desimal != 0)
    {
        arr_desimal[i] = desimal % 2;
        desimal /= 2;
        i++;
    }

    // Mencetak array secara terbalik agar dapat tercetak hasil dari konversi
    std::cout << "\nHasil dari konversi adalah ";
    for (int j = i - 1; j != 0; j--)
    {
        std::cout << arr_desimal[j];
    }
}