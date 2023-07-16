/*
Adı: Ishtiaq
Soyadı : Ahmed
Öğrenci Numarası : 210707104
Bölüm : Bilgisayar Mühendisliği
Dersin Adı : Nesne Yönelik Programlama(MBM104)
Proje Numarası : 1
Öğretim Üyesi : Dr.Öğr.Üyesi Deniz Dal
*/

#ifndef KARTAL_H
#define KARTAL_H

#include "Hayvan.h"

class Kartal : public Hayvan {

public:
    Kartal(const std::string& ad, int yas);
    ~Kartal();

    void Besle() const override;
};

#endif  