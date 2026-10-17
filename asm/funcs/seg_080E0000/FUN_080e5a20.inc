@ FUN_080e5a20  entry 0x080e5a20  size 144
.thumb
.org 0xe5a20
FUN_080e5a20:
	push {r4, r5, r6, lr}	@ 000e5a20 70b5
.org 0xe5a22
	sub sp, #8	@ 000e5a22 82b0
.org 0xe5a24
	adds r6, r0, #0	@ 000e5a24 061c
.org 0xe5a26
	ldr r1, [r6, #84]	@ 000e5a26 716d
.org 0xe5a28
	ldr r0, [r6, #92]	@ 000e5a28 f06d
.org 0xe5a2a
	adds r2, r1, r0	@ 000e5a2a 0a18
.org 0xe5a2c
	str r2, [r6, #84]	@ 000e5a2c 7265
.org 0xe5a2e
	ldr r1, [r6, #100]	@ 000e5a2e 716e
.org 0xe5a30
	adds r0, r0, r1	@ 000e5a30 4018
.org 0xe5a32
	str r0, [r6, #92]	@ 000e5a32 f065
.org 0xe5a34
	ldrb r0, [r6, #18]	@ 000e5a34 b07c
.org 0xe5a36
	cmp r0, #0	@ 000e5a36 0028
.org 0xe5a38
	bne.n 0xe5aaa	@ 000e5a38 37d1
.org 0xe5a3a
	str r2, [sp, #0]	@ 000e5a3a 0092
.org 0xe5a3c
	ldr r0, [r6, #88]	@ 000e5a3c b06d
.org 0xe5a3e
	ldr r1, [pc, #44]	@ 000e5a3e 0b49
.org 0xe5a40
	adds r0, r0, r1	@ 000e5a40 4018
.org 0xe5a42
	str r0, [sp, #4]	@ 000e5a42 0190
.org 0xe5a44
	movs r0, #1	@ 000e5a44 0120
.org 0xe5a46
	mov r1, sp	@ 000e5a46 6946
.org 0xe5a48
	bl 0xd0c88	@ 000e5a48 ebf71ef9
.org 0xe5a4c
	movs r0, #42	@ 000e5a4c 2a20
.org 0xe5a4e
	bl 0x2b10	@ 000e5a4e 1df75ff8
.org 0xe5a52
	ldrb r0, [r6, #17]	@ 000e5a52 707c
.org 0xe5a54
	cmp r0, #0	@ 000e5a54 0028
.org 0xe5a56
	bne.n 0xe5a74	@ 000e5a56 0dd1
.org 0xe5a58
	adds r0, r6, #0	@ 000e5a58 301c
.org 0xe5a5a
	adds r0, #84	@ 000e5a5a 5430
.org 0xe5a5c
	ldr r1, [pc, #16]	@ 000e5a5c 0449
.org 0xe5a5e
	ldrb r2, [r6, #10]	@ 000e5a5e b27a
.org 0xe5a60
	lsrs r2, r2, #4	@ 000e5a60 1209
.org 0xe5a62
	movs r3, #1	@ 000e5a62 0123
.org 0xe5a64
	ands r2, r3	@ 000e5a64 1a40
.org 0xe5a66
	bl 0xe56d0	@ 000e5a66 fff733fe
.org 0xe5a6a
	b.n 0xe5a98	@ 000e5a6a 15e0
.org 0xe5a6c
	.byte 0x00,0xf6,0xff,0xff	@ 000e5a6c data
.org 0xe5a70
	.byte 0x03,0x01,0x00,0x00	@ 000e5a70 data
.org 0xe5a74
	adds r5, r6, #0	@ 000e5a74 351c
.org 0xe5a76
	adds r5, #84	@ 000e5a76 5435
.org 0xe5a78
	ldr r1, [pc, #60]	@ 000e5a78 0f49
.org 0xe5a7a
	ldrb r2, [r6, #10]	@ 000e5a7a b27a
.org 0xe5a7c
	lsrs r2, r2, #4	@ 000e5a7c 1209
.org 0xe5a7e
	movs r4, #1	@ 000e5a7e 0124
.org 0xe5a80
	ands r2, r4	@ 000e5a80 2240
.org 0xe5a82
	adds r0, r5, #0	@ 000e5a82 281c
.org 0xe5a84
	bl 0xe56d0	@ 000e5a84 fff724fe
.org 0xe5a88
	movs r1, #129	@ 000e5a88 8121
.org 0xe5a8a
	lsls r1, r1, #1	@ 000e5a8a 4900
.org 0xe5a8c
	ldrb r2, [r6, #10]	@ 000e5a8c b27a
.org 0xe5a8e
	lsrs r2, r2, #4	@ 000e5a8e 1209
.org 0xe5a90
	ands r2, r4	@ 000e5a90 2240
.org 0xe5a92
	adds r0, r5, #0	@ 000e5a92 281c
.org 0xe5a94
	bl 0xe56d0	@ 000e5a94 fff71cfe
.org 0xe5a98
	ldr r1, [pc, #32]	@ 000e5a98 0849
.org 0xe5a9a
	ldrb r0, [r6, #9]	@ 000e5a9a 707a
.org 0xe5a9c
	lsls r0, r0, #2	@ 000e5a9c 8000
.org 0xe5a9e
	adds r0, r0, r1	@ 000e5a9e 4018
.org 0xe5aa0
	movs r1, #2	@ 000e5aa0 0221
.org 0xe5aa2
	str r1, [r6, #12]	@ 000e5aa2 f160
.org 0xe5aa4
	ldr r0, [r0, #0]	@ 000e5aa4 0068
.org 0xe5aa6
	ldr r0, [r0, #8]	@ 000e5aa6 8068
.org 0xe5aa8
	str r0, [r6, #20]	@ 000e5aa8 7061
.org 0xe5aaa
	ldrb r0, [r6, #18]	@ 000e5aaa b07c
.org 0xe5aac
	subs r0, #1	@ 000e5aac 0138
.org 0xe5aae
	strb r0, [r6, #18]	@ 000e5aae b074
