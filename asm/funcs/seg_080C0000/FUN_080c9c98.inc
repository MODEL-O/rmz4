@ FUN_080c9c98  entry 0x080c9c98  size 172
.thumb
.org 0xc9c98
FUN_080c9c98:
	push {r4, r5, r6, r7, lr}	@ 000c9c98 f0b5
.org 0xc9c9a
	adds r4, r0, #0	@ 000c9c9a 041c
.org 0xc9c9c
	ldr r1, [pc, #112]	@ 000c9c9c 1c49
.org 0xc9c9e
	ldrb r0, [r4, #13]	@ 000c9c9e 607b
.org 0xc9ca0
	lsls r0, r0, #2	@ 000c9ca0 8000
.org 0xc9ca2
	adds r0, r0, r1	@ 000c9ca2 4018
.org 0xc9ca4
	ldr r1, [r0, #0]	@ 000c9ca4 0168
.org 0xc9ca6
	adds r0, r4, #0	@ 000c9ca6 201c
.org 0xc9ca8
	bl 0x128f80	@ 000c9ca8 5ff06af9
.org 0xc9cac
	ldrb r0, [r4, #17]	@ 000c9cac 607c
.org 0xc9cae
	cmp r0, #0	@ 000c9cae 0028
.org 0xc9cb0
	bne.n 0xc9d40	@ 000c9cb0 46d1
.org 0xc9cb2
	adds r0, r4, #0	@ 000c9cb2 201c
.org 0xc9cb4
	adds r0, #193	@ 000c9cb4 c130
.org 0xc9cb6
	ldrb r7, [r0, #0]	@ 000c9cb6 0778
.org 0xc9cb8
	adds r6, r0, #0	@ 000c9cb8 061c
.org 0xc9cba
	cmp r7, #0	@ 000c9cba 002f
.org 0xc9cbc
	bne.n 0xc9d40	@ 000c9cbc 40d1
.org 0xc9cbe
	ldr r0, [r4, #84]	@ 000c9cbe 606d
.org 0xc9cc0
	ldr r1, [r4, #88]	@ 000c9cc0 a16d
.org 0xc9cc2
	bl 0x7c7c	@ 000c9cc2 3df7dbff
.org 0xc9cc6
	lsls r0, r0, #16	@ 000c9cc6 0004
.org 0xc9cc8
	lsrs r0, r0, #16	@ 000c9cc8 000c
.org 0xc9cca
	cmp r0, #0	@ 000c9cca 0028
.org 0xc9ccc
	beq.n 0xc9d14	@ 000c9ccc 22d0
.org 0xc9cce
	cmp r0, #15	@ 000c9cce 0f28
.org 0xc9cd0
	beq.n 0xc9d14	@ 000c9cd0 20d0
.org 0xc9cd2
	cmp r0, #47	@ 000c9cd2 2f28
.org 0xc9cd4
	beq.n 0xc9d14	@ 000c9cd4 1ed0
.org 0xc9cd6
	movs r5, #1	@ 000c9cd6 0125
.org 0xc9cd8
	strb r5, [r6, #0]	@ 000c9cd8 3570
.org 0xc9cda
	ldr r0, [r4, #40]	@ 000c9cda a06a
.org 0xc9cdc
	cmp r0, #0	@ 000c9cdc 0028
.org 0xc9cde
	beq.n 0xc9ce6	@ 000c9cde 02d0
.org 0xc9ce0
	adds r0, r4, #0	@ 000c9ce0 201c
.org 0xc9ce2
	bl 0xca468	@ 000c9ce2 00f0c1fb
.org 0xc9ce6
	adds r0, r4, #0	@ 000c9ce6 201c
.org 0xc9ce8
	adds r0, #84	@ 000c9ce8 5430
.org 0xc9cea
	ldrb r3, [r4, #10]	@ 000c9cea a37a
.org 0xc9cec
	lsrs r3, r3, #4	@ 000c9cec 1b09
.org 0xc9cee
	ands r3, r5	@ 000c9cee 2b40
.org 0xc9cf0
	movs r1, #1	@ 000c9cf0 0121
.org 0xc9cf2
	movs r2, #1	@ 000c9cf2 0122
.org 0xc9cf4
	bl 0xc9bc0	@ 000c9cf4 fff764ff
.org 0xc9cf8
	str r0, [r4, #40]	@ 000c9cf8 a062
.org 0xc9cfa
	adds r1, r4, #0	@ 000c9cfa 211c
.org 0xc9cfc
	adds r1, #184	@ 000c9cfc b831
.org 0xc9cfe
	ldr r0, [r4, #84]	@ 000c9cfe 606d
.org 0xc9d00
	str r0, [r1, #0]	@ 000c9d00 0860
.org 0xc9d02
	adds r1, #4	@ 000c9d02 0431
.org 0xc9d04
	ldr r0, [r4, #88]	@ 000c9d04 a06d
.org 0xc9d06
	str r0, [r1, #0]	@ 000c9d06 0860
.org 0xc9d08
	movs r0, #2	@ 000c9d08 0220
.org 0xc9d0a
	strb r0, [r4, #13]	@ 000c9d0a 6073
.org 0xc9d0c
	strb r7, [r4, #14]	@ 000c9d0c a773
.org 0xc9d0e
	b.n 0xc9d46	@ 000c9d0e 1ae0
.org 0xc9d10
	.byte 0x70,0x62,0x86,0x08	@ 000c9d10 data
.org 0xc9d14
	ldrb r0, [r4, #13]	@ 000c9d14 607b
.org 0xc9d16
	cmp r0, #1	@ 000c9d16 0128
.org 0xc9d18
	bne.n 0xc9d40	@ 000c9d18 12d1
.org 0xc9d1a
	ldrb r0, [r4, #18]	@ 000c9d1a a07c
.org 0xc9d1c
	cmp r0, #0	@ 000c9d1c 0028
.org 0xc9d1e
	bne.n 0xc9d3c	@ 000c9d1e 0dd1
.org 0xc9d20
	movs r0, #255	@ 000c9d20 ff20
.org 0xc9d22
	strb r0, [r6, #0]	@ 000c9d22 3070
.org 0xc9d24
	ldr r1, [pc, #16]	@ 000c9d24 0449
.org 0xc9d26
	ldrb r0, [r4, #9]	@ 000c9d26 607a
.org 0xc9d28
	lsls r0, r0, #2	@ 000c9d28 8000
.org 0xc9d2a
	adds r0, r0, r1	@ 000c9d2a 4018
.org 0xc9d2c
	movs r1, #2	@ 000c9d2c 0221
.org 0xc9d2e
	str r1, [r4, #12]	@ 000c9d2e e160
.org 0xc9d30
	ldr r0, [r0, #0]	@ 000c9d30 0068
.org 0xc9d32
	ldr r0, [r0, #8]	@ 000c9d32 8068
.org 0xc9d34
	str r0, [r4, #20]	@ 000c9d34 6061
.org 0xc9d36
	b.n 0xc9d46	@ 000c9d36 06e0
.org 0xc9d38
	.byte 0xf4,0x49,0x86,0x08	@ 000c9d38 data
.org 0xc9d3c
	subs r0, #1	@ 000c9d3c 0138
.org 0xc9d3e
	strb r0, [r4, #18]	@ 000c9d3e a074
.org 0xc9d40
	adds r0, r4, #0	@ 000c9d40 201c
.org 0xc9d42
	bl 0x1cff0	@ 000c9d42 53f755f9
