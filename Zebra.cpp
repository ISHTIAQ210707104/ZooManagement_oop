/*
Adı: Ishtiaq
Soyadı : Ahmed
Öğrenci Numarası : 210707104
Bölüm : Bilgisayar Mühendisliği
Dersin Adı : Nesne Yönelik Programlama(MBM104)
Proje Numarası : 1
Öğretim Üyesi : Dr.Öğr.Üyesi Deniz Dal
*/

#include "Zebra.h"
#include <iostream>

Zebra::Zebra(const std::string& ad, int yas) : Hayvan(ad, "Zebra", yas) {}

Zebra::~Zebra() {}

void Zebra::Besle() const {
    std::cout << "Zebra otlarla besleniyor." << std::endl << std::endl;
}
