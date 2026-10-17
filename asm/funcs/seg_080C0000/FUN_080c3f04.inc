@ FUN_080c3f04  entry 0x080c3f04  size 64
.thumb
.org 0xc3f04
FUN_080c3f04:
	push {r4, lr}	@ 000c3f04 10b5
.org 0xc3f06
	adds r4, r0, #0	@ 000c3f06 041c
.org 0xc3f08
	ldr r0, [pc, #56]	@ 000c3f08 0e48
.org 0xc3f0a
	ldr r0, [r0, #0]	@ 000c3f0a 0068
.org 0xc3f0c
	bl 0x5500	@ 000c3f0c 41f7f8fa
.org 0xc3f10
	adds r3, r0, #0	@ 000c3f10 031c
.org 0xc3f12
	cmp r3, #0	@ 000c3f12 002b
.org 0xc3f14
	beq.n 0xc3f3c	@ 000c3f14 12d0
.org 0xc3f16
	adds r1, r3, #0	@ 000c3f16 191c
.org 0xc3f18
	adds r1, #37	@ 000c3f18 2531
.org 0xc3f1a
	movs r2, #0	@ 000c3f1a 0022
.org 0xc3f1c
	movs r0, #8	@ 000c3f1c 0820
.org 0xc3f1e
	strb r0, [r1, #0]	@ 000c3f1e 0870
.org 0xc3f20
	ldr r1, [pc, #36]	@ 000c3f20 0949
.org 0xc3f22
	movs r0, #21	@ 000c3f22 1520
.org 0xc3f24
	strb r0, [r3, #9]	@ 000c3f24 5872
.org 0xc3f26
	ldr r0, [r1, #84]	@ 000c3f26 486d
.org 0xc3f28
	ldr r0, [r0, #0]	@ 000c3f28 0068
.org 0xc3f2a
	str r0, [r3, #20]	@ 000c3f2a 5861
.org 0xc3f2c
	movs r0, #0	@ 000c3f2c 0020
.org 0xc3f2e
	strh r2, [r3, #32]	@ 000c3f2e 1a84
.org 0xc3f30
	adds r1, r3, #0	@ 000c3f30 191c
.org 0xc3f32
	adds r1, #34	@ 000c3f32 2231
.org 0xc3f34
	strb r0, [r1, #0]	@ 000c3f34 0870
.org 0xc3f36
	str r4, [r3, #40]	@ 000c3f36 9c62
.org 0xc3f38
	movs r0, #1	@ 000c3f38 0120
.org 0xc3f3a
	strb r0, [r3, #16]	@ 000c3f3a 1874
.org 0xc3f3c
	adds r0, r3, #0	@ 000c3f3c 181c
.org 0xc3f3e
	pop {r4}	@ 000c3f3e 10bc
.org 0xc3f40
	pop {r1}	@ 000c3f40 02bc
.org 0xc3f42
	bx r1	@ 000c3f42 0847
