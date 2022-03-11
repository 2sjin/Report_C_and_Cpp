#pragma once
#include "AirlineBook.h"

int main() {
    AirlineBook* air = new AirlineBook();
    air->start();
    delete air;
}