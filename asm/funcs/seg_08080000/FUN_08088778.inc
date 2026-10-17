@ FUN_08088778  entry 0x08088778  size 20
.thumb
.org 0x88778
FUN_08088778:
	push {lr}	@ 00088778 00b5
.org 0x8877a
	ldr r2, [pc, #16]	@ 0008877a 044a
.org 0x8877c
	ldrb r1, [r0, #14]	@ 0008877c 817b
.org 0x8877e
	lsls r1, r1, #2	@ 0008877e 8900
.org 0x88780
	adds r1, r1, r2	@ 00088780 8918
.org 0x88782
	ldr r1, [r1, #0]	@ 00088782 0968
.org 0x88784
	bl 0x128f80	@ 00088784 a0f0fcfb
.org 0x88788
	pop {r0}	@ 00088788 01bc
.org 0x8878a
	bx r0	@ 0008878a 0047
