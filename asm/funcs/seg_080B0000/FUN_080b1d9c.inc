@ FUN_080b1d9c  entry 0x080b1d9c  size 130
.thumb
.org 0xb1d9c
FUN_080b1d9c:
	push {r4, r5, lr}	@ 000b1d9c 30b5
.org 0xb1d9e
	adds r4, r0, #0	@ 000b1d9e 041c
.org 0xb1da0
	ldrb r0, [r4, #14]	@ 000b1da0 a07b
.org 0xb1da2
	cmp r0, #0	@ 000b1da2 0028
.org 0xb1da4
	bne.n 0xb1db4	@ 000b1da4 06d1
.org 0xb1da6
	ldr r1, [pc, #80]	@ 000b1da6 1449
.org 0xb1da8
	adds r0, r4, #0	@ 000b1da8 201c
.org 0xb1daa
	bl 0x1cf00	@ 000b1daa 6bf7a9f8
.org 0xb1dae
	ldrb r0, [r4, #14]	@ 000b1dae a07b
.org 0xb1db0
	adds r0, #1	@ 000b1db0 0130
.org 0xb1db2
	strb r0, [r4, #14]	@ 000b1db2 a073
.org 0xb1db4
	adds r0, r4, #0	@ 000b1db4 201c
.org 0xb1db6
	adds r0, #115	@ 000b1db6 7330
.org 0xb1db8
	ldrb r0, [r0, #0]	@ 000b1db8 0078
.org 0xb1dba
	cmp r0, #3	@ 000b1dba 0328
.org 0xb1dbc
	bne.n 0xb1e2a	@ 000b1dbc 35d1
.org 0xb1dbe
	ldrb r0, [r4, #14]	@ 000b1dbe a07b
.org 0xb1dc0
	cmp r0, #1	@ 000b1dc0 0128
.org 0xb1dc2
	bne.n 0xb1e08	@ 000b1dc2 21d1
.org 0xb1dc4
	adds r5, r4, #0	@ 000b1dc4 251c
.org 0xb1dc6
	adds r5, #181	@ 000b1dc6 b535
.org 0xb1dc8
	ldr r0, [pc, #48]	@ 000b1dc8 0c48
.org 0xb1dca
	adds r1, r0, #0	@ 000b1dca 011c
.org 0xb1dcc
	ldrb r0, [r5, #0]	@ 000b1dcc 2878
.org 0xb1dce
	adds r1, r1, r0	@ 000b1dce 0918
.org 0xb1dd0
	lsls r1, r1, #16	@ 000b1dd0 0904
.org 0xb1dd2
	lsrs r1, r1, #16	@ 000b1dd2 090c
.org 0xb1dd4
	adds r0, r4, #0	@ 000b1dd4 201c
.org 0xb1dd6
	bl 0x1cf00	@ 000b1dd6 6bf793f8
.org 0xb1dda
	adds r0, r4, #0	@ 000b1dda 201c
.org 0xb1ddc
	adds r0, #116	@ 000b1ddc 7430
.org 0xb1dde
	ldrb r2, [r5, #0]	@ 000b1dde 2a78
.org 0xb1de0
	lsls r1, r2, #1	@ 000b1de0 5100
.org 0xb1de2
	adds r1, r1, r2	@ 000b1de2 8918
.org 0xb1de4
	lsls r1, r1, #5	@ 000b1de4 4901
.org 0xb1de6
	ldr r2, [pc, #24]	@ 000b1de6 064a
.org 0xb1de8
	adds r1, r1, r2	@ 000b1de8 8918
.org 0xb1dea
	bl 0x5784	@ 000b1dea 53f7cbfc
.org 0xb1dee
	ldr r0, [pc, #20]	@ 000b1dee 0548
.org 0xb1df0
	bl 0x2b10	@ 000b1df0 50f78efe
.org 0xb1df4
	b.n 0xb1e24	@ 000b1df4 16e0
.org 0xb1df6
	.byte 0x00	@ 000b1df6 data
.org 0xb1df7
	.byte 0x00	@ 000b1df7 data
.org 0xb1df8
	.byte 0x02,0xc2,0x00,0x00	@ 000b1df8 data
.org 0xb1dfc
	.byte 0x03,0xc2,0x00,0x00	@ 000b1dfc data
.org 0xb1e00
	.byte 0x4c,0x35,0x86,0x08	@ 000b1e00 data
.org 0xb1e04
	.byte 0x6f,0x01,0x00,0x00	@ 000b1e04 data
.org 0xb1e08
	cmp r0, #2	@ 000b1e08 0228
.org 0xb1e0a
	beq.n 0xb1e12	@ 000b1e0a 02d0
.org 0xb1e0c
	movs r0, #0	@ 000b1e0c 0020
.org 0xb1e0e
	strb r0, [r4, #13]	@ 000b1e0e 6073
.org 0xb1e10
	b.n 0xb1e28	@ 000b1e10 0ae0
.org 0xb1e12
	ldr r1, [pc, #28]	@ 000b1e12 0749
.org 0xb1e14
	adds r0, r4, #0	@ 000b1e14 201c
.org 0xb1e16
	bl 0x1cf00	@ 000b1e16 6bf773f8
.org 0xb1e1a
	adds r0, r4, #0	@ 000b1e1a 201c
.org 0xb1e1c
	adds r0, #116	@ 000b1e1c 7430
