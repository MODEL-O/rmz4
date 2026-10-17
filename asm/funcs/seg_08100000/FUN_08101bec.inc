@ FUN_08101bec  entry 0x08101bec  size 84
.thumb
.org 0x101bec
FUN_08101bec:
	push {lr}	@ 00101bec 00b5
.org 0x101bee
	adds r3, r0, #0	@ 00101bee 031c
.org 0x101bf0
	ldr r1, [pc, #52]	@ 00101bf0 0d49
.org 0x101bf2
	ldrb r2, [r3, #17]	@ 00101bf2 5a7c
.org 0x101bf4
	adds r2, #69	@ 00101bf4 4532
.org 0x101bf6
	asrs r0, r2, #3	@ 00101bf6 d010
.org 0x101bf8
	adds r1, #4	@ 00101bf8 0431
.org 0x101bfa
	adds r0, r0, r1	@ 00101bfa 4018
.org 0x101bfc
	ldrb r0, [r0, #0]	@ 00101bfc 0078
.org 0x101bfe
	movs r1, #7	@ 00101bfe 0721
.org 0x101c00
	ands r2, r1	@ 00101c00 0a40
.org 0x101c02
	asrs r0, r2	@ 00101c02 1041
.org 0x101c04
	movs r2, #1	@ 00101c04 0122
.org 0x101c06
	ands r0, r2	@ 00101c06 1040
.org 0x101c08
	cmp r0, #0	@ 00101c08 0028
.org 0x101c0a
	bne.n 0x101c30	@ 00101c0a 11d1
.org 0x101c0c
	ldr r1, [pc, #28]	@ 00101c0c 0749
.org 0x101c0e
	ldrb r0, [r3, #9]	@ 00101c0e 587a
.org 0x101c10
	lsls r0, r0, #2	@ 00101c10 8000
.org 0x101c12
	adds r0, r0, r1	@ 00101c12 4018
.org 0x101c14
	movs r1, #2	@ 00101c14 0221
.org 0x101c16
	str r1, [r3, #12]	@ 00101c16 d960
.org 0x101c18
	ldr r0, [r0, #0]	@ 00101c18 0068
.org 0x101c1a
	ldr r0, [r0, #8]	@ 00101c1a 8068
.org 0x101c1c
	str r0, [r3, #20]	@ 00101c1c 5861
.org 0x101c1e
	adds r0, r3, #0	@ 00101c1e 181c
.org 0x101c20
	bl 0x1017a0	@ 00101c20 fff7befd
.org 0x101c24
	b.n 0x101c46	@ 00101c24 0fe0
.org 0x101c26
	.byte 0x00	@ 00101c26 data
.org 0x101c27
	.byte 0x00	@ 00101c27 data
.org 0x101c28
	.byte 0xb0,0xe8,0x02,0x02	@ 00101c28 data
.org 0x101c2c
	.byte 0xfc,0x92,0x86,0x08	@ 00101c2c data
.org 0x101c30
	ldr r1, [pc, #24]	@ 00101c30 0649
.org 0x101c32
	ldrb r0, [r3, #9]	@ 00101c32 587a
.org 0x101c34
	lsls r0, r0, #2	@ 00101c34 8000
.org 0x101c36
	adds r0, r0, r1	@ 00101c36 4018
.org 0x101c38
	str r2, [r3, #12]	@ 00101c38 da60
.org 0x101c3a
	ldr r0, [r0, #0]	@ 00101c3a 0068
.org 0x101c3c
	ldr r0, [r0, #4]	@ 00101c3c 4068
.org 0x101c3e
	str r0, [r3, #20]	@ 00101c3e 5861
