#include "system.h"

Status current_state = OFF;

void check_status(){
  switch(current_state){
    case RUNNING:
      Serial.println("RUNNING");
      break;

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

void start(){
  
  // validar se ele esta parado
  if(current_state != RUNNING && current_state != ERROR){
    
    // muda o status
    current_state = RUNNING;
    // avisa o usuario
    Serial.println("Iniciando o sistema...");
    Serial.println("Sistema inicado com sucesso!");

  } else {
    // mostra porque o sistema nao foi iniciado
    Serial.print("O sistema não pode ser iniciado pois seu status atual é: ");
    check_status();

  }
}


void reset(){
  // validar se ele esta on
  if(current_state != OFF && current_state != ERROR){

    // muda o status
    current_state = OFF;
    // avisa o usuario
    Serial.println("Encerrando o sistema...");
    Serial.println("O sistema foi encerrado com sucesso!");

  } else {

    // informa porque o sistema nao pode encerrar:
    Serial.print("O sistema não pode ser encerrado porque seu status atual é: ");
    check_status();

  }
}