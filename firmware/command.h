#ifndef COMMAND_H
#define COMMAND_H

#include <Arduino.h>

enum Command{
  HELP,
  START,
  RESET,
  STATUS,
  NONE
};

Command string_to_command(String text);

void interpret_command(String command);

#endif