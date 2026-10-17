@ FUN_080b4c30  entry 0x080b4c30  size 164
.thumb
.org 0xb4c30
FUN_080b4c30:
	push {r4, r5, r6, lr}	@ 000b4c30 70b5
.org 0xb4c32
	adds r6, r0, #0	@ 000b4c32 061c
.org 0xb4c34
	bl 0x1cc9c	@ 000b4c34 68f732f8
.org 0xb4c38
	ldrb r0, [r6, #10]	@ 000b4c38 b07a
.org 0xb4c3a
	movs r2, #1	@ 000b4c3a 0122
.org 0xb4c3c
	movs r1, #0	@ 000b4c3c 0021
.org 0xb4c3e
	movs r5, #0	@ 000b4c3e 0025
.org 0xb4c40
	orrs r2, r0	@ 000b4c40 0243
.org 0xb4c42
	movs r0, #2	@ 000b4c42 0220
.org 0xb4c44
	orrs r2, r0	@ 000b4c44 0243
.org 0xb4c46
	orrs r2, r1	@ 000b4c46 0a43
.org 0xb4c48
	strb r2, [r6, #10]	@ 000b4c48 b272
.org 0xb4c4a
	ldr r1, [pc, #108]	@ 000b4c4a 1b49
.org 0xb4c4c
	ldrb r0, [r6, #9]	@ 000b4c4c 707a
.org 0xb4c4e
	lsls r0, r0, #2	@ 000b4c4e 8000
.org 0xb4c50
	adds r0, r0, r1	@ 000b4c50 4018
.org 0xb4c52
	movs r1, #1	@ 000b4c52 0121
.org 0xb4c54
	str r1, [r6, #12]	@ 000b4c54 f160
.org 0xb4c56
	ldr r0, [r0, #0]	@ 000b4c56 0068
.org 0xb4c58
	ldr r0, [r0, #4]	@ 000b4c58 4068
.org 0xb4c5a
	str r0, [r6, #20]	@ 000b4c5a 7061
.org 0xb4c5c
	movs r0, #4	@ 000b4c5c 0420
.org 0xb4c5e
	orrs r2, r0	@ 000b4c5e 0243
.org 0xb4c60
	strb r2, [r6, #10]	@ 000b4c60 b272
.org 0xb4c62
	adds r4, r6, #0	@ 000b4c62 341c
.org 0xb4c64
	adds r4, #116	@ 000b4c64 7434
.org 0xb4c66
	ldr r1, [pc, #84]	@ 000b4c66 1549
.org 0xb4c68
	adds r2, r6, #0	@ 000b4c68 321c
.org 0xb4c6a
	adds r2, #84	@ 000b4c6a 5432
.org 0xb4c6c
	adds r0, r4, #0	@ 000b4c6c 201c
.org 0xb4c6e
	movs r3, #8	@ 000b4c6e 0823
.org 0xb4c70
	bl 0x5760	@ 000b4c70 50f776fd
.org 0xb4c74
	str r6, [r4, #44]	@ 000b4c74 e662
.org 0xb4c76
	ldr r0, [pc, #72]	@ 000b4c76 1248
.org 0xb4c78
	str r0, [r4, #36]	@ 000b4c78 6062
.org 0xb4c7a
	adds r0, r6, #0	@ 000b4c7a 301c
.org 0xb4c7c
	adds r0, #192	@ 000b4c7c c030
.org 0xb4c7e
	str r5, [r0, #0]	@ 000b4c7e 0560
.org 0xb4c80
	subs r0, #12	@ 000b4c80 0c38
.org 0xb4c82
	strb r5, [r0, #0]	@ 000b4c82 0570
.org 0xb4c84
	adds r0, #2	@ 000b4c84 0230
.org 0xb4c86
	strb r5, [r0, #0]	@ 000b4c86 0570
.org 0xb4c88
	subs r0, #1	@ 000b4c88 0138
.org 0xb4c8a
	strb r5, [r0, #0]	@ 000b4c8a 0570
.org 0xb4c8c
	adds r0, #2	@ 000b4c8c 0230
.org 0xb4c8e
	strb r5, [r0, #0]	@ 000b4c8e 0570
.org 0xb4c90
	str r5, [r6, #44]	@ 000b4c90 f562
.org 0xb4c92
	adds r0, r6, #0	@ 000b4c92 301c
.org 0xb4c94
	bl 0xb564c	@ 000b4c94 00f0dafc
.org 0xb4c98
	ldr r0, [r6, #84]	@ 000b4c98 706d
.org 0xb4c9a
	ldr r1, [r6, #88]	@ 000b4c9a b16d
.org 0xb4c9c
	bl 0x7c7c	@ 000b4c9c 52f7eeff
.org 0xb4ca0
	lsls r0, r0, #16	@ 000b4ca0 0004
.org 0xb4ca2
	lsrs r4, r0, #16	@ 000b4ca2 040c
.org 0xb4ca4
	cmp r4, #0	@ 000b4ca4 002c
.org 0xb4ca6
	beq.n 0xb4cc4	@ 000b4ca6 0dd0
.org 0xb4ca8
	ldr r0, [r6, #84]	@ 000b4ca8 706d
.org 0xb4caa
	ldr r1, [r6, #88]	@ 000b4caa b16d
.org 0xb4cac
	bl 0x8534	@ 000b4cac 53f742fc
.org 0xb4cb0
	str r0, [r6, #88]	@ 000b4cb0 b065
.org 0xb4cb2
	movs r0, #3	@ 000b4cb2 0320
.org 0xb4cb4
	strb r0, [r6, #13]	@ 000b4cb4 7073
.org 0xb4cb6
	b.n 0xb4cd0	@ 000b4cb6 0be0
.org 0xb4cb8
	.byte 0x40,0xdb,0x85,0x08	@ 000b4cb8 data
.org 0xb4cbc
	.byte 0xa8,0x39,0x86,0x08	@ 000b4cbc data
.org 0xb4cc0
	.byte 0x55,0x4e,0x0b,0x08	@ 000b4cc0 data
.org 0xb4cc4
	ldr r0, [r6, #84]	@ 000b4cc4 706d
.org 0xb4cc6
	ldr r1, [r6, #88]	@ 000b4cc6 b16d
.org 0xb4cc8
	bl 0x8534	@ 000b4cc8 53f734fc
.org 0xb4ccc
	str r0, [r6, #88]	@ 000b4ccc b065
.org 0xb4cce
	strb r4, [r6, #13]	@ 000b4cce 7473
.org 0xb4cd0
	movs r0, #0	@ 000b4cd0 0020
.org 0xb4cd2
	strb r0, [r6, #14]	@ 000b4cd2 b073
