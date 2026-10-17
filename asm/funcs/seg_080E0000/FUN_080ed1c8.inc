@ FUN_080ed1c8  entry 0x080ed1c8  size 32
.thumb
.org 0xed1c8
FUN_080ed1c8:
	push {r4, lr}	@ 000ed1c8 10b5
.org 0xed1ca
	adds r4, r0, #0	@ 000ed1ca 041c
.org 0xed1cc
	ldr r1, [pc, #24]	@ 000ed1cc 0649
.org 0xed1ce
	ldrb r0, [r4, #16]	@ 000ed1ce 207c
.org 0xed1d0
	lsls r0, r0, #2	@ 000ed1d0 8000
.org 0xed1d2
	adds r0, r0, r1	@ 000ed1d2 4018
.org 0xed1d4
	ldr r1, [r0, #0]	@ 000ed1d4 0168
.org 0xed1d6
	adds r0, r4, #0	@ 000ed1d6 201c
.org 0xed1d8
	bl 0x128f80	@ 000ed1d8 3bf0d2fe
.org 0xed1dc
	adds r4, #188	@ 000ed1dc bc34
.org 0xed1de
	movs r0, #0	@ 000ed1de 0020
.org 0xed1e0
	str r0, [r4, #0]	@ 000ed1e0 2060
.org 0xed1e2
	pop {r4}	@ 000ed1e2 10bc
.org 0xed1e4
	pop {r0}	@ 000ed1e4 01bc
.org 0xed1e6
	bx r0	@ 000ed1e6 0047
