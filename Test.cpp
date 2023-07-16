/*
Adı: Ishtiaq
Soyadı : Ahmed
Öğrenci Numarası : 210707104
Bölüm : Bilgisayar Mühendisliği
Dersin Adı : Nesne Yönelik Programlama(MBM104)
Proje Numarası : 1
Öğretim Üyesi : Dr.Öğr.Üyesi Deniz Dal
*/


#include <iostream>
#include<locale.h>
#include "Hayvan.h"
#include "Aslan.h"
#include "Kartal.h"
#include "Zebra.h"
#include "HayvanatBahcesi.h"

int main() {
    setlocale(LC_ALL, "Turkish");
    HayvanatBahcesi hayvanatBahcesi;

    int secim = 0;
    while (secim != 5) {
        std::cout << "----Hayvan Bahcesi Yonetim Sistemi----" << std::endl;
        std::cout << "1. Hayvan Ekle" << std::endl;
        std::cout << "2. Hayvanlari Goster" << std::endl;
        std::cout << "3. Hayvan Besle" << std::endl;
        std::cout << "4. Hayvan Duzenle" << std::endl;
        std::cout << "5. Cikis" << std::endl;

        std::cout << "Seciminizi yapin: ";
        std::cin >> secim;

        std::cout<< std::endl;

        switch (secim) {
        case 1: {
            std::string ad, tur, rengi;
            int yas;

            std::cout << "Hayvan Adi: ";
            std::cin >> ad;
            std::cout << "Hayvan Turu (Aslan, Zebra, Kartal): ";
            std::cin >> tur;
            std::cout << "Hayvan Yasi: ";
            std::cin >> yas;
            std::cout <<tur <<" " << "Rengi: ";
            std::cin >> rengi;
            std::cout << std::endl;

            Hayvan* hayvan = nullptr;

            if (tur == "Aslan") {
                hayvan = new Aslan(ad, yas);
                std::cout << "Hayvan basariyla eklendi" << std::endl << std::endl;
            }
            else if (tur == "Kartal") {
                hayvan = new Kartal(ad, yas);
                std::cout << "Hayvan basariyla eklendi" << std::endl << std::endl;
            }
            else if (tur == "Zebra") {
                hayvan = new Zebra(ad, yas);
                std::cout << "Hayvan basariyla eklendi" << std::endl << std::endl;
            }
            else {
                std::cout << "Hatali tur girdiniz." << std::endl << std::endl;
            }

            if (hayvan) {
                hayvanatBahcesi.hayvanEkle(hayvan);
            }

            break;
        }
        case 2: {
            std::cout << "----Hayvanlar----" << std::endl;
            hayvanatBahcesi.hayvanlariGoster();
            break;
        }
        case 3: {
            int index;
            std::cout << "Beslemek istediginiz hayvanin indeksini girin: ";
            std::cin >> index;
            hayvanatBahcesi.hayvanBesle(index);
            break;

        }
        case 4: {
            int index;
            std::string ad, tur;
            int yas;

            std::cout << "Duzenlemek istediginiz hayvanin indeksini girin: ";
            std::cin >> index;
            std::cout << "Yeni ad: ";
            std::cin >> ad;
            std::cout << "Yeni tur (Aslan, Zebra, Kartal): ";
            std::cin >> tur;
            std::cout << "Yeni yas: ";
            std::cin >> yas;
            std::cout << std::endl;

            hayvanatBahcesi.hayvanDuzenle(index, ad, tur, yas);
            std::cout << "Hayvan basariyla Duzenlendi" << std::endl << std::endl;
            break;
        }
        case 5: {
            std::cout << "Programdan cikiliyor..." << std::endl;
            break;
        }
        default: {
            std::cout << "Hatali secim yaptiniz. Lutfen tekrar deneyin." << std::endl;
            break;
        }
        }
    }

    return 0;
}
