/*
Adı: Ishtiaq
Soyadı : Ahmed
Öğrenci Numarası : 210707104
Bölüm : Bilgisayar Mühendisliği
Dersin Adı : Nesne Yönelik Programlama(MBM104)
Proje Numarası : 1
Öğretim Üyesi : Dr.Öğr.Üyesi Deniz Dal
*/


#ifndef HAYVAN_H
#define HAYVAN_H

#include <string>

class Hayvan {
private:
    std::string ad;
    std::string tur;
    int yas;

public:
    Hayvan(const std::string& ad, const std::string& tur, int yas);
    virtual ~Hayvan();

    void Goster() const;
    void Duzenle(const std::string& ad, const std::string& tur, int yas);
    virtual void Besle() const;
};

#endif 
