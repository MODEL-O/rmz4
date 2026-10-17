@ FUN_0806cb5c  entry 0x0806cb5c  size 486
.thumb
.org 0x6cb5c
FUN_0806cb5c:
	push {r4, r5, lr}	@ 0006cb5c 30b5
.org 0x6cb5e
	adds r4, r0, #0	@ 0006cb5e 041c
.org 0x6cb60
	ldrb r5, [r4, #14]	@ 0006cb60 a57b
.org 0x6cb62
	cmp r5, #0	@ 0006cb62 002d
.org 0x6cb64
	bne.n 0x6cbac	@ 0006cb64 22d1
.org 0x6cb66
	ldr r1, [pc, #164]	@ 0006cb66 2949
.org 0x6cb68
	bl 0x1cf00	@ 0006cb68 b0f7caf9
.org 0x6cb6c
	movs r0, #198	@ 0006cb6c c620
.org 0x6cb6e
	bl 0x2b10	@ 0006cb6e 95f7cfff
.org 0x6cb72
	ldr r0, [pc, #156]	@ 0006cb72 2748
.org 0x6cb74
	ldr r1, [pc, #156]	@ 0006cb74 2749
.org 0x6cb76
	adds r1, #250	@ 0006cb76 fa31
.org 0x6cb78
	ldrh r1, [r1, #0]	@ 0006cb78 0988
.org 0x6cb7a
	ldrh r2, [r0, #6]	@ 0006cb7a c288
.org 0x6cb7c
	lsrs r2, r2, #6	@ 0006cb7c 9209
.org 0x6cb7e
	subs r1, r1, r2	@ 0006cb7e 891a
.org 0x6cb80
	lsls r1, r1, #5	@ 0006cb80 4901
.org 0x6cb82
	movs r2, #128	@ 0006cb82 8022
.org 0x6cb84
	lsls r2, r2, #9	@ 0006cb84 5202
.org 0x6cb86
	adds r1, r1, r2	@ 0006cb86 8918
.org 0x6cb88
	bl 0x1d30	@ 0006cb88 95f7d2f8
.org 0x6cb8c
	ldr r0, [pc, #136]	@ 0006cb8c 2248
.org 0x6cb8e
	ldr r1, [pc, #140]	@ 0006cb8e 2349
.org 0x6cb90
	adds r1, #250	@ 0006cb90 fa31
.org 0x6cb92
	ldrh r1, [r1, #0]	@ 0006cb92 0988
.org 0x6cb94
	ldrb r2, [r0, #7]	@ 0006cb94 c279
.org 0x6cb96
	subs r1, r1, r2	@ 0006cb96 891a
.org 0x6cb98
	lsls r1, r1, #5	@ 0006cb98 4901
.org 0x6cb9a
	movs r2, #128	@ 0006cb9a 8022
.org 0x6cb9c
	lsls r2, r2, #2	@ 0006cb9c 9200
.org 0x6cb9e
	adds r1, r1, r2	@ 0006cb9e 8918
.org 0x6cba0
	bl 0x2208	@ 0006cba0 95f732fb
.org 0x6cba4
	strb r5, [r4, #15]	@ 0006cba4 e573
.org 0x6cba6
	ldrb r0, [r4, #14]	@ 0006cba6 a07b
.org 0x6cba8
	adds r0, #1	@ 0006cba8 0130
.org 0x6cbaa
	strb r0, [r4, #14]	@ 0006cbaa a073
.org 0x6cbac
	adds r0, r4, #0	@ 0006cbac 201c
.org 0x6cbae
	bl 0x1cff0	@ 0006cbae b0f71ffa
.org 0x6cbb2
	ldrb r5, [r4, #15]	@ 0006cbb2 e57b
.org 0x6cbb4
	cmp r5, #0	@ 0006cbb4 002d
.org 0x6cbb6
	bne.n 0x6cc6c	@ 0006cbb6 59d1
.org 0x6cbb8
	adds r0, r4, #0	@ 0006cbb8 201c
.org 0x6cbba
	adds r0, #113	@ 0006cbba 7130
.org 0x6cbbc
	ldrb r0, [r0, #0]	@ 0006cbbc 0078
.org 0x6cbbe
	lsls r0, r0, #24	@ 0006cbbe 0006
.org 0x6cbc0
	asrs r0, r0, #24	@ 0006cbc0 0016
.org 0x6cbc2
	cmp r0, #1	@ 0006cbc2 0128
.org 0x6cbc4
	bgt.n 0x6cbc8	@ 0006cbc4 00dc
.org 0x6cbc6
	b.n 0x6cd88	@ 0006cbc6 dfe0
.org 0x6cbc8
	adds r0, r4, #0	@ 0006cbc8 201c
.org 0x6cbca
	adds r0, #116	@ 0006cbca 7430
.org 0x6cbcc
	ldr r1, [pc, #80]	@ 0006cbcc 1449
.org 0x6cbce
	bl 0x5784	@ 0006cbce 98f7d9fd
.org 0x6cbd2
	ldr r0, [pc, #80]	@ 0006cbd2 1448
.org 0x6cbd4
	ldr r0, [r0, #0]	@ 0006cbd4 0068
.org 0x6cbd6
	ldr r1, [r4, #84]	@ 0006cbd6 616d
.org 0x6cbd8
	ldr r0, [r0, #84]	@ 0006cbd8 406d
.org 0x6cbda
	cmp r1, r0	@ 0006cbda 8142
.org 0x6cbdc
	ble.n 0x6cc28	@ 0006cbdc 24dd
.org 0x6cbde
	adds r0, r4, #0	@ 0006cbde 201c
.org 0x6cbe0
	adds r0, #180	@ 0006cbe0 b430
.org 0x6cbe2
	movs r2, #160	@ 0006cbe2 a022
.org 0x6cbe4
	lsls r2, r2, #6	@ 0006cbe4 9201
.org 0x6cbe6
	adds r1, r1, r2	@ 0006cbe6 8918
.org 0x6cbe8
	ldr r0, [r0, #24]	@ 0006cbe8 8069
.org 0x6cbea
	subs r0, r0, r1	@ 0006cbea 401a
.org 0x6cbec
	str r0, [r4, #92]	@ 0006cbec e065
.org 0x6cbee
	adds r0, r4, #0	@ 0006cbee 201c
.org 0x6cbf0
	adds r0, #76	@ 0006cbf0 4c30
.org 0x6cbf2
	strb r5, [r0, #0]	@ 0006cbf2 0570
.org 0x6cbf4
	adds r2, r4, #0	@ 0006cbf4 221c
.org 0x6cbf6
	adds r2, #74	@ 0006cbf6 4a32
.org 0x6cbf8
	ldrb r1, [r2, #0]	@ 0006cbf8 1178
.org 0x6cbfa
	movs r0, #17	@ 0006cbfa 1120
.org 0x6cbfc
	negs r0, r0	@ 0006cbfc 4042
.org 0x6cbfe
	ands r0, r1	@ 0006cbfe 0840
.org 0x6cc00
	strb r0, [r2, #0]	@ 0006cc00 1070
.org 0x6cc02
	ldrb r1, [r4, #10]	@ 0006cc02 a17a
.org 0x6cc04
	movs r0, #239	@ 0006cc04 ef20
.org 0x6cc06
	ands r0, r1	@ 0006cc06 0840
.org 0x6cc08
	strb r0, [r4, #10]	@ 0006cc08 a072
.org 0x6cc0a
	b.n 0x6cc50	@ 0006cc0a 21e0
.org 0x6cc0c
	.byte 0x03,0xaa,0x00,0x00	@ 0006cc0c data
.org 0x6cc10
	.byte 0xc4,0x49,0xc4,0x08	@ 0006cc10 data
.org 0x6cc14
	.byte 0x40,0xe0,0x02,0x02	@ 0006cc14 data
.org 0x6cc18
	.byte 0xd0,0x49,0xc4,0x08	@ 0006cc18 data
.org 0x6cc1c
	.byte 0x40,0xde,0x02,0x02	@ 0006cc1c data
.org 0x6cc20
	.byte 0xdc,0xc1,0x85,0x08	@ 0006cc20 data
.org 0x6cc24
	.byte 0xf0,0xdb,0x02,0x02	@ 0006cc24 data
.org 0x6cc28
	adds r0, r4, #0	@ 0006cc28 201c
.org 0x6cc2a
	adds r0, #180	@ 0006cc2a b430
.org 0x6cc2c
	ldr r2, [pc, #52]	@ 0006cc2c 0d4a
.org 0x6cc2e
	adds r1, r1, r2	@ 0006cc2e 8918
.org 0x6cc30
	ldr r0, [r0, #20]	@ 0006cc30 4069
.org 0x6cc32
	subs r0, r0, r1	@ 0006cc32 401a
.org 0x6cc34
	str r0, [r4, #92]	@ 0006cc34 e065
.org 0x6cc36
	adds r1, r4, #0	@ 0006cc36 211c
.org 0x6cc38
	adds r1, #76	@ 0006cc38 4c31
.org 0x6cc3a
	movs r0, #1	@ 0006cc3a 0120
.org 0x6cc3c
	strb r0, [r1, #0]	@ 0006cc3c 0870
.org 0x6cc3e
	adds r2, r4, #0	@ 0006cc3e 221c
.org 0x6cc40
	adds r2, #74	@ 0006cc40 4a32
.org 0x6cc42
	ldrb r0, [r2, #0]	@ 0006cc42 1078
.org 0x6cc44
	movs r1, #16	@ 0006cc44 1021
.org 0x6cc46
	orrs r0, r1	@ 0006cc46 0843
.org 0x6cc48
	strb r0, [r2, #0]	@ 0006cc48 1070
.org 0x6cc4a
	ldrb r0, [r4, #10]	@ 0006cc4a a07a
.org 0x6cc4c
	orrs r1, r0	@ 0006cc4c 0143
.org 0x6cc4e
	strb r1, [r4, #10]	@ 0006cc4e a172
.org 0x6cc50
	ldr r0, [r4, #92]	@ 0006cc50 e06d
.org 0x6cc52
	asrs r0, r0, #1	@ 0006cc52 4010
.org 0x6cc54
	movs r1, #12	@ 0006cc54 0c21
.org 0x6cc56
	bl 0x128fb8	@ 0006cc56 bcf0aff9
.org 0x6cc5a
	str r0, [r4, #92]	@ 0006cc5a e065
.org 0x6cc5c
	ldr r0, [pc, #8]	@ 0006cc5c 0248
.org 0x6cc5e
	str r0, [r4, #96]	@ 0006cc5e 2066
.org 0x6cc60
	b.n 0x6cce4	@ 0006cc60 40e0
.org 0x6cc62
	.byte 0x00	@ 0006cc62 data
.org 0x6cc63
	.byte 0x00	@ 0006cc63 data
.org 0x6cc64
	.byte 0x00,0xd8,0xff,0xff	@ 0006cc64 data
.org 0x6cc68
	.byte 0x00,0xfd,0xff,0xff	@ 0006cc68 data
.org 0x6cc6c
	cmp r5, #1	@ 0006cc6c 012d
.org 0x6cc6e
	bne.n 0x6cca0	@ 0006cc6e 17d1
.org 0x6cc70
	ldr r0, [r4, #84]	@ 0006cc70 606d
.org 0x6cc72
	ldr r1, [r4, #92]	@ 0006cc72 e16d
.org 0x6cc74
	adds r0, r0, r1	@ 0006cc74 4018
.org 0x6cc76
	str r0, [r4, #84]	@ 0006cc76 6065
.org 0x6cc78
	ldr r0, [r4, #88]	@ 0006cc78 a06d
.org 0x6cc7a
	ldr r1, [r4, #96]	@ 0006cc7a 216e
.org 0x6cc7c
	adds r0, r0, r1	@ 0006cc7c 4018
.org 0x6cc7e
	str r0, [r4, #88]	@ 0006cc7e a065
.org 0x6cc80
	adds r1, #64	@ 0006cc80 4031
.org 0x6cc82
	str r1, [r4, #96]	@ 0006cc82 2166
.org 0x6cc84
	cmp r1, #0	@ 0006cc84 0029
.org 0x6cc86
	bgt.n 0x6cc8a	@ 0006cc86 00dc
.org 0x6cc88
	b.n 0x6cd88	@ 0006cc88 7ee0
.org 0x6cc8a
	ldr r1, [pc, #16]	@ 0006cc8a 0449
.org 0x6cc8c
	adds r0, r4, #0	@ 0006cc8c 201c
.org 0x6cc8e
	bl 0x1cf00	@ 0006cc8e b0f737f9
.org 0x6cc92
	adds r0, r4, #0	@ 0006cc92 201c
.org 0x6cc94
	bl 0x1cff0	@ 0006cc94 b0f7acf9
.org 0x6cc98
	b.n 0x6cce4	@ 0006cc98 24e0
.org 0x6cc9a
	.byte 0x00	@ 0006cc9a data
.org 0x6cc9b
	.byte 0x00	@ 0006cc9b data
.org 0x6cc9c
	.byte 0x04,0xaa,0x00,0x00	@ 0006cc9c data
.org 0x6cca0
	cmp r5, #2	@ 0006cca0 022d
.org 0x6cca2
	bne.n 0x6ccf4	@ 0006cca2 27d1
.org 0x6cca4
	ldr r0, [r4, #84]	@ 0006cca4 606d
.org 0x6cca6
	ldr r1, [r4, #92]	@ 0006cca6 e16d
.org 0x6cca8
	adds r0, r0, r1	@ 0006cca8 4018
.org 0x6ccaa
	str r0, [r4, #84]	@ 0006ccaa 6065
.org 0x6ccac
	ldr r1, [r4, #88]	@ 0006ccac a16d
.org 0x6ccae
	ldr r0, [r4, #96]	@ 0006ccae 206e
.org 0x6ccb0
	adds r1, r1, r0	@ 0006ccb0 0918
.org 0x6ccb2
	str r1, [r4, #88]	@ 0006ccb2 a165
.org 0x6ccb4
	adds r0, #64	@ 0006ccb4 4030
.org 0x6ccb6
	str r0, [r4, #96]	@ 0006ccb6 2066
.org 0x6ccb8
	adds r5, r4, #0	@ 0006ccb8 251c
.org 0x6ccba
	adds r5, #180	@ 0006ccba b435
.org 0x6ccbc
	ldr r0, [r5, #4]	@ 0006ccbc 6868
.org 0x6ccbe
	cmp r1, r0	@ 0006ccbe 8142
.org 0x6ccc0
	ble.n 0x6cd88	@ 0006ccc0 62dd
.org 0x6ccc2
	ldr r1, [pc, #40]	@ 0006ccc2 0a49
.org 0x6ccc4
	adds r0, r4, #0	@ 0006ccc4 201c
.org 0x6ccc6
	bl 0x1cf00	@ 0006ccc6 b0f71bf9
.org 0x6ccca
	movs r0, #211	@ 0006ccca d320
.org 0x6cccc
	bl 0x2b10	@ 0006cccc 95f720ff
.org 0x6ccd0
	adds r0, r4, #0	@ 0006ccd0 201c
.org 0x6ccd2
	bl 0x1cff0	@ 0006ccd2 b0f78df9
.org 0x6ccd6
	adds r0, r4, #0	@ 0006ccd6 201c
.org 0x6ccd8
	adds r0, #116	@ 0006ccd8 7430
.org 0x6ccda
	ldr r1, [pc, #20]	@ 0006ccda 0549
.org 0x6ccdc
	bl 0x5784	@ 0006ccdc 98f752fd
.org 0x6cce0
	ldr r0, [r5, #4]	@ 0006cce0 6868
.org 0x6cce2
	str r0, [r4, #88]	@ 0006cce2 a065
.org 0x6cce4
	ldrb r0, [r4, #15]	@ 0006cce4 e07b
.org 0x6cce6
	adds r0, #1	@ 0006cce6 0130
.org 0x6cce8
	strb r0, [r4, #15]	@ 0006cce8 e073
.org 0x6ccea
	b.n 0x6cd88	@ 0006ccea 4de0
.org 0x6ccec
	.byte 0x05,0xaa,0x00,0x00	@ 0006ccec data
.org 0x6ccf0
	.byte 0xac,0xc1,0x85,0x08	@ 0006ccf0 data
.org 0x6ccf4
	adds r0, r4, #0	@ 0006ccf4 201c
.org 0x6ccf6
	adds r0, #115	@ 0006ccf6 7330
.org 0x6ccf8
	ldrb r3, [r0, #0]	@ 0006ccf8 0378
.org 0x6ccfa
	cmp r3, #3	@ 0006ccfa 032b
.org 0x6ccfc
	bne.n 0x6cd88	@ 0006ccfc 44d1
.org 0x6ccfe
	adds r0, #49	@ 0006ccfe 3130
.org 0x6cd00
	movs r1, #0	@ 0006cd00 0021
.org 0x6cd02
	ldrsh r0, [r0, r1]	@ 0006cd02 405e
.org 0x6cd04
	cmp r0, #15	@ 0006cd04 0f28
.org 0x6cd06
	bgt.n 0x6cd40	@ 0006cd06 1bdc
.org 0x6cd08
	adds r1, r4, #0	@ 0006cd08 211c
.org 0x6cd0a
	adds r1, #221	@ 0006cd0a dd31
.org 0x6cd0c
	movs r0, #60	@ 0006cd0c 3c20
.org 0x6cd0e
	strb r0, [r1, #0]	@ 0006cd0e 0870
.org 0x6cd10
	ldr r2, [pc, #32]	@ 0006cd10 084a
.org 0x6cd12
	ldr r1, [r2, #0]	@ 0006cd12 1168
.org 0x6cd14
	ldr r0, [pc, #32]	@ 0006cd14 0848
.org 0x6cd16
	muls r0, r1	@ 0006cd16 4843
.org 0x6cd18
	ldr r1, [pc, #32]	@ 0006cd18 0849
.org 0x6cd1a
	adds r0, r0, r1	@ 0006cd1a 4018
.org 0x6cd1c
	lsls r0, r0, #1	@ 0006cd1c 4000
.org 0x6cd1e
	lsrs r1, r0, #1	@ 0006cd1e 4108
.org 0x6cd20
	str r1, [r2, #0]	@ 0006cd20 1160
.org 0x6cd22
	lsrs r0, r0, #17	@ 0006cd22 400c
.org 0x6cd24
	movs r1, #31	@ 0006cd24 1f21
.org 0x6cd26
	ands r0, r1	@ 0006cd26 0840
.org 0x6cd28
	cmp r0, #17	@ 0006cd28 1128
.org 0x6cd2a
	bls.n 0x6cd78	@ 0006cd2a 25d9
.org 0x6cd2c
	adds r0, r4, #0	@ 0006cd2c 201c
.org 0x6cd2e
	adds r0, #220	@ 0006cd2e dc30
.org 0x6cd30
	strb r3, [r0, #0]	@ 0006cd30 0370
.org 0x6cd32
	b.n 0x6cd80	@ 0006cd32 25e0
.org 0x6cd34
	.byte 0x38,0xdc,0x02,0x02	@ 0006cd34 data
.org 0x6cd38
	.byte 0xfd,0x43,0x03,0x00	@ 0006cd38 data
.org 0x6cd3c
	.byte 0xc3,0x9e,0x26,0x00	@ 0006cd3c data
.org 0x6cd40
	adds r1, r4, #0	@ 0006cd40 211c
