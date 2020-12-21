#include <iostream>

// Fungsi dari file header lain

#include "bin_converter.hpp" // Fungsi untuk mengkonversi heksadesimal ke desimal dan sebaliknya
#include "hex_converter.hpp" // Fungsi untuk mengkonversi heksadesimal ke desimal dan sebaliknya
#include "oct_converter.hpp" // Fungsi untuk mengkonversi octal ke desimal dan sebaliknya

main()
{

    // Menu utama
    std::cout << "\n*****************************************************";
    std::cout << "\n** Selamat datang di Aplikasi converter all in one **";
    std::cout << "\n*****************************************************";
    std::cout << "\n\n\nPilih menu:";
    std::cout << "\n1. Konversi biner ke desimal";
    std::cout << "\n2. Konversi desimal ke biner";
    std::cout << "\n3. Konversi heksadesimal ke desimal";
    std::cout << "\n4. Konversi desimal ke heksadesimal";
    std::cout << "\n5. Konversi oktal ke desimal";
    std::cout << "\n6. Konversi desimal ke oktal\n>> ";
    
    int menu;
    std::cin >> menu;
    switch (menu)
    {
    case 1: // Konversi biner ke desimal
    {
        long n;
        std::cout << "\nMasukkan angka biner: \n>> ";
        std::cin >> n; // Input angka biner
        std::cout << "\nHasilnya adalah " << b_ke_d(n);
        break;
    }
    case 2: // Konversi desimal ke biner
    {
        long n;
        std::cout << "\nMasukkan angka desimal: \n>> ";
        std::cin >> n;
        d_ke_b(n);
        break;
    }
    case 3: // Konversi heksadesimal ke desimal
    {
        char heksadesimal[100];
        std::cout << "Masukkan angka heksadesimal\n>> ";
        std::cin >> heksadesimal;
        std::cout << "Hasilnya adalah " << h_ke_d(heksadesimal);
        break;
    }
    case 4: // Konversi desimal ke heksadesimal
    {
        double n;
        std::cout << "Masukkan angka desimal\n>> ";
        std::cin >> n;
        std::cout << "Hasilnya adalah " << d_ke_h(n);
        break;
    }
    case 5: // Konversi oktal ke desimal
    {
        int n;
        std::cout << "Masukkan angka oktal\n>> ";
        std::cin >> n;
        std::cout << "Hasilnya adalah " << o_ke_d(n);
        break;
    }
    case 6: // Konversi desimal ke oktal
    {
        int n;
        std::cout << "Masukkan angka desimal\n>> ";
        std::cin >> n;
        std::cout << "Hasilnya adalah " << d_ke_o(n);

        break;
    }
    default:
        {
            std::cout << "\nPilih menu dengan benar. Aplikasi akan ditutup.";
            break;
        }
    }
    std::cin.get();
}
