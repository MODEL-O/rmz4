@ FUN_0809af24  entry 0x0809af24  size 118
.thumb
.org 0x9af24
FUN_0809af24:
	push {r4, r5, r6, r7, lr}	@ 0009af24 f0b5
.org 0x9af26
	adds r6, r0, #0	@ 0009af26 061c
.org 0x9af28
	adds r7, r1, #0	@ 0009af28 0f1c
.org 0x9af2a
	lsls r2, r2, #24	@ 0009af2a 1206
.org 0x9af2c
	lsrs r5, r2, #24	@ 0009af2c 150e
.org 0x9af2e
	lsls r3, r3, #24	@ 0009af2e 1b06
.org 0x9af30
	lsrs r4, r3, #24	@ 0009af30 1c0e
.org 0x9af32
	ldr r0, [pc, #104]	@ 0009af32 1a48
.org 0x9af34
	ldr r0, [r0, #0]	@ 0009af34 0068
.org 0x9af36
	bl 0x5500	@ 0009af36 6af7e3fa
.org 0x9af3a
	mov ip, r0	@ 0009af3a 8446
.org 0x9af3c
	cmp r0, #0	@ 0009af3c 0028
.org 0x9af3e
	beq.n 0x9af92	@ 0009af3e 28d0
.org 0x9af40
	mov r1, ip	@ 0009af40 6146
.org 0x9af42
	adds r1, #37	@ 0009af42 2531
.org 0x9af44
	movs r3, #0	@ 0009af44 0023
.org 0x9af46
	movs r0, #24	@ 0009af46 1820
.org 0x9af48
	strb r0, [r1, #0]	@ 0009af48 0870
.org 0x9af4a
	ldr r0, [pc, #84]	@ 0009af4a 1548
.org 0x9af4c
	movs r1, #38	@ 0009af4c 2621
.org 0x9af4e
	mov r2, ip	@ 0009af4e 6246
.org 0x9af50
	strb r1, [r2, #9]	@ 0009af50 5172
.org 0x9af52
	adds r0, #152	@ 0009af52 9830
.org 0x9af54
	ldr r0, [r0, #0]	@ 0009af54 0068
.org 0x9af56
	ldr r0, [r0, #0]	@ 0009af56 0068
.org 0x9af58
	str r0, [r2, #20]	@ 0009af58 5061
.org 0x9af5a
	movs r2, #0	@ 0009af5a 0022
.org 0x9af5c
	mov r0, ip	@ 0009af5c 6046
.org 0x9af5e
	strh r3, [r0, #32]	@ 0009af5e 0384
.org 0x9af60
	adds r0, #34	@ 0009af60 2230
.org 0x9af62
	strb r2, [r0, #0]	@ 0009af62 0270
.org 0x9af64
	mov r3, ip	@ 0009af64 6346
.org 0x9af66
	ldrb r1, [r3, #11]	@ 0009af66 d97a
.org 0x9af68
	movs r0, #16	@ 0009af68 1020
.org 0x9af6a
	orrs r0, r1	@ 0009af6a 0843
.org 0x9af6c
	strb r0, [r3, #11]	@ 0009af6c d872
.org 0x9af6e
	ldrb r0, [r3, #28]	@ 0009af6e 187f
.org 0x9af70
	strb r0, [r3, #29]	@ 0009af70 5877
.org 0x9af72
	str r6, [r3, #40]	@ 0009af72 9e62
.org 0x9af74
	ldr r0, [r7, #0]	@ 0009af74 3868
.org 0x9af76
	ldr r1, [r7, #4]	@ 0009af76 7968
.org 0x9af78
	str r0, [r3, #84]	@ 0009af78 5865
.org 0x9af7a
	str r1, [r3, #88]	@ 0009af7a 9965
.org 0x9af7c
	strb r5, [r3, #16]	@ 0009af7c 1d74
.org 0x9af7e
	strb r4, [r3, #17]	@ 0009af7e 5c74
.org 0x9af80
	mov r0, ip	@ 0009af80 6046
.org 0x9af82
	adds r0, #180	@ 0009af82 b430
.org 0x9af84
	strb r2, [r0, #0]	@ 0009af84 0270
.org 0x9af86
	adds r0, #1	@ 0009af86 0130
.org 0x9af88
	strb r2, [r0, #0]	@ 0009af88 0270
.org 0x9af8a
	adds r0, #1	@ 0009af8a 0130
.org 0x9af8c
	strb r2, [r0, #0]	@ 0009af8c 0270
.org 0x9af8e
	adds r0, #1	@ 0009af8e 0130
.org 0x9af90
	strb r2, [r0, #0]	@ 0009af90 0270
.org 0x9af92
	mov r0, ip	@ 0009af92 6046
.org 0x9af94
	pop {r4, r5, r6, r7}	@ 0009af94 f0bc
.org 0x9af96
	pop {r1}	@ 0009af96 02bc
.org 0x9af98
	bx r1	@ 0009af98 0847
