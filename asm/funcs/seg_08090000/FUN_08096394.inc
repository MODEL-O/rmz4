@ FUN_08096394  entry 0x08096394  size 82
.thumb
.org 0x96394
FUN_08096394:
	push {lr}	@ 00096394 00b5
.org 0x96396
	adds r2, r0, #0	@ 00096396 021c
.org 0x96398
	ldr r1, [r2, #40]	@ 00096398 916a
.org 0x9639a
	ldrb r0, [r1, #12]	@ 0009639a 087b
.org 0x9639c
	cmp r0, #1	@ 0009639c 0128
.org 0x9639e
	bls.n 0x963c0	@ 0009639e 0fd9
.org 0x963a0
	ldr r1, [pc, #24]	@ 000963a0 0649
.org 0x963a2
	ldrb r0, [r2, #9]	@ 000963a2 507a
.org 0x963a4
	lsls r0, r0, #2	@ 000963a4 8000
.org 0x963a6
	adds r0, r0, r1	@ 000963a6 4018
.org 0x963a8
	movs r1, #2	@ 000963a8 0221
.org 0x963aa
	str r1, [r2, #12]	@ 000963aa d160
.org 0x963ac
	ldr r0, [r0, #0]	@ 000963ac 0068
.org 0x963ae
	ldr r0, [r0, #8]	@ 000963ae 8068
.org 0x963b0
	str r0, [r2, #20]	@ 000963b0 5061
.org 0x963b2
	adds r0, r2, #0	@ 000963b2 101c
.org 0x963b4
	bl 0x964c0	@ 000963b4 00f084f8
.org 0x963b8
	b.n 0x963e8	@ 000963b8 16e0
.org 0x963ba
	.byte 0x00	@ 000963ba data
.org 0x963bb
	.byte 0x00	@ 000963bb data
.org 0x963bc
	.byte 0x40,0xdb,0x85,0x08	@ 000963bc data
.org 0x963c0
	adds r0, r1, #0	@ 000963c0 081c
.org 0x963c2
	adds r0, #189	@ 000963c2 bd30
.org 0x963c4
	ldrb r0, [r0, #0]	@ 000963c4 0078
.org 0x963c6
	cmp r0, #0	@ 000963c6 0028
.org 0x963c8
	beq.n 0x963d8	@ 000963c8 06d0
.org 0x963ca
	adds r0, r1, #0	@ 000963ca 081c
.org 0x963cc
	adds r0, #112	@ 000963cc 7030
.org 0x963ce
	ldrb r0, [r0, #0]	@ 000963ce 0078
.org 0x963d0
	movs r1, #0	@ 000963d0 0021
.org 0x963d2
	strb r0, [r2, #13]	@ 000963d2 5073
.org 0x963d4
	strb r1, [r2, #14]	@ 000963d4 9173
.org 0x963d6
	strb r1, [r2, #15]	@ 000963d6 d173
.org 0x963d8
	ldr r0, [pc, #16]	@ 000963d8 0448
.org 0x963da
	ldrb r1, [r2, #13]	@ 000963da 517b
.org 0x963dc
	lsls r1, r1, #2	@ 000963dc 8900
.org 0x963de
	adds r1, r1, r0	@ 000963de 0918
.org 0x963e0
	ldr r1, [r1, #0]	@ 000963e0 0968
.org 0x963e2
	adds r0, r2, #0	@ 000963e2 101c
.org 0x963e4
	bl 0x128f80	@ 000963e4 92f0ccfd
