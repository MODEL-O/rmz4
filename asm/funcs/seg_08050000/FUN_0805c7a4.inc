@ FUN_0805c7a4  entry 0x0805c7a4  size 64
.thumb
.org 0x5c7a4
FUN_0805c7a4:
	push {r4, lr}	@ 0005c7a4 10b5
.org 0x5c7a6
	adds r4, r0, #0	@ 0005c7a6 041c
.org 0x5c7a8
	ldrb r0, [r4, #15]	@ 0005c7a8 e07b
.org 0x5c7aa
	cmp r0, #0	@ 0005c7aa 0028
.org 0x5c7ac
	bne.n 0x5c7ca	@ 0005c7ac 0dd1
.org 0x5c7ae
	ldrb r1, [r4, #10]	@ 0005c7ae a17a
.org 0x5c7b0
	movs r0, #254	@ 0005c7b0 fe20
.org 0x5c7b2
	ands r0, r1	@ 0005c7b2 0840
.org 0x5c7b4
	strb r0, [r4, #10]	@ 0005c7b4 a072
.org 0x5c7b6
	adds r0, r4, #0	@ 0005c7b6 201c
.org 0x5c7b8
	adds r0, #116	@ 0005c7b8 7430
.org 0x5c7ba
	ldr r1, [pc, #40]	@ 0005c7ba 0a49
.org 0x5c7bc
	ldr r1, [r1, #0]	@ 0005c7bc 0968
.org 0x5c7be
	ldr r1, [r1, #0]	@ 0005c7be 0968
.org 0x5c7c0
	bl 0x5784	@ 0005c7c0 a8f7e0ff
.org 0x5c7c4
	ldrb r0, [r4, #15]	@ 0005c7c4 e07b
.org 0x5c7c6
	adds r0, #1	@ 0005c7c6 0130
.org 0x5c7c8
	strb r0, [r4, #15]	@ 0005c7c8 e073
.org 0x5c7ca
	ldr r0, [r4, #24]	@ 0005c7ca a069
.org 0x5c7cc
	ldrb r1, [r0, #9]	@ 0005c7cc 417a
.org 0x5c7ce
	movs r2, #1	@ 0005c7ce 0122
.org 0x5c7d0
	adds r0, r2, #0	@ 0005c7d0 101c
.org 0x5c7d2
	ands r0, r1	@ 0005c7d2 0840
.org 0x5c7d4
	cmp r0, #0	@ 0005c7d4 0028
.org 0x5c7d6
	beq.n 0x5c7de	@ 0005c7d6 02d0
.org 0x5c7d8
	movs r0, #0	@ 0005c7d8 0020
.org 0x5c7da
	strb r2, [r4, #14]	@ 0005c7da a273
.org 0x5c7dc
	strb r0, [r4, #15]	@ 0005c7dc e073
.org 0x5c7de
	pop {r4}	@ 0005c7de 10bc
.org 0x5c7e0
	pop {r0}	@ 0005c7e0 01bc
.org 0x5c7e2
	bx r0	@ 0005c7e2 0047
