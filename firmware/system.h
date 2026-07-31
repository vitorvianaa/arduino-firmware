#ifndef SYSTEM_H
#define STSTEM_H

#include <Arduino.h>

// modulo responsavel por guardar o estado do sistema e fornecer metedos para interagir com ele

enum Status {
  RUNNING,
  OFF,
  ERROR
};

void check_status();

void start();

void reset();

#endif