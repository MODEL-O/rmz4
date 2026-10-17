@ FUN_0806d5d0  entry 0x0806d5d0  size 38
.thumb
.org 0x6d5d0
FUN_0806d5d0:
	push {lr}	@ 0006d5d0 00b5
.org 0x6d5d2
	adds r2, r0, #0	@ 0006d5d2 021c
.org 0x6d5d4
	ldrb r0, [r2, #14]	@ 0006d5d4 907b
.org 0x6d5d6
	cmp r0, #0	@ 0006d5d6 0028
.org 0x6d5d8
	bne.n 0x6d5de	@ 0006d5d8 01d1
.org 0x6d5da
	adds r0, #1	@ 0006d5da 0130
.org 0x6d5dc
	strb r0, [r2, #14]	@ 0006d5dc 9073
.org 0x6d5de
	ldr r0, [r2, #24]	@ 0006d5de 9069
.org 0x6d5e0
	ldrb r1, [r0, #9]	@ 0006d5e0 417a
.org 0x6d5e2
	movs r3, #1	@ 0006d5e2 0123
.org 0x6d5e4
	adds r0, r3, #0	@ 0006d5e4 181c
.org 0x6d5e6
	ands r0, r1	@ 0006d5e6 0840
.org 0x6d5e8
	cmp r0, #0	@ 0006d5e8 0028
.org 0x6d5ea
	beq.n 0x6d5f2	@ 0006d5ea 02d0
.org 0x6d5ec
	movs r0, #0	@ 0006d5ec 0020
.org 0x6d5ee
	strb r3, [r2, #13]	@ 0006d5ee 5373
.org 0x6d5f0
	strb r0, [r2, #14]	@ 0006d5f0 9073
.org 0x6d5f2
	pop {r0}	@ 0006d5f2 01bc
.org 0x6d5f4
	bx r0	@ 0006d5f4 0047
