@ FUN_080bc124  entry 0x080bc124  size 204
.thumb
.org 0xbc124
FUN_080bc124:
	push {r4, r5, r6, r7, lr}	@ 000bc124 f0b5
.org 0xbc126
	mov r7, r8	@ 000bc126 4746
.org 0xbc128
	push {r7}	@ 000bc128 80b4
.org 0xbc12a
	sub sp, #20	@ 000bc12a 85b0
.org 0xbc12c
	adds r4, r0, #0	@ 000bc12c 041c
.org 0xbc12e
	ldr r0, [pc, #192]	@ 000bc12e 3048
.org 0xbc130
	ldr r1, [r0, #4]	@ 000bc130 4168
.org 0xbc132
	ldr r0, [r0, #0]	@ 000bc132 0068
.org 0xbc134
	str r0, [sp, #12]	@ 000bc134 0390
.org 0xbc136
	str r1, [sp, #16]	@ 000bc136 0491
.org 0xbc138
	ldr r1, [pc, #184]	@ 000bc138 2e49
.org 0xbc13a
	mov r0, sp	@ 000bc13a 6846
.org 0xbc13c
	movs r2, #2	@ 000bc13c 0222
.org 0xbc13e
	bl 0x129258	@ 000bc13e 6df08bf8
.org 0xbc142
	add r5, sp, #4	@ 000bc142 01ad
.org 0xbc144
	ldr r1, [pc, #176]	@ 000bc144 2c49
.org 0xbc146
	adds r0, r5, #0	@ 000bc146 281c
.org 0xbc148
	movs r2, #2	@ 000bc148 0222
.org 0xbc14a
	bl 0x129258	@ 000bc14a 6df085f8
.org 0xbc14e
	add r0, sp, #8	@ 000bc14e 02a8
.org 0xbc150
	mov r8, r0	@ 000bc150 8046
.org 0xbc152
	ldr r1, [pc, #168]	@ 000bc152 2a49
.org 0xbc154
	movs r2, #2	@ 000bc154 0222
.org 0xbc156
	bl 0x129258	@ 000bc156 6df07ff8
.org 0xbc15a
	ldr r7, [r4, #40]	@ 000bc15a a76a
.org 0xbc15c
	ldrb r1, [r4, #16]	@ 000bc15c 217c
.org 0xbc15e
	adds r6, r1, #0	@ 000bc15e 0e1c
.org 0xbc160
	ldrb r0, [r4, #15]	@ 000bc160 e07b
.org 0xbc162
	cmp r0, #0	@ 000bc162 0028
.org 0xbc164
	bne.n 0xbc194	@ 000bc164 16d1
.org 0xbc166
	adds r0, r4, #0	@ 000bc166 201c
.org 0xbc168
	adds r0, #116	@ 000bc168 7430
.org 0xbc16a
	adds r1, r5, r1	@ 000bc16a 6918
.org 0xbc16c
	ldrb r2, [r1, #0]	@ 000bc16c 0a78
.org 0xbc16e
	lsls r1, r2, #1	@ 000bc16e 5100
.org 0xbc170
	adds r1, r1, r2	@ 000bc170 8918
.org 0xbc172
	lsls r1, r1, #3	@ 000bc172 c900
.org 0xbc174
	ldr r2, [pc, #136]	@ 000bc174 224a
.org 0xbc176
	adds r1, r1, r2	@ 000bc176 8918
.org 0xbc178
	bl 0x5784	@ 000bc178 49f704fb
.org 0xbc17c
	movs r0, #192	@ 000bc17c c020
.org 0xbc17e
	lsls r0, r0, #1	@ 000bc17e 4000
.org 0xbc180
	str r0, [r4, #96]	@ 000bc180 2066
.org 0xbc182
	adds r0, r7, #0	@ 000bc182 381c
.org 0xbc184
	adds r0, #184	@ 000bc184 b830
.org 0xbc186
	ldr r0, [r0, #0]	@ 000bc186 0068
.org 0xbc188
	ldr r1, [pc, #120]	@ 000bc188 1e49
.org 0xbc18a
	adds r0, r0, r1	@ 000bc18a 4018
.org 0xbc18c
	str r0, [r4, #100]	@ 000bc18c 6066
.org 0xbc18e
	ldrb r0, [r4, #15]	@ 000bc18e e07b
.org 0xbc190
	adds r0, #1	@ 000bc190 0130
.org 0xbc192
	strb r0, [r4, #15]	@ 000bc192 e073
.org 0xbc194
	adds r0, r4, #0	@ 000bc194 201c
.org 0xbc196
	bl 0x1cff0	@ 000bc196 60f72bff
.org 0xbc19a
	ldr r0, [r4, #88]	@ 000bc19a a06d
.org 0xbc19c
	ldr r1, [r4, #96]	@ 000bc19c 216e
.org 0xbc19e
	adds r0, r0, r1	@ 000bc19e 4018
.org 0xbc1a0
	str r0, [r4, #88]	@ 000bc1a0 a065
.org 0xbc1a2
	adds r1, #64	@ 000bc1a2 4031
.org 0xbc1a4
	str r1, [r4, #96]	@ 000bc1a4 2166
.org 0xbc1a6
	movs r0, #224	@ 000bc1a6 e020
.org 0xbc1a8
	lsls r0, r0, #3	@ 000bc1a8 c000
.org 0xbc1aa
	cmp r1, r0	@ 000bc1aa 8142
.org 0xbc1ac
	ble.n 0xbc1b0	@ 000bc1ac 00dd
.org 0xbc1ae
	str r0, [r4, #96]	@ 000bc1ae 2066
.org 0xbc1b0
	ldr r1, [r4, #88]	@ 000bc1b0 a16d
.org 0xbc1b2
	ldr r0, [r4, #100]	@ 000bc1b2 606e
.org 0xbc1b4
	cmp r1, r0	@ 000bc1b4 8142
.org 0xbc1b6
	blt.n 0xbc1e4	@ 000bc1b6 15db
.org 0xbc1b8
	lsls r0, r6, #2	@ 000bc1b8 b000
.org 0xbc1ba
	add r1, sp, #12	@ 000bc1ba 03a9
.org 0xbc1bc
	adds r0, r0, r1	@ 000bc1bc 4018
.org 0xbc1be
	ldrh r0, [r0, #0]	@ 000bc1be 0088
.org 0xbc1c0
	bl 0x2b10	@ 000bc1c0 46f7a6fc
.org 0xbc1c4
	mov r1, r8	@ 000bc1c4 4146
.org 0xbc1c6
	adds r0, r1, r6	@ 000bc1c6 8819
.org 0xbc1c8
	ldrb r0, [r0, #0]	@ 000bc1c8 0078
.org 0xbc1ca
	adds r1, r4, #0	@ 000bc1ca 211c
.org 0xbc1cc
	adds r1, #84	@ 000bc1cc 5431
.org 0xbc1ce
	bl 0x1fe64	@ 000bc1ce 63f749fe
.org 0xbc1d2
	ldr r0, [r4, #100]	@ 000bc1d2 606e
.org 0xbc1d4
	str r0, [r4, #88]	@ 000bc1d4 a065
.org 0xbc1d6
	mov r1, sp	@ 000bc1d6 6946
.org 0xbc1d8
	adds r0, r1, r6	@ 000bc1d8 8819
.org 0xbc1da
	ldrb r0, [r0, #0]	@ 000bc1da 0078
.org 0xbc1dc
	movs r1, #0	@ 000bc1dc 0021
.org 0xbc1de
	strb r0, [r4, #13]	@ 000bc1de 6073
.org 0xbc1e0
	strb r1, [r4, #14]	@ 000bc1e0 a173
.org 0xbc1e2
	strb r1, [r4, #15]	@ 000bc1e2 e173
.org 0xbc1e4
	add sp, #20	@ 000bc1e4 05b0
.org 0xbc1e6
	pop {r3}	@ 000bc1e6 08bc
.org 0xbc1e8
	mov r8, r3	@ 000bc1e8 9846
.org 0xbc1ea
	pop {r4, r5, r6, r7}	@ 000bc1ea f0bc
.org 0xbc1ec
	pop {r0}	@ 000bc1ec 01bc
.org 0xbc1ee
	bx r0	@ 000bc1ee 0047
