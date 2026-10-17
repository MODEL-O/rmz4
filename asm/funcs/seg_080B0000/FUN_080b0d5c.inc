@ FUN_080b0d5c  entry 0x080b0d5c  size 122
.thumb
.org 0xb0d5c
FUN_080b0d5c:
	push {r4, r5, r6, r7, lr}	@ 000b0d5c f0b5
.org 0xb0d5e
	mov r7, r8	@ 000b0d5e 4746
.org 0xb0d60
	push {r7}	@ 000b0d60 80b4
.org 0xb0d62
	adds r5, r0, #0	@ 000b0d62 051c
.org 0xb0d64
	adds r6, r1, #0	@ 000b0d64 0e1c
.org 0xb0d66
	adds r7, r2, #0	@ 000b0d66 171c
.org 0xb0d68
	lsls r3, r3, #24	@ 000b0d68 1b06
.org 0xb0d6a
	lsrs r3, r3, #24	@ 000b0d6a 1b0e
.org 0xb0d6c
	mov r8, r3	@ 000b0d6c 9846
.org 0xb0d6e
	ldr r0, [pc, #104]	@ 000b0d6e 1a48
.org 0xb0d70
	ldr r0, [r0, #0]	@ 000b0d70 0068
.org 0xb0d72
	bl 0x5500	@ 000b0d72 54f7c5fb
.org 0xb0d76
	adds r4, r0, #0	@ 000b0d76 041c
.org 0xb0d78
	cmp r4, #0	@ 000b0d78 002c
.org 0xb0d7a
	beq.n 0xb0dca	@ 000b0d7a 26d0
.org 0xb0d7c
	adds r1, r4, #0	@ 000b0d7c 211c
.org 0xb0d7e
	adds r1, #37	@ 000b0d7e 2531
.org 0xb0d80
	movs r2, #0	@ 000b0d80 0022
.org 0xb0d82
	movs r0, #24	@ 000b0d82 1820
.org 0xb0d84
	strb r0, [r1, #0]	@ 000b0d84 0870
.org 0xb0d86
	ldr r0, [pc, #84]	@ 000b0d86 1548
.org 0xb0d88
	movs r1, #86	@ 000b0d88 5621
.org 0xb0d8a
	strb r1, [r4, #9]	@ 000b0d8a 6172
.org 0xb0d8c
	movs r1, #172	@ 000b0d8c ac21
.org 0xb0d8e
	lsls r1, r1, #1	@ 000b0d8e 4900
.org 0xb0d90
	adds r0, r0, r1	@ 000b0d90 4018
.org 0xb0d92
	ldr r0, [r0, #0]	@ 000b0d92 0068
.org 0xb0d94
	ldr r0, [r0, #0]	@ 000b0d94 0068
.org 0xb0d96
	str r0, [r4, #20]	@ 000b0d96 6061
.org 0xb0d98
	movs r3, #0	@ 000b0d98 0023
.org 0xb0d9a
	strh r2, [r4, #32]	@ 000b0d9a 2284
.org 0xb0d9c
	adds r0, r4, #0	@ 000b0d9c 201c
.org 0xb0d9e
	adds r0, #34	@ 000b0d9e 2230
.org 0xb0da0
	strb r3, [r0, #0]	@ 000b0da0 0370
.org 0xb0da2
	ldrb r1, [r4, #11]	@ 000b0da2 e17a
.org 0xb0da4
	movs r0, #16	@ 000b0da4 1020
.org 0xb0da6
	orrs r0, r1	@ 000b0da6 0843
.org 0xb0da8
	strb r0, [r4, #11]	@ 000b0da8 e072
.org 0xb0daa
	ldrb r0, [r4, #28]	@ 000b0daa 207f
.org 0xb0dac
	strb r0, [r4, #29]	@ 000b0dac 6077
.org 0xb0dae
	str r5, [r4, #40]	@ 000b0dae a562
.org 0xb0db0
	ldr r0, [r6, #0]	@ 000b0db0 3068
.org 0xb0db2
	ldr r1, [r6, #4]	@ 000b0db2 7168
.org 0xb0db4
	str r0, [r4, #84]	@ 000b0db4 6065
.org 0xb0db6
	str r1, [r4, #88]	@ 000b0db6 a165
.org 0xb0db8
	adds r2, r4, #0	@ 000b0db8 221c
.org 0xb0dba
	adds r2, #180	@ 000b0dba b432
.org 0xb0dbc
	ldr r0, [r7, #0]	@ 000b0dbc 3868
.org 0xb0dbe
	ldr r1, [r7, #4]	@ 000b0dbe 7968
.org 0xb0dc0
	str r0, [r2, #0]	@ 000b0dc0 1060
.org 0xb0dc2
	str r1, [r2, #4]	@ 000b0dc2 5160
.org 0xb0dc4
	strb r3, [r4, #16]	@ 000b0dc4 2374
.org 0xb0dc6
	mov r0, r8	@ 000b0dc6 4046
.org 0xb0dc8
	strb r0, [r4, #17]	@ 000b0dc8 6074
.org 0xb0dca
	adds r0, r4, #0	@ 000b0dca 201c
.org 0xb0dcc
	pop {r3}	@ 000b0dcc 08bc
.org 0xb0dce
	mov r8, r3	@ 000b0dce 9846
.org 0xb0dd0
	pop {r4, r5, r6, r7}	@ 000b0dd0 f0bc
.org 0xb0dd2
	pop {r1}	@ 000b0dd2 02bc
.org 0xb0dd4
	bx r1	@ 000b0dd4 0847
