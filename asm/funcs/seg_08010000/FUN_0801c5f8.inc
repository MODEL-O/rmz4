@ FUN_0801c5f8  entry 0x0801c5f8  size 22
.thumb
.org 0x1c5f8
FUN_0801c5f8:
	push {lr}	@ 0001c5f8 00b5
.org 0x1c5fa
	ldr r0, [pc, #20]	@ 0001c5fa 0548
.org 0x1c5fc
	ldr r1, [pc, #20]	@ 0001c5fc 0549
.org 0x1c5fe
	adds r0, r0, r1	@ 0001c5fe 4018
.org 0x1c600
	movs r1, #0	@ 0001c600 0021
.org 0x1c602
	strb r1, [r0, #0]	@ 0001c602 0170
.org 0x1c604
	movs r0, #200	@ 0001c604 c820
.org 0x1c606
	bl 0x249c	@ 0001c606 e5f749ff
.org 0x1c60a
	pop {r0}	@ 0001c60a 01bc
.org 0x1c60c
	bx r0	@ 0001c60c 0047
