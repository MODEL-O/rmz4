@ FUN_080a09b0  entry 0x080a09b0  size 218
.thumb
.org 0xa09b0
FUN_080a09b0:
	push {r4, r5, r6, r7, lr}	@ 000a09b0 f0b5
.org 0xa09b2
	mov r7, sl	@ 000a09b2 5746
.org 0xa09b4
	mov r6, r9	@ 000a09b4 4e46
.org 0xa09b6
	mov r5, r8	@ 000a09b6 4546
.org 0xa09b8
	push {r5, r6, r7}	@ 000a09b8 e0b4
.org 0xa09ba
	sub sp, #8	@ 000a09ba 82b0
.org 0xa09bc
	mov r9, r0	@ 000a09bc 8146
.org 0xa09be
	movs r0, #128	@ 000a09be 8020
.org 0xa09c0
	lsls r0, r0, #4	@ 000a09c0 0001
.org 0xa09c2
	mov sl, r0	@ 000a09c2 8246
.org 0xa09c4
	mov r4, r9	@ 000a09c4 4c46
.org 0xa09c6
	ldr r2, [r4, #84]	@ 000a09c6 626d
.org 0xa09c8
	ldr r0, [r4, #88]	@ 000a09c8 a06d
.org 0xa09ca
	ldr r4, [pc, #88]	@ 000a09ca 164c
.org 0xa09cc
	adds r3, r0, r4	@ 000a09cc 0319
.org 0xa09ce
	adds r5, r3, #0	@ 000a09ce 1d1c
.org 0xa09d0
	adds r4, r2, #0	@ 000a09d0 141c
.org 0xa09d2
	adds r4, r4, r1	@ 000a09d2 6418
.org 0xa09d4
	cmp r1, #0	@ 000a09d4 0029
.org 0xa09d6
	bge.n 0xa0a2c	@ 000a09d6 29da
.org 0xa09d8
	ldr r0, [pc, #76]	@ 000a09d8 1348
.org 0xa09da
	adds r6, r4, r0	@ 000a09da 2618
.org 0xa09dc
	movs r0, #0	@ 000a09dc 0020
.org 0xa09de
	mov r8, r0	@ 000a09de 8046
.org 0xa09e0
	adds r1, r1, r2	@ 000a09e0 8918
.org 0xa09e2
	str r1, [sp, #0]	@ 000a09e2 0091
.org 0xa09e4
	mov r2, sl	@ 000a09e4 5246
.org 0xa09e6
	subs r1, r5, r2	@ 000a09e6 a91a
.org 0xa09e8
	mov r2, r8	@ 000a09e8 4246
.org 0xa09ea
	lsls r0, r2, #12	@ 000a09ea 1003
.org 0xa09ec
	adds r2, r1, r0	@ 000a09ec 0a18
.org 0xa09ee
	adds r7, r2, #0	@ 000a09ee 171c
.org 0xa09f0
	adds r0, r6, #0	@ 000a09f0 301c
.org 0xa09f2
	adds r1, r2, #0	@ 000a09f2 111c
.org 0xa09f4
	str r2, [sp, #4]	@ 000a09f4 0192
.org 0xa09f6
	bl 0x7c7c	@ 000a09f6 67f741f9
.org 0xa09fa
	lsls r0, r0, #16	@ 000a09fa 0004
.org 0xa09fc
	ldr r2, [sp, #4]	@ 000a09fc 019a
.org 0xa09fe
	cmp r0, #0	@ 000a09fe 0028
.org 0xa0a00
	beq.n 0xa0a16	@ 000a0a00 09d0
.org 0xa0a02
	adds r0, r6, #0	@ 000a0a02 301c
.org 0xa0a04
	adds r1, r2, #0	@ 000a0a04 111c
.org 0xa0a06
	bl 0x8988	@ 000a0a06 67f7bfff
.org 0xa0a0a
	movs r1, #192	@ 000a0a0a c021
.org 0xa0a0c
	lsls r1, r1, #4	@ 000a0a0c 0901
.org 0xa0a0e
	adds r0, r0, r1	@ 000a0a0e 4018
.org 0xa0a10
	cmp r0, r4	@ 000a0a10 a042
.org 0xa0a12
	ble.n 0xa0a16	@ 000a0a12 00dd
.org 0xa0a14
	adds r4, r0, #0	@ 000a0a14 041c
.org 0xa0a16
	movs r2, #1	@ 000a0a16 0122
.org 0xa0a18
	add r8, r2	@ 000a0a18 9044
.org 0xa0a1a
	mov r0, r8	@ 000a0a1a 4046
.org 0xa0a1c
	cmp r0, #1	@ 000a0a1c 0128
.org 0xa0a1e
	ble.n 0xa09e4	@ 000a0a1e e1dd
.org 0xa0a20
	b.n 0xa0a76	@ 000a0a20 29e0
.org 0xa0a22
	.byte 0x00	@ 000a0a22 data
.org 0xa0a23
	.byte 0x00	@ 000a0a23 data
.org 0xa0a24
	.byte 0x00,0xf8,0xff,0xff	@ 000a0a24 data
.org 0xa0a28
	.byte 0x00,0xf4,0xff,0xff	@ 000a0a28 data
.org 0xa0a2c
	movs r0, #192	@ 000a0a2c c020
.org 0xa0a2e
	lsls r0, r0, #4	@ 000a0a2e 0001
.org 0xa0a30
	adds r6, r4, r0	@ 000a0a30 2618
.org 0xa0a32
	movs r0, #0	@ 000a0a32 0020
.org 0xa0a34
	mov r8, r0	@ 000a0a34 8046
.org 0xa0a36
	adds r1, r1, r2	@ 000a0a36 8918
.org 0xa0a38
	str r1, [sp, #0]	@ 000a0a38 0091
.org 0xa0a3a
	mov r2, sl	@ 000a0a3a 5246
.org 0xa0a3c
	subs r1, r5, r2	@ 000a0a3c a91a
.org 0xa0a3e
	mov r2, r8	@ 000a0a3e 4246
.org 0xa0a40
	lsls r0, r2, #12	@ 000a0a40 1003
.org 0xa0a42
	adds r2, r1, r0	@ 000a0a42 0a18
.org 0xa0a44
	adds r7, r2, #0	@ 000a0a44 171c
.org 0xa0a46
	adds r0, r6, #0	@ 000a0a46 301c
.org 0xa0a48
	adds r1, r2, #0	@ 000a0a48 111c
.org 0xa0a4a
	str r2, [sp, #4]	@ 000a0a4a 0192
.org 0xa0a4c
	bl 0x7c7c	@ 000a0a4c 67f716f9
.org 0xa0a50
	lsls r0, r0, #16	@ 000a0a50 0004
.org 0xa0a52
	ldr r2, [sp, #4]	@ 000a0a52 019a
.org 0xa0a54
	cmp r0, #0	@ 000a0a54 0028
.org 0xa0a56
	beq.n 0xa0a6c	@ 000a0a56 09d0
.org 0xa0a58
	adds r0, r6, #0	@ 000a0a58 301c
.org 0xa0a5a
	adds r1, r2, #0	@ 000a0a5a 111c
.org 0xa0a5c
	bl 0x8868	@ 000a0a5c 67f704ff
.org 0xa0a60
	movs r1, #192	@ 000a0a60 c021
.org 0xa0a62
	lsls r1, r1, #4	@ 000a0a62 0901
.org 0xa0a64
	subs r0, r0, r1	@ 000a0a64 401a
.org 0xa0a66
	cmp r0, r4	@ 000a0a66 a042
.org 0xa0a68
	bge.n 0xa0a6c	@ 000a0a68 00da
.org 0xa0a6a
	adds r4, r0, #0	@ 000a0a6a 041c
.org 0xa0a6c
	movs r2, #1	@ 000a0a6c 0122
.org 0xa0a6e
	add r8, r2	@ 000a0a6e 9044
.org 0xa0a70
	mov r0, r8	@ 000a0a70 4046
.org 0xa0a72
	cmp r0, #1	@ 000a0a72 0128
.org 0xa0a74
	ble.n 0xa0a3a	@ 000a0a74 e1dd
.org 0xa0a76
	ldr r1, [sp, #0]	@ 000a0a76 0099
.org 0xa0a78
	eors r1, r4	@ 000a0a78 6140
.org 0xa0a7a
	negs r0, r1	@ 000a0a7a 4842
.org 0xa0a7c
	orrs r0, r1	@ 000a0a7c 0843
.org 0xa0a7e
	lsrs r0, r0, #31	@ 000a0a7e c00f
.org 0xa0a80
	mov r1, r9	@ 000a0a80 4946
.org 0xa0a82
	str r4, [r1, #84]	@ 000a0a82 4c65
.org 0xa0a84
	add sp, #8	@ 000a0a84 02b0
.org 0xa0a86
	pop {r3, r4, r5}	@ 000a0a86 38bc
.org 0xa0a88
	mov r8, r3	@ 000a0a88 9846
