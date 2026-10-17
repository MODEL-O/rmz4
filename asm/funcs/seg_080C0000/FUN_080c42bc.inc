@ FUN_080c42bc  entry 0x080c42bc  size 20
.thumb
.org 0xc42bc
FUN_080c42bc:
	push {lr}	@ 000c42bc 00b5
.org 0xc42be
	ldr r2, [pc, #16]	@ 000c42be 044a
.org 0xc42c0
	ldrb r1, [r0, #13]	@ 000c42c0 417b
.org 0xc42c2
	lsls r1, r1, #2	@ 000c42c2 8900
.org 0xc42c4
	adds r1, r1, r2	@ 000c42c4 8918
.org 0xc42c6
	ldr r1, [r1, #0]	@ 000c42c6 0968
.org 0xc42c8
	bl 0x128f80	@ 000c42c8 64f05afe
.org 0xc42cc
	pop {r0}	@ 000c42cc 01bc
.org 0xc42ce
	bx r0	@ 000c42ce 0047
