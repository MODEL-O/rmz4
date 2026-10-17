@ FUN_080e0b24  entry 0x080e0b24  size 74
.thumb
.org 0xe0b24
FUN_080e0b24:
	push {r4, lr}	@ 000e0b24 10b5
.org 0xe0b26
	adds r4, r0, #0	@ 000e0b26 041c
.org 0xe0b28
	ldrb r0, [r4, #14]	@ 000e0b28 a07b
.org 0xe0b2a
	cmp r0, #1	@ 000e0b2a 0128
.org 0xe0b2c
	bne.n 0xe0b48	@ 000e0b2c 0cd1
.org 0xe0b2e
	ldr r1, [pc, #64]	@ 000e0b2e 1049
.org 0xe0b30
	adds r0, r4, #0	@ 000e0b30 201c
.org 0xe0b32
	bl 0x1cf00	@ 000e0b32 3cf7e5f9
.org 0xe0b36
	movs r0, #10	@ 000e0b36 0a20
.org 0xe0b38
	strb r0, [r4, #18]	@ 000e0b38 a074
.org 0xe0b3a
	adds r1, r4, #0	@ 000e0b3a 211c
.org 0xe0b3c
	adds r1, #37	@ 000e0b3c 2531
.org 0xe0b3e
	movs r0, #24	@ 000e0b3e 1820
.org 0xe0b40
	strb r0, [r1, #0]	@ 000e0b40 0870
.org 0xe0b42
	ldrb r0, [r4, #14]	@ 000e0b42 a07b
.org 0xe0b44
	adds r0, #1	@ 000e0b44 0130
.org 0xe0b46
	strb r0, [r4, #14]	@ 000e0b46 a073
.org 0xe0b48
	adds r0, r4, #0	@ 000e0b48 201c
.org 0xe0b4a
	bl 0xe0cd4	@ 000e0b4a 00f0c3f8
.org 0xe0b4e
	lsls r0, r0, #24	@ 000e0b4e 0006
.org 0xe0b50
	lsrs r0, r0, #24	@ 000e0b50 000e
.org 0xe0b52
	cmp r0, #1	@ 000e0b52 0128
.org 0xe0b54
	bne.n 0xe0b68	@ 000e0b54 08d1
.org 0xe0b56
	ldr r1, [pc, #28]	@ 000e0b56 0749
.org 0xe0b58
	ldrb r0, [r4, #9]	@ 000e0b58 607a
.org 0xe0b5a
	lsls r0, r0, #2	@ 000e0b5a 8000
.org 0xe0b5c
	adds r0, r0, r1	@ 000e0b5c 4018
.org 0xe0b5e
	movs r1, #2	@ 000e0b5e 0221
.org 0xe0b60
	str r1, [r4, #12]	@ 000e0b60 e160
.org 0xe0b62
	ldr r0, [r0, #0]	@ 000e0b62 0068
.org 0xe0b64
	ldr r0, [r0, #8]	@ 000e0b64 8068
.org 0xe0b66
	str r0, [r4, #20]	@ 000e0b66 6061
.org 0xe0b68
	pop {r4}	@ 000e0b68 10bc
.org 0xe0b6a
	pop {r0}	@ 000e0b6a 01bc
.org 0xe0b6c
	bx r0	@ 000e0b6c 0047
