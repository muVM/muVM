muVM
====

A simple virtual machine

The source tree layout looks like this:

src                                     All Sources
├── arch                                Architecture Descriptions (Instruction Sets)
│   ├── arm
│   ├── avr
│   ├── dcpu16
│   ├── x86-16
│   ├── x86-32
│   ├── x86-64
│   └── z80
├── cpu                                 Processor Descriptions (Hardware Support)
│   ├── amd
│   │   ├── athlon64
│   │   ├── athlonX2
│   │   └── athlonXP
│   ├── atmel
│   │   └── atmega328
│   ├── intel
│   │   ├── 286
│   │   ├── 386
│   │   ├── 486
│   │   ├── 586
│   │   ├── 686
│   │   └── 8086
│   ├── notch
│   │   └── dcpu16
│   └── zilog
│       └── z80180
└── sys                                 Operating System Abstraction
    ├── bsd
    ├── dos
    ├── linux
    ├── macosx
    ├── unix
    ├── win32
    └── win64

Additional directories for ABI and other sub libraries may follow.
