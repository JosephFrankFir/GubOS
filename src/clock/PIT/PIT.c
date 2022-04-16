#include "../io/io.h"
#include "../idt/idt.h"

unsigned read_pit_count(void) {
	unsigned count = 0;
 
	// Disable interrupts
	disable_interrupts();
 
	// al = channel in bits 6 and 7, remaining bits clear
	outb(0x43,0b0000000);
 
	count = insb(0x40);		// Low byte
	count |= insb(0x40)<<8;		// High byte
 
	return count;
}

unsigned read_pit_count(void) {
	unsigned count = 0;
 
	// Disable interrupts
	disable_interrupts();
 
	// al = channel in bits 6 and 7, remaining bits clear
	outb(0x43,0b0000000);
 
	count = insb(0x40);		// Low byte
	count |= insb(0x40)<<8;		// High byte
 
	return count;
}