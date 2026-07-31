void init_communication(){
  // iniciando a comunicação serial
  Serial.println("===== Comunicação serial iniciada =====");
  print_menu();
}

void print_menu(){
  Serial.println("     Use os seguintes comandos para interagir com o sistema:     ");
  Serial.println("1 - HELP = Exibe menu de opções");
  Serial.println("2 - STATUS = Exibe o status atual do sistema. Ex: RUNNING ou OFFLINE");
  Serial.println("3 - START = Inicia o sistema se ele estiver OFFLINE");
  Serial.println("4 - RESET = Para o sistema se ele estiver RUNNING");
}

void read_input(){

  if (Serial.available() > 0){
    String message = Serial.readString();
    Serial.print("Mensagem recebida: ");
    Serial.println(message);
    message.trim();
    interpret_command(message);
  }

}

void send_response(String response){
  Serial.print("Response: ");
  Serial.println(response);
}