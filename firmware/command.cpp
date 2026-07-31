#include "command.h"
#include "serial.h"
#include "system.h"

Command string_to_command(String text){
  if(text == "HELP") return HELP;
  if(text == "START") return START;
  if(text == "STATUS") return STATUS;
  if(text == "RESET") return RESET;

  return NONE;
}

void interpret_command(String command){
  
  // casting String -> enum
  Command current_command = string_to_command(command);
  // executar ação
  switch(current_command){
    case HELP:
      print_menu();
      break;

    case STATUS:
      Serial.print("O status atual do sistema é: ");
      check_status();
      break;

    case START:
      // start sys
      start();
      break;

    case RESET:
      // stop sys
      reset();
      break;

    case NONE:
      Serial.println("Digite um comando válido!");
      break;
  
  }
}
