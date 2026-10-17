@ FUN_0806c9a0  entry 0x0806c9a0  size 306
.thumb
.org 0x6c9a0
FUN_0806c9a0:
	push {r4, r5, lr}	@ 0006c9a0 30b5
.org 0x6c9a2
	adds r4, r0, #0	@ 0006c9a2 041c
.org 0x6c9a4
	ldrb r0, [r4, #14]	@ 0006c9a4 a07b
.org 0x6c9a6
	cmp r0, #0	@ 0006c9a6 0028
.org 0x6c9a8
	bne.n 0x6ca0e	@ 0006c9a8 31d1
.org 0x6c9aa
	ldr r1, [pc, #40]	@ 0006c9aa 0a49
.org 0x6c9ac
	adds r0, r4, #0	@ 0006c9ac 201c
.org 0x6c9ae
	bl 0x1cf00	@ 0006c9ae b0f7a7fa
.org 0x6c9b2
	movs r0, #205	@ 0006c9b2 cd20
.org 0x6c9b4
	bl 0x2b10	@ 0006c9b4 96f7acf8
.org 0x6c9b8
	movs r0, #192	@ 0006c9b8 c020
.org 0x6c9ba
	lsls r0, r0, #3	@ 0006c9ba c000
.org 0x6c9bc
	str r0, [r4, #92]	@ 0006c9bc e065
.org 0x6c9be
	movs r0, #32	@ 0006c9be 2020
.org 0x6c9c0
	str r0, [r4, #100]	@ 0006c9c0 6066
.org 0x6c9c2
	adds r0, r4, #0	@ 0006c9c2 201c
.org 0x6c9c4
	adds r0, #164	@ 0006c9c4 a430
.org 0x6c9c6
	movs r1, #0	@ 0006c9c6 0021
.org 0x6c9c8
	ldrsh r0, [r0, r1]	@ 0006c9c8 405e
.org 0x6c9ca
	cmp r0, #15	@ 0006c9ca 0f28
.org 0x6c9cc
	bgt.n 0x6c9d8	@ 0006c9cc 04dc
.org 0x6c9ce
	movs r0, #144	@ 0006c9ce 9020
.org 0x6c9d0
	lsls r0, r0, #3	@ 0006c9d0 c000
.org 0x6c9d2
	b.n 0x6c9e6	@ 0006c9d2 08e0
.org 0x6c9d4
	.byte 0x1b,0xaa,0x00,0x00	@ 0006c9d4 data
.org 0x6c9d8
	cmp r0, #31	@ 0006c9d8 1f28
.org 0x6c9da
	bgt.n 0x6c9e2	@ 0006c9da 02dc
.org 0x6c9dc
	movs r0, #136	@ 0006c9dc 8820
.org 0x6c9de
	lsls r0, r0, #3	@ 0006c9de c000
.org 0x6c9e0
	b.n 0x6c9e6	@ 0006c9e0 01e0
.org 0x6c9e2
	movs r0, #128	@ 0006c9e2 8020
.org 0x6c9e4
	lsls r0, r0, #3	@ 0006c9e4 c000
.org 0x6c9e6
	str r0, [r4, #96]	@ 0006c9e6 2066
.org 0x6c9e8
	ldrb r1, [r4, #10]	@ 0006c9e8 a17a
.org 0x6c9ea
	movs r0, #16	@ 0006c9ea 1020
.org 0x6c9ec
	ands r0, r1	@ 0006c9ec 0840
.org 0x6c9ee
	cmp r0, #0	@ 0006c9ee 0028
.org 0x6c9f0
	beq.n 0x6c9f6	@ 0006c9f0 01d0
.org 0x6c9f2
	movs r0, #13	@ 0006c9f2 0d20
.org 0x6c9f4
	b.n 0x6c9f8	@ 0006c9f4 00e0
.org 0x6c9f6
	movs r0, #115	@ 0006c9f6 7320
.org 0x6c9f8
	strb r0, [r4, #18]	@ 0006c9f8 a074
.org 0x6c9fa
	adds r0, r4, #0	@ 0006c9fa 201c
.org 0x6c9fc
	adds r0, #116	@ 0006c9fc 7430
.org 0x6c9fe
	ldr r1, [pc, #60]	@ 0006c9fe 0f49
.org 0x6ca00
	bl 0x5784	@ 0006ca00 98f7c0fe
.org 0x6ca04
	movs r0, #0	@ 0006ca04 0020
.org 0x6ca06
	strb r0, [r4, #15]	@ 0006ca06 e073
.org 0x6ca08
	ldrb r0, [r4, #14]	@ 0006ca08 a07b
.org 0x6ca0a
	adds r0, #1	@ 0006ca0a 0130
.org 0x6ca0c
	strb r0, [r4, #14]	@ 0006ca0c a073
.org 0x6ca0e
	adds r0, r4, #0	@ 0006ca0e 201c
.org 0x6ca10
	bl 0x1cff0	@ 0006ca10 b0f7eefa
.org 0x6ca14
	ldrb r0, [r4, #15]	@ 0006ca14 e07b
.org 0x6ca16
	cmp r0, #0	@ 0006ca16 0028
.org 0x6ca18
	bne.n 0x6ca44	@ 0006ca18 14d1
.org 0x6ca1a
	adds r0, r4, #0	@ 0006ca1a 201c
.org 0x6ca1c
	adds r0, #113	@ 0006ca1c 7130
.org 0x6ca1e
	ldrb r0, [r0, #0]	@ 0006ca1e 0078
.org 0x6ca20
	lsls r0, r0, #24	@ 0006ca20 0006
.org 0x6ca22
	asrs r0, r0, #24	@ 0006ca22 0016
.org 0x6ca24
	cmp r0, #0	@ 0006ca24 0028
.org 0x6ca26
	ble.n 0x6cada	@ 0006ca26 58dd
.org 0x6ca28
	adds r0, r4, #0	@ 0006ca28 201c
.org 0x6ca2a
	adds r0, #116	@ 0006ca2a 7430
.org 0x6ca2c
	ldr r1, [pc, #16]	@ 0006ca2c 0449
.org 0x6ca2e
	bl 0x5784	@ 0006ca2e 98f7a9fe
.org 0x6ca32
	ldrb r0, [r4, #15]	@ 0006ca32 e07b
.org 0x6ca34
	adds r0, #1	@ 0006ca34 0130
.org 0x6ca36
	strb r0, [r4, #15]	@ 0006ca36 e073
.org 0x6ca38
	b.n 0x6cada	@ 0006ca38 4fe0
.org 0x6ca3a
	.byte 0x00	@ 0006ca3a data
.org 0x6ca3b
	.byte 0x00	@ 0006ca3b data
.org 0x6ca3c
	.byte 0xac,0xc4,0x85,0x08	@ 0006ca3c data
.org 0x6ca40
	.byte 0x94,0xc4,0x85,0x08	@ 0006ca40 data
.org 0x6ca44
	cmp r0, #1	@ 0006ca44 0128
.org 0x6ca46
	bne.n 0x6ca6c	@ 0006ca46 11d1
.org 0x6ca48
	adds r0, r4, #0	@ 0006ca48 201c
.org 0x6ca4a
	adds r0, #113	@ 0006ca4a 7130
.org 0x6ca4c
	ldrb r0, [r0, #0]	@ 0006ca4c 0078
.org 0x6ca4e
	lsls r0, r0, #24	@ 0006ca4e 0006
.org 0x6ca50
	asrs r0, r0, #24	@ 0006ca50 0016
.org 0x6ca52
	cmp r0, #3	@ 0006ca52 0328
.org 0x6ca54
	ble.n 0x6ca6c	@ 0006ca54 0add
.org 0x6ca56
	movs r0, #210	@ 0006ca56 d220
.org 0x6ca58
	bl 0x2b10	@ 0006ca58 96f75af8
.org 0x6ca5c
	adds r0, r4, #0	@ 0006ca5c 201c
.org 0x6ca5e
	movs r1, #0	@ 0006ca5e 0021
.org 0x6ca60
	movs r2, #3	@ 0006ca60 0322
.org 0x6ca62
	bl 0xca4c4	@ 0006ca62 5df02ffd
.org 0x6ca66
	ldrb r0, [r4, #15]	@ 0006ca66 e07b
.org 0x6ca68
	adds r0, #1	@ 0006ca68 0130
.org 0x6ca6a
	strb r0, [r4, #15]	@ 0006ca6a e073
.org 0x6ca6c
	ldr r2, [pc, #112]	@ 0006ca6c 1c4a
.org 0x6ca6e
	ldrb r3, [r4, #18]	@ 0006ca6e a37c
.org 0x6ca70
	adds r0, r3, #0	@ 0006ca70 181c
.org 0x6ca72
	adds r0, #64	@ 0006ca72 4030
.org 0x6ca74
	lsls r0, r0, #24	@ 0006ca74 0006
.org 0x6ca76
	lsrs r0, r0, #23	@ 0006ca76 c00d
.org 0x6ca78
	adds r0, r0, r2	@ 0006ca78 8018
.org 0x6ca7a
	movs r1, #0	@ 0006ca7a 0021
.org 0x6ca7c
	ldrsh r0, [r0, r1]	@ 0006ca7c 405e
.org 0x6ca7e
	ldr r5, [r4, #92]	@ 0006ca7e e56d
.org 0x6ca80
	adds r1, r0, #0	@ 0006ca80 011c
.org 0x6ca82
	muls r1, r5	@ 0006ca82 6943
.org 0x6ca84
	asrs r1, r1, #8	@ 0006ca84 0912
.org 0x6ca86
	ldr r0, [r4, #84]	@ 0006ca86 606d
.org 0x6ca88
	adds r0, r0, r1	@ 0006ca88 4018
.org 0x6ca8a
	str r0, [r4, #84]	@ 0006ca8a 6065
.org 0x6ca8c
	ldrb r0, [r4, #18]	@ 0006ca8c a07c
.org 0x6ca8e
	lsls r0, r0, #1	@ 0006ca8e 4000
.org 0x6ca90
	adds r0, r0, r2	@ 0006ca90 8018
.org 0x6ca92
	movs r1, #0	@ 0006ca92 0021
.org 0x6ca94
	ldrsh r0, [r0, r1]	@ 0006ca94 405e
.org 0x6ca96
	adds r1, r0, #0	@ 0006ca96 011c
.org 0x6ca98
	muls r1, r5	@ 0006ca98 6943
.org 0x6ca9a
	asrs r1, r1, #8	@ 0006ca9a 0912
.org 0x6ca9c
	ldr r0, [r4, #88]	@ 0006ca9c a06d
.org 0x6ca9e
	adds r0, r0, r1	@ 0006ca9e 4018
.org 0x6caa0
	str r0, [r4, #88]	@ 0006caa0 a065
.org 0x6caa2
	ldr r0, [r4, #96]	@ 0006caa2 206e
.org 0x6caa4
	cmp r5, r0	@ 0006caa4 8542
.org 0x6caa6
	ble.n 0x6caac	@ 0006caa6 01dd
.org 0x6caa8
	ldr r0, [r4, #100]	@ 0006caa8 606e
.org 0x6caaa
	subs r0, r5, r0	@ 0006caaa 281a
.org 0x6caac
	str r0, [r4, #92]	@ 0006caac e065
.org 0x6caae
	adds r0, r4, #0	@ 0006caae 201c
.org 0x6cab0
	adds r0, #180	@ 0006cab0 b430
.org 0x6cab2
	ldr r1, [r4, #88]	@ 0006cab2 a16d
.org 0x6cab4
	ldr r0, [r0, #4]	@ 0006cab4 4068
.org 0x6cab6
	cmp r1, r0	@ 0006cab6 8142
.org 0x6cab8
	ble.n 0x6cada	@ 0006cab8 0fdd
.org 0x6caba
	str r0, [r4, #88]	@ 0006caba a065
.org 0x6cabc
	adds r0, r3, #0	@ 0006cabc 181c
.org 0x6cabe
	adds r0, #64	@ 0006cabe 4030
.org 0x6cac0
	lsls r0, r0, #24	@ 0006cac0 0006
.org 0x6cac2
	lsrs r0, r0, #23	@ 0006cac2 c00d
.org 0x6cac4
	adds r0, r0, r2	@ 0006cac4 8018
.org 0x6cac6
	movs r2, #0	@ 0006cac6 0022
.org 0x6cac8
	ldrsh r1, [r0, r2]	@ 0006cac8 815e
.org 0x6caca
	ldr r0, [r4, #92]	@ 0006caca e06d
.org 0x6cacc
	muls r0, r1	@ 0006cacc 4843
.org 0x6cace
	asrs r0, r0, #8	@ 0006cace 0012
.org 0x6cad0
	str r0, [r4, #92]	@ 0006cad0 e065
