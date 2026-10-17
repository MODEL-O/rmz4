@ FUN_080c0b0c  entry 0x080c0b0c  size 92
.thumb
.org 0xc0b0c
FUN_080c0b0c:
	push {r4, r5, lr}	@ 000c0b0c 30b5
.org 0xc0b0e
	sub sp, #12	@ 000c0b0e 83b0
.org 0xc0b10
	adds r4, r0, #0	@ 000c0b10 041c
.org 0xc0b12
	ldr r0, [pc, #84]	@ 000c0b12 1548
.org 0xc0b14
	ldr r1, [r0, #4]	@ 000c0b14 4168
.org 0xc0b16
	ldr r0, [r0, #0]	@ 000c0b16 0068
.org 0xc0b18
	str r0, [sp, #4]	@ 000c0b18 0190
.org 0xc0b1a
	str r1, [sp, #8]	@ 000c0b1a 0291
.org 0xc0b1c
	ldr r1, [pc, #76]	@ 000c0b1c 1349
.org 0xc0b1e
	mov r0, sp	@ 000c0b1e 6846
.org 0xc0b20
	movs r2, #2	@ 000c0b20 0222
.org 0xc0b22
	bl 0x129258	@ 000c0b22 68f099fb
.org 0xc0b26
	ldrb r5, [r4, #17]	@ 000c0b26 657c
.org 0xc0b28
	ldrb r0, [r4, #15]	@ 000c0b28 e07b
.org 0xc0b2a
	cmp r0, #0	@ 000c0b2a 0028
.org 0xc0b2c
	bne.n 0xc0b5a	@ 000c0b2c 15d1
.org 0xc0b2e
	adds r0, r4, #0	@ 000c0b2e 201c
.org 0xc0b30
	adds r0, #116	@ 000c0b30 7430
.org 0xc0b32
	mov r2, sp	@ 000c0b32 6a46
.org 0xc0b34
	adds r1, r2, r5	@ 000c0b34 5119
.org 0xc0b36
	ldrb r2, [r1, #0]	@ 000c0b36 0a78
.org 0xc0b38
	lsls r1, r2, #1	@ 000c0b38 5100
.org 0xc0b3a
	adds r1, r1, r2	@ 000c0b3a 8918
.org 0xc0b3c
	lsls r1, r1, #3	@ 000c0b3c c900
.org 0xc0b3e
	ldr r2, [pc, #48]	@ 000c0b3e 0c4a
.org 0xc0b40
	adds r1, r1, r2	@ 000c0b40 8918
.org 0xc0b42
	bl 0x5784	@ 000c0b42 44f71ffe
.org 0xc0b46
	lsls r0, r5, #2	@ 000c0b46 a800
.org 0xc0b48
	add r1, sp, #4	@ 000c0b48 01a9
.org 0xc0b4a
	adds r0, r0, r1	@ 000c0b4a 4018
.org 0xc0b4c
	ldrh r1, [r0, #0]	@ 000c0b4c 0188
.org 0xc0b4e
	adds r0, r4, #0	@ 000c0b4e 201c
.org 0xc0b50
	bl 0x1cf00	@ 000c0b50 5cf7d6f9
.org 0xc0b54
	ldrb r0, [r4, #15]	@ 000c0b54 e07b
.org 0xc0b56
	adds r0, #1	@ 000c0b56 0130
.org 0xc0b58
	strb r0, [r4, #15]	@ 000c0b58 e073
.org 0xc0b5a
	adds r0, r4, #0	@ 000c0b5a 201c
.org 0xc0b5c
	bl 0x1cff0	@ 000c0b5c 5cf748fa
.org 0xc0b60
	add sp, #12	@ 000c0b60 03b0
.org 0xc0b62
	pop {r4, r5}	@ 000c0b62 30bc
.org 0xc0b64
	pop {r0}	@ 000c0b64 01bc
.org 0xc0b66
	bx r0	@ 000c0b66 0047
