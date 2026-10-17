@ FUN_08065cb0  entry 0x08065cb0  size 88
.thumb
.org 0x65cb0
FUN_08065cb0:
	push {r4, lr}	@ 00065cb0 10b5
.org 0x65cb2
	adds r3, r0, #0	@ 00065cb2 031c
.org 0x65cb4
	adds r0, #206	@ 00065cb4 ce30
.org 0x65cb6
	ldrb r0, [r0, #0]	@ 00065cb6 0078
.org 0x65cb8
	lsls r4, r0, #3	@ 00065cb8 c400
.org 0x65cba
	cmp r4, #31	@ 00065cba 1f2c
.org 0x65cbc
	bgt.n 0x65cdc	@ 00065cbc 0edc
.org 0x65cbe
	ldr r2, [pc, #52]	@ 00065cbe 0d4a
.org 0x65cc0
	ldr r1, [r2, #0]	@ 00065cc0 1168
.org 0x65cc2
	ldr r0, [pc, #52]	@ 00065cc2 0d48
.org 0x65cc4
	muls r0, r1	@ 00065cc4 4843
.org 0x65cc6
	ldr r1, [pc, #52]	@ 00065cc6 0d49
.org 0x65cc8
	adds r0, r0, r1	@ 00065cc8 4018
.org 0x65cca
	lsls r0, r0, #1	@ 00065cca 4000
.org 0x65ccc
	lsrs r1, r0, #1	@ 00065ccc 4108
.org 0x65cce
	str r1, [r2, #0]	@ 00065cce 1160
.org 0x65cd0
	lsrs r0, r0, #17	@ 00065cd0 400c
.org 0x65cd2
	movs r1, #31	@ 00065cd2 1f21
.org 0x65cd4
	ands r0, r1	@ 00065cd4 0840
.org 0x65cd6
	movs r1, #2	@ 00065cd6 0221
.org 0x65cd8
	cmp r0, r4	@ 00065cd8 a042
.org 0x65cda
	bcs.n 0x65cde	@ 00065cda 00d2
.org 0x65cdc
	movs r1, #4	@ 00065cdc 0421
.org 0x65cde
	ldr r0, [pc, #32]	@ 00065cde 0848
.org 0x65ce0
	adds r0, r1, r0	@ 00065ce0 0818
.org 0x65ce2
	ldrb r2, [r0, #0]	@ 00065ce2 0278
.org 0x65ce4
	cmp r1, #2	@ 00065ce4 0229
.org 0x65ce6
	bne.n 0x65d04	@ 00065ce6 0dd1
.org 0x65ce8
	adds r1, r3, #0	@ 00065ce8 191c
.org 0x65cea
	adds r1, #206	@ 00065cea ce31
.org 0x65cec
	ldrb r0, [r1, #0]	@ 00065cec 0878
.org 0x65cee
	adds r0, #1	@ 00065cee 0130
.org 0x65cf0
	b.n 0x65d0a	@ 00065cf0 0be0
.org 0x65cf2
	.byte 0x00	@ 00065cf2 data
.org 0x65cf3
	.byte 0x00	@ 00065cf3 data
.org 0x65cf4
	.byte 0x38,0xdc,0x02,0x02	@ 00065cf4 data
.org 0x65cf8
	.byte 0xfd,0x43,0x03,0x00	@ 00065cf8 data
.org 0x65cfc
	.byte 0xc3,0x9e,0x26,0x00	@ 00065cfc data
.org 0x65d00
	.byte 0xd4,0xb0,0x85,0x08	@ 00065d00 data
.org 0x65d04
	adds r1, r3, #0	@ 00065d04 191c
.org 0x65d06
	adds r1, #206	@ 00065d06 ce31
