@ FUN_080a0d40  entry 0x080a0d40  size 204
.thumb
.org 0xa0d40
FUN_080a0d40:
	push {r4, r5, r6, r7, lr}	@ 000a0d40 f0b5
.org 0xa0d42
	mov r7, r8	@ 000a0d42 4746
.org 0xa0d44
	push {r7}	@ 000a0d44 80b4
.org 0xa0d46
	adds r6, r0, #0	@ 000a0d46 061c
.org 0xa0d48
	ldrb r0, [r6, #17]	@ 000a0d48 707c
.org 0xa0d4a
	mov r8, r0	@ 000a0d4a 8046
.org 0xa0d4c
	ldr r1, [pc, #104]	@ 000a0d4c 1a49
.org 0xa0d4e
	ldrb r0, [r6, #9]	@ 000a0d4e 707a
.org 0xa0d50
	lsls r0, r0, #2	@ 000a0d50 8000
.org 0xa0d52
	adds r0, r0, r1	@ 000a0d52 4018
.org 0xa0d54
	movs r1, #1	@ 000a0d54 0121
.org 0xa0d56
	str r1, [r6, #12]	@ 000a0d56 f160
.org 0xa0d58
	ldr r0, [r0, #0]	@ 000a0d58 0068
.org 0xa0d5a
	ldr r0, [r0, #4]	@ 000a0d5a 4068
.org 0xa0d5c
	str r0, [r6, #20]	@ 000a0d5c 7061
.org 0xa0d5e
	movs r0, #0	@ 000a0d5e 0020
.org 0xa0d60
	strb r0, [r6, #13]	@ 000a0d60 7073
.org 0xa0d62
	strb r0, [r6, #14]	@ 000a0d62 b073
.org 0xa0d64
	strb r0, [r6, #15]	@ 000a0d64 f073
.org 0xa0d66
	ldrb r0, [r6, #10]	@ 000a0d66 b07a
.org 0xa0d68
	movs r7, #0	@ 000a0d68 0027
.org 0xa0d6a
	orrs r0, r1	@ 000a0d6a 0843
.org 0xa0d6c
	movs r1, #2	@ 000a0d6c 0221
.org 0xa0d6e
	orrs r0, r1	@ 000a0d6e 0843
.org 0xa0d70
	strb r0, [r6, #10]	@ 000a0d70 b072
.org 0xa0d72
	ldr r5, [r6, #84]	@ 000a0d72 756d
.org 0xa0d74
	ldr r0, [r6, #88]	@ 000a0d74 b06d
.org 0xa0d76
	movs r1, #128	@ 000a0d76 8021
.org 0xa0d78
	lsls r1, r1, #4	@ 000a0d78 0901
.org 0xa0d7a
	adds r4, r0, r1	@ 000a0d7a 4418
.org 0xa0d7c
	adds r0, r5, #0	@ 000a0d7c 281c
.org 0xa0d7e
	adds r1, r4, #0	@ 000a0d7e 211c
.org 0xa0d80
	bl 0x7c7c	@ 000a0d80 66f77cff
.org 0xa0d84
	lsls r0, r0, #16	@ 000a0d84 0004
.org 0xa0d86
	cmp r0, #0	@ 000a0d86 0028
.org 0xa0d88
	beq.n 0xa0d94	@ 000a0d88 04d0
.org 0xa0d8a
	adds r0, r5, #0	@ 000a0d8a 281c
.org 0xa0d8c
	adds r1, r4, #0	@ 000a0d8c 211c
.org 0xa0d8e
	bl 0x8534	@ 000a0d8e 67f7d1fb
.org 0xa0d92
	str r0, [r6, #88]	@ 000a0d92 b065
.org 0xa0d94
	adds r0, r6, #0	@ 000a0d94 301c
.org 0xa0d96
	adds r0, #180	@ 000a0d96 b430
.org 0xa0d98
	movs r1, #48	@ 000a0d98 3021
.org 0xa0d9a
	str r1, [r0, #0]	@ 000a0d9a 0160
.org 0xa0d9c
	adds r0, r6, #0	@ 000a0d9c 301c
.org 0xa0d9e
	bl 0x1cc9c	@ 000a0d9e 7bf77dff
.org 0xa0da2
	adds r1, r6, #0	@ 000a0da2 311c
.org 0xa0da4
	adds r1, #37	@ 000a0da4 2531
.org 0xa0da6
	movs r0, #25	@ 000a0da6 1920
.org 0xa0da8
	strb r0, [r1, #0]	@ 000a0da8 0870
.org 0xa0daa
	mov r2, r8	@ 000a0daa 4246
.org 0xa0dac
	cmp r2, #0	@ 000a0dac 002a
.org 0xa0dae
	beq.n 0xa0dbc	@ 000a0dae 05d0
.org 0xa0db0
	ldrb r0, [r6, #10]	@ 000a0db0 b07a
.org 0xa0db2
	movs r1, #16	@ 000a0db2 1021
.org 0xa0db4
	orrs r0, r1	@ 000a0db4 0843
.org 0xa0db6
	b.n 0xa0dc2	@ 000a0db6 04e0
.org 0xa0db8
	.byte 0x40,0xdb,0x85,0x08	@ 000a0db8 data
.org 0xa0dbc
	ldrb r1, [r6, #10]	@ 000a0dbc b17a
.org 0xa0dbe
	movs r0, #239	@ 000a0dbe ef20
.org 0xa0dc0
	ands r0, r1	@ 000a0dc0 0840
.org 0xa0dc2
	strb r0, [r6, #10]	@ 000a0dc2 b072
.org 0xa0dc4
	movs r1, #1	@ 000a0dc4 0121
.org 0xa0dc6
	ands r1, r2	@ 000a0dc6 1140
.org 0xa0dc8
	adds r0, r6, #0	@ 000a0dc8 301c
.org 0xa0dca
	adds r0, #76	@ 000a0dca 4c30
.org 0xa0dcc
	movs r5, #0	@ 000a0dcc 0025
.org 0xa0dce
	strb r1, [r0, #0]	@ 000a0dce 0170
.org 0xa0dd0
	adds r3, r6, #0	@ 000a0dd0 331c
.org 0xa0dd2
	adds r3, #74	@ 000a0dd2 4a33
.org 0xa0dd4
	lsls r1, r1, #4	@ 000a0dd4 0901
.org 0xa0dd6
	ldrb r2, [r3, #0]	@ 000a0dd6 1a78
.org 0xa0dd8
	movs r0, #17	@ 000a0dd8 1120
.org 0xa0dda
	negs r0, r0	@ 000a0dda 4042
.org 0xa0ddc
	ands r0, r2	@ 000a0ddc 1040
.org 0xa0dde
	orrs r0, r1	@ 000a0dde 0843
.org 0xa0de0
	strb r0, [r3, #0]	@ 000a0de0 1870
.org 0xa0de2
	ldrb r1, [r6, #10]	@ 000a0de2 b17a
.org 0xa0de4
	movs r0, #4	@ 000a0de4 0420
.org 0xa0de6
	orrs r0, r1	@ 000a0de6 0843
.org 0xa0de8
	strb r0, [r6, #10]	@ 000a0de8 b072
.org 0xa0dea
	adds r4, r6, #0	@ 000a0dea 341c
.org 0xa0dec
	adds r4, #116	@ 000a0dec 7434
.org 0xa0dee
	ldr r1, [pc, #32]	@ 000a0dee 0849
.org 0xa0df0
	adds r2, r6, #0	@ 000a0df0 321c
.org 0xa0df2
	adds r2, #84	@ 000a0df2 5432
.org 0xa0df4
	adds r0, r4, #0	@ 000a0df4 201c
.org 0xa0df6
	movs r3, #4	@ 000a0df6 0423
.org 0xa0df8
	bl 0x5760	@ 000a0df8 64f7b2fc
.org 0xa0dfc
	str r6, [r4, #44]	@ 000a0dfc e662
.org 0xa0dfe
	str r5, [r4, #36]	@ 000a0dfe 6562
.org 0xa0e00
	adds r0, r6, #0	@ 000a0e00 301c
.org 0xa0e02
	bl 0xa0e14	@ 000a0e02 00f007f8
.org 0xa0e06
	pop {r3}	@ 000a0e06 08bc
.org 0xa0e08
	mov r8, r3	@ 000a0e08 9846
.org 0xa0e0a
	pop {r4, r5, r6, r7}	@ 000a0e0a f0bc
