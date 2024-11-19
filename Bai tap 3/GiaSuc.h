#pragma once
#include <string>
#include <iostream>

class GiaSuc {
protected:
    std::string ten;
    std::string tiengKeu;

public:
    GiaSuc(const std::string& ten, const std::string& tiengKeu);
    virtual ~GiaSuc() = default;

    virtual void phatTiengKeu() const;
    virtual int choSua() const = 0;
    virtual int sinhCon() const = 0;
};