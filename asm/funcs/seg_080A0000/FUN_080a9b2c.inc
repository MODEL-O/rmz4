@ FUN_080a9b2c  entry 0x080a9b2c  size 72
.thumb
.org 0xa9b2c
FUN_080a9b2c:
	push {lr}	@ 000a9b2c 00b5
.org 0xa9b2e
	sub sp, #8	@ 000a9b2e 82b0
.org 0xa9b30
	adds r2, r0, #0	@ 000a9b30 021c
.org 0xa9b32
	ldr r0, [pc, #56]	@ 000a9b32 0e48
.org 0xa9b34
	ldr r1, [r0, #4]	@ 000a9b34 4168
.org 0xa9b36
	ldr r0, [r0, #0]	@ 000a9b36 0068
.org 0xa9b38
	str r0, [sp, #0]	@ 000a9b38 0090
.org 0xa9b3a
	str r1, [sp, #4]	@ 000a9b3a 0191
.org 0xa9b3c
	ldrb r1, [r2, #10]	@ 000a9b3c 917a
.org 0xa9b3e
	movs r0, #16	@ 000a9b3e 1020
.org 0xa9b40
	ands r0, r1	@ 000a9b40 0840
.org 0xa9b42
	lsls r0, r0, #24	@ 000a9b42 0006
.org 0xa9b44
	lsrs r0, r0, #24	@ 000a9b44 000e
.org 0xa9b46
	negs r0, r0	@ 000a9b46 4042
.org 0xa9b48
	asrs r0, r0, #31	@ 000a9b48 c017
.org 0xa9b4a
	movs r1, #4	@ 000a9b4a 0421
.org 0xa9b4c
	ands r0, r1	@ 000a9b4c 0840
.org 0xa9b4e
	add r0, sp	@ 000a9b4e 6844
.org 0xa9b50
	ldr r1, [r0, #0]	@ 000a9b50 0168
.org 0xa9b52
	lsls r1, r1, #8	@ 000a9b52 0902
.org 0xa9b54
	ldr r0, [r2, #84]	@ 000a9b54 506d
.org 0xa9b56
	adds r0, r0, r1	@ 000a9b56 4018
.org 0xa9b58
	ldr r1, [r2, #88]	@ 000a9b58 916d
.org 0xa9b5a
	ldr r2, [pc, #20]	@ 000a9b5a 054a
.org 0xa9b5c
	adds r1, r1, r2	@ 000a9b5c 8918
.org 0xa9b5e
	bl 0x7c7c	@ 000a9b5e 5ef78df8
.org 0xa9b62
	lsls r0, r0, #16	@ 000a9b62 0004
.org 0xa9b64
	cmp r0, #0	@ 000a9b64 0028
.org 0xa9b66
	bne.n 0xa9b74	@ 000a9b66 05d1
.org 0xa9b68
	movs r0, #0	@ 000a9b68 0020
.org 0xa9b6a
	b.n 0xa9b76	@ 000a9b6a 04e0
.org 0xa9b6c
	.byte 0x8c,0x9d,0x12,0x08	@ 000a9b6c data
.org 0xa9b70
	.byte 0x00,0xf8,0xff,0xff	@ 000a9b70 data
