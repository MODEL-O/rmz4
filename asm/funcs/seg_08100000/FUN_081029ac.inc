@ FUN_081029ac  entry 0x081029ac  size 46
.thumb
.org 0x1029ac
FUN_081029ac:
	push {lr}	@ 001029ac 00b5
.org 0x1029ae
	adds r1, r0, #0	@ 001029ae 011c
.org 0x1029b0
	movs r3, #0	@ 001029b0 0023
.org 0x1029b2
	adds r1, #188	@ 001029b2 bc31
.org 0x1029b4
	ldrh r2, [r1, #0]	@ 001029b4 0a88
.org 0x1029b6
	ldr r1, [pc, #36]	@ 001029b6 0949
.org 0x1029b8
	cmp r2, r1	@ 001029b8 8a42
.org 0x1029ba
	bne.n 0x1029cc	@ 001029ba 07d1
.org 0x1029bc
	ldr r1, [pc, #32]	@ 001029bc 0849
.org 0x1029be
	ldr r1, [r1, #0]	@ 001029be 0968
.org 0x1029c0
	ldrb r2, [r1, #1]	@ 001029c0 4a78
.org 0x1029c2
	movs r1, #1	@ 001029c2 0121
.org 0x1029c4
	ands r1, r2	@ 001029c4 1140
.org 0x1029c6
	cmp r1, #0	@ 001029c6 0029
.org 0x1029c8
	bne.n 0x1029cc	@ 001029c8 00d1
.org 0x1029ca
	movs r3, #4	@ 001029ca 0423
.org 0x1029cc
	cmp r3, #0	@ 001029cc 002b
.org 0x1029ce
	beq.n 0x1029d6	@ 001029ce 02d0
.org 0x1029d0
	adds r0, r3, #0	@ 001029d0 181c
.org 0x1029d2
	bl 0x10901c	@ 001029d2 06f023fb
.org 0x1029d6
	pop {r1}	@ 001029d6 02bc
.org 0x1029d8
	bx r1	@ 001029d8 0847
