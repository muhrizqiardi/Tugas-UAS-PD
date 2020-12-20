/*
Ujian subsumatif

Tema program: Aplikasi converter all in one

Program ini memiliki fungsi:
1. Konverter suhu
2. Konverter satuan panjang
3. Konverter biner ke desimal 
4. Konverter desimal ke biner

TODO: 
1. Konverter heksadesimal ke desimal
2. Konverter desimal ke heksadesimal 
3. Konverter oktal ke desimal
4. Konverter desimal ke oktal

*/

#include <iostream>
// Fungsi dari file lain
#include "temp_converter.hpp" // Fungsi untuk mengkonversi temperatur



// Variabel dan konstanta untuk konversi satuan suhu
const int 
// Titik beku & didih celcius
tb_c = 0,   
td_c = 100, 
// Titik beku & didih fahrenheit
tb_f = 32, 
td_f = 212, 
// Titik beku & didih reamur
tb_r = 0, 
td_r = 80, 
// Titik beku & didih Kelvin
tb_k = 273, 
td_k = 373;

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

// Variabel untuk konversi heksadesimal ke desimal dan sebaliknya
long heksa

// Variabel untuk konversi heksadesimal ke desimal dan sebaliknya

main()
{

    // Menu utama
    std::cout << "\n*****************************************************";
    std::cout << "\n** Selamat datang di Aplikasi converter all in one **";
    std::cout << "\n*****************************************************";
    std::cout << "\n\n\nPilih menu:";
    std::cout << "\n1. Konverter suhu";
    std::cout << "\n2. Konverter satuan panjang";
    std::cout << "\n3. Konversi biner ke desimal";
    std::cout << "\n4. Konversi desimal ke biner\n>> ";
    std::cout << "\n5. Konversi heksadesimal ke desimal\n";
    std::cout << "\n6. Konversi desimal ke heksadesimal\n";
    std::cout << "\n7. Konversi oktal ke desimal\n";
    std::cout << "\n8. Konversi desimal ke oktal\n";
    

    std::cin >> menu;
    switch (menu)
    {
    case 1: // Konversi satuan suhu
    {
        std::cout << "\nPilih menu: ";
        std::cout << "\n1. celcius -> fahrenheit";
        std::cout << "\n2. fahrenheit -> celcius";
        std::cout << "\n3. celcius -> reamur";
        std::cout << "\n4. reamur -> celcius";
        std::cout << "\n5. kelvin -> celcius";
        std::cout << "\n6. celcius -> kelvin\n>> ";
        std::cin >> menu_suhu;
        switch (menu_suhu)
        {
        case 1: // Konversi celcius -> fahrenheit
            std::cout << "\nMasukkan angka: \n>> ";
            std::cin >> input_suhu;
            std::cout << "\nHasilnya adalah " << temp_converter(input_suhu, tb_c, td_c, tb_f, td_f) << " derajat fahrenheit.";
            break;
        case 2: // Konversi fahrenheit -> celcius
            std::cout << "\nMasukkan angka: \n>> ";
            std::cin >> input_suhu;
            std::cout << "\nHasilnya adalah " << temp_converter(input_suhu, tb_f, td_f, tb_c, td_c) << " derajat celcius.";
            break;
        case 3: // Konversi celcius -> reamur
            std::cout << "\nMasukkan angka: \n>> ";
            std::cin >> input_suhu;
            std::cout << "\nHasilnya adalah " << temp_converter(input_suhu, tb_f, td_f, tb_c, td_c) << " derajat celcius.";
            break;
        case 4: // Konversi reamur -> celcius
            std::cout << "\nMasukkan angka: \n>> ";
            std::cin >> input_suhu;
            std::cout << "\nHasilnya adalah " << temp_converter(input_suhu, tb_f, td_f, tb_c, td_c) << " derajat celcius.";
            break;
        case 5: // Konversi kelvin -> celcius
            std::cout << "\nMasukkan angka: \n>> ";
            std::cin >> input_suhu;
            std::cout << "\nHasilnya adalah " << temp_converter(input_suhu, tb_k, td_k, tb_c, td_c) << " derajat celcius.";
            break;
        case 6: // Konversi celcius -> kelvin
            std::cout << "\nMasukkan angka: \n>> ";
            std::cin >> input_suhu;
            std::cout << "\nHasilnya adalah " << temp_converter(input_suhu, tb_c, td_c, tb_k, td_k) << " derajat kelvin.";
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
    case 5: // Konversi heksadesimal ke desimal
    {   
        int heksa;
        std::cout << "Masukkan angka heksadecimal";
        std::cin >> 
        break;
    }
    case 6: // Konversi desimal ke heksadesimal
    {
        break;
    }
    case 7: // Konversi oktal ke desimal
    {
        break;
    }
    case 8: // Konversi desimal ke oktal
    {
        break;
    }
    default:
        {
            std::cout << "\nPilih menu dengan benar. Aplikasi akan ditutup.";
            break;
        }
    }
}
