# Firmware Terminal

Projeto de estudos em **Firmware** e **Sistemas Embarcados** utilizando Arduino e C/C++.

O objetivo é desenvolver um firmware capaz de receber comandos pela comunicação serial, interpretar esses comandos e controlar o estado interno de um sistema simulado, aplicando conceitos de arquitetura de firmware, máquina de estados e organização modular.

---

## Objetivos

- Praticar desenvolvimento de firmware
- Aprender comunicação Serial (UART)
- Implementar uma CLI (Command Line Interface)
- Implementar uma Máquina de Estados (FSM)
- Desenvolver uma arquitetura modular
- Criar uma base para futuros projetos embarcados

---

## Arquitetura

```text
Computador
     │
     │ USB
     ▼
Conversor USB ↔ UART
     │
     ▼
Microcontrolador
     │
     ▼
 Firmware
     │
 ├── Serial
 ├── Command
 └── System
```

---

## Fluxo de funcionamento

```text
Usuário
    │
    ▼
Monitor Serial
    │
    ▼
Receber comando
    │
    ▼
Interpretar comando
    │
    ▼
Atualizar estado
    │
    ▼
Enviar resposta
```

---

## Estrutura do Projeto

```text
firmware-terminal/
│
├── docs/
├── firmware/
└── README.md
```

---

## Estados do Sistema

- `OFF`
- `RUNNING`
- `ERROR`

### Eventos

- `START`
- `STOP`
- `STATUS`
- `HELP`
- `RESET`

---

## Comandos

| Comando | Função |
|----------|--------|
| HELP | Lista os comandos disponíveis |
| STATUS | Exibe o estado atual |
| START | Inicia o sistema |
| STOP | Para o sistema |
| RESET | Reinicia o sistema |

---

## Objetivo Final

Construir uma base sólida em desenvolvimento de firmware, compreendendo desde a comunicação serial até a organização de sistemas embarcados de forma modular e escalável.