#pragma once
#include "GiaSuc.h"
#include <cstdlib> 

class Bo : public GiaSuc {
public:
    Bo();
    int choSua() const override;
    int sinhCon() const override;
};