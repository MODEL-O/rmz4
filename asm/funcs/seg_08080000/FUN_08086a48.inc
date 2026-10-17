@ FUN_08086a48  entry 0x08086a48  size 188
.thumb
.org 0x86a48
FUN_08086a48:
	push {r4, r5, r6, r7, lr}	@ 00086a48 f0b5
.org 0x86a4a
	mov r7, r8	@ 00086a4a 4746
.org 0x86a4c
	push {r7}	@ 00086a4c 80b4
.org 0x86a4e
	adds r6, r0, #0	@ 00086a4e 061c
.org 0x86a50
	movs r0, #0	@ 00086a50 0020
.org 0x86a52
	mov r8, r0	@ 00086a52 8046
.org 0x86a54
	adds r7, r6, #0	@ 00086a54 371c
.org 0x86a56
	adds r7, #181	@ 00086a56 b537
.org 0x86a58
	movs r0, #0	@ 00086a58 0020
.org 0x86a5a
	ldrsb r0, [r7, r0]	@ 00086a5a 3856
.org 0x86a5c
	cmp r0, #0	@ 00086a5c 0028
.org 0x86a5e
	ble.n 0x86aac	@ 00086a5e 25dd
.org 0x86a60
	adds r5, r6, #0	@ 00086a60 351c
.org 0x86a62
	adds r5, #182	@ 00086a62 b635
.org 0x86a64
	ldrb r0, [r5, #0]	@ 00086a64 2878
.org 0x86a66
	subs r0, #1	@ 00086a66 0138
.org 0x86a68
	strb r0, [r5, #0]	@ 00086a68 2870
.org 0x86a6a
	lsls r0, r0, #24	@ 00086a6a 0006
.org 0x86a6c
	adds r4, r6, #0	@ 00086a6c 341c
.org 0x86a6e
	adds r4, #180	@ 00086a6e b434
.org 0x86a70
	cmp r0, #0	@ 00086a70 0028
.org 0x86a72
	bne.n 0x86a98	@ 00086a72 11d1
.org 0x86a74
	ldrb r0, [r4, #0]	@ 00086a74 2078
.org 0x86a76
	adds r0, #1	@ 00086a76 0130
.org 0x86a78
	strb r0, [r4, #0]	@ 00086a78 2070
.org 0x86a7a
	ldrb r0, [r4, #0]	@ 00086a7a 2078
.org 0x86a7c
	movs r1, #24	@ 00086a7c 1821
.org 0x86a7e
	bl 0x129198	@ 00086a7e a2f08bfb
.org 0x86a82
	strb r0, [r4, #0]	@ 00086a82 2070
.org 0x86a84
	ldrb r0, [r7, #0]	@ 00086a84 3878
.org 0x86a86
	strb r0, [r5, #0]	@ 00086a86 2870
.org 0x86a88
	ldr r1, [pc, #24]	@ 00086a88 0649
.org 0x86a8a
	ldrb r0, [r4, #0]	@ 00086a8a 2078
.org 0x86a8c
	lsls r0, r0, #2	@ 00086a8c 8000
.org 0x86a8e
	adds r0, r0, r1	@ 00086a8e 4018
.org 0x86a90
	ldrh r1, [r0, #0]	@ 00086a90 0188
.org 0x86a92
	adds r0, r6, #0	@ 00086a92 301c
.org 0x86a94
	bl 0x1cf00	@ 00086a94 96f734fa
.org 0x86a98
	ldr r0, [r4, #0]	@ 00086a98 2068
.org 0x86a9a
	ldr r1, [pc, #12]	@ 00086a9a 0349
.org 0x86a9c
	ands r0, r1	@ 00086a9c 0840
.org 0x86a9e
	movs r1, #128	@ 00086a9e 8021
.org 0x86aa0
	lsls r1, r1, #9	@ 00086aa0 4902
.org 0x86aa2
	b.n 0x86af0	@ 00086aa2 25e0
.org 0x86aa4
	.byte 0x44,0xee,0x85,0x08	@ 00086aa4 data
.org 0x86aa8
	.byte 0xff,0x00,0xff,0x00	@ 00086aa8 data
.org 0x86aac
	cmp r0, #0	@ 00086aac 0028
.org 0x86aae
	bge.n 0x86afa	@ 00086aae 24da
.org 0x86ab0
	adds r5, r6, #0	@ 00086ab0 351c
.org 0x86ab2
	adds r5, #182	@ 00086ab2 b635
.org 0x86ab4
	ldrb r0, [r5, #0]	@ 00086ab4 2878
.org 0x86ab6
	adds r0, #1	@ 00086ab6 0130
.org 0x86ab8
	strb r0, [r5, #0]	@ 00086ab8 2870
.org 0x86aba
	lsls r0, r0, #24	@ 00086aba 0006
.org 0x86abc
	adds r4, r6, #0	@ 00086abc 341c
.org 0x86abe
	adds r4, #180	@ 00086abe b434
.org 0x86ac0
	cmp r0, #0	@ 00086ac0 0028
.org 0x86ac2
	bne.n 0x86ae8	@ 00086ac2 11d1
.org 0x86ac4
	ldrb r0, [r4, #0]	@ 00086ac4 2078
.org 0x86ac6
	adds r0, #23	@ 00086ac6 1730
.org 0x86ac8
	strb r0, [r4, #0]	@ 00086ac8 2070
.org 0x86aca
	ldrb r0, [r4, #0]	@ 00086aca 2078
.org 0x86acc
	movs r1, #24	@ 00086acc 1821
.org 0x86ace
	bl 0x129198	@ 00086ace a2f063fb
.org 0x86ad2
	strb r0, [r4, #0]	@ 00086ad2 2070
.org 0x86ad4
	ldrb r0, [r7, #0]	@ 00086ad4 3878
.org 0x86ad6
	strb r0, [r5, #0]	@ 00086ad6 2870
.org 0x86ad8
	ldr r1, [pc, #48]	@ 00086ad8 0c49
.org 0x86ada
	ldrb r0, [r4, #0]	@ 00086ada 2078
.org 0x86adc
	lsls r0, r0, #2	@ 00086adc 8000
.org 0x86ade
	adds r0, r0, r1	@ 00086ade 4018
.org 0x86ae0
	ldrh r1, [r0, #0]	@ 00086ae0 0188
.org 0x86ae2
	adds r0, r6, #0	@ 00086ae2 301c
.org 0x86ae4
	bl 0x1cf00	@ 00086ae4 96f70cfa
.org 0x86ae8
	ldr r0, [r4, #0]	@ 00086ae8 2068
.org 0x86aea
	ldr r1, [pc, #36]	@ 00086aea 0949
.org 0x86aec
	ands r0, r1	@ 00086aec 0840
.org 0x86aee
	subs r1, #255	@ 00086aee ff39
.org 0x86af0
	cmp r0, r1	@ 00086af0 8842
.org 0x86af2
	bne.n 0x86afa	@ 00086af2 02d1
.org 0x86af4
	movs r0, #1	@ 00086af4 0120
.org 0x86af6
	negs r0, r0	@ 00086af6 4042
.org 0x86af8
	mov r8, r0	@ 00086af8 8046
.org 0x86afa
	adds r0, r6, #0	@ 00086afa 301c
.org 0x86afc
	bl 0x1cff0	@ 00086afc 96f778fa
.org 0x86b00
	mov r0, r8	@ 00086b00 4046
.org 0x86b02
	pop {r3}	@ 00086b02 08bc
