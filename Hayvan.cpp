/*
Adı: Ishtiaq
Soyadı : Ahmed
Öğrenci Numarası : 210707104
Bölüm : Bilgisayar Mühendisliği
Dersin Adı : Nesne Yönelik Programlama(MBM104)
Proje Numarası : 1
Öğretim Üyesi : Dr.Öğr.Üyesi Deniz Dal
*/


#include "Hayvan.h"
#include <iostream>

Hayvan::Hayvan(const std::string& ad, const std::string& tur, int yas)
    : ad(ad), tur(tur), yas(yas) {}

Hayvan::~Hayvan() {}

void Hayvan::Goster() const {
    
    std::cout << "Ad: " << ad << std::endl;
    std::cout << "Tur: " << tur << std::endl;
    std::cout << "Yas: " << yas << std::endl;
    std::cout << std::endl;
}

void Hayvan::Duzenle(const std::string& ad, const std::string& tur, int yas) {
    this->ad = ad;
    this->tur = tur;
    this->yas = yas;
}

void Hayvan::Besle() const {
    std::cout << "Hayvan besleniyor." << std::endl;
}
