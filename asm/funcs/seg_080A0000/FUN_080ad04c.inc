@ FUN_080ad04c  entry 0x080ad04c  size 276
.thumb
.org 0xad04c
FUN_080ad04c:
	push {r4, r5, r6, r7, lr}	@ 000ad04c f0b5
.org 0xad04e
	mov r7, sl	@ 000ad04e 5746
.org 0xad050
	mov r6, r9	@ 000ad050 4e46
.org 0xad052
	mov r5, r8	@ 000ad052 4546
.org 0xad054
	push {r5, r6, r7}	@ 000ad054 e0b4
.org 0xad056
	sub sp, #64	@ 000ad056 90b0
.org 0xad058
	adds r5, r0, #0	@ 000ad058 051c
.org 0xad05a
	mov r1, sp	@ 000ad05a 6946
.org 0xad05c
	ldr r0, [pc, #256]	@ 000ad05c 4048
.org 0xad05e
	ldmia r0!, {r2, r3, r4}	@ 000ad05e 1cc8
.org 0xad060
	stmia r1!, {r2, r3, r4}	@ 000ad060 1cc1
.org 0xad062
	ldr r0, [r0, #0]	@ 000ad062 0068
.org 0xad064
	str r0, [r1, #0]	@ 000ad064 0860
.org 0xad066
	add r0, sp, #16	@ 000ad066 04a8
.org 0xad068
	mov r9, r0	@ 000ad068 8146
.org 0xad06a
	ldr r1, [pc, #248]	@ 000ad06a 3e49
.org 0xad06c
	movs r2, #4	@ 000ad06c 0422
.org 0xad06e
	bl 0x129258	@ 000ad06e 7cf0f3f8
.org 0xad072
	add r1, sp, #20	@ 000ad072 05a9
.org 0xad074
	mov r8, r1	@ 000ad074 8846
.org 0xad076
	ldr r0, [pc, #240]	@ 000ad076 3c48
.org 0xad078
	ldmia r0!, {r2, r3, r4}	@ 000ad078 1cc8
.org 0xad07a
	stmia r1!, {r2, r3, r4}	@ 000ad07a 1cc1
.org 0xad07c
	ldmia r0!, {r2, r3, r4}	@ 000ad07c 1cc8
.org 0xad07e
	stmia r1!, {r2, r3, r4}	@ 000ad07e 1cc1
.org 0xad080
	ldmia r0!, {r2, r3}	@ 000ad080 0cc8
.org 0xad082
	stmia r1!, {r2, r3}	@ 000ad082 0cc1
.org 0xad084
	add r4, sp, #52	@ 000ad084 0dac
.org 0xad086
	ldr r1, [pc, #228]	@ 000ad086 3949
.org 0xad088
	adds r0, r4, #0	@ 000ad088 201c
.org 0xad08a
	movs r2, #4	@ 000ad08a 0422
.org 0xad08c
	bl 0x129258	@ 000ad08c 7cf0e4f8
.org 0xad090
	ldr r7, [r5, #40]	@ 000ad090 af6a
.org 0xad092
	ldrb r6, [r5, #17]	@ 000ad092 6e7c
.org 0xad094
	ldrb r0, [r5, #15]	@ 000ad094 e87b
.org 0xad096
	mov sl, r4	@ 000ad096 a246
.org 0xad098
	cmp r0, #0	@ 000ad098 0028
.org 0xad09a
	bne.n 0xad108	@ 000ad09a 35d1
.org 0xad09c
	adds r4, r5, #0	@ 000ad09c 2c1c
.org 0xad09e
	adds r4, #184	@ 000ad09e b834
.org 0xad0a0
	ldr r0, [r4, #0]	@ 000ad0a0 2068
.org 0xad0a2
	cmp r0, #0	@ 000ad0a2 0028
.org 0xad0a4
	bne.n 0xad0f6	@ 000ad0a4 27d1
.org 0xad0a6
	adds r0, r7, #0	@ 000ad0a6 381c
.org 0xad0a8
	adds r0, #180	@ 000ad0a8 b430
.org 0xad0aa
	ldrb r0, [r0, #0]	@ 000ad0aa 0078
.org 0xad0ac
	mov r2, sl	@ 000ad0ac 5246
.org 0xad0ae
	adds r1, r2, r6	@ 000ad0ae 9119
.org 0xad0b0
	ldrb r1, [r1, #0]	@ 000ad0b0 0978
.org 0xad0b2
	asrs r0, r1	@ 000ad0b2 0841
.org 0xad0b4
	movs r1, #1	@ 000ad0b4 0121
.org 0xad0b6
	ands r0, r1	@ 000ad0b6 0840
.org 0xad0b8
	cmp r0, #0	@ 000ad0b8 0028
.org 0xad0ba
	beq.n 0xad0f6	@ 000ad0ba 1cd0
.org 0xad0bc
	lsls r2, r6, #3	@ 000ad0bc f200
.org 0xad0be
	mov r3, r8	@ 000ad0be 4346
.org 0xad0c0
	adds r1, r3, r2	@ 000ad0c0 9918
.org 0xad0c2
	ldr r0, [r5, #84]	@ 000ad0c2 686d
.org 0xad0c4
	ldr r1, [r1, #0]	@ 000ad0c4 0968
.org 0xad0c6
	adds r0, r0, r1	@ 000ad0c6 4018
.org 0xad0c8
	str r0, [sp, #56]	@ 000ad0c8 0e90
.org 0xad0ca
	add r0, sp, #24	@ 000ad0ca 06a8
.org 0xad0cc
	adds r0, r0, r2	@ 000ad0cc 8018
.org 0xad0ce
	ldr r2, [r5, #88]	@ 000ad0ce aa6d
.org 0xad0d0
	ldr r0, [r0, #0]	@ 000ad0d0 0068
.org 0xad0d2
	adds r2, r2, r0	@ 000ad0d2 1218
.org 0xad0d4
	add r1, sp, #56	@ 000ad0d4 0ea9
.org 0xad0d6
	str r2, [r1, #4]	@ 000ad0d6 4a60
.org 0xad0d8
	mov r2, r9	@ 000ad0d8 4a46
.org 0xad0da
	adds r0, r2, r6	@ 000ad0da 9019
.org 0xad0dc
	ldrb r3, [r0, #0]	@ 000ad0dc 0378
.org 0xad0de
	adds r0, r5, #0	@ 000ad0de 281c
.org 0xad0e0
	movs r2, #0	@ 000ad0e0 0022
.org 0xad0e2
	bl 0xcd0f0	@ 000ad0e2 20f005f8
.org 0xad0e6
	str r0, [r4, #0]	@ 000ad0e6 2060
.org 0xad0e8
	cmp r0, #0	@ 000ad0e8 0028
.org 0xad0ea
	beq.n 0xad0f6	@ 000ad0ea 04d0
.org 0xad0ec
	adds r1, r7, #0	@ 000ad0ec 391c
.org 0xad0ee
	adds r1, #188	@ 000ad0ee bc31
.org 0xad0f0
	ldrb r0, [r1, #0]	@ 000ad0f0 0878
.org 0xad0f2
	adds r0, #1	@ 000ad0f2 0130
.org 0xad0f4
	strb r0, [r1, #0]	@ 000ad0f4 0870
.org 0xad0f6
	lsls r0, r6, #2	@ 000ad0f6 b000
.org 0xad0f8
	add r0, sp	@ 000ad0f8 6844
.org 0xad0fa
	ldrh r1, [r0, #0]	@ 000ad0fa 0188
.org 0xad0fc
	adds r0, r5, #0	@ 000ad0fc 281c
.org 0xad0fe
	bl 0x1cf00	@ 000ad0fe 6ff7fffe
.org 0xad102
	ldrb r0, [r5, #15]	@ 000ad102 e87b
.org 0xad104
	adds r0, #1	@ 000ad104 0130
.org 0xad106
	strb r0, [r5, #15]	@ 000ad106 e873
.org 0xad108
	adds r0, r5, #0	@ 000ad108 281c
.org 0xad10a
	bl 0x1cff0	@ 000ad10a 6ff771ff
.org 0xad10e
	adds r5, #184	@ 000ad10e b835
.org 0xad110
	ldr r3, [r5, #0]	@ 000ad110 2b68
.org 0xad112
	cmp r3, #0	@ 000ad112 002b
.org 0xad114
	beq.n 0xad142	@ 000ad114 15d0
.org 0xad116
	adds r0, r7, #0	@ 000ad116 381c
.org 0xad118
	adds r0, #180	@ 000ad118 b430
.org 0xad11a
	ldrb r2, [r0, #0]	@ 000ad11a 0278
.org 0xad11c
	mov r4, sl	@ 000ad11c 5446
.org 0xad11e
	adds r0, r4, r6	@ 000ad11e a019
.org 0xad120
	ldrb r0, [r0, #0]	@ 000ad120 0078
.org 0xad122
	asrs r2, r0	@ 000ad122 0241
.org 0xad124
	movs r1, #1	@ 000ad124 0121
.org 0xad126
	ands r2, r1	@ 000ad126 0a40
.org 0xad128
	cmp r2, #0	@ 000ad128 002a
.org 0xad12a
	bne.n 0xad142	@ 000ad12a 0ad1
.org 0xad12c
	adds r0, r3, #0	@ 000ad12c 181c
.org 0xad12e
	adds r0, #180	@ 000ad12e b430
.org 0xad130
	strb r1, [r0, #0]	@ 000ad130 0170
.org 0xad132
	str r2, [r5, #0]	@ 000ad132 2a60
.org 0xad134
	adds r1, r7, #0	@ 000ad134 391c
.org 0xad136
	adds r1, #188	@ 000ad136 bc31
.org 0xad138
	ldrb r0, [r1, #0]	@ 000ad138 0878
.org 0xad13a
	cmp r0, #0	@ 000ad13a 0028
.org 0xad13c
	beq.n 0xad142	@ 000ad13c 01d0
.org 0xad13e
	adds r0, #255	@ 000ad13e ff30
.org 0xad140
	strb r0, [r1, #0]	@ 000ad140 0870
.org 0xad142
	adds r2, r7, #0	@ 000ad142 3a1c
.org 0xad144
	adds r2, #181	@ 000ad144 b532
.org 0xad146
	movs r1, #1	@ 000ad146 0121
.org 0xad148
	lsls r1, r6	@ 000ad148 b140
.org 0xad14a
	ldrb r0, [r2, #0]	@ 000ad14a 1078
.org 0xad14c
	bics r0, r1	@ 000ad14c 8843
.org 0xad14e
	strb r0, [r2, #0]	@ 000ad14e 1070
.org 0xad150
	add sp, #64	@ 000ad150 10b0
.org 0xad152
	pop {r3, r4, r5}	@ 000ad152 38bc
.org 0xad154
	mov r8, r3	@ 000ad154 9846
.org 0xad156
	mov r9, r4	@ 000ad156 a146
.org 0xad158
	mov sl, r5	@ 000ad158 aa46
.org 0xad15a
	pop {r4, r5, r6, r7}	@ 000ad15a f0bc
.org 0xad15c
	pop {r0}	@ 000ad15c 01bc
.org 0xad15e
	bx r0	@ 000ad15e 0047
