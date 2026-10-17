@ FUN_080b3edc  entry 0x080b3edc  size 72
.thumb
.org 0xb3edc
FUN_080b3edc:
	push {lr}	@ 000b3edc 00b5
.org 0xb3ede
	sub sp, #8	@ 000b3ede 82b0
.org 0xb3ee0
	adds r2, r0, #0	@ 000b3ee0 021c
.org 0xb3ee2
	ldr r0, [pc, #56]	@ 000b3ee2 0e48
.org 0xb3ee4
	ldr r1, [r0, #4]	@ 000b3ee4 4168
.org 0xb3ee6
	ldr r0, [r0, #0]	@ 000b3ee6 0068
.org 0xb3ee8
	str r0, [sp, #0]	@ 000b3ee8 0090
.org 0xb3eea
	str r1, [sp, #4]	@ 000b3eea 0191
.org 0xb3eec
	ldrb r1, [r2, #10]	@ 000b3eec 917a
.org 0xb3eee
	movs r0, #16	@ 000b3eee 1020
.org 0xb3ef0
	ands r0, r1	@ 000b3ef0 0840
.org 0xb3ef2
	lsls r0, r0, #24	@ 000b3ef2 0006
.org 0xb3ef4
	lsrs r0, r0, #24	@ 000b3ef4 000e
.org 0xb3ef6
	negs r0, r0	@ 000b3ef6 4042
.org 0xb3ef8
	asrs r0, r0, #31	@ 000b3ef8 c017
.org 0xb3efa
	movs r1, #4	@ 000b3efa 0421
.org 0xb3efc
	ands r0, r1	@ 000b3efc 0840
.org 0xb3efe
	add r0, sp	@ 000b3efe 6844
.org 0xb3f00
	ldr r1, [r0, #0]	@ 000b3f00 0168
.org 0xb3f02
	lsls r1, r1, #8	@ 000b3f02 0902
.org 0xb3f04
	ldr r0, [r2, #84]	@ 000b3f04 506d
.org 0xb3f06
	adds r0, r0, r1	@ 000b3f06 4018
.org 0xb3f08
	ldr r1, [r2, #88]	@ 000b3f08 916d
.org 0xb3f0a
	ldr r2, [pc, #20]	@ 000b3f0a 054a
.org 0xb3f0c
	adds r1, r1, r2	@ 000b3f0c 8918
.org 0xb3f0e
	bl 0x7c7c	@ 000b3f0e 53f7b5fe
.org 0xb3f12
	lsls r0, r0, #16	@ 000b3f12 0004
.org 0xb3f14
	cmp r0, #0	@ 000b3f14 0028
.org 0xb3f16
	bne.n 0xb3f24	@ 000b3f16 05d1
.org 0xb3f18
	movs r0, #0	@ 000b3f18 0020
.org 0xb3f1a
	b.n 0xb3f26	@ 000b3f1a 04e0
.org 0xb3f1c
	.byte 0x38,0x9e,0x12,0x08	@ 000b3f1c data
.org 0xb3f20
	.byte 0x00,0xf8,0xff,0xff	@ 000b3f20 data
