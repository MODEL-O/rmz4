@ FUN_08090a2c  entry 0x08090a2c  size 78
.thumb
.org 0x90a2c
FUN_08090a2c:
	push {r4, lr}	@ 00090a2c 10b5
.org 0x90a2e
	adds r4, r0, #0	@ 00090a2e 041c
.org 0x90a30
	ldr r0, [r4, #40]	@ 00090a30 a06a
.org 0x90a32
	ldrb r0, [r0, #12]	@ 00090a32 007b
.org 0x90a34
	cmp r0, #4	@ 00090a34 0428
.org 0x90a36
	bne.n 0x90a58	@ 00090a36 0fd1
.org 0x90a38
	ldr r1, [pc, #24]	@ 00090a38 0649
.org 0x90a3a
	ldrb r0, [r4, #9]	@ 00090a3a 607a
.org 0x90a3c
	lsls r0, r0, #2	@ 00090a3c 8000
.org 0x90a3e
	adds r0, r0, r1	@ 00090a3e 4018
.org 0x90a40
	movs r1, #2	@ 00090a40 0221
.org 0x90a42
	str r1, [r4, #12]	@ 00090a42 e160
.org 0x90a44
	ldr r0, [r0, #0]	@ 00090a44 0068
.org 0x90a46
	ldr r0, [r0, #8]	@ 00090a46 8068
.org 0x90a48
	str r0, [r4, #20]	@ 00090a48 6061
.org 0x90a4a
	adds r0, r4, #0	@ 00090a4a 201c
.org 0x90a4c
	bl 0x90a80	@ 00090a4c 00f018f8
.org 0x90a50
	b.n 0x90a7a	@ 00090a50 13e0
.org 0x90a52
	.byte 0x00	@ 00090a52 data
.org 0x90a53
	.byte 0x00	@ 00090a53 data
.org 0x90a54
	.byte 0x40,0xdb,0x85,0x08	@ 00090a54 data
.org 0x90a58
	adds r0, r4, #0	@ 00090a58 201c
.org 0x90a5a
	bl 0x1cff0	@ 00090a5a 8cf7c9fa
.org 0x90a5e
	ldrb r0, [r4, #18]	@ 00090a5e a07c
.org 0x90a60
	cmp r0, #0	@ 00090a60 0028
.org 0x90a62
	beq.n 0x90a68	@ 00090a62 01d0
.org 0x90a64
	subs r0, #1	@ 00090a64 0138
.org 0x90a66
	strb r0, [r4, #18]	@ 00090a66 a074
.org 0x90a68
	ldrb r1, [r4, #18]	@ 00090a68 a17c
.org 0x90a6a
	ldr r0, [r4, #92]	@ 00090a6a e06d
.org 0x90a6c
	muls r0, r1	@ 00090a6c 4843
.org 0x90a6e
	movs r1, #48	@ 00090a6e 3021
.org 0x90a70
	bl 0x128fb8	@ 00090a70 98f0a2fa
.org 0x90a74
	ldr r1, [r4, #84]	@ 00090a74 616d
.org 0x90a76
	adds r1, r1, r0	@ 00090a76 0918
.org 0x90a78
	str r1, [r4, #84]	@ 00090a78 6165
