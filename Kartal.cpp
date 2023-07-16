/*
Adı: Ishtiaq
Soyadı : Ahmed
Öğrenci Numarası : 210707104
Bölüm : Bilgisayar Mühendisliği
Dersin Adı : Nesne Yönelik Programlama(MBM104)
Proje Numarası : 1
Öğretim Üyesi : Dr.Öğr.Üyesi Deniz Dal
*/

#include "Kartal.h"
#include <iostream>

Kartal::Kartal(const std::string& ad, int yas) : Hayvan(ad, "Kartal", yas) {}

Kartal::~Kartal() {}

void Kartal::Besle() const {
    std::cout << "Kartal etle besleniyor." << std::endl << std::endl;
}
