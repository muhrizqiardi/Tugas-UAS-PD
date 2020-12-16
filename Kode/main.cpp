/*
Ujian subsumatif

Tema program: Aplikasi converter all in one

Program ini memiliki fungsi:
1. Konverter suhu
2. Konverter satuan panjang
3. Konverter biner ke desimal 
4. Konverter desimal ke biner
*/
#include <iostream>
main()
{
    // Variabel untuk konversi satuan suhu
    int menu;
    int menu_suhu;
    double input_suhu;

    // Variabel untuk konversi satuan panjang
    int menu_panjang;
    double input_panjang;

    // Variabel untuk konversi biner ke desimal
    long biner;
    long x = 1;
    long hasil_biner = 0;

    // Variabel untuk konversi desimal ke biner
    long desimal;
    long hasil_desimal[1000];

    std::cout << "\n*****************************************************";
    std::cout << "\n** Selamat datang di Aplikasi converter all in one **";
    std::cout << "\n*****************************************************";
    std::cout << "\n\n\nPilih menu:";
    std::cout << "\n1. Konverter suhu";
    std::cout << "\n2. Konverter satuan panjang";
    std::cout << "\n3. Konversi biner ke desimal";
    std::cout << "\n4. Konversi desimal ke biner\n>> ";
    std::cin >> menu;
    switch (menu)
    {
    case 1: // Konversi satuan suhu
    {
        std::cout << "\nPilih menu: ";
        std::cout << "\n1. celcius -> fahrenheit";
        std::cout << "\n2. fahrenheit -> celcius";
        std::cout << "\n3. kelvin -> celcius";
        std::cout << "\n4. celcius -> kelvin\n>> ";
        std::cin >> menu_suhu;
        switch (menu_suhu)
        {
        case 1: // Konversi celcius -> fahrenheit
            std::cout << "\nMasukkan angka: \n>> ";
            std::cin >> input_suhu;
            std::cout << "\nHasilnya adalah " << (input_suhu * 9 / 5) + 32 << " derajat fahrenheit.";
            break;
        case 2: // Konversi fahrenheit -> celcius
            std::cout << "\nMasukkan angka: \n>> ";
            std::cin >> input_suhu;
            std::cout << "\nHasilnya adalah " << (input_suhu - 32) * 5 / 9 << " derajat fahrenheit.";
            break;
        case 3: // Konversi kelvin -> celcius
            std::cout << "\nMasukkan angka: \n>> ";
            std::cin >> input_suhu;
            std::cout << "\nHasilnya adalah " << input_suhu - 273 << " derajat fahrenheit.";
            break;
        case 4: // Konversi celcius -> kelvin
            std::cout << "\nMasukkan angka: \n>> ";
            std::cin >> input_suhu;
            std::cout << "\nHasilnya adalah " << input_suhu + 273 << " derajat fahrenheit.";
            break;
        default:
            std::cout << "\nPilih menu dengan benar. Aplikasi akan ditutup.";
            break;
        }
        break;
    }
    case 2: // Konversi satuan panjang
    {
        std::cout << "\nPilih menu: \n1. meter -> inch\n2. inch -> meter\n>> ";
        std::cin >> menu_panjang;

        switch (menu_panjang)
        {
        case 1: // Konversi meter -> inch
            std::cout << "\nMasukkan angka: \n>> ";
            std::cin >> input_panjang;
            std::cout << "\nHasilnya adalah " << input_panjang * 39.37 << " inch.";
            break;
        case 2: // Konversi inch -> meter
            std::cout << "\nMasukkan angka: \n>> ";
            std::cin >> input_panjang;
            std::cout << "\nHasilnya adalah " << input_panjang / 39.37 << " meter.";
            break;
        default:
            std::cout << "\nPilih menu dengan benar. Aplikasi akan ditutup.";
            break;
        }
        break;
    }
    case 3: // Konversi biner ke desimal
    {
        std::cout << "\nMasukkan angka biner: \n>> ";
        std::cin >> biner; // Input angka biner

        while (biner != 0)
        {
            hasil_biner += (biner % 10) * x;
            biner /= 10;
            x *= 2;
        }
        std::cout << "\nHasilnya adalah " << hasil_biner;
        break;
    }
    case 4: // Konversi desimal ke biner
    {
        std::cout << "\nMasukkan angka desimal: \n>> ";
        std::cin >> desimal;
        int i = 1;

        // Konversi desimal ke biner dan menaruhnya ke array hasil_desimal
        while (desimal != 0)
        {
            hasil_desimal[i] = desimal % 2;
            desimal /= 2;
            i++;
        }

        // Mencetak array secara terbalik agar dapat tercetak hasil dari konversi
        std::cout << "\nHasil dari konversi adalah ";
        for (int j = i - 1; j != 0; j--)
        {
            std::cout << hasil_desimal[j];
        }
        break;
    }
    default:
        {
            std::cout << "\nPilih menu dengan benar. Aplikasi akan ditutup.";
            break;
        }
    }
}
