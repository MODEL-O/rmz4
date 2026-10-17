@ FUN_080a2a50  entry 0x080a2a50  size 108
.thumb
.org 0xa2a50
FUN_080a2a50:
	push {r4, r5, r6, lr}	@ 000a2a50 70b5
.org 0xa2a52
	adds r4, r0, #0	@ 000a2a52 041c
.org 0xa2a54
	ldrb r0, [r4, #10]	@ 000a2a54 a07a
.org 0xa2a56
	lsrs r5, r0, #4	@ 000a2a56 0509
.org 0xa2a58
	movs r0, #1	@ 000a2a58 0120
.org 0xa2a5a
	ands r5, r0	@ 000a2a5a 0540
.org 0xa2a5c
	ldrb r6, [r4, #15]	@ 000a2a5c e67b
.org 0xa2a5e
	cmp r6, #0	@ 000a2a5e 002e
.org 0xa2a60
	bne.n 0xa2a94	@ 000a2a60 18d1
.org 0xa2a62
	adds r1, r4, #0	@ 000a2a62 211c
.org 0xa2a64
	adds r1, #37	@ 000a2a64 2531
.org 0xa2a66
	movs r0, #24	@ 000a2a66 1820
.org 0xa2a68
	strb r0, [r1, #0]	@ 000a2a68 0870
.org 0xa2a6a
	adds r0, r4, #0	@ 000a2a6a 201c
.org 0xa2a6c
	adds r0, #116	@ 000a2a6c 7430
.org 0xa2a6e
	ldr r1, [pc, #76]	@ 000a2a6e 1349
.org 0xa2a70
	bl 0x5784	@ 000a2a70 62f788fe
.org 0xa2a74
	ldr r1, [pc, #72]	@ 000a2a74 1249
.org 0xa2a76
	adds r0, r4, #0	@ 000a2a76 201c
.org 0xa2a78
	bl 0x1cf00	@ 000a2a78 7af742fa
.org 0xa2a7c
	str r6, [r4, #92]	@ 000a2a7c e665
.org 0xa2a7e
	movs r0, #8	@ 000a2a7e 0820
.org 0xa2a80
	str r0, [r4, #100]	@ 000a2a80 6066
.org 0xa2a82
	movs r0, #192	@ 000a2a82 c020
.org 0xa2a84
	lsls r0, r0, #2	@ 000a2a84 8000
.org 0xa2a86
	str r0, [r4, #96]	@ 000a2a86 2066
.org 0xa2a88
	lsls r0, r5, #1	@ 000a2a88 6800
.org 0xa2a8a
	subs r0, #1	@ 000a2a8a 0138
.org 0xa2a8c
	str r0, [r4, #104]	@ 000a2a8c a066
.org 0xa2a8e
	ldrb r0, [r4, #15]	@ 000a2a8e e07b
.org 0xa2a90
	adds r0, #1	@ 000a2a90 0130
.org 0xa2a92
	strb r0, [r4, #15]	@ 000a2a92 e073
.org 0xa2a94
	adds r0, r4, #0	@ 000a2a94 201c
.org 0xa2a96
	bl 0x1cff0	@ 000a2a96 7af7abfa
.org 0xa2a9a
	ldr r1, [r4, #92]	@ 000a2a9a e16d
.org 0xa2a9c
	ldr r0, [r4, #104]	@ 000a2a9c a06e
.org 0xa2a9e
	adds r2, r1, #0	@ 000a2a9e 0a1c
.org 0xa2aa0
	muls r2, r0	@ 000a2aa0 4243
.org 0xa2aa2
	ldr r0, [r4, #84]	@ 000a2aa2 606d
.org 0xa2aa4
	adds r0, r0, r2	@ 000a2aa4 8018
.org 0xa2aa6
	str r0, [r4, #84]	@ 000a2aa6 6065
.org 0xa2aa8
	ldr r0, [r4, #100]	@ 000a2aa8 606e
.org 0xa2aaa
	adds r1, r1, r0	@ 000a2aaa 0918
.org 0xa2aac
	str r1, [r4, #92]	@ 000a2aac e165
.org 0xa2aae
	ldr r0, [r4, #96]	@ 000a2aae 206e
.org 0xa2ab0
	cmp r1, r0	@ 000a2ab0 8142
.org 0xa2ab2
	ble.n 0xa2ab6	@ 000a2ab2 00dd
.org 0xa2ab4
	str r0, [r4, #92]	@ 000a2ab4 e065
.org 0xa2ab6
	pop {r4, r5, r6}	@ 000a2ab6 70bc
.org 0xa2ab8
	pop {r0}	@ 000a2ab8 01bc
.org 0xa2aba
	bx r0	@ 000a2aba 0047
