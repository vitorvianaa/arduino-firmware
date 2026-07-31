#ifndef SERIAL_H
#define SERIAL_H

#include <Arduino.h>

void print_menu();

void init_communication();

void read_input();

void send_response(String response);

#endif