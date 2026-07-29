
void interpret_command(String command){
  
  // casting String -> enum
  Command current_command = string_to_command(command);
  // executar ação
  switch(current_command){
    case HELP:
      break;

    case STATUS:
      send_status();
      break;
  
  }

  // enviar response

}


Command string_to_command(String text){
  if(text == "HELP") return HELP;
  if(text == "START") return START;
  if(text == "STATUS") return STATUS;
  if(text == "RESET") return RESET;
}



void send_status(){
  Serial.print("O status atual do sistema é: ");
  switch(current_state){
    case RUNNNING:
      Serial.println("RUNNING");

    case OFF:
      Serial.println("OFF");
      break;

    case ERROR:
      Serial.println("ERROR");
      break;

    default:
      Serial.println("Desconhecido");
      break;
  }

}