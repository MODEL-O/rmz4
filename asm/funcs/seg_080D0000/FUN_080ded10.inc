@ FUN_080ded10  entry 0x080ded10  size 114
.thumb
.org 0xded10
FUN_080ded10:
	push {r4, lr}	@ 000ded10 10b5
.org 0xded12
	adds r4, r0, #0	@ 000ded12 041c
.org 0xded14
	bl 0x1ce54	@ 000ded14 3ef79ef8
.org 0xded18
	ldrb r1, [r4, #10]	@ 000ded18 a17a
.org 0xded1a
	movs r0, #1	@ 000ded1a 0120
.org 0xded1c
	orrs r0, r1	@ 000ded1c 0843
.org 0xded1e
	movs r1, #2	@ 000ded1e 0221
.org 0xded20
	orrs r0, r1	@ 000ded20 0843
.org 0xded22
	strb r0, [r4, #10]	@ 000ded22 a072
.org 0xded24
	adds r0, r4, #0	@ 000ded24 201c
.org 0xded26
	bl 0x1ceec	@ 000ded26 3ef7e1f8
.org 0xded2a
	ldr r1, [pc, #88]	@ 000ded2a 1649
.org 0xded2c
	ldrb r0, [r4, #17]	@ 000ded2c 607c
.org 0xded2e
	lsls r0, r0, #1	@ 000ded2e 4000
.org 0xded30
	adds r0, r0, r1	@ 000ded30 4018
.org 0xded32
	ldrh r1, [r0, #0]	@ 000ded32 0188
.org 0xded34
	adds r0, r4, #0	@ 000ded34 201c
.org 0xded36
	bl 0x1cf00	@ 000ded36 3ef7e3f8
.org 0xded3a
	adds r0, r4, #0	@ 000ded3a 201c
.org 0xded3c
	bl 0x1cff0	@ 000ded3c 3ef758f9
.org 0xded40
	movs r2, #0	@ 000ded40 0022
.org 0xded42
	ldrb r1, [r4, #10]	@ 000ded42 a17a
.org 0xded44
	movs r0, #239	@ 000ded44 ef20
.org 0xded46
	ands r0, r1	@ 000ded46 0840
.org 0xded48
	strb r0, [r4, #10]	@ 000ded48 a072
.org 0xded4a
	movs r3, #1	@ 000ded4a 0123
.org 0xded4c
	adds r0, r4, #0	@ 000ded4c 201c
.org 0xded4e
	adds r0, #76	@ 000ded4e 4c30
.org 0xded50
	strb r2, [r0, #0]	@ 000ded50 0270
.org 0xded52
	movs r0, #74	@ 000ded52 4a20
.org 0xded54
	adds r0, r0, r4	@ 000ded54 0019
.org 0xded56
	mov ip, r0	@ 000ded56 8446
.org 0xded58
	ldrb r1, [r0, #0]	@ 000ded58 0178
.org 0xded5a
	movs r0, #17	@ 000ded5a 1120
.org 0xded5c
	negs r0, r0	@ 000ded5c 4042
.org 0xded5e
	ands r0, r1	@ 000ded5e 0840
.org 0xded60
	mov r1, ip	@ 000ded60 6146
.org 0xded62
	strb r0, [r1, #0]	@ 000ded62 0870
.org 0xded64
	strb r2, [r4, #19]	@ 000ded64 e274
.org 0xded66
	ldr r1, [pc, #32]	@ 000ded66 0849
.org 0xded68
	ldrb r0, [r4, #9]	@ 000ded68 607a
.org 0xded6a
	lsls r0, r0, #2	@ 000ded6a 8000
.org 0xded6c
	adds r0, r0, r1	@ 000ded6c 4018
.org 0xded6e
	str r3, [r4, #12]	@ 000ded6e e360
.org 0xded70
	ldr r0, [r0, #0]	@ 000ded70 0068
.org 0xded72
	ldr r0, [r0, #4]	@ 000ded72 4068
.org 0xded74
	str r0, [r4, #20]	@ 000ded74 6061
.org 0xded76
	adds r0, r4, #0	@ 000ded76 201c
.org 0xded78
	bl 0xdece0	@ 000ded78 fff7b2ff
.org 0xded7c
	pop {r4}	@ 000ded7c 10bc
.org 0xded7e
	pop {r0}	@ 000ded7e 01bc
.org 0xded80
	bx r0	@ 000ded80 0047
