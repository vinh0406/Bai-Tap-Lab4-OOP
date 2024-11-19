#pragma once
#include "GiaSuc.h"
#include <cstdlib>

class De : public GiaSuc {
public:
    De();
    int choSua() const override;
    int sinhCon() const override;
};