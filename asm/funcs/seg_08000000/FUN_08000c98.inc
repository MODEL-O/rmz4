@ FUN_08000c98  entry 0x08000c98  size 128
.thumb
.org 0xc98
FUN_08000c98:
	push {r4, lr}	@ 00000c98 10b5
.org 0xc9a
	ldr r4, [pc, #44]	@ 00000c9a 0b4c
.org 0xc9c
	subs r2, r4, #4	@ 00000c9c 221f
.org 0xc9e
	ldr r3, [r2, #0]	@ 00000c9e 1368
.org 0xca0
	cmp r3, #0	@ 00000ca0 002b
.org 0xca2
	beq.n 0xccc	@ 00000ca2 13d0
.org 0xca4
	adds r1, r4, #0	@ 00000ca4 211c
.org 0xca6
	subs r1, #24	@ 00000ca6 1839
.org 0xca8
	adds r0, r4, #0	@ 00000ca8 201c
.org 0xcaa
	subs r0, #12	@ 00000caa 0c38
.org 0xcac
	ldr r0, [r0, #0]	@ 00000cac 0068
.org 0xcae
	str r0, [r1, #0]	@ 00000cae 0860
.org 0xcb0
	adds r1, #4	@ 00000cb0 0431
.org 0xcb2
	adds r0, r4, #0	@ 00000cb2 201c
.org 0xcb4
	subs r0, #8	@ 00000cb4 0838
.org 0xcb6
	ldr r0, [r0, #0]	@ 00000cb6 0068
.org 0xcb8
	str r0, [r1, #0]	@ 00000cb8 0860
.org 0xcba
	adds r1, #4	@ 00000cba 0431
.org 0xcbc
	ldr r0, [r2, #0]	@ 00000cbc 1068
.org 0xcbe
	str r0, [r1, #0]	@ 00000cbe 0860
.org 0xcc0
	movs r0, #0	@ 00000cc0 0020
.org 0xcc2
	str r0, [r2, #0]	@ 00000cc2 1060
.org 0xcc4
	b.n 0xcf0	@ 00000cc4 14e0
.org 0xcc6
	.byte 0x00	@ 00000cc6 data
.org 0xcc7
	.byte 0x00	@ 00000cc7 data
.org 0xcc8
	.byte 0x10,0x17,0x00,0x03	@ 00000cc8 data
.org 0xccc
	ldr r0, [r4, #24]	@ 00000ccc a069
.org 0xcce
	cmp r0, #0	@ 00000cce 0028
.org 0xcd0
	beq.n 0xcea	@ 00000cd0 0bd0
.org 0xcd2
	adds r1, r4, #0	@ 00000cd2 211c
.org 0xcd4
	subs r1, #24	@ 00000cd4 1839
.org 0xcd6
	ldr r0, [r4, #16]	@ 00000cd6 2069
.org 0xcd8
	str r0, [r1, #0]	@ 00000cd8 0860
.org 0xcda
	adds r1, #4	@ 00000cda 0431
.org 0xcdc
	ldr r0, [r4, #20]	@ 00000cdc 6069
.org 0xcde
	str r0, [r1, #0]	@ 00000cde 0860
.org 0xce0
	adds r1, #4	@ 00000ce0 0431
.org 0xce2
	ldr r0, [r4, #24]	@ 00000ce2 a069
.org 0xce4
	str r0, [r1, #0]	@ 00000ce4 0860
.org 0xce6
	str r3, [r4, #24]	@ 00000ce6 a361
.org 0xce8
	b.n 0xcf0	@ 00000ce8 02e0
.org 0xcea
	adds r1, r4, #0	@ 00000cea 211c
.org 0xcec
	subs r1, #16	@ 00000cec 1039
.org 0xcee
	str r0, [r1, #0]	@ 00000cee 0860
.org 0xcf0
	bl 0xe24	@ 00000cf0 00f098f8
.org 0xcf4
	ldr r0, [r4, #16]	@ 00000cf4 2069
.org 0xcf6
	str r0, [r4, #0]	@ 00000cf6 2060
.org 0xcf8
	ldr r0, [r4, #20]	@ 00000cf8 6069
.org 0xcfa
	str r0, [r4, #4]	@ 00000cfa 6060
.org 0xcfc
	ldr r0, [r4, #24]	@ 00000cfc a069
.org 0xcfe
	str r0, [r4, #8]	@ 00000cfe a060
.org 0xd00
	movs r1, #0	@ 00000d00 0021
.org 0xd02
	str r1, [r4, #24]	@ 00000d02 a161
.org 0xd04
	adds r4, #36	@ 00000d04 2434
.org 0xd06
	ldr r0, [r4, #16]	@ 00000d06 2069
.org 0xd08
	str r0, [r4, #0]	@ 00000d08 2060
.org 0xd0a
	ldr r0, [r4, #20]	@ 00000d0a 6069
.org 0xd0c
	str r0, [r4, #4]	@ 00000d0c 6060
.org 0xd0e
	ldr r0, [r4, #24]	@ 00000d0e a069
.org 0xd10
	str r0, [r4, #8]	@ 00000d10 a060
.org 0xd12
	str r1, [r4, #24]	@ 00000d12 a161
.org 0xd14
	bl 0xedc	@ 00000d14 00f0e2f8
