@ FUN_08080f5c  entry 0x08080f5c  size 64
.thumb
.org 0x80f5c
FUN_08080f5c:
	push {r4, lr}	@ 00080f5c 10b5
.org 0x80f5e
	adds r4, r0, #0	@ 00080f5e 041c
.org 0x80f60
	ldrb r0, [r4, #15]	@ 00080f60 e07b
.org 0x80f62
	cmp r0, #0	@ 00080f62 0028
.org 0x80f64
	bne.n 0x80f7c	@ 00080f64 0ad1
.org 0x80f66
	adds r0, r4, #0	@ 00080f66 201c
.org 0x80f68
	adds r0, #116	@ 00080f68 7430
.org 0x80f6a
	ldr r1, [pc, #48]	@ 00080f6a 0c49
.org 0x80f6c
	ldr r1, [r1, #0]	@ 00080f6c 0968
.org 0x80f6e
	bl 0x5784	@ 00080f6e 84f709fc
.org 0x80f72
	movs r0, #32	@ 00080f72 2020
.org 0x80f74
	strb r0, [r4, #18]	@ 00080f74 a074
.org 0x80f76
	ldrb r0, [r4, #15]	@ 00080f76 e07b
.org 0x80f78
	adds r0, #1	@ 00080f78 0130
.org 0x80f7a
	strb r0, [r4, #15]	@ 00080f7a e073
.org 0x80f7c
	adds r0, r4, #0	@ 00080f7c 201c
.org 0x80f7e
	bl 0x1d1f4	@ 00080f7e 9cf739f9
.org 0x80f82
	ldrb r0, [r4, #18]	@ 00080f82 a07c
.org 0x80f84
	subs r0, #1	@ 00080f84 0138
.org 0x80f86
	strb r0, [r4, #18]	@ 00080f86 a074
.org 0x80f88
	lsls r0, r0, #24	@ 00080f88 0006
.org 0x80f8a
	cmp r0, #0	@ 00080f8a 0028
.org 0x80f8c
	bne.n 0x80f96	@ 00080f8c 03d1
.org 0x80f8e
	adds r1, r4, #0	@ 00080f8e 211c
.org 0x80f90
	adds r1, #180	@ 00080f90 b431
.org 0x80f92
	movs r0, #1	@ 00080f92 0120
.org 0x80f94
	strb r0, [r1, #0]	@ 00080f94 0870
.org 0x80f96
	pop {r4}	@ 00080f96 10bc
.org 0x80f98
	pop {r0}	@ 00080f98 01bc
.org 0x80f9a
	bx r0	@ 00080f9a 0047
