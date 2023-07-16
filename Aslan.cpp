/*
Adı: Ishtiaq
Soyadı : Ahmed
Öğrenci Numarası : 210707104
Bölüm : Bilgisayar Mühendisliği
Dersin Adı : Nesne Yönelik Programlama(MBM104)
Proje Numarası : 1
Öğretim Üyesi : Dr.Öğr.Üyesi Deniz Dal
*/


#include "Aslan.h"
#include <iostream>

Aslan::Aslan(const std::string& ad, int yas) : Hayvan(ad, "Aslan", yas) {}

Aslan::~Aslan() {}

void Aslan::Besle() const {
    std::cout << "Aslan etle besleniyor." << std::endl << std::endl;
}
