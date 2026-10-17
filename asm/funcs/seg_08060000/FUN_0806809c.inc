@ FUN_0806809c  entry 0x0806809c  size 158
.thumb
.org 0x6809c
FUN_0806809c:
	push {r4, r5, lr}	@ 0006809c 30b5
.org 0x6809e
	adds r4, r0, #0	@ 0006809e 041c
.org 0x680a0
	ldrb r5, [r4, #14]	@ 000680a0 a57b
.org 0x680a2
	cmp r5, #0	@ 000680a2 002d
.org 0x680a4
	bne.n 0x680b4	@ 000680a4 06d1
.org 0x680a6
	ldr r1, [pc, #72]	@ 000680a6 1249
.org 0x680a8
	bl 0x1cf00	@ 000680a8 b4f72aff
.org 0x680ac
	strb r5, [r4, #15]	@ 000680ac e573
.org 0x680ae
	ldrb r0, [r4, #14]	@ 000680ae a07b
.org 0x680b0
	adds r0, #1	@ 000680b0 0130
.org 0x680b2
	strb r0, [r4, #14]	@ 000680b2 a073
.org 0x680b4
	adds r0, r4, #0	@ 000680b4 201c
.org 0x680b6
	bl 0x1cff0	@ 000680b6 b4f79bff
.org 0x680ba
	ldrb r5, [r4, #15]	@ 000680ba e57b
.org 0x680bc
	adds r0, r5, #0	@ 000680bc 281c
.org 0x680be
	cmp r0, #0	@ 000680be 0028
.org 0x680c0
	bne.n 0x680f8	@ 000680c0 1ad1
.org 0x680c2
	adds r0, r4, #0	@ 000680c2 201c
.org 0x680c4
	adds r0, #113	@ 000680c4 7130
.org 0x680c6
	ldrb r0, [r0, #0]	@ 000680c6 0078
.org 0x680c8
	lsls r0, r0, #24	@ 000680c8 0006
.org 0x680ca
	asrs r0, r0, #24	@ 000680ca 0016
.org 0x680cc
	cmp r0, #4	@ 000680cc 0428
.org 0x680ce
	ble.n 0x6813e	@ 000680ce 36dd
.org 0x680d0
	adds r0, r4, #0	@ 000680d0 201c
.org 0x680d2
	adds r0, #180	@ 000680d2 b430
.org 0x680d4
	ldr r0, [r0, #16]	@ 000680d4 0069
.org 0x680d6
	ldr r1, [r4, #84]	@ 000680d6 616d
.org 0x680d8
	subs r0, r0, r1	@ 000680d8 401a
.org 0x680da
	str r0, [r4, #92]	@ 000680da e065
.org 0x680dc
	movs r1, #40	@ 000680dc 2821
.org 0x680de
	bl 0x128fb8	@ 000680de c0f06bff
.org 0x680e2
	str r0, [r4, #92]	@ 000680e2 e065
.org 0x680e4
	ldr r0, [pc, #12]	@ 000680e4 0348
.org 0x680e6
	str r0, [r4, #96]	@ 000680e6 2066
.org 0x680e8
	adds r0, r5, #1	@ 000680e8 681c
.org 0x680ea
	strb r0, [r4, #15]	@ 000680ea e073
.org 0x680ec
	b.n 0x6813e	@ 000680ec 27e0
.org 0x680ee
	.byte 0x00	@ 000680ee data
.org 0x680ef
	.byte 0x00	@ 000680ef data
.org 0x680f0
	.byte 0x02,0xa9,0x00,0x00	@ 000680f0 data
.org 0x680f4
	.byte 0x00,0xfa,0xff,0xff	@ 000680f4 data
.org 0x680f8
	cmp r0, #1	@ 000680f8 0128
.org 0x680fa
	bne.n 0x6811a	@ 000680fa 0ed1
.org 0x680fc
	adds r0, r4, #0	@ 000680fc 201c
.org 0x680fe
	adds r0, #113	@ 000680fe 7130
.org 0x68100
	ldrb r0, [r0, #0]	@ 00068100 0078
.org 0x68102
	lsls r0, r0, #24	@ 00068102 0006
.org 0x68104
	asrs r0, r0, #24	@ 00068104 0016
.org 0x68106
	cmp r0, #5	@ 00068106 0528
.org 0x68108
	ble.n 0x6811a	@ 00068108 07dd
.org 0x6810a
	adds r0, r4, #0	@ 0006810a 201c
.org 0x6810c
	adds r0, #116	@ 0006810c 7430
.org 0x6810e
	ldr r1, [pc, #52]	@ 0006810e 0d49
.org 0x68110
	bl 0x5784	@ 00068110 9df738fb
.org 0x68114
	ldrb r0, [r4, #15]	@ 00068114 e07b
.org 0x68116
	adds r0, #1	@ 00068116 0130
.org 0x68118
	strb r0, [r4, #15]	@ 00068118 e073
.org 0x6811a
	ldr r0, [r4, #84]	@ 0006811a 606d
.org 0x6811c
	ldr r1, [r4, #92]	@ 0006811c e16d
.org 0x6811e
	adds r0, r0, r1	@ 0006811e 4018
.org 0x68120
	str r0, [r4, #84]	@ 00068120 6065
.org 0x68122
	ldr r0, [r4, #88]	@ 00068122 a06d
.org 0x68124
	ldr r1, [r4, #96]	@ 00068124 216e
.org 0x68126
	adds r0, r0, r1	@ 00068126 4018
.org 0x68128
	str r0, [r4, #88]	@ 00068128 a065
.org 0x6812a
	adds r1, #64	@ 0006812a 4031
.org 0x6812c
	str r1, [r4, #96]	@ 0006812c 2166
.org 0x6812e
	movs r0, #128	@ 0006812e 8020
.org 0x68130
	lsls r0, r0, #3	@ 00068130 c000
.org 0x68132
	cmp r1, r0	@ 00068132 8142
.org 0x68134
	bne.n 0x6813e	@ 00068134 03d1
.org 0x68136
	movs r1, #0	@ 00068136 0021
.org 0x68138
	movs r0, #27	@ 00068138 1b20
