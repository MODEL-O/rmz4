@ FUN_080b4ea8  entry 0x080b4ea8  size 126
.thumb
.org 0xb4ea8
FUN_080b4ea8:
	push {r4, r5, lr}	@ 000b4ea8 30b5
.org 0xb4eaa
	adds r4, r0, #0	@ 000b4eaa 041c
.org 0xb4eac
	ldrb r5, [r4, #14]	@ 000b4eac a57b
.org 0xb4eae
	cmp r5, #0	@ 000b4eae 002d
.org 0xb4eb0
	bne.n 0xb4edc	@ 000b4eb0 14d1
.org 0xb4eb2
	ldr r1, [pc, #96]	@ 000b4eb2 1849
.org 0xb4eb4
	bl 0x1cf00	@ 000b4eb4 68f724f8
.org 0xb4eb8
	ldr r0, [r4, #84]	@ 000b4eb8 606d
.org 0xb4eba
	ldr r1, [r4, #88]	@ 000b4eba a16d
.org 0xb4ebc
	bl 0x8534	@ 000b4ebc 53f73afb
.org 0xb4ec0
	str r0, [r4, #88]	@ 000b4ec0 a065
.org 0xb4ec2
	str r5, [r4, #96]	@ 000b4ec2 2566
.org 0xb4ec4
	movs r0, #30	@ 000b4ec4 1e20
.org 0xb4ec6
	strb r0, [r4, #18]	@ 000b4ec6 a074
.org 0xb4ec8
	adds r1, r4, #0	@ 000b4ec8 211c
.org 0xb4eca
	adds r1, #183	@ 000b4eca b731
.org 0xb4ecc
	ldrb r0, [r1, #0]	@ 000b4ecc 0878
.org 0xb4ece
	cmp r0, #1	@ 000b4ece 0128
.org 0xb4ed0
	bne.n 0xb4ed6	@ 000b4ed0 01d1
.org 0xb4ed2
	strb r5, [r4, #18]	@ 000b4ed2 a574
.org 0xb4ed4
	strb r5, [r1, #0]	@ 000b4ed4 0d70
.org 0xb4ed6
	ldrb r0, [r4, #14]	@ 000b4ed6 a07b
.org 0xb4ed8
	adds r0, #1	@ 000b4ed8 0130
.org 0xb4eda
	strb r0, [r4, #14]	@ 000b4eda a073
.org 0xb4edc
	ldrb r0, [r4, #18]	@ 000b4edc a07c
.org 0xb4ede
	movs r1, #10	@ 000b4ede 0a21
.org 0xb4ee0
	bl 0x129198	@ 000b4ee0 74f05af9
.org 0xb4ee4
	lsls r0, r0, #24	@ 000b4ee4 0006
.org 0xb4ee6
	cmp r0, #0	@ 000b4ee6 0028
.org 0xb4ee8
	bne.n 0xb4ef0	@ 000b4ee8 02d1
.org 0xb4eea
	adds r0, r4, #0	@ 000b4eea 201c
.org 0xb4eec
	bl 0xb56c0	@ 000b4eec 00f0e8fb
.org 0xb4ef0
	adds r0, r4, #0	@ 000b4ef0 201c
.org 0xb4ef2
	bl 0xb56a8	@ 000b4ef2 00f0d9fb
.org 0xb4ef6
	lsls r0, r0, #24	@ 000b4ef6 0006
.org 0xb4ef8
	cmp r0, #0	@ 000b4ef8 0028
.org 0xb4efa
	beq.n 0xb4f2e	@ 000b4efa 18d0
.org 0xb4efc
	ldr r0, [pc, #24]	@ 000b4efc 0648
.org 0xb4efe
	ldr r0, [r0, #0]	@ 000b4efe 0068
.org 0xb4f00
	ldr r0, [r0, #88]	@ 000b4f00 806d
.org 0xb4f02
	ldr r1, [r4, #88]	@ 000b4f02 a16d
.org 0xb4f04
	subs r2, r0, r1	@ 000b4f04 421a
.org 0xb4f06
	cmp r2, #0	@ 000b4f06 002a
.org 0xb4f08
	blt.n 0xb4f20	@ 000b4f08 0adb
.org 0xb4f0a
	ldr r0, [pc, #16]	@ 000b4f0a 0448
.org 0xb4f0c
	cmp r2, r0	@ 000b4f0c 8242
.org 0xb4f0e
	ble.n 0xb4f28	@ 000b4f0e 0bdd
.org 0xb4f10
	b.n 0xb4f2e	@ 000b4f10 0de0
.org 0xb4f12
	.byte 0x00	@ 000b4f12 data
.org 0xb4f13
	.byte 0x00	@ 000b4f13 data
.org 0xb4f14
	.byte 0x01,0xca,0x00,0x00	@ 000b4f14 data
.org 0xb4f18
	.byte 0xf0,0xdb,0x02,0x02	@ 000b4f18 data
.org 0xb4f1c
	.byte 0xff,0x4f,0x00,0x00	@ 000b4f1c data
.org 0xb4f20
	subs r1, r1, r0	@ 000b4f20 091a
.org 0xb4f22
	ldr r0, [pc, #16]	@ 000b4f22 0448
.org 0xb4f24
	cmp r1, r0	@ 000b4f24 8142
