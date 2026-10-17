@ FUN_08081a00  entry 0x08081a00  size 156
.thumb
.org 0x81a00
FUN_08081a00:
	push {r4, r5, lr}	@ 00081a00 30b5
.org 0x81a02
	sub sp, #16	@ 00081a02 84b0
.org 0x81a04
	adds r5, r0, #0	@ 00081a04 051c
.org 0x81a06
	ldrb r0, [r5, #15]	@ 00081a06 e87b
.org 0x81a08
	cmp r0, #0	@ 00081a08 0028
.org 0x81a0a
	bne.n 0x81a30	@ 00081a0a 11d1
.org 0x81a0c
	mov r1, sp	@ 00081a0c 6946
.org 0x81a0e
	ldr r0, [pc, #104]	@ 00081a0e 1a48
.org 0x81a10
	ldmia r0!, {r2, r3, r4}	@ 00081a10 1cc8
.org 0x81a12
	stmia r1!, {r2, r3, r4}	@ 00081a12 1cc1
.org 0x81a14
	ldr r0, [r0, #0]	@ 00081a14 0068
.org 0x81a16
	str r0, [r1, #0]	@ 00081a16 0860
.org 0x81a18
	adds r0, r5, #0	@ 00081a18 281c
.org 0x81a1a
	adds r0, #180	@ 00081a1a b430
.org 0x81a1c
	ldrb r0, [r0, #0]	@ 00081a1c 0078
.org 0x81a1e
	lsls r0, r0, #2	@ 00081a1e 8000
.org 0x81a20
	add r0, sp	@ 00081a20 6844
.org 0x81a22
	ldrh r1, [r0, #0]	@ 00081a22 0188
.org 0x81a24
	adds r0, r5, #0	@ 00081a24 281c
.org 0x81a26
	bl 0x1cf00	@ 00081a26 9bf76bfa
.org 0x81a2a
	ldrb r0, [r5, #15]	@ 00081a2a e87b
.org 0x81a2c
	adds r0, #1	@ 00081a2c 0130
.org 0x81a2e
	strb r0, [r5, #15]	@ 00081a2e e873
.org 0x81a30
	adds r0, r5, #0	@ 00081a30 281c
.org 0x81a32
	bl 0x1cff0	@ 00081a32 9bf7ddfa
.org 0x81a36
	ldrb r0, [r5, #13]	@ 00081a36 687b
.org 0x81a38
	cmp r0, #0	@ 00081a38 0028
.org 0x81a3a
	beq.n 0x81a84	@ 00081a3a 23d0
.org 0x81a3c
	adds r0, r5, #0	@ 00081a3c 281c
.org 0x81a3e
	adds r0, #116	@ 00081a3e 7430
.org 0x81a40
	ldr r4, [pc, #56]	@ 00081a40 0e4c
.org 0x81a42
	adds r1, r5, #0	@ 00081a42 291c
.org 0x81a44
	adds r1, #181	@ 00081a44 b531
.org 0x81a46
	ldrb r3, [r1, #0]	@ 00081a46 0b78
.org 0x81a48
	lsls r3, r3, #2	@ 00081a48 9b00
.org 0x81a4a
	ldrb r1, [r5, #30]	@ 00081a4a a97f
.org 0x81a4c
	lsls r1, r1, #8	@ 00081a4c 0902
.org 0x81a4e
	adds r2, r5, #0	@ 00081a4e 2a1c
.org 0x81a50
	adds r2, #112	@ 00081a50 7032
.org 0x81a52
	ldrb r2, [r2, #0]	@ 00081a52 1278
.org 0x81a54
	orrs r1, r2	@ 00081a54 1143
.org 0x81a56
	ldr r2, [pc, #40]	@ 00081a56 0a4a
.org 0x81a58
	adds r1, r1, r2	@ 00081a58 8918
.org 0x81a5a
	lsls r1, r1, #3	@ 00081a5a c900
.org 0x81a5c
	adds r3, r3, r1	@ 00081a5c 5b18
.org 0x81a5e
	adds r3, r3, r4	@ 00081a5e 1b19
.org 0x81a60
	adds r1, r5, #0	@ 00081a60 291c
.org 0x81a62
	adds r1, #113	@ 00081a62 7131
.org 0x81a64
	ldrb r1, [r1, #0]	@ 00081a64 0978
.org 0x81a66
	lsls r1, r1, #24	@ 00081a66 0906
.org 0x81a68
	asrs r1, r1, #24	@ 00081a68 0916
.org 0x81a6a
	ldr r2, [r3, #0]	@ 00081a6a 1a68
.org 0x81a6c
	lsls r1, r1, #2	@ 00081a6c 8900
.org 0x81a6e
	adds r1, r1, r2	@ 00081a6e 8918
.org 0x81a70
	ldr r1, [r1, #0]	@ 00081a70 0968
.org 0x81a72
	bl 0x5784	@ 00081a72 83f787fe
.org 0x81a76
	b.n 0x81a8e	@ 00081a76 0ae0
.org 0x81a78
	.byte 0x04,0x9b,0x12,0x08	@ 00081a78 data
.org 0x81a7c
	.byte 0x1c,0xe7,0x85,0x08	@ 00081a7c data
.org 0x81a80
	.byte 0x00,0xe9,0xff,0xff	@ 00081a80 data
.org 0x81a84
	adds r0, r5, #0	@ 00081a84 281c
.org 0x81a86
	adds r0, #116	@ 00081a86 7430
.org 0x81a88
	ldr r1, [pc, #28]	@ 00081a88 0749
.org 0x81a8a
	bl 0x5784	@ 00081a8a 83f77bfe
.org 0x81a8e
	adds r0, r5, #0	@ 00081a8e 281c
.org 0x81a90
	adds r0, #115	@ 00081a90 7330
.org 0x81a92
	ldrb r0, [r0, #0]	@ 00081a92 0078
.org 0x81a94
	cmp r0, #3	@ 00081a94 0328
.org 0x81a96
	bne.n 0x81aa0	@ 00081a96 03d1
.org 0x81a98
	movs r0, #0	@ 00081a98 0020
.org 0x81a9a
	strb r0, [r5, #13]	@ 00081a9a 6873
