#ifndef _jubav_ASM_DESC_H
#define _jubav_ASM_DESC_H

#define __FIRST_TSS_ENTRY 16

struct desc_struct {
	unsigned long a,b;
};

extern struct desc_struct gdt_table[];
extern struct desc_struct *idt, *gdt;

#define idt_descr (*((char *)&idt - 2))
#define gdt_descr (*((char *)&gdt - 2))

#define load_TR(n) __asm__ __volatile__("ltr %%ax"::"a" (__TSS(n)<<3))

void set_code_desc(u32 entry, u32 base, u32 limit, u8 dpl, u8 db);
void set_data_desc(u32 entry, u32 base, u32 limit, u8 dpl, u8 db);
void set_IDT_gate_descriptor(struct desc_struct *, u16, void *, u8); 
void set_interrupt_gate(u32, u16, void *, u8); 
void set_trap_gate(u32, u16, void *, u8); 
void set_task_gate(u32 entry, u16 selector, u8 dpl); 
void set_TSS_desc(u32, void *, u32, u8); 
void set_tss_desc(unsigned int, void *addr); 

#endif
