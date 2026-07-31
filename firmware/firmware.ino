
// comando

enum Status {
  RUNNNING,
  OFF,
  ERROR
};

enum Command{
  HELP,
  START,
  RESET,
  STATUS
};

Status current_state = OFF;


void setup() {
  // put your setup code here, to run once:
  
  // abrindo o canal de comunicação entre o Arduino e o PC através do cabo USB
  Serial.begin(9600); // 9600 significa que estou enviando e recebendo até 9600 bits / segundo (taxa de transmissão)
  init_communication();

}

void loop() {
  // put your main code here, to run repeatedly:
  read_input();

}
