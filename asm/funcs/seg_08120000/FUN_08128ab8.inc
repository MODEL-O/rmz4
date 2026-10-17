@ FUN_08128ab8  entry 0x08128ab8  size 26
.thumb
.org 0x128ab8
FUN_08128ab8:
	push {lr}	@ 00128ab8 00b5
.org 0x128aba
	ldr r2, [r1, #64]	@ 00128aba 0a6c
.org 0x128abc
	ldrb r3, [r2, #0]	@ 00128abc 1378
.org 0x128abe
	adds r2, #1	@ 00128abe 0132
.org 0x128ac0
	str r2, [r1, #64]	@ 00128ac0 0a64
.org 0x128ac2
	ldr r2, [pc, #16]	@ 00128ac2 044a
.org 0x128ac4
	lsls r3, r3, #2	@ 00128ac4 9b00
.org 0x128ac6
	adds r3, r3, r2	@ 00128ac6 9b18
.org 0x128ac8
	ldr r2, [r3, #0]	@ 00128ac8 1a68
.org 0x128aca
	bl 0x128f84	@ 00128aca 00f05bfa
.org 0x128ace
	pop {r0}	@ 00128ace 01bc
.org 0x128ad0
	bx r0	@ 00128ad0 0047
