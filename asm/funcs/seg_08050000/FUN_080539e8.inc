@ FUN_080539e8  entry 0x080539e8  size 152
.thumb
.org 0x539e8
FUN_080539e8:
	push {r4, r5, r6, r7, lr}	@ 000539e8 f0b5
.org 0x539ea
	mov r7, r8	@ 000539ea 4746
.org 0x539ec
	push {r7}	@ 000539ec 80b4
.org 0x539ee
	adds r4, r0, #0	@ 000539ee 041c
.org 0x539f0
	ldr r0, [pc, #24]	@ 000539f0 0648
.org 0x539f2
	ldrh r1, [r0, #8]	@ 000539f2 0189
.org 0x539f4
	movs r0, #8	@ 000539f4 0820
.org 0x539f6
	ands r0, r1	@ 000539f6 0840
.org 0x539f8
	lsls r0, r0, #16	@ 000539f8 0004
.org 0x539fa
	lsrs r5, r0, #16	@ 000539fa 050c
.org 0x539fc
	cmp r5, #0	@ 000539fc 002d
.org 0x539fe
	beq.n 0x53a10	@ 000539fe 07d0
.org 0x53a00
	movs r0, #0	@ 00053a00 0020
.org 0x53a02
	strb r0, [r4, #13]	@ 00053a02 6073
.org 0x53a04
	strb r0, [r4, #14]	@ 00053a04 a073
.org 0x53a06
	strb r0, [r4, #15]	@ 00053a06 e073
.org 0x53a08
	b.n 0x53a7c	@ 00053a08 38e0
.org 0x53a0a
	.byte 0x00	@ 00053a0a data
.org 0x53a0b
	.byte 0x00	@ 00053a0b data
.org 0x53a0c
	.byte 0x10,0xe9,0x02,0x02	@ 00053a0c data
.org 0x53a10
	adds r6, r4, #0	@ 00053a10 261c
.org 0x53a12
	adds r6, #180	@ 00053a12 b436
.org 0x53a14
	ldrb r2, [r6, #0]	@ 00053a14 3278
.org 0x53a16
	adds r7, r4, #0	@ 00053a16 271c
.org 0x53a18
	adds r7, #181	@ 00053a18 b537
.org 0x53a1a
	ldrb r3, [r7, #0]	@ 00053a1a 3b78
.org 0x53a1c
	ldr r0, [pc, #104]	@ 00053a1c 1a48
.org 0x53a1e
	mov r8, r0	@ 00053a1e 8046
.org 0x53a20
	lsls r0, r2, #2	@ 00053a20 9000
.org 0x53a22
	add r0, r8	@ 00053a22 4044
.org 0x53a24
	ldr r0, [r0, #0]	@ 00053a24 0068
.org 0x53a26
	adds r0, r0, r3	@ 00053a26 c018
.org 0x53a28
	ldrb r1, [r0, #0]	@ 00053a28 0178
.org 0x53a2a
	cmp r1, #255	@ 00053a2a ff29
.org 0x53a2c
	bne.n 0x53a5c	@ 00053a2c 16d1
.org 0x53a2e
	ldr r2, [pc, #92]	@ 00053a2e 174a
.org 0x53a30
	ldr r1, [r2, #0]	@ 00053a30 1168
.org 0x53a32
	ldr r0, [pc, #92]	@ 00053a32 1748
.org 0x53a34
	muls r0, r1	@ 00053a34 4843
.org 0x53a36
	ldr r1, [pc, #92]	@ 00053a36 1749
.org 0x53a38
	adds r0, r0, r1	@ 00053a38 4018
.org 0x53a3a
	lsls r0, r0, #1	@ 00053a3a 4000
.org 0x53a3c
	lsrs r1, r0, #1	@ 00053a3c 4108
.org 0x53a3e
	str r1, [r2, #0]	@ 00053a3e 1160
.org 0x53a40
	lsrs r0, r0, #17	@ 00053a40 400c
.org 0x53a42
	movs r1, #3	@ 00053a42 0321
.org 0x53a44
	bl 0x129198	@ 00053a44 d5f0a8fb
.org 0x53a48
	lsls r0, r0, #24	@ 00053a48 0006
.org 0x53a4a
	movs r1, #128	@ 00053a4a 8021
.org 0x53a4c
	lsls r1, r1, #17	@ 00053a4c 4904
.org 0x53a4e
	adds r0, r0, r1	@ 00053a4e 4018
.org 0x53a50
	lsrs r2, r0, #24	@ 00053a50 020e
.org 0x53a52
	movs r3, #0	@ 00053a52 0023
.org 0x53a54
	lsls r0, r2, #2	@ 00053a54 9000
.org 0x53a56
	add r0, r8	@ 00053a56 4044
.org 0x53a58
	ldr r0, [r0, #0]	@ 00053a58 0068
.org 0x53a5a
	ldrb r1, [r0, #0]	@ 00053a5a 0178
.org 0x53a5c
	strb r1, [r4, #13]	@ 00053a5c 6173
.org 0x53a5e
	strb r5, [r4, #14]	@ 00053a5e a573
.org 0x53a60
	strb r5, [r4, #15]	@ 00053a60 e573
.org 0x53a62
	strb r2, [r6, #0]	@ 00053a62 3270
.org 0x53a64
	adds r0, r3, #1	@ 00053a64 581c
.org 0x53a66
	strb r0, [r7, #0]	@ 00053a66 3870
.org 0x53a68
	adds r0, r4, #0	@ 00053a68 201c
.org 0x53a6a
	adds r0, #200	@ 00053a6a c830
.org 0x53a6c
	ldr r0, [r0, #0]	@ 00053a6c 0068
.org 0x53a6e
	cmp r0, #0	@ 00053a6e 0028
.org 0x53a70
	bne.n 0x53a7c	@ 00053a70 04d1
.org 0x53a72
	cmp r1, #2	@ 00053a72 0229
.org 0x53a74
	bne.n 0x53a7c	@ 00053a74 02d1
.org 0x53a76
	adds r0, r4, #0	@ 00053a76 201c
.org 0x53a78
	bl 0x539e8	@ 00053a78 fff7b6ff
.org 0x53a7c
	pop {r3}	@ 00053a7c 08bc
.org 0x53a7e
	mov r8, r3	@ 00053a7e 9846
