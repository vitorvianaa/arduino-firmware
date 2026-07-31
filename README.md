# Firmware Terminal

Projeto de estudos em **Firmware** e **Sistemas Embarcados** utilizando Arduino e C/C++.

O objetivo é desenvolver um firmware capaz de receber comandos pela comunicação serial, interpretar esses comandos e controlar o estado interno de um sistema simulado, aplicando conceitos de arquitetura de firmware, máquina de estados e organização modular.

Os estudos estão sendo feitos de forma independente e autodidata visando a profissionalização e especialização no desenvolvimento de sistemas embarcados. Sinta-se livre para adotar a mesma abordagem ou contribuir com algo no projeto.

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
arduino-firmware/
│
├── docs/
├── firmware/
└── README.md
```

---

## Evolução do Projeto

Este projeto será desenvolvido de forma incremental, com cada versão introduzindo novos conceitos de firmware e sistemas embarcados.

Cada evolução será implementada em uma **branch** específica (`v2`, `v3`, `v4`, ...), permitindo acompanhar a implementação de cada funcionalidade de forma isolada.

Após a conclusão e validação de uma versão, suas alterações serão incorporadas à **branch `main`**, que sempre representará a versão mais completa e estável do projeto.

O objetivo é evoluir gradualmente a arquitetura do firmware, adicionando novas funcionalidades e explorando conceitos cada vez mais próximos do desenvolvimento profissional de sistemas embarcados.

A pasta **docs** será composta pelos arquivos **CHANGELOG** final de cada versão e o planejamento para a seguinte.

---

## Planejamento de Versões (macro)

- V3 — Máquina de Estados avançada.
- V4 — Scheduler cooperativo.
- V5 — Sistema de logs.
- V6 — Sensores simulados.
- V7 — Arquitetura baseada em eventos.
- V8 — Hardware Abstraction Layer (HAL).
- V9 — Integração com hardware real.

---

## Objetivo Final

Construir uma base sólida em desenvolvimento de firmware, compreendendo desde a comunicação serial até a organização de sistemas embarcados de forma modular e escalável.