@ FUN_080cca40  entry 0x080cca40  size 32
.thumb
.org 0xcca40
FUN_080cca40:
	push {r4, lr}	@ 000cca40 10b5
.org 0xcca42
	adds r4, r0, #0	@ 000cca42 041c
.org 0xcca44
	ldr r1, [pc, #24]	@ 000cca44 0649
.org 0xcca46
	ldrb r0, [r4, #16]	@ 000cca46 207c
.org 0xcca48
	lsls r0, r0, #2	@ 000cca48 8000
.org 0xcca4a
	adds r0, r0, r1	@ 000cca4a 4018
.org 0xcca4c
	ldr r1, [r0, #0]	@ 000cca4c 0168
.org 0xcca4e
	adds r0, r4, #0	@ 000cca4e 201c
.org 0xcca50
	bl 0x128f80	@ 000cca50 5cf096fa
.org 0xcca54
	adds r0, r4, #0	@ 000cca54 201c
.org 0xcca56
	bl 0xcca64	@ 000cca56 00f005f8
.org 0xcca5a
	pop {r4}	@ 000cca5a 10bc
.org 0xcca5c
	pop {r0}	@ 000cca5c 01bc
.org 0xcca5e
	bx r0	@ 000cca5e 0047
