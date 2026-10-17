@ FUN_080589e0  entry 0x080589e0  size 218
.thumb
.org 0x589e0
FUN_080589e0:
	push {r4, r5, r6, r7, lr}	@ 000589e0 f0b5
.org 0x589e2
	adds r4, r0, #0	@ 000589e2 041c
.org 0x589e4
	ldrb r0, [r4, #10]	@ 000589e4 a07a
.org 0x589e6
	lsrs r5, r0, #4	@ 000589e6 0509
.org 0x589e8
	movs r0, #1	@ 000589e8 0120
.org 0x589ea
	ands r5, r0	@ 000589ea 0540
.org 0x589ec
	ldrb r6, [r4, #15]	@ 000589ec e67b
.org 0x589ee
	cmp r6, #0	@ 000589ee 002e
.org 0x589f0
	bne.n 0x58a10	@ 000589f0 0ed1
.org 0x589f2
	ldr r1, [pc, #200]	@ 000589f2 3249
.org 0x589f4
	adds r0, r4, #0	@ 000589f4 201c
.org 0x589f6
	bl 0x1cf00	@ 000589f6 c4f783fa
.org 0x589fa
	lsls r0, r5, #1	@ 000589fa 6800
.org 0x589fc
	subs r0, #1	@ 000589fc 0138
.org 0x589fe
	lsls r0, r0, #9	@ 000589fe 4002
.org 0x58a00
	str r0, [r4, #92]	@ 00058a00 e065
.org 0x58a02
	str r6, [r4, #96]	@ 00058a02 2666
.org 0x58a04
	movs r0, #32	@ 00058a04 2020
.org 0x58a06
	negs r0, r0	@ 00058a06 4042
.org 0x58a08
	str r0, [r4, #104]	@ 00058a08 a066
.org 0x58a0a
	ldrb r0, [r4, #15]	@ 00058a0a e07b
.org 0x58a0c
	adds r0, #1	@ 00058a0c 0130
.org 0x58a0e
	strb r0, [r4, #15]	@ 00058a0e e073
.org 0x58a10
	adds r0, r4, #0	@ 00058a10 201c
.org 0x58a12
	bl 0x1cff0	@ 00058a12 c4f7edfa
.org 0x58a16
	adds r0, r4, #0	@ 00058a16 201c
.org 0x58a18
	adds r0, #116	@ 00058a18 7430
.org 0x58a1a
	ldr r3, [pc, #164]	@ 00058a1a 294b
.org 0x58a1c
	ldrb r1, [r4, #30]	@ 00058a1c a17f
.org 0x58a1e
	lsls r1, r1, #8	@ 00058a1e 0902
.org 0x58a20
	adds r2, r4, #0	@ 00058a20 221c
.org 0x58a22
	adds r2, #112	@ 00058a22 7032
.org 0x58a24
	ldrb r2, [r2, #0]	@ 00058a24 1278
.org 0x58a26
	orrs r1, r2	@ 00058a26 1143
.org 0x58a28
	ldr r2, [pc, #152]	@ 00058a28 264a
.org 0x58a2a
	adds r1, r1, r2	@ 00058a2a 8918
.org 0x58a2c
	lsls r1, r1, #2	@ 00058a2c 8900
.org 0x58a2e
	adds r1, r1, r3	@ 00058a2e c918
.org 0x58a30
	adds r2, r4, #0	@ 00058a30 221c
.org 0x58a32
	adds r2, #113	@ 00058a32 7132
.org 0x58a34
	ldrb r2, [r2, #0]	@ 00058a34 1278
.org 0x58a36
	lsls r2, r2, #24	@ 00058a36 1206
.org 0x58a38
	asrs r2, r2, #24	@ 00058a38 1216
.org 0x58a3a
	ldr r1, [r1, #0]	@ 00058a3a 0968
.org 0x58a3c
	lsls r2, r2, #2	@ 00058a3c 9200
.org 0x58a3e
	adds r2, r2, r1	@ 00058a3e 5218
.org 0x58a40
	ldr r1, [r2, #0]	@ 00058a40 1168
.org 0x58a42
	ldrb r2, [r1, #0]	@ 00058a42 0a78
.org 0x58a44
	lsls r1, r2, #1	@ 00058a44 5100
.org 0x58a46
	adds r1, r1, r2	@ 00058a46 8918
.org 0x58a48
	lsls r1, r1, #3	@ 00058a48 c900
.org 0x58a4a
	ldr r2, [pc, #124]	@ 00058a4a 1f4a
.org 0x58a4c
	adds r1, r1, r2	@ 00058a4c 8918
.org 0x58a4e
	bl 0x5784	@ 00058a4e acf799fe
.org 0x58a52
	ldr r1, [r4, #84]	@ 00058a52 616d
.org 0x58a54
	ldr r0, [r4, #92]	@ 00058a54 e06d
.org 0x58a56
	adds r1, r1, r0	@ 00058a56 0918
.org 0x58a58
	str r1, [r4, #84]	@ 00058a58 6165
.org 0x58a5a
	ldr r0, [r4, #96]	@ 00058a5a 206e
.org 0x58a5c
	ldr r1, [r4, #104]	@ 00058a5c a16e
.org 0x58a5e
	adds r0, r0, r1	@ 00058a5e 4018
.org 0x58a60
	str r0, [r4, #96]	@ 00058a60 2066
.org 0x58a62
	ldr r1, [pc, #104]	@ 00058a62 1a49
.org 0x58a64
	cmp r0, r1	@ 00058a64 8842
.org 0x58a66
	bge.n 0x58a6a	@ 00058a66 00da
.org 0x58a68
	str r1, [r4, #96]	@ 00058a68 2166
.org 0x58a6a
	adds r3, r4, #0	@ 00058a6a 231c
.org 0x58a6c
	adds r3, #188	@ 00058a6c bc33
.org 0x58a6e
	ldr r1, [r3, #0]	@ 00058a6e 1968
.org 0x58a70
	ldr r0, [r4, #96]	@ 00058a70 206e
.org 0x58a72
	adds r1, r1, r0	@ 00058a72 0918
.org 0x58a74
	str r1, [r3, #0]	@ 00058a74 1960
.org 0x58a76
	adds r6, r4, #0	@ 00058a76 261c
.org 0x58a78
	adds r6, #84	@ 00058a78 5436
.org 0x58a7a
	ldr r7, [pc, #84]	@ 00058a7a 154f
.org 0x58a7c
	adds r5, r4, #0	@ 00058a7c 251c
.org 0x58a7e
	adds r5, #181	@ 00058a7e b535
.org 0x58a80
	ldrb r0, [r5, #0]	@ 00058a80 2878
.org 0x58a82
	lsls r0, r0, #1	@ 00058a82 4000
.org 0x58a84
	adds r0, r0, r7	@ 00058a84 c019
.org 0x58a86
	movs r2, #0	@ 00058a86 0022
.org 0x58a88
	ldrsh r0, [r0, r2]	@ 00058a88 805e
.org 0x58a8a
	lsls r0, r0, #1	@ 00058a8a 4000
.org 0x58a8c
	adds r0, r1, r0	@ 00058a8c 0818
.org 0x58a8e
	str r0, [r6, #4]	@ 00058a8e 7060
.org 0x58a90
	adds r0, r4, #0	@ 00058a90 201c
.org 0x58a92
	adds r0, #184	@ 00058a92 b830
.org 0x58a94
	ldr r2, [r0, #0]	@ 00058a94 0268
.org 0x58a96
	cmp r1, r2	@ 00058a96 9142
.org 0x58a98
	bgt.n 0x58ab4	@ 00058a98 0cdc
.org 0x58a9a
	str r2, [r3, #0]	@ 00058a9a 1a60
.org 0x58a9c
	ldrb r0, [r5, #0]	@ 00058a9c 2878
.org 0x58a9e
	lsls r0, r0, #1	@ 00058a9e 4000
.org 0x58aa0
	adds r0, r0, r7	@ 00058aa0 c019
.org 0x58aa2
	movs r1, #0	@ 00058aa2 0021
.org 0x58aa4
	ldrsh r0, [r0, r1]	@ 00058aa4 405e
.org 0x58aa6
	lsls r0, r0, #1	@ 00058aa6 4000
.org 0x58aa8
	adds r0, r2, r0	@ 00058aa8 1018
.org 0x58aaa
	str r0, [r6, #4]	@ 00058aaa 7060
.org 0x58aac
	movs r1, #0	@ 00058aac 0021
.org 0x58aae
	movs r0, #5	@ 00058aae 0520
.org 0x58ab0
	strb r0, [r4, #14]	@ 00058ab0 a073
.org 0x58ab2
	strb r1, [r4, #15]	@ 00058ab2 e173
.org 0x58ab4
	pop {r4, r5, r6, r7}	@ 00058ab4 f0bc
.org 0x58ab6
	pop {r0}	@ 00058ab6 01bc
.org 0x58ab8
	bx r0	@ 00058ab8 0047
