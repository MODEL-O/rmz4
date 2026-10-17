@ FUN_0805fe68  entry 0x0805fe68  size 338
.thumb
.org 0x5fe68
FUN_0805fe68:
	push {r4, r5, r6, lr}	@ 0005fe68 70b5
.org 0x5fe6a
	adds r4, r0, #0	@ 0005fe6a 041c
.org 0x5fe6c
	ldrb r5, [r4, #14]	@ 0005fe6c a57b
.org 0x5fe6e
	cmp r5, #0	@ 0005fe6e 002d
.org 0x5fe70
	bne.n 0x5fe8e	@ 0005fe70 0dd1
.org 0x5fe72
	ldr r1, [pc, #44]	@ 0005fe72 0b49
.org 0x5fe74
	bl 0x1cf00	@ 0005fe74 bdf744f8
.org 0x5fe78
	ldr r0, [r4, #92]	@ 0005fe78 e06d
.org 0x5fe7a
	cmp r0, #0	@ 0005fe7a 0028
.org 0x5fe7c
	bge.n 0x5fe80	@ 0005fe7c 00da
.org 0x5fe7e
	adds r0, #15	@ 0005fe7e 0f30
.org 0x5fe80
	asrs r0, r0, #4	@ 0005fe80 0011
.org 0x5fe82
	str r0, [r4, #100]	@ 0005fe82 6066
.org 0x5fe84
	strb r5, [r4, #18]	@ 0005fe84 a574
.org 0x5fe86
	strb r5, [r4, #15]	@ 0005fe86 e573
.org 0x5fe88
	ldrb r0, [r4, #14]	@ 0005fe88 a07b
.org 0x5fe8a
	adds r0, #1	@ 0005fe8a 0130
.org 0x5fe8c
	strb r0, [r4, #14]	@ 0005fe8c a073
.org 0x5fe8e
	ldrb r3, [r4, #15]	@ 0005fe8e e37b
.org 0x5fe90
	cmp r3, #1	@ 0005fe90 012b
.org 0x5fe92
	beq.n 0x5ff50	@ 0005fe92 5dd0
.org 0x5fe94
	cmp r3, #1	@ 0005fe94 012b
.org 0x5fe96
	bgt.n 0x5fea4	@ 0005fe96 05dc
.org 0x5fe98
	cmp r3, #0	@ 0005fe98 002b
.org 0x5fe9a
	beq.n 0x5feac	@ 0005fe9a 07d0
.org 0x5fe9c
	b.n 0x5ffca	@ 0005fe9c 95e0
.org 0x5fe9e
	.byte 0x00	@ 0005fe9e data
.org 0x5fe9f
	.byte 0x00	@ 0005fe9f data
.org 0x5fea0
	.byte 0x05,0xa5,0x00,0x00	@ 0005fea0 data
.org 0x5fea4
	cmp r3, #2	@ 0005fea4 022b
.org 0x5fea6
	bne.n 0x5feaa	@ 0005fea6 00d1
.org 0x5fea8
	b.n 0x5ffb8	@ 0005fea8 86e0
.org 0x5feaa
	b.n 0x5ffca	@ 0005feaa 8ee0
.org 0x5feac
	ldrb r0, [r4, #18]	@ 0005feac a07c
.org 0x5feae
	adds r0, #1	@ 0005feae 0130
.org 0x5feb0
	strb r0, [r4, #18]	@ 0005feb0 a074
.org 0x5feb2
	movs r1, #255	@ 0005feb2 ff21
.org 0x5feb4
	ands r0, r1	@ 0005feb4 0840
.org 0x5feb6
	movs r1, #1	@ 0005feb6 0121
.org 0x5feb8
	ands r0, r1	@ 0005feb8 0840
.org 0x5feba
	cmp r0, #0	@ 0005feba 0028
.org 0x5febc
	beq.n 0x5fec6	@ 0005febc 03d0
.org 0x5febe
	ldrb r1, [r4, #10]	@ 0005febe a17a
.org 0x5fec0
	movs r0, #254	@ 0005fec0 fe20
.org 0x5fec2
	ands r0, r1	@ 0005fec2 0840
.org 0x5fec4
	b.n 0x5feca	@ 0005fec4 01e0
.org 0x5fec6
	ldrb r0, [r4, #10]	@ 0005fec6 a07a
.org 0x5fec8
	orrs r0, r1	@ 0005fec8 0843
.org 0x5feca
	strb r0, [r4, #10]	@ 0005feca a072
.org 0x5fecc
	ldr r0, [r4, #84]	@ 0005fecc 606d
.org 0x5fece
	ldr r1, [r4, #92]	@ 0005fece e16d
.org 0x5fed0
	adds r0, r0, r1	@ 0005fed0 4018
.org 0x5fed2
	str r0, [r4, #84]	@ 0005fed2 6065
.org 0x5fed4
	ldr r0, [r4, #100]	@ 0005fed4 606e
.org 0x5fed6
	subs r1, r1, r0	@ 0005fed6 091a
.org 0x5fed8
	str r1, [r4, #92]	@ 0005fed8 e165
.org 0x5feda
	adds r0, r4, #0	@ 0005feda 201c
.org 0x5fedc
	adds r0, #115	@ 0005fedc 7330
.org 0x5fede
	ldrb r0, [r0, #0]	@ 0005fede 0078
.org 0x5fee0
	cmp r0, #3	@ 0005fee0 0328
.org 0x5fee2
	bne.n 0x5ffca	@ 0005fee2 72d1
.org 0x5fee4
	ldrb r1, [r4, #10]	@ 0005fee4 a17a
.org 0x5fee6
	movs r0, #1	@ 0005fee6 0120
.org 0x5fee8
	orrs r0, r1	@ 0005fee8 0843
.org 0x5feea
	strb r0, [r4, #10]	@ 0005feea a072
.org 0x5feec
	ldr r1, [r4, #44]	@ 0005feec e16a
.org 0x5feee
	cmp r1, #0	@ 0005feee 0029
.org 0x5fef0
	beq.n 0x5fefa	@ 0005fef0 03d0
.org 0x5fef2
	movs r0, #2	@ 0005fef2 0220
.org 0x5fef4
	strb r0, [r1, #17]	@ 0005fef4 4874
.org 0x5fef6
	movs r0, #0	@ 0005fef6 0020
.org 0x5fef8
	str r0, [r4, #44]	@ 0005fef8 e062
.org 0x5fefa
	adds r0, r4, #0	@ 0005fefa 201c
.org 0x5fefc
	adds r0, #116	@ 0005fefc 7430
.org 0x5fefe
	ldr r1, [pc, #56]	@ 0005fefe 0e49
.org 0x5ff00
	bl 0x5784	@ 0005ff00 a5f740fc
.org 0x5ff04
	ldrb r0, [r4, #10]	@ 0005ff04 a07a
.org 0x5ff06
	lsrs r0, r0, #4	@ 0005ff06 0009
.org 0x5ff08
	movs r2, #1	@ 0005ff08 0122
.org 0x5ff0a
	bics r2, r0	@ 0005ff0a 8243
.org 0x5ff0c
	movs r3, #0	@ 0005ff0c 0023
.org 0x5ff0e
	ldr r0, [pc, #44]	@ 0005ff0e 0b48
.org 0x5ff10
	ldr r0, [r0, #0]	@ 0005ff10 0068
.org 0x5ff12
	ldr r1, [r4, #84]	@ 0005ff12 616d
.org 0x5ff14
	ldr r0, [r0, #84]	@ 0005ff14 406d
.org 0x5ff16
	cmp r1, r0	@ 0005ff16 8142
.org 0x5ff18
	bge.n 0x5ff1c	@ 0005ff18 00da
.org 0x5ff1a
	movs r3, #1	@ 0005ff1a 0123
.org 0x5ff1c
	cmp r2, r3	@ 0005ff1c 9a42
.org 0x5ff1e
	beq.n 0x5ff40	@ 0005ff1e 0fd0
.org 0x5ff20
	movs r1, #165	@ 0005ff20 a521
.org 0x5ff22
	lsls r1, r1, #8	@ 0005ff22 0902
.org 0x5ff24
	adds r0, r4, #0	@ 0005ff24 201c
.org 0x5ff26
	bl 0x1cf00	@ 0005ff26 bcf7ebff
.org 0x5ff2a
	movs r0, #4	@ 0005ff2a 0420
.org 0x5ff2c
	strb r0, [r4, #18]	@ 0005ff2c a074
.org 0x5ff2e
	ldrb r0, [r4, #15]	@ 0005ff2e e07b
.org 0x5ff30
	adds r0, #2	@ 0005ff30 0230
.org 0x5ff32
	strb r0, [r4, #15]	@ 0005ff32 e073
.org 0x5ff34
	b.n 0x5ffca	@ 0005ff34 49e0
.org 0x5ff36
	.byte 0x00	@ 0005ff36 data
.org 0x5ff37
	.byte 0x00	@ 0005ff37 data
.org 0x5ff38
	.byte 0x54,0xaa,0x85,0x08	@ 0005ff38 data
.org 0x5ff3c
	.byte 0xf0,0xdb,0x02,0x02	@ 0005ff3c data
.org 0x5ff40
	ldr r1, [pc, #8]	@ 0005ff40 0249
.org 0x5ff42
	adds r0, r4, #0	@ 0005ff42 201c
.org 0x5ff44
	bl 0x1cf00	@ 0005ff44 bcf7dcff
.org 0x5ff48
	b.n 0x5ffac	@ 0005ff48 30e0
.org 0x5ff4a
	.byte 0x00	@ 0005ff4a data
.org 0x5ff4b
	.byte 0x00	@ 0005ff4b data
.org 0x5ff4c
	.byte 0x01,0xa5,0x00,0x00	@ 0005ff4c data
.org 0x5ff50
	ldrb r0, [r4, #18]	@ 0005ff50 a07c
.org 0x5ff52
	subs r0, #1	@ 0005ff52 0138
.org 0x5ff54
	strb r0, [r4, #18]	@ 0005ff54 a074
.org 0x5ff56
	lsls r0, r0, #24	@ 0005ff56 0006
.org 0x5ff58
	cmp r0, #0	@ 0005ff58 0028
.org 0x5ff5a
	bne.n 0x5ffca	@ 0005ff5a 36d1
.org 0x5ff5c
	movs r5, #0	@ 0005ff5c 0025
.org 0x5ff5e
	ldr r0, [pc, #64]	@ 0005ff5e 1048
.org 0x5ff60
	ldr r2, [r0, #0]	@ 0005ff60 0268
.org 0x5ff62
	ldr r1, [r4, #84]	@ 0005ff62 616d
.org 0x5ff64
	ldr r0, [r2, #84]	@ 0005ff64 506d
.org 0x5ff66
	cmp r1, r0	@ 0005ff66 8142
.org 0x5ff68
	bge.n 0x5ff6c	@ 0005ff68 00da
.org 0x5ff6a
	movs r5, #1	@ 0005ff6a 0125
.org 0x5ff6c
	adds r0, r4, #0	@ 0005ff6c 201c
.org 0x5ff6e
	adds r0, #76	@ 0005ff6e 4c30
.org 0x5ff70
	strb r5, [r0, #0]	@ 0005ff70 0570
.org 0x5ff72
	movs r6, #0	@ 0005ff72 0026
.org 0x5ff74
	ldr r1, [r4, #84]	@ 0005ff74 616d
.org 0x5ff76
	ldr r0, [r2, #84]	@ 0005ff76 506d
.org 0x5ff78
	cmp r1, r0	@ 0005ff78 8142
.org 0x5ff7a
	bge.n 0x5ff7e	@ 0005ff7a 00da
.org 0x5ff7c
	movs r6, #1	@ 0005ff7c 0126
.org 0x5ff7e
	adds r5, r4, #0	@ 0005ff7e 251c
.org 0x5ff80
	adds r5, #74	@ 0005ff80 4a35
.org 0x5ff82
	ands r3, r6	@ 0005ff82 3340
.org 0x5ff84
	lsls r2, r3, #4	@ 0005ff84 1a01
.org 0x5ff86
	ldrb r1, [r5, #0]	@ 0005ff86 2978
.org 0x5ff88
	movs r0, #17	@ 0005ff88 1120
.org 0x5ff8a
	negs r0, r0	@ 0005ff8a 4042
.org 0x5ff8c
	ands r0, r1	@ 0005ff8c 0840
.org 0x5ff8e
	orrs r0, r2	@ 0005ff8e 1043
.org 0x5ff90
	strb r0, [r5, #0]	@ 0005ff90 2870
.org 0x5ff92
	cmp r3, #0	@ 0005ff92 002b
.org 0x5ff94
	beq.n 0x5ffa4	@ 0005ff94 06d0
.org 0x5ff96
	ldrb r0, [r4, #10]	@ 0005ff96 a07a
.org 0x5ff98
	movs r1, #16	@ 0005ff98 1021
.org 0x5ff9a
	orrs r0, r1	@ 0005ff9a 0843
.org 0x5ff9c
	b.n 0x5ffaa	@ 0005ff9c 05e0
.org 0x5ff9e
	.byte 0x00	@ 0005ff9e data
.org 0x5ff9f
	.byte 0x00	@ 0005ff9f data
.org 0x5ffa0
	.byte 0xf0,0xdb,0x02,0x02	@ 0005ffa0 data
.org 0x5ffa4
	ldrb r1, [r4, #10]	@ 0005ffa4 a17a
.org 0x5ffa6
	movs r0, #239	@ 0005ffa6 ef20
.org 0x5ffa8
	ands r0, r1	@ 0005ffa8 0840
.org 0x5ffaa
	strb r0, [r4, #10]	@ 0005ffaa a072
.org 0x5ffac
	movs r0, #2	@ 0005ffac 0220
.org 0x5ffae
	strb r0, [r4, #18]	@ 0005ffae a074
.org 0x5ffb0
	ldrb r0, [r4, #15]	@ 0005ffb0 e07b
.org 0x5ffb2
	adds r0, #1	@ 0005ffb2 0130
.org 0x5ffb4
	strb r0, [r4, #15]	@ 0005ffb4 e073
.org 0x5ffb6
	b.n 0x5ffca	@ 0005ffb6 08e0
.org 0x5ffb8
	ldrb r0, [r4, #18]	@ 0005ffb8 a07c
