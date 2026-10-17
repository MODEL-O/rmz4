@ FUN_0807fb14  entry 0x0807fb14  size 264
.thumb
.org 0x7fb14
FUN_0807fb14:
	push {r4, r5, r6, r7, lr}	@ 0007fb14 f0b5
.org 0x7fb16
	adds r5, r0, #0	@ 0007fb16 051c
.org 0x7fb18
	bl 0x1cc9c	@ 0007fb18 9df7c0f8
.org 0x7fb1c
	ldrb r1, [r5, #10]	@ 0007fb1c a97a
.org 0x7fb1e
	movs r0, #1	@ 0007fb1e 0120
.org 0x7fb20
	movs r7, #0	@ 0007fb20 0027
.org 0x7fb22
	orrs r0, r1	@ 0007fb22 0843
.org 0x7fb24
	movs r1, #2	@ 0007fb24 0221
.org 0x7fb26
	orrs r0, r1	@ 0007fb26 0843
.org 0x7fb28
	strb r0, [r5, #10]	@ 0007fb28 a872
.org 0x7fb2a
	movs r1, #208	@ 0007fb2a d021
.org 0x7fb2c
	lsls r1, r1, #5	@ 0007fb2c 4901
.org 0x7fb2e
	adds r0, r5, #0	@ 0007fb2e 281c
.org 0x7fb30
	bl 0x1cf00	@ 0007fb30 9df7e6f9
.org 0x7fb34
	adds r0, r5, #0	@ 0007fb34 281c
.org 0x7fb36
	bl 0x1cff0	@ 0007fb36 9df75bfa
.org 0x7fb3a
	movs r2, #0	@ 0007fb3a 0022
.org 0x7fb3c
	ldrb r1, [r5, #10]	@ 0007fb3c a97a
.org 0x7fb3e
	movs r6, #239	@ 0007fb3e ef26
.org 0x7fb40
	adds r0, r6, #0	@ 0007fb40 301c
.org 0x7fb42
	ands r0, r1	@ 0007fb42 0840
.org 0x7fb44
	strb r0, [r5, #10]	@ 0007fb44 a872
.org 0x7fb46
	adds r0, r5, #0	@ 0007fb46 281c
.org 0x7fb48
	adds r0, #76	@ 0007fb48 4c30
.org 0x7fb4a
	strb r2, [r0, #0]	@ 0007fb4a 0270
.org 0x7fb4c
	adds r2, r5, #0	@ 0007fb4c 2a1c
.org 0x7fb4e
	adds r2, #74	@ 0007fb4e 4a32
.org 0x7fb50
	ldrb r1, [r2, #0]	@ 0007fb50 1178
.org 0x7fb52
	movs r0, #17	@ 0007fb52 1120
.org 0x7fb54
	negs r0, r0	@ 0007fb54 4042
.org 0x7fb56
	ands r0, r1	@ 0007fb56 0840
.org 0x7fb58
	strb r0, [r2, #0]	@ 0007fb58 1070
.org 0x7fb5a
	ldrb r1, [r5, #10]	@ 0007fb5a a97a
.org 0x7fb5c
	movs r0, #4	@ 0007fb5c 0420
.org 0x7fb5e
	orrs r0, r1	@ 0007fb5e 0843
.org 0x7fb60
	strb r0, [r5, #10]	@ 0007fb60 a872
.org 0x7fb62
	adds r4, r5, #0	@ 0007fb62 2c1c
.org 0x7fb64
	adds r4, #116	@ 0007fb64 7434
.org 0x7fb66
	ldr r1, [pc, #44]	@ 0007fb66 0b49
.org 0x7fb68
	adds r2, #10	@ 0007fb68 0a32
.org 0x7fb6a
	adds r0, r4, #0	@ 0007fb6a 201c
.org 0x7fb6c
	movs r3, #14	@ 0007fb6c 0e23
.org 0x7fb6e
	bl 0x5760	@ 0007fb6e 85f7f7fd
.org 0x7fb72
	str r5, [r4, #44]	@ 0007fb72 e562
.org 0x7fb74
	ldr r0, [pc, #32]	@ 0007fb74 0848
.org 0x7fb76
	str r0, [r4, #36]	@ 0007fb76 6062
.org 0x7fb78
	movs r2, #0	@ 0007fb78 0022
.org 0x7fb7a
	ldr r0, [pc, #32]	@ 0007fb7a 0848
.org 0x7fb7c
	ldr r0, [r0, #0]	@ 0007fb7c 0068
.org 0x7fb7e
	ldr r1, [r0, #84]	@ 0007fb7e 416d
.org 0x7fb80
	ldr r0, [r5, #84]	@ 0007fb80 686d
.org 0x7fb82
	cmp r1, r0	@ 0007fb82 8142
.org 0x7fb84
	ble.n 0x7fb88	@ 0007fb84 00dd
.org 0x7fb86
	movs r2, #1	@ 0007fb86 0122
.org 0x7fb88
	cmp r2, #0	@ 0007fb88 002a
.org 0x7fb8a
	beq.n 0x7fba0	@ 0007fb8a 09d0
.org 0x7fb8c
	ldrb r0, [r5, #10]	@ 0007fb8c a87a
.org 0x7fb8e
	movs r1, #16	@ 0007fb8e 1021
.org 0x7fb90
	orrs r0, r1	@ 0007fb90 0843
.org 0x7fb92
	b.n 0x7fba6	@ 0007fb92 08e0
.org 0x7fb94
	.byte 0x60,0xdd,0x85,0x08	@ 0007fb94 data
.org 0x7fb98
	.byte 0x4d,0x06,0x08,0x08	@ 0007fb98 data
.org 0x7fb9c
	.byte 0xf0,0xdb,0x02,0x02	@ 0007fb9c data
.org 0x7fba0
	ldrb r1, [r5, #10]	@ 0007fba0 a97a
.org 0x7fba2
	adds r0, r6, #0	@ 0007fba2 301c
.org 0x7fba4
	ands r0, r1	@ 0007fba4 0840
.org 0x7fba6
	strb r0, [r5, #10]	@ 0007fba6 a872
.org 0x7fba8
	movs r3, #1	@ 0007fba8 0123
.org 0x7fbaa
	movs r6, #1	@ 0007fbaa 0126
.org 0x7fbac
	adds r1, r6, #0	@ 0007fbac 311c
.org 0x7fbae
	ands r1, r2	@ 0007fbae 1140
.org 0x7fbb0
	adds r0, r5, #0	@ 0007fbb0 281c
.org 0x7fbb2
	adds r0, #76	@ 0007fbb2 4c30
.org 0x7fbb4
	strb r1, [r0, #0]	@ 0007fbb4 0170
.org 0x7fbb6
	adds r4, r5, #0	@ 0007fbb6 2c1c
.org 0x7fbb8
	adds r4, #74	@ 0007fbb8 4a34
.org 0x7fbba
	lsls r1, r1, #4	@ 0007fbba 0901
.org 0x7fbbc
	ldrb r2, [r4, #0]	@ 0007fbbc 2278
.org 0x7fbbe
	movs r0, #17	@ 0007fbbe 1120
.org 0x7fbc0
	negs r0, r0	@ 0007fbc0 4042
.org 0x7fbc2
	ands r0, r2	@ 0007fbc2 1040
.org 0x7fbc4
	orrs r0, r1	@ 0007fbc4 0843
.org 0x7fbc6
	strb r0, [r4, #0]	@ 0007fbc6 2070
.org 0x7fbc8
	ldrb r0, [r5, #10]	@ 0007fbc8 a87a
.org 0x7fbca
	lsrs r0, r0, #4	@ 0007fbca 0009
.org 0x7fbcc
	ands r0, r3	@ 0007fbcc 1840
.org 0x7fbce
	strb r0, [r5, #18]	@ 0007fbce a874
.org 0x7fbd0
	ldrb r4, [r5, #16]	@ 0007fbd0 2c7c
.org 0x7fbd2
	cmp r4, #0	@ 0007fbd2 002c
.org 0x7fbd4
	bne.n 0x7fbe8	@ 0007fbd4 08d1
.org 0x7fbd6
	ldr r0, [r5, #84]	@ 0007fbd6 686d
.org 0x7fbd8
	ldr r1, [r5, #88]	@ 0007fbd8 a96d
.org 0x7fbda
	bl 0x8534	@ 0007fbda 88f7abfc
.org 0x7fbde
	str r0, [r5, #88]	@ 0007fbde a865
.org 0x7fbe0
	adds r0, r5, #0	@ 0007fbe0 281c
.org 0x7fbe2
	adds r0, #184	@ 0007fbe2 b830
.org 0x7fbe4
	strb r4, [r0, #0]	@ 0007fbe4 0470
.org 0x7fbe6
	b.n 0x7fbee	@ 0007fbe6 02e0
.org 0x7fbe8
	adds r0, r5, #0	@ 0007fbe8 281c
.org 0x7fbea
	adds r0, #184	@ 0007fbea b830
.org 0x7fbec
	strb r6, [r0, #0]	@ 0007fbec 0670
.org 0x7fbee
	movs r1, #0	@ 0007fbee 0021
.org 0x7fbf0
	str r1, [r5, #92]	@ 0007fbf0 e965
.org 0x7fbf2
	movs r2, #1	@ 0007fbf2 0122
.org 0x7fbf4
	strb r2, [r5, #17]	@ 0007fbf4 6a74
.org 0x7fbf6
	adds r0, r5, #0	@ 0007fbf6 281c
.org 0x7fbf8
	adds r0, #188	@ 0007fbf8 bc30
.org 0x7fbfa
	str r1, [r0, #0]	@ 0007fbfa 0160
.org 0x7fbfc
	adds r0, #6	@ 0007fbfc 0630
.org 0x7fbfe
	strb r1, [r0, #0]	@ 0007fbfe 0170
.org 0x7fc00
	adds r0, #1	@ 0007fc00 0130
.org 0x7fc02
	strb r1, [r0, #0]	@ 0007fc02 0170
.org 0x7fc04
	adds r1, r5, #0	@ 0007fc04 291c
.org 0x7fc06
	adds r1, #185	@ 0007fc06 b931
.org 0x7fc08
	movs r0, #60	@ 0007fc08 3c20
.org 0x7fc0a
	strb r0, [r1, #0]	@ 0007fc0a 0870
.org 0x7fc0c
	ldr r1, [pc, #24]	@ 0007fc0c 0649
.org 0x7fc0e
	ldrb r0, [r5, #9]	@ 0007fc0e 687a
.org 0x7fc10
	lsls r0, r0, #2	@ 0007fc10 8000
.org 0x7fc12
	adds r0, r0, r1	@ 0007fc12 4018
.org 0x7fc14
	str r2, [r5, #12]	@ 0007fc14 ea60
.org 0x7fc16
	ldr r0, [r0, #0]	@ 0007fc16 0068
.org 0x7fc18
	ldr r0, [r0, #4]	@ 0007fc18 4068
.org 0x7fc1a
	str r0, [r5, #20]	@ 0007fc1a 6861
