@ FUN_08128bf8  entry 0x08128bf8  size 46
.thumb
.org 0x128bf8
FUN_08128bf8:
	push {lr}	@ 00128bf8 00b5
.org 0x128bfa
	lsls r0, r0, #16	@ 00128bfa 0004
.org 0x128bfc
	lsrs r0, r0, #16	@ 00128bfc 000c
.org 0x128bfe
	movs r2, #0	@ 00128bfe 0022
.org 0x128c00
	cmp r0, #4	@ 00128c00 0428
.org 0x128c02
	bne.n 0x128c14	@ 00128c02 07d1
.org 0x128c04
	ldr r1, [pc, #4]	@ 00128c04 0149
.org 0x128c06
	ldr r0, [pc, #8]	@ 00128c06 0248
.org 0x128c08
	str r0, [r1, #0]	@ 00128c08 0860
.org 0x128c0a
	b.n 0x128c30	@ 00128c0a 11e0
.org 0x128c0c
	.byte 0xb0,0xd7,0x03,0x02	@ 00128c0c data
.org 0x128c10
	.byte 0x74,0xaf,0x82,0x08	@ 00128c10 data
.org 0x128c14
	cmp r0, #64	@ 00128c14 4028
.org 0x128c16
	bne.n 0x128c28	@ 00128c16 07d1
.org 0x128c18
	ldr r1, [pc, #4]	@ 00128c18 0149
.org 0x128c1a
	ldr r0, [pc, #8]	@ 00128c1a 0248
.org 0x128c1c
	str r0, [r1, #0]	@ 00128c1c 0860
.org 0x128c1e
	b.n 0x128c30	@ 00128c1e 07e0
.org 0x128c20
	.byte 0xb0,0xd7,0x03,0x02	@ 00128c20 data
.org 0x128c24
	.byte 0x80,0xaf,0x82,0x08	@ 00128c24 data
