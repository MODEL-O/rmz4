@ FUN_08105084  entry 0x08105084  size 78
.thumb
.org 0x105084
FUN_08105084:
	push {r4, lr}	@ 00105084 10b5
.org 0x105086
	adds r4, r0, #0	@ 00105086 041c
.org 0x105088
	adds r0, #181	@ 00105088 b530
.org 0x10508a
	ldrb r0, [r0, #0]	@ 0010508a 0078
.org 0x10508c
	cmp r0, #1	@ 0010508c 0128
.org 0x10508e
	bne.n 0x1050d2	@ 0010508e 20d1
.org 0x105090
	ldrb r1, [r4, #17]	@ 00105090 617c
.org 0x105092
	cmp r1, #0	@ 00105092 0029
.org 0x105094
	bne.n 0x1050ac	@ 00105094 0ad1
.org 0x105096
	adds r0, r4, #0	@ 00105096 201c
.org 0x105098
	adds r0, #180	@ 00105098 b430
.org 0x10509a
	strb r1, [r0, #0]	@ 0010509a 0170
.org 0x10509c
	subs r0, #64	@ 0010509c 4038
.org 0x10509e
	ldr r1, [pc, #8]	@ 0010509e 0249
.org 0x1050a0
	bl 0x5784	@ 001050a0 00f770fb
.org 0x1050a4
	b.n 0x1050b6	@ 001050a4 07e0
.org 0x1050a6
	.byte 0x00	@ 001050a6 data
.org 0x1050a7
	.byte 0x00	@ 001050a7 data
.org 0x1050a8
	.byte 0x58,0xc1,0x86,0x08	@ 001050a8 data
.org 0x1050ac
	adds r0, r4, #0	@ 001050ac 201c
.org 0x1050ae
	adds r0, #116	@ 001050ae 7430
.org 0x1050b0
	ldr r1, [pc, #36]	@ 001050b0 0949
.org 0x1050b2
	bl 0x5784	@ 001050b2 00f767fb
.org 0x1050b6
	ldr r1, [r4, #44]	@ 001050b6 e16a
.org 0x1050b8
	cmp r1, #0	@ 001050b8 0029
.org 0x1050ba
	beq.n 0x1050ca	@ 001050ba 06d0
.org 0x1050bc
	ldrb r0, [r4, #17]	@ 001050bc 607c
.org 0x1050be
	adds r0, #1	@ 001050be 0130
.org 0x1050c0
	strb r0, [r1, #17]	@ 001050c0 4874
.org 0x1050c2
	ldr r0, [r4, #44]	@ 001050c2 e06a
.org 0x1050c4
	adds r0, #181	@ 001050c4 b530
.org 0x1050c6
	movs r1, #1	@ 001050c6 0121
.org 0x1050c8
	strb r1, [r0, #0]	@ 001050c8 0170
.org 0x1050ca
	adds r1, r4, #0	@ 001050ca 211c
.org 0x1050cc
	adds r1, #181	@ 001050cc b531
.org 0x1050ce
	movs r0, #0	@ 001050ce 0020
.org 0x1050d0
	strb r0, [r1, #0]	@ 001050d0 0870
