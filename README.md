# Welcome to the project jubav! ♥

## What is jubav?

jubav, aka **J**IT **U**niversal **B**ootloader-less **A**ndroid **V**ariant OS, is an open-source modern small and stable operating system, designed with speed and concurrency in mind.

## Current kernel features:

- Written entirely in C11
- Unix-like
- Monolithic arhitecture
- Memory: small footprint, 32-bit protected mode, support for paging
- Virtual memory: supports for memory allocation algorithms (binary and buddy)
- Tasks management: mulithreading, hardware switched tasks, round-robin scheduler
- Synchronization: spinlocks and semaphores
- Interrupts: interrupts serviced in fastirq kernel thread
- Timers: RT timers, 100Hz system clock
- Network: support for ethernet, ARP and IP protocols
- Driver interface: own driver interface named ADI (Agnix Driver Interface)
- Drivers: 8254, 8259, RTC, DMA chips, PCI bus, support for RTL-8029(AS) network card
- Power management: support for APM
- Support for busses: full support for PCI bus, PCI devices and PCI IRQs
- Terminals: support for switched terminals
- Data structures: hashing with open adressing, lists, queues

## Goals:

The main goal of the project is to provide faster alternative for Android: an modern fast small operating system which will be fully compatible with the Linux kernel in the system call layer. The compatibility with Linux kernel is very important, because jubav has to enable running programs compiled for Linux. This is a base of the jubav project.
