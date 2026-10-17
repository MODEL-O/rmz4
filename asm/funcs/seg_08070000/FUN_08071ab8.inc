@ FUN_08071ab8  entry 0x08071ab8  size 30
.thumb
.org 0x71ab8
FUN_08071ab8:
	push {r4, lr}	@ 00071ab8 10b5
.org 0x71aba
	adds r4, r0, #0	@ 00071aba 041c
.org 0x71abc
	bl 0x73bcc	@ 00071abc 02f086f8
.org 0x71ac0
	ldr r1, [pc, #20]	@ 00071ac0 0549
.org 0x71ac2
	ldrb r0, [r4, #13]	@ 00071ac2 607b
.org 0x71ac4
	lsls r0, r0, #2	@ 00071ac4 8000
.org 0x71ac6
	adds r0, r0, r1	@ 00071ac6 4018
.org 0x71ac8
	ldr r1, [r0, #0]	@ 00071ac8 0168
.org 0x71aca
	adds r0, r4, #0	@ 00071aca 201c
.org 0x71acc
	bl 0x128f80	@ 00071acc b7f058fa
.org 0x71ad0
	pop {r4}	@ 00071ad0 10bc
.org 0x71ad2
	pop {r0}	@ 00071ad2 01bc
.org 0x71ad4
	bx r0	@ 00071ad4 0047
