@ FUN_08104a34  entry 0x08104a34  size 62
.thumb
.org 0x104a34
FUN_08104a34:
	push {r4, lr}	@ 00104a34 10b5
.org 0x104a36
	adds r2, r0, #0	@ 00104a36 021c
.org 0x104a38
	ldr r0, [r2, #20]	@ 00104a38 5069
.org 0x104a3a
	movs r1, #1	@ 00104a3a 0121
.org 0x104a3c
	ands r0, r1	@ 00104a3c 0840
.org 0x104a3e
	cmp r0, #0	@ 00104a3e 0028
.org 0x104a40
	beq.n 0x104a6c	@ 00104a40 14d0
.org 0x104a42
	ldr r2, [r2, #44]	@ 00104a42 d26a
.org 0x104a44
	ldrb r0, [r2, #18]	@ 00104a44 907c
.org 0x104a46
	cmp r0, #0	@ 00104a46 0028
.org 0x104a48
	bne.n 0x104a6c	@ 00104a48 10d1
.org 0x104a4a
	adds r0, r2, #0	@ 00104a4a 101c
.org 0x104a4c
	adds r0, #181	@ 00104a4c b530
.org 0x104a4e
	ldrb r3, [r0, #0]	@ 00104a4e 0378
.org 0x104a50
	cmp r3, #1	@ 00104a50 012b
.org 0x104a52
	bne.n 0x104a6c	@ 00104a52 0bd1
.org 0x104a54
	ldr r0, [pc, #28]	@ 00104a54 0748
.org 0x104a56
	ldr r0, [r0, #0]	@ 00104a56 0068
.org 0x104a58
	movs r4, #179	@ 00104a58 b324
.org 0x104a5a
	lsls r4, r4, #1	@ 00104a5a 6400
.org 0x104a5c
	adds r1, r0, r4	@ 00104a5c 0119
.org 0x104a5e
	movs r0, #48	@ 00104a5e 3020
.org 0x104a60
	strb r0, [r1, #0]	@ 00104a60 0870
.org 0x104a62
	movs r0, #60	@ 00104a62 3c20
.org 0x104a64
	strb r0, [r2, #18]	@ 00104a64 9074
.org 0x104a66
	adds r0, r2, #0	@ 00104a66 101c
.org 0x104a68
	adds r0, #182	@ 00104a68 b630
.org 0x104a6a
	strb r3, [r0, #0]	@ 00104a6a 0370
.org 0x104a6c
	pop {r4}	@ 00104a6c 10bc
.org 0x104a6e
	pop {r0}	@ 00104a6e 01bc
.org 0x104a70
	bx r0	@ 00104a70 0047
