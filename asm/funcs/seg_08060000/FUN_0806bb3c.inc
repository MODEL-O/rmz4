@ FUN_0806bb3c  entry 0x0806bb3c  size 230
.thumb
.org 0x6bb3c
FUN_0806bb3c:
	push {r4, r5, lr}	@ 0006bb3c 30b5
.org 0x6bb3e
	adds r4, r0, #0	@ 0006bb3e 041c
.org 0x6bb40
	ldrb r2, [r4, #14]	@ 0006bb40 a27b
.org 0x6bb42
	adds r1, r2, #0	@ 0006bb42 111c
.org 0x6bb44
	cmp r1, #0	@ 0006bb44 0029
.org 0x6bb46
	bne.n 0x6bb52	@ 0006bb46 04d1
.org 0x6bb48
	ldr r0, [pc, #92]	@ 0006bb48 1748
.org 0x6bb4a
	str r0, [r4, #96]	@ 0006bb4a 2066
.org 0x6bb4c
	strb r1, [r4, #15]	@ 0006bb4c e173
.org 0x6bb4e
	adds r0, r2, #1	@ 0006bb4e 501c
.org 0x6bb50
	strb r0, [r4, #14]	@ 0006bb50 a073
.org 0x6bb52
	ldrb r5, [r4, #15]	@ 0006bb52 e57b
.org 0x6bb54
	cmp r5, #0	@ 0006bb54 002d
.org 0x6bb56
	bne.n 0x6bbd8	@ 0006bb56 3fd1
.org 0x6bb58
	ldr r0, [r4, #88]	@ 0006bb58 a06d
.org 0x6bb5a
	ldr r1, [r4, #96]	@ 0006bb5a 216e
.org 0x6bb5c
	adds r0, r0, r1	@ 0006bb5c 4018
.org 0x6bb5e
	str r0, [r4, #88]	@ 0006bb5e a065
.org 0x6bb60
	adds r1, #64	@ 0006bb60 4031
.org 0x6bb62
	str r1, [r4, #96]	@ 0006bb62 2166
.org 0x6bb64
	cmp r1, #0	@ 0006bb64 0029
.org 0x6bb66
	ble.n 0x6bc2c	@ 0006bb66 61dd
.org 0x6bb68
	ldr r1, [pc, #64]	@ 0006bb68 1049
.org 0x6bb6a
	adds r0, r4, #0	@ 0006bb6a 201c
.org 0x6bb6c
	bl 0x1cf00	@ 0006bb6c b1f7c8f9
.org 0x6bb70
	adds r0, r4, #0	@ 0006bb70 201c
.org 0x6bb72
	adds r0, #116	@ 0006bb72 7430
.org 0x6bb74
	ldr r1, [pc, #56]	@ 0006bb74 0e49
.org 0x6bb76
	bl 0x5784	@ 0006bb76 99f705fe
.org 0x6bb7a
	movs r0, #200	@ 0006bb7a c820
.org 0x6bb7c
	bl 0x2b5c	@ 0006bb7c 96f7eeff
.org 0x6bb80
	adds r0, r4, #0	@ 0006bb80 201c
.org 0x6bb82
	adds r0, #216	@ 0006bb82 d830
.org 0x6bb84
	strb r5, [r0, #0]	@ 0006bb84 0570
.org 0x6bb86
	ldr r0, [r4, #92]	@ 0006bb86 e06d
.org 0x6bb88
	cmp r0, #0	@ 0006bb88 0028
.org 0x6bb8a
	ble.n 0x6bbb4	@ 0006bb8a 13dd
.org 0x6bb8c
	adds r1, r4, #0	@ 0006bb8c 211c
.org 0x6bb8e
	adds r1, #76	@ 0006bb8e 4c31
.org 0x6bb90
	movs r0, #1	@ 0006bb90 0120
.org 0x6bb92
	strb r0, [r1, #0]	@ 0006bb92 0870
.org 0x6bb94
	adds r2, r4, #0	@ 0006bb94 221c
.org 0x6bb96
	adds r2, #74	@ 0006bb96 4a32
.org 0x6bb98
	ldrb r0, [r2, #0]	@ 0006bb98 1078
.org 0x6bb9a
	movs r1, #16	@ 0006bb9a 1021
.org 0x6bb9c
	orrs r0, r1	@ 0006bb9c 0843
.org 0x6bb9e
	strb r0, [r2, #0]	@ 0006bb9e 1070
.org 0x6bba0
	ldrb r0, [r4, #10]	@ 0006bba0 a07a
.org 0x6bba2
	orrs r0, r1	@ 0006bba2 0843
.org 0x6bba4
	b.n 0x6bbce	@ 0006bba4 13e0
.org 0x6bba6
	.byte 0x00	@ 0006bba6 data
.org 0x6bba7
	.byte 0x00	@ 0006bba7 data
.org 0x6bba8
	.byte 0x80,0xfb,0xff,0xff	@ 0006bba8 data
.org 0x6bbac
	.byte 0x0c,0xaa,0x00,0x00	@ 0006bbac data
.org 0x6bbb0
	.byte 0xdc,0xc1,0x85,0x08	@ 0006bbb0 data
.org 0x6bbb4
	adds r0, r4, #0	@ 0006bbb4 201c
.org 0x6bbb6
	adds r0, #76	@ 0006bbb6 4c30
.org 0x6bbb8
	strb r5, [r0, #0]	@ 0006bbb8 0570
.org 0x6bbba
	adds r2, r4, #0	@ 0006bbba 221c
.org 0x6bbbc
	adds r2, #74	@ 0006bbbc 4a32
.org 0x6bbbe
	ldrb r1, [r2, #0]	@ 0006bbbe 1178
.org 0x6bbc0
	movs r0, #17	@ 0006bbc0 1120
.org 0x6bbc2
	negs r0, r0	@ 0006bbc2 4042
.org 0x6bbc4
	ands r0, r1	@ 0006bbc4 0840
.org 0x6bbc6
	strb r0, [r2, #0]	@ 0006bbc6 1070
.org 0x6bbc8
	ldrb r1, [r4, #10]	@ 0006bbc8 a17a
.org 0x6bbca
	movs r0, #239	@ 0006bbca ef20
.org 0x6bbcc
	ands r0, r1	@ 0006bbcc 0840
.org 0x6bbce
	strb r0, [r4, #10]	@ 0006bbce a072
.org 0x6bbd0
	adds r0, r4, #0	@ 0006bbd0 201c
.org 0x6bbd2
	bl 0x1cff0	@ 0006bbd2 b1f70dfa
.org 0x6bbd6
	b.n 0x6bc0c	@ 0006bbd6 19e0
.org 0x6bbd8
	cmp r5, #1	@ 0006bbd8 012d
.org 0x6bbda
	bne.n 0x6bc1c	@ 0006bbda 1fd1
.org 0x6bbdc
	ldr r0, [r4, #88]	@ 0006bbdc a06d
.org 0x6bbde
	ldr r1, [r4, #96]	@ 0006bbde 216e
.org 0x6bbe0
	adds r0, r0, r1	@ 0006bbe0 4018
.org 0x6bbe2
	str r0, [r4, #88]	@ 0006bbe2 a065
.org 0x6bbe4
	adds r1, #64	@ 0006bbe4 4031
.org 0x6bbe6
	str r1, [r4, #96]	@ 0006bbe6 2166
.org 0x6bbe8
	adds r1, r4, #0	@ 0006bbe8 211c
.org 0x6bbea
	adds r1, #180	@ 0006bbea b431
.org 0x6bbec
	ldr r1, [r1, #4]	@ 0006bbec 4968
.org 0x6bbee
	cmp r0, r1	@ 0006bbee 8842
.org 0x6bbf0
	ble.n 0x6bc2c	@ 0006bbf0 1cdd
.org 0x6bbf2
	str r1, [r4, #88]	@ 0006bbf2 a165
.org 0x6bbf4
	ldr r1, [pc, #28]	@ 0006bbf4 0749
.org 0x6bbf6
	adds r0, r4, #0	@ 0006bbf6 201c
.org 0x6bbf8
	bl 0x1cf00	@ 0006bbf8 b1f782f9
.org 0x6bbfc
	movs r0, #211	@ 0006bbfc d320
.org 0x6bbfe
	bl 0x2b10	@ 0006bbfe 96f787ff
.org 0x6bc02
	adds r0, r4, #0	@ 0006bc02 201c
.org 0x6bc04
	adds r0, #116	@ 0006bc04 7430
.org 0x6bc06
	ldr r1, [pc, #16]	@ 0006bc06 0449
.org 0x6bc08
	bl 0x5784	@ 0006bc08 99f7bcfd
.org 0x6bc0c
	ldrb r0, [r4, #15]	@ 0006bc0c e07b
.org 0x6bc0e
	adds r0, #1	@ 0006bc0e 0130
.org 0x6bc10
	strb r0, [r4, #15]	@ 0006bc10 e073
.org 0x6bc12
	b.n 0x6bc2c	@ 0006bc12 0be0
.org 0x6bc14
	.byte 0x05,0xaa,0x00,0x00	@ 0006bc14 data
.org 0x6bc18
	.byte 0xac,0xc1,0x85,0x08	@ 0006bc18 data
.org 0x6bc1c
	adds r0, r4, #0	@ 0006bc1c 201c
.org 0x6bc1e
	adds r0, #115	@ 0006bc1e 7330
.org 0x6bc20
	ldrb r1, [r0, #0]	@ 0006bc20 0178
