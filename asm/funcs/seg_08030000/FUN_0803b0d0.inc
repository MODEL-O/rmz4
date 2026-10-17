@ FUN_0803b0d0  entry 0x0803b0d0  size 36
.thumb
.org 0x3b0d0
FUN_0803b0d0:
	push {lr}	@ 0003b0d0 00b5
.org 0x3b0d2
	adds r2, r0, #0	@ 0003b0d2 021c
.org 0x3b0d4
	ldrb r0, [r2, #16]	@ 0003b0d4 107c
.org 0x3b0d6
	cmp r0, #1	@ 0003b0d6 0128
.org 0x3b0d8
	bne.n 0x3b0e2	@ 0003b0d8 03d1
.org 0x3b0da
	ldr r0, [r2, #84]	@ 0003b0da 506d
.org 0x3b0dc
	str r0, [r1, #0]	@ 0003b0dc 0860
.org 0x3b0de
	ldr r0, [r2, #88]	@ 0003b0de 906d
.org 0x3b0e0
	b.n 0x3b0ec	@ 0003b0e0 04e0
.org 0x3b0e2
	ldr r0, [r2, #84]	@ 0003b0e2 506d
.org 0x3b0e4
	str r0, [r1, #0]	@ 0003b0e4 0860
.org 0x3b0e6
	ldr r0, [r2, #88]	@ 0003b0e6 906d
.org 0x3b0e8
	ldr r2, [pc, #8]	@ 0003b0e8 024a
.org 0x3b0ea
	adds r0, r0, r2	@ 0003b0ea 8018
.org 0x3b0ec
	str r0, [r1, #4]	@ 0003b0ec 4860
.org 0x3b0ee
	movs r0, #1	@ 0003b0ee 0120
.org 0x3b0f0
	pop {r1}	@ 0003b0f0 02bc
.org 0x3b0f2
	bx r1	@ 0003b0f2 0847
