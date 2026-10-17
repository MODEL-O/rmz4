@ FUN_08102f04  entry 0x08102f04  size 46
.thumb
.org 0x102f04
FUN_08102f04:
	push {lr}	@ 00102f04 00b5
.org 0x102f06
	adds r1, r0, #0	@ 00102f06 011c
.org 0x102f08
	movs r3, #0	@ 00102f08 0023
.org 0x102f0a
	adds r1, #188	@ 00102f0a bc31
.org 0x102f0c
	ldrh r2, [r1, #0]	@ 00102f0c 0a88
.org 0x102f0e
	ldr r1, [pc, #36]	@ 00102f0e 0949
.org 0x102f10
	cmp r2, r1	@ 00102f10 8a42
.org 0x102f12
	bne.n 0x102f24	@ 00102f12 07d1
.org 0x102f14
	ldr r1, [pc, #32]	@ 00102f14 0849
.org 0x102f16
	ldr r1, [r1, #0]	@ 00102f16 0968
.org 0x102f18
	ldrb r2, [r1, #6]	@ 00102f18 8a79
.org 0x102f1a
	movs r1, #1	@ 00102f1a 0121
.org 0x102f1c
	ands r1, r2	@ 00102f1c 1140
.org 0x102f1e
	cmp r1, #0	@ 00102f1e 0029
.org 0x102f20
	bne.n 0x102f24	@ 00102f20 00d1
.org 0x102f22
	movs r3, #24	@ 00102f22 1823
.org 0x102f24
	cmp r3, #0	@ 00102f24 002b
.org 0x102f26
	beq.n 0x102f2e	@ 00102f26 02d0
.org 0x102f28
	adds r0, r3, #0	@ 00102f28 181c
.org 0x102f2a
	bl 0x10901c	@ 00102f2a 06f077f8
.org 0x102f2e
	pop {r1}	@ 00102f2e 02bc
.org 0x102f30
	bx r1	@ 00102f30 0847
