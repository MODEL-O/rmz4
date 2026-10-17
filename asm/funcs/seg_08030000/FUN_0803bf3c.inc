@ FUN_0803bf3c  entry 0x0803bf3c  size 134
.thumb
.org 0x3bf3c
FUN_0803bf3c:
	push {r4, r5, lr}	@ 0003bf3c 30b5
.org 0x3bf3e
	adds r4, r0, #0	@ 0003bf3e 041c
.org 0x3bf40
	adds r0, #180	@ 0003bf40 b430
.org 0x3bf42
	ldr r1, [r0, #0]	@ 0003bf42 0168
.org 0x3bf44
	ldrb r5, [r4, #13]	@ 0003bf44 657b
.org 0x3bf46
	cmp r5, #1	@ 0003bf46 012d
.org 0x3bf48
	beq.n 0x3bf7c	@ 0003bf48 18d0
.org 0x3bf4a
	cmp r5, #1	@ 0003bf4a 012d
.org 0x3bf4c
	bgt.n 0x3bf54	@ 0003bf4c 02dc
.org 0x3bf4e
	cmp r5, #0	@ 0003bf4e 002d
.org 0x3bf50
	beq.n 0x3bf5e	@ 0003bf50 05d0
.org 0x3bf52
	b.n 0x3bfc0	@ 0003bf52 35e0
.org 0x3bf54
	cmp r5, #2	@ 0003bf54 022d
.org 0x3bf56
	beq.n 0x3bf8c	@ 0003bf56 19d0
.org 0x3bf58
	cmp r5, #3	@ 0003bf58 032d
.org 0x3bf5a
	beq.n 0x3bfa4	@ 0003bf5a 23d0
.org 0x3bf5c
	b.n 0x3bfc0	@ 0003bf5c 30e0
.org 0x3bf5e
	adds r0, r4, #0	@ 0003bf5e 201c
.org 0x3bf60
	adds r0, #113	@ 0003bf60 7130
.org 0x3bf62
	ldrb r0, [r0, #0]	@ 0003bf62 0078
.org 0x3bf64
	lsls r0, r0, #24	@ 0003bf64 0006
.org 0x3bf66
	asrs r0, r0, #24	@ 0003bf66 0016
.org 0x3bf68
	cmp r0, #1	@ 0003bf68 0128
.org 0x3bf6a
	ble.n 0x3bfc0	@ 0003bf6a 29dd
.org 0x3bf6c
	adds r0, r1, #0	@ 0003bf6c 081c
.org 0x3bf6e
	adds r1, r4, #0	@ 0003bf6e 211c
.org 0x3bf70
	movs r2, #0	@ 0003bf70 0022
.org 0x3bf72
	movs r3, #0	@ 0003bf72 0023
.org 0x3bf74
	bl 0x4c628	@ 0003bf74 10f058fb
.org 0x3bf78
	strb r5, [r4, #18]	@ 0003bf78 a574
.org 0x3bf7a
	b.n 0x3bf98	@ 0003bf7a 0de0
.org 0x3bf7c
	ldrb r0, [r4, #18]	@ 0003bf7c a07c
.org 0x3bf7e
	adds r0, #1	@ 0003bf7e 0130
.org 0x3bf80
	strb r0, [r4, #18]	@ 0003bf80 a074
.org 0x3bf82
	lsls r0, r0, #24	@ 0003bf82 0006
.org 0x3bf84
	lsrs r0, r0, #24	@ 0003bf84 000e
.org 0x3bf86
	cmp r0, #32	@ 0003bf86 2028
.org 0x3bf88
	bls.n 0x3bfc0	@ 0003bf88 1ad9
.org 0x3bf8a
	b.n 0x3bf98	@ 0003bf8a 05e0
.org 0x3bf8c
	ldr r1, [pc, #16]	@ 0003bf8c 0449
.org 0x3bf8e
	adds r0, r4, #0	@ 0003bf8e 201c
.org 0x3bf90
	bl 0x1cf00	@ 0003bf90 e0f7b6ff
.org 0x3bf94
	movs r0, #0	@ 0003bf94 0020
.org 0x3bf96
	strb r0, [r4, #18]	@ 0003bf96 a074
.org 0x3bf98
	ldrb r0, [r4, #13]	@ 0003bf98 607b
.org 0x3bf9a
	adds r0, #1	@ 0003bf9a 0130
.org 0x3bf9c
	strb r0, [r4, #13]	@ 0003bf9c 6073
.org 0x3bf9e
	b.n 0x3bfc0	@ 0003bf9e 0fe0
.org 0x3bfa0
	.byte 0x01,0x5c,0x00,0x00	@ 0003bfa0 data
.org 0x3bfa4
	adds r0, r4, #0	@ 0003bfa4 201c
.org 0x3bfa6
	adds r0, #115	@ 0003bfa6 7330
.org 0x3bfa8
	ldrb r0, [r0, #0]	@ 0003bfa8 0078
.org 0x3bfaa
	cmp r0, #3	@ 0003bfaa 0328
.org 0x3bfac
	bne.n 0x3bfc0	@ 0003bfac 08d1
.org 0x3bfae
	ldr r1, [pc, #24]	@ 0003bfae 0649
.org 0x3bfb0
	ldrb r0, [r4, #9]	@ 0003bfb0 607a
.org 0x3bfb2
	lsls r0, r0, #2	@ 0003bfb2 8000
.org 0x3bfb4
	adds r0, r0, r1	@ 0003bfb4 4018
.org 0x3bfb6
	movs r1, #2	@ 0003bfb6 0221
.org 0x3bfb8
	str r1, [r4, #12]	@ 0003bfb8 e160
.org 0x3bfba
	ldr r0, [r0, #0]	@ 0003bfba 0068
.org 0x3bfbc
	ldr r0, [r0, #8]	@ 0003bfbc 8068
.org 0x3bfbe
	str r0, [r4, #20]	@ 0003bfbe 6061
.org 0x3bfc0
	pop {r4, r5}	@ 0003bfc0 30bc
