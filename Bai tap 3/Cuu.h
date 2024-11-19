#pragma once
#include "GiaSuc.h"
#include <cstdlib>

class Cuu : public GiaSuc {
public:
    Cuu();
    int choSua() const override;
    int sinhCon() const override;
};