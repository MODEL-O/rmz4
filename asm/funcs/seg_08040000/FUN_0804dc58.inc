@ FUN_0804dc58  entry 0x0804dc58  size 134
.thumb
.org 0x4dc58
FUN_0804dc58:
	push {r4, r5, lr}	@ 0004dc58 30b5
.org 0x4dc5a
	adds r4, r0, #0	@ 0004dc5a 041c
.org 0x4dc5c
	lsls r1, r1, #24	@ 0004dc5c 0906
.org 0x4dc5e
	lsrs r5, r1, #24	@ 0004dc5e 0d0e
.org 0x4dc60
	ldr r0, [pc, #64]	@ 0004dc60 1048
.org 0x4dc62
	ldr r0, [r0, #0]	@ 0004dc62 0068
.org 0x4dc64
	bl 0x5500	@ 0004dc64 b7f74cfc
.org 0x4dc68
	adds r2, r0, #0	@ 0004dc68 021c
.org 0x4dc6a
	cmp r2, #0	@ 0004dc6a 002a
.org 0x4dc6c
	beq.n 0x4dce8	@ 0004dc6c 3cd0
.org 0x4dc6e
	adds r0, r4, #0	@ 0004dc6e 201c
.org 0x4dc70
	adds r0, #248	@ 0004dc70 f830
.org 0x4dc72
	ldrb r0, [r0, #0]	@ 0004dc72 0078
.org 0x4dc74
	cmp r0, #2	@ 0004dc74 0228
.org 0x4dc76
	bne.n 0x4dcb4	@ 0004dc76 1dd1
.org 0x4dc78
	ldr r0, [pc, #44]	@ 0004dc78 0b48
.org 0x4dc7a
	movs r1, #51	@ 0004dc7a 3321
.org 0x4dc7c
	strb r1, [r2, #9]	@ 0004dc7c 5172
.org 0x4dc7e
	adds r0, #204	@ 0004dc7e cc30
.org 0x4dc80
	ldr r0, [r0, #0]	@ 0004dc80 0068
.org 0x4dc82
	ldr r0, [r0, #0]	@ 0004dc82 0068
.org 0x4dc84
	str r0, [r2, #20]	@ 0004dc84 5061
.org 0x4dc86
	ldrb r1, [r2, #11]	@ 0004dc86 d17a
.org 0x4dc88
	movs r0, #191	@ 0004dc88 bf20
.org 0x4dc8a
	ands r0, r1	@ 0004dc8a 0840
.org 0x4dc8c
	strb r0, [r2, #11]	@ 0004dc8c d072
.org 0x4dc8e
	adds r1, r2, #0	@ 0004dc8e 111c
.org 0x4dc90
	adds r1, #37	@ 0004dc90 2531
.org 0x4dc92
	movs r0, #16	@ 0004dc92 1020
.org 0x4dc94
	strb r0, [r1, #0]	@ 0004dc94 0870
.org 0x4dc96
	ldr r0, [pc, #20]	@ 0004dc96 0548
.org 0x4dc98
	ldrh r0, [r0, #0]	@ 0004dc98 0088
.org 0x4dc9a
	strh r0, [r2, #32]	@ 0004dc9a 1084
.org 0x4dc9c
	ldr r0, [pc, #16]	@ 0004dc9c 0448
.org 0x4dc9e
	ldrb r0, [r0, #0]	@ 0004dc9e 0078
.org 0x4dca0
	b.n 0x4dcdc	@ 0004dca0 1ce0
.org 0x4dca2
	.byte 0x00	@ 0004dca2 data
.org 0x4dca3
	.byte 0x00	@ 0004dca3 data
.org 0x4dca4
	.byte 0x88,0xed,0x02,0x02	@ 0004dca4 data
.org 0x4dca8
	.byte 0xf8,0x39,0x85,0x08	@ 0004dca8 data
.org 0x4dcac
	.byte 0xfc,0x36,0x85,0x08	@ 0004dcac data
.org 0x4dcb0
	.byte 0x04,0x37,0x85,0x08	@ 0004dcb0 data
.org 0x4dcb4
	ldr r0, [pc, #56]	@ 0004dcb4 0e48
.org 0x4dcb6
	movs r1, #51	@ 0004dcb6 3321
.org 0x4dcb8
	strb r1, [r2, #9]	@ 0004dcb8 5172
.org 0x4dcba
	adds r0, #204	@ 0004dcba cc30
.org 0x4dcbc
	ldr r0, [r0, #0]	@ 0004dcbc 0068
.org 0x4dcbe
	ldr r0, [r0, #0]	@ 0004dcbe 0068
.org 0x4dcc0
	str r0, [r2, #20]	@ 0004dcc0 5061
.org 0x4dcc2
	ldrb r1, [r2, #11]	@ 0004dcc2 d17a
.org 0x4dcc4
	movs r0, #191	@ 0004dcc4 bf20
.org 0x4dcc6
	ands r0, r1	@ 0004dcc6 0840
.org 0x4dcc8
	strb r0, [r2, #11]	@ 0004dcc8 d072
.org 0x4dcca
	adds r1, r2, #0	@ 0004dcca 111c
.org 0x4dccc
	adds r1, #37	@ 0004dccc 2531
.org 0x4dcce
	movs r0, #16	@ 0004dcce 1020
.org 0x4dcd0
	strb r0, [r1, #0]	@ 0004dcd0 0870
.org 0x4dcd2
	ldr r0, [pc, #32]	@ 0004dcd2 0848
.org 0x4dcd4
	ldrh r0, [r0, #2]	@ 0004dcd4 4088
.org 0x4dcd6
	strh r0, [r2, #32]	@ 0004dcd6 1084
.org 0x4dcd8
	ldr r0, [pc, #28]	@ 0004dcd8 0748
.org 0x4dcda
	ldrb r0, [r0, #1]	@ 0004dcda 4078
.org 0x4dcdc
	subs r1, #3	@ 0004dcdc 0339
