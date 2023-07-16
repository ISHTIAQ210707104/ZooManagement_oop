/*
Adı: Ishtiaq
Soyadı : Ahmed
Öğrenci Numarası : 210707104
Bölüm : Bilgisayar Mühendisliği
Dersin Adı : Nesne Yönelik Programlama(MBM104)
Proje Numarası : 1
Öğretim Üyesi : Dr.Öğr.Üyesi Deniz Dal
*/


#ifndef ASLAN_H
#define ASLAN_H

#include "Hayvan.h"

class Aslan : public Hayvan {
public:
    Aslan(const std::string& ad, int yas);
    ~Aslan();

    void Besle() const override;
};

#endif  
