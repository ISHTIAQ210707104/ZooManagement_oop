/*
Adı: Ishtiaq
Soyadı : Ahmed
Öğrenci Numarası : 210707104
Bölüm : Bilgisayar Mühendisliği
Dersin Adı : Nesne Yönelik Programlama(MBM104)
Proje Numarası : 1
Öğretim Üyesi : Dr.Öğr.Üyesi Deniz Dal
*/


#ifndef HAYVANATBAHCESI_H
#define HAYVANATBAHCESI_H

#include "Hayvan.h"
#include <vector>

class HayvanatBahcesi {
private:
    std::vector<Hayvan*> hayvanlar;

public:
    ~HayvanatBahcesi();

    void hayvanEkle(Hayvan* hayvan);
    void hayvanlariGoster() const;
    void hayvanBesle(int index) const;
    void hayvanDuzenle(int index, const std::string& ad, const std::string& tur, int yas);

};

#endif  
