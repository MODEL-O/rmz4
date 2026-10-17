@ FUN_080579e0  entry 0x080579e0  size 152
.thumb
.org 0x579e0
FUN_080579e0:
	push {r4, lr}	@ 000579e0 10b5
.org 0x579e2
	adds r4, r0, #0	@ 000579e2 041c
.org 0x579e4
	ldrb r0, [r4, #15]	@ 000579e4 e07b
.org 0x579e6
	cmp r0, #0	@ 000579e6 0028
.org 0x579e8
	bne.n 0x57a08	@ 000579e8 0ed1
.org 0x579ea
	ldr r1, [pc, #116]	@ 000579ea 1d49
.org 0x579ec
	adds r0, r4, #0	@ 000579ec 201c
.org 0x579ee
	bl 0x1cf00	@ 000579ee c5f787fa
.org 0x579f2
	adds r0, r4, #0	@ 000579f2 201c
.org 0x579f4
	bl 0x5977c	@ 000579f4 01f0c2fe
.org 0x579f8
	adds r1, r0, #0	@ 000579f8 011c
.org 0x579fa
	ldr r0, [pc, #104]	@ 000579fa 1a48
.org 0x579fc
	adds r0, r1, r0	@ 000579fc 0818
.org 0x579fe
	ldrb r1, [r0, #0]	@ 000579fe 0178
.org 0x57a00
	strb r1, [r4, #18]	@ 00057a00 a174
.org 0x57a02
	ldrb r0, [r4, #15]	@ 00057a02 e07b
.org 0x57a04
	adds r0, #1	@ 00057a04 0130
.org 0x57a06
	strb r0, [r4, #15]	@ 00057a06 e073
.org 0x57a08
	adds r0, r4, #0	@ 00057a08 201c
.org 0x57a0a
	bl 0x1cff0	@ 00057a0a c5f7f1fa
.org 0x57a0e
	adds r0, r4, #0	@ 00057a0e 201c
.org 0x57a10
	adds r0, #116	@ 00057a10 7430
.org 0x57a12
	ldr r3, [pc, #84]	@ 00057a12 154b
.org 0x57a14
	ldrb r1, [r4, #30]	@ 00057a14 a17f
.org 0x57a16
	lsls r1, r1, #8	@ 00057a16 0902
.org 0x57a18
	adds r2, r4, #0	@ 00057a18 221c
.org 0x57a1a
	adds r2, #112	@ 00057a1a 7032
.org 0x57a1c
	ldrb r2, [r2, #0]	@ 00057a1c 1278
.org 0x57a1e
	orrs r1, r2	@ 00057a1e 1143
.org 0x57a20
	ldr r2, [pc, #72]	@ 00057a20 124a
.org 0x57a22
	adds r1, r1, r2	@ 00057a22 8918
.org 0x57a24
	lsls r1, r1, #2	@ 00057a24 8900
.org 0x57a26
	adds r1, r1, r3	@ 00057a26 c918
.org 0x57a28
	adds r2, r4, #0	@ 00057a28 221c
.org 0x57a2a
	adds r2, #113	@ 00057a2a 7132
.org 0x57a2c
	ldrb r2, [r2, #0]	@ 00057a2c 1278
.org 0x57a2e
	lsls r2, r2, #24	@ 00057a2e 1206
.org 0x57a30
	asrs r2, r2, #24	@ 00057a30 1216
.org 0x57a32
	ldr r1, [r1, #0]	@ 00057a32 0968
.org 0x57a34
	lsls r2, r2, #2	@ 00057a34 9200
.org 0x57a36
	adds r2, r2, r1	@ 00057a36 5218
.org 0x57a38
	ldr r1, [r2, #0]	@ 00057a38 1168
.org 0x57a3a
	ldrb r2, [r1, #0]	@ 00057a3a 0a78
.org 0x57a3c
	lsls r1, r2, #1	@ 00057a3c 5100
.org 0x57a3e
	adds r1, r1, r2	@ 00057a3e 8918
.org 0x57a40
	lsls r1, r1, #3	@ 00057a40 c900
.org 0x57a42
	ldr r2, [pc, #44]	@ 00057a42 0b4a
.org 0x57a44
	adds r1, r1, r2	@ 00057a44 8918
.org 0x57a46
	bl 0x5784	@ 00057a46 adf79dfe
.org 0x57a4a
	adds r0, r4, #0	@ 00057a4a 201c
.org 0x57a4c
	bl 0x597ac	@ 00057a4c 01f0aefe
.org 0x57a50
	cmp r0, #0	@ 00057a50 0028
.org 0x57a52
	beq.n 0x57a74	@ 00057a52 0fd0
.org 0x57a54
	movs r1, #0	@ 00057a54 0021
.org 0x57a56
	movs r0, #4	@ 00057a56 0420
.org 0x57a58
	strb r0, [r4, #13]	@ 00057a58 6073
.org 0x57a5a
	strb r1, [r4, #14]	@ 00057a5a a173
.org 0x57a5c
	strb r1, [r4, #15]	@ 00057a5c e173
.org 0x57a5e
	b.n 0x57a86	@ 00057a5e 12e0
.org 0x57a60
	.byte 0x06,0xa0,0x00,0x00	@ 00057a60 data
.org 0x57a64
	.byte 0xd4,0x87,0x85,0x08	@ 00057a64 data
.org 0x57a68
	.byte 0x1c,0x87,0x85,0x08	@ 00057a68 data
.org 0x57a6c
	.byte 0x00,0x60,0xff,0xff	@ 00057a6c data
.org 0x57a70
	.byte 0xcc,0x84,0x85,0x08	@ 00057a70 data
.org 0x57a74
	ldrb r0, [r4, #18]	@ 00057a74 a07c
.org 0x57a76
	subs r0, #1	@ 00057a76 0138
