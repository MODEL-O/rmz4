@ FUN_0809dcd8  entry 0x0809dcd8  size 120
.thumb
.org 0x9dcd8
FUN_0809dcd8:
	push {r4, lr}	@ 0009dcd8 10b5
.org 0x9dcda
	adds r4, r0, #0	@ 0009dcda 041c
.org 0x9dcdc
	ldrb r0, [r4, #14]	@ 0009dcdc a07b
.org 0x9dcde
	cmp r0, #0	@ 0009dcde 0028
.org 0x9dce0
	bne.n 0x9dcf0	@ 0009dce0 06d1
.org 0x9dce2
	ldr r1, [pc, #76]	@ 0009dce2 1349
.org 0x9dce4
	adds r0, r4, #0	@ 0009dce4 201c
.org 0x9dce6
	bl 0x1cf00	@ 0009dce6 7ff70bf9
.org 0x9dcea
	ldrb r0, [r4, #14]	@ 0009dcea a07b
.org 0x9dcec
	adds r0, #1	@ 0009dcec 0130
.org 0x9dcee
	strb r0, [r4, #14]	@ 0009dcee a073
.org 0x9dcf0
	adds r0, r4, #0	@ 0009dcf0 201c
.org 0x9dcf2
	bl 0x9e124	@ 0009dcf2 00f017fa
.org 0x9dcf6
	lsls r0, r0, #24	@ 0009dcf6 0006
.org 0x9dcf8
	lsrs r0, r0, #24	@ 0009dcf8 000e
.org 0x9dcfa
	cmp r0, #1	@ 0009dcfa 0128
.org 0x9dcfc
	beq.n 0x9dd50	@ 0009dcfc 28d0
.org 0x9dcfe
	ldr r1, [r4, #84]	@ 0009dcfe 616d
.org 0x9dd00
	ldr r0, [r4, #92]	@ 0009dd00 e06d
.org 0x9dd02
	adds r2, r1, r0	@ 0009dd02 0a18
.org 0x9dd04
	str r2, [r4, #84]	@ 0009dd04 6265
.org 0x9dd06
	ldrb r1, [r4, #10]	@ 0009dd06 a17a
.org 0x9dd08
	movs r0, #16	@ 0009dd08 1020
.org 0x9dd0a
	ands r0, r1	@ 0009dd0a 0840
.org 0x9dd0c
	cmp r0, #0	@ 0009dd0c 0028
.org 0x9dd0e
	beq.n 0x9dd34	@ 0009dd0e 11d0
.org 0x9dd10
	adds r0, r4, #0	@ 0009dd10 201c
.org 0x9dd12
	adds r0, #184	@ 0009dd12 b830
.org 0x9dd14
	ldr r0, [r0, #0]	@ 0009dd14 0068
.org 0x9dd16
	cmp r2, r0	@ 0009dd16 8242
.org 0x9dd18
	bgt.n 0x9dd26	@ 0009dd18 05dc
.org 0x9dd1a
	adds r0, r4, #0	@ 0009dd1a 201c
.org 0x9dd1c
	bl 0x9ded4	@ 0009dd1c 00f0daf8
.org 0x9dd20
	lsls r0, r0, #24	@ 0009dd20 0006
.org 0x9dd22
	cmp r0, #0	@ 0009dd22 0028
.org 0x9dd24
	beq.n 0x9dd50	@ 0009dd24 14d0
.org 0x9dd26
	adds r0, r4, #0	@ 0009dd26 201c
.org 0x9dd28
	bl 0x9e1bc	@ 0009dd28 00f048fa
.org 0x9dd2c
	b.n 0x9dd50	@ 0009dd2c 10e0
.org 0x9dd2e
	.byte 0x00	@ 0009dd2e data
.org 0x9dd2f
	.byte 0x00	@ 0009dd2f data
.org 0x9dd30
	.byte 0x01,0x6e,0x00,0x00	@ 0009dd30 data
.org 0x9dd34
	adds r0, r4, #0	@ 0009dd34 201c
.org 0x9dd36
	adds r0, #180	@ 0009dd36 b430
.org 0x9dd38
	ldr r0, [r0, #0]	@ 0009dd38 0068
.org 0x9dd3a
	cmp r2, r0	@ 0009dd3a 8242
.org 0x9dd3c
	blt.n 0x9dd4a	@ 0009dd3c 05db
.org 0x9dd3e
	adds r0, r4, #0	@ 0009dd3e 201c
.org 0x9dd40
	bl 0x9ded4	@ 0009dd40 00f0c8f8
.org 0x9dd44
	lsls r0, r0, #24	@ 0009dd44 0006
.org 0x9dd46
	cmp r0, #0	@ 0009dd46 0028
.org 0x9dd48
	beq.n 0x9dd50	@ 0009dd48 02d0
.org 0x9dd4a
	adds r0, r4, #0	@ 0009dd4a 201c
.org 0x9dd4c
	bl 0x9e1bc	@ 0009dd4c 00f036fa
