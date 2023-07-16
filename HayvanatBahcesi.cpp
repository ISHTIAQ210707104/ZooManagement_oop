/*
Adı: Ishtiaq
Soyadı : Ahmed
Öğrenci Numarası : 210707104
Bölüm : Bilgisayar Mühendisliği
Dersin Adı : Nesne Yönelik Programlama(MBM104)
Proje Numarası : 1
Öğretim Üyesi : Dr.Öğr.Üyesi Deniz Dal
*/


#include "HayvanatBahcesi.h"
#include <iostream>
#include <algorithm>

HayvanatBahcesi::~HayvanatBahcesi() {
    for (Hayvan* hayvan : hayvanlar) {
        delete hayvan;
    }
    hayvanlar.clear();
}

void HayvanatBahcesi::hayvanEkle(Hayvan* hayvan) {
    hayvanlar.push_back(hayvan);
}

void HayvanatBahcesi::hayvanlariGoster() const {
    for (const Hayvan* hayvan : hayvanlar) {
        hayvan->Goster();
    }
}

void HayvanatBahcesi::hayvanBesle(int index) const {
    if (index >= 0 && index < hayvanlar.size()) {
        hayvanlar[index]->Besle();
    }
    else {
        std::cout << "Geçersiz hayvan indeksi." << std::endl;
    }
}

void HayvanatBahcesi::hayvanDuzenle(int index, const std::string& ad, const std::string& tur, int yas) {
    if (index >= 0 && index < hayvanlar.size()) {
        hayvanlar[index]->Duzenle(ad, tur, yas);
    }
    else {
        std::cout << "Geçersiz hayvan indeksi." << std::endl;
    }
}

