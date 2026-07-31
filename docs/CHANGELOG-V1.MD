# Firmware Terminal - V1

## Objetivo

Desenvolver a primeira versão de um firmware capaz de receber comandos por meio da comunicação serial, interpretá-los e controlar o estado interno de um sistema simulado.

O objetivo desta versão foi compreender os fundamentos do desenvolvimento de firmware, incluindo a arquitetura básica da aplicação, comunicação serial e organização modular do código.

---

## Funcionalidades Implementadas

- Inicialização da comunicação serial.
- CLI (Command Line Interface) utilizando o Monitor Serial.
- Implementação dos comandos:
  - `HELP`
  - `STATUS`
  - `START`
  - `RESET`
- Máquina de estados inicial:
  - `OFF`
  - `RUNNING`
  - `ERROR`
- Organização do firmware em módulos:
  - `serial`
  - `command`
  - `system`

---

## Conceitos Estudados

- O que é um firmware.
- Fluxo de execução (`setup()` e `loop()`).
- Comunicação Serial (UART).
- Organização modular.
- Máquina de Estados (Finite State Machine).
- Separação de responsabilidades.

---

# Planejamento - V2

A segunda versão tem como objetivo aproximar o projeto de uma arquitetura utilizada em firmwares profissionais, eliminando abstrações da biblioteca Arduino e implementando um parser de comandos mais robusto.

## Objetivos

### Parser de Comandos

A CLI passará a aceitar comandos com argumentos.

Exemplos:

```text
GET STATUS
SET MODE AUTO
SET LOG DEBUG
```

Conceitos abordados:

- Parser de comandos
- Tokenização
- Validação de argumentos
- Estruturação de uma CLI

---

### Buffers e Strings em C

Remover completamente o uso da classe `String`.

A comunicação passará a ser feita através de um buffer de caracteres (`char[]`), realizando a leitura caractere por caractere até que um comando completo seja recebido.

Conceitos abordados:

- Buffers de memória
- Arrays de caracteres
- Biblioteca `<string.h>`
- Manipulação de strings em C
- Leitura não bloqueante
- Processamento incremental de dados

---

## Resultado Esperado

Ao final da V2, o firmware deverá ser capaz de:

- Receber dados caractere por caractere.
- Montar comandos utilizando buffers.
- Interpretar comandos com argumentos.
- Eliminar completamente o uso de `String`.
- Possuir uma CLI mais flexível e extensível.
- Aproximar a implementação de um firmware embarcado real.

---

