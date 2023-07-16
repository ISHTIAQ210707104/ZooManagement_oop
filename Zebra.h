/*
Adı: Ishtiaq
Soyadı : Ahmed
Öğrenci Numarası : 210707104
Bölüm : Bilgisayar Mühendisliği
Dersin Adı : Nesne Yönelik Programlama(MBM104)
Proje Numarası : 1
Öğretim Üyesi : Dr.Öğr.Üyesi Deniz Dal
*/

#ifndef ZEBRA_H
#define ZEBRA_H

#include "Hayvan.h"

class Zebra : public Hayvan {
public:
    Zebra(const std::string& ad, int yas);
    ~Zebra();

    void Besle() const override;
};

#endif  
