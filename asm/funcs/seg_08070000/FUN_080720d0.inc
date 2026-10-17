@ FUN_080720d0  entry 0x080720d0  size 234
.thumb
.org 0x720d0
FUN_080720d0:
	push {r4, r5, r6, r7, lr}	@ 000720d0 f0b5
.org 0x720d2
	mov r7, r8	@ 000720d2 4746
.org 0x720d4
	push {r7}	@ 000720d4 80b4
.org 0x720d6
	sub sp, #8	@ 000720d6 82b0
.org 0x720d8
	adds r6, r0, #0	@ 000720d8 061c
.org 0x720da
	ldrb r0, [r6, #10]	@ 000720da b07a
.org 0x720dc
	lsrs r7, r0, #4	@ 000720dc 0709
.org 0x720de
	movs r4, #1	@ 000720de 0124
.org 0x720e0
	ands r7, r4	@ 000720e0 2740
.org 0x720e2
	ldrb r0, [r6, #15]	@ 000720e2 f07b
.org 0x720e4
	cmp r0, #0	@ 000720e4 0028
.org 0x720e6
	bne.n 0x72102	@ 000720e6 0cd1
.org 0x720e8
	ldr r0, [pc, #208]	@ 000720e8 3448
.org 0x720ea
	bl 0x2b10	@ 000720ea 90f711fd
.org 0x720ee
	adds r0, r6, #0	@ 000720ee 301c
.org 0x720f0
	movs r1, #15	@ 000720f0 0f21
.org 0x720f2
	bl 0x736c4	@ 000720f2 01f0e7fa
.org 0x720f6
	movs r0, #24	@ 000720f6 1820
.org 0x720f8
	strb r0, [r6, #18]	@ 000720f8 b074
.org 0x720fa
	strb r4, [r6, #19]	@ 000720fa f474
.org 0x720fc
	ldrb r0, [r6, #15]	@ 000720fc f07b
.org 0x720fe
	adds r0, #1	@ 000720fe 0130
.org 0x72100
	strb r0, [r6, #15]	@ 00072100 f073
.org 0x72102
	adds r0, r6, #0	@ 00072102 301c
.org 0x72104
	bl 0x1cff0	@ 00072104 aaf774ff
.org 0x72108
	adds r0, r6, #0	@ 00072108 301c
.org 0x7210a
	adds r0, #116	@ 0007210a 7430
.org 0x7210c
	ldr r4, [pc, #176]	@ 0007210c 2c4c
.org 0x7210e
	ldr r3, [pc, #180]	@ 0007210e 2d4b
.org 0x72110
	adds r1, r6, #0	@ 00072110 311c
.org 0x72112
	adds r1, #184	@ 00072112 b831
.org 0x72114
	ldrb r2, [r1, #0]	@ 00072114 0a78
.org 0x72116
	lsls r1, r2, #1	@ 00072116 5100
.org 0x72118
	adds r1, r1, r3	@ 00072118 c918
.org 0x7211a
	ldrh r1, [r1, #0]	@ 0007211a 0988
.org 0x7211c
	lsls r1, r1, #2	@ 0007211c 8900
.org 0x7211e
	adds r1, r1, r4	@ 0007211e 0919
.org 0x72120
	movs r3, #113	@ 00072120 7123
.org 0x72122
	adds r3, r3, r6	@ 00072122 9b19
.org 0x72124
	mov r8, r3	@ 00072124 9846
.org 0x72126
	movs r5, #0	@ 00072126 0025
.org 0x72128
	ldrsb r5, [r3, r5]	@ 00072128 5d57
.org 0x7212a
	ldr r1, [r1, #0]	@ 0007212a 0968
.org 0x7212c
	lsls r3, r5, #2	@ 0007212c ab00
.org 0x7212e
	adds r3, r3, r1	@ 0007212e 5b18
.org 0x72130
	ldr r4, [pc, #148]	@ 00072130 254c
.org 0x72132
	adds r1, r6, #0	@ 00072132 311c
.org 0x72134
	adds r1, #185	@ 00072134 b931
.org 0x72136
	ldrb r1, [r1, #0]	@ 00072136 0978
.org 0x72138
	lsls r1, r1, #2	@ 00072138 8900
.org 0x7213a
	adds r1, r1, r4	@ 0007213a 0919
.org 0x7213c
	ldr r1, [r1, #0]	@ 0007213c 0968
.org 0x7213e
	lsls r2, r2, #2	@ 0007213e 9200
.org 0x72140
	adds r2, r2, r1	@ 00072140 5218
.org 0x72142
	ldr r1, [r2, #0]	@ 00072142 1168
.org 0x72144
	adds r1, r1, r5	@ 00072144 4919
.org 0x72146
	ldrb r1, [r1, #0]	@ 00072146 0978
.org 0x72148
	lsls r2, r1, #1	@ 00072148 4a00
.org 0x7214a
	adds r2, r2, r1	@ 0007214a 5218
.org 0x7214c
	lsls r2, r2, #3	@ 0007214c d200
.org 0x7214e
	ldr r1, [r3, #0]	@ 0007214e 1968
.org 0x72150
	adds r1, r1, r2	@ 00072150 8918
.org 0x72152
	bl 0x5784	@ 00072152 93f717fb
.org 0x72156
	ldrb r0, [r6, #18]	@ 00072156 b07c
.org 0x72158
	cmp r0, #0	@ 00072158 0028
.org 0x7215a
	beq.n 0x72160	@ 0007215a 01d0
.org 0x7215c
	subs r0, #1	@ 0007215c 0138
.org 0x7215e
	strb r0, [r6, #18]	@ 0007215e b074
.org 0x72160
	ldrb r0, [r6, #19]	@ 00072160 f07c
.org 0x72162
	cmp r0, #0	@ 00072162 0028
.org 0x72164
	beq.n 0x72196	@ 00072164 17d0
.org 0x72166
	mov r1, r8	@ 00072166 4146
.org 0x72168
	movs r0, #0	@ 00072168 0020
.org 0x7216a
	ldrsb r0, [r1, r0]	@ 0007216a 0856
.org 0x7216c
	cmp r0, #1	@ 0007216c 0128
.org 0x7216e
	bne.n 0x72196	@ 0007216e 12d1
.org 0x72170
	lsls r0, r7, #1	@ 00072170 7800
.org 0x72172
	subs r0, #1	@ 00072172 0138
.org 0x72174
	lsls r1, r0, #1	@ 00072174 4100
.org 0x72176
	adds r1, r1, r0	@ 00072176 0918
.org 0x72178
	lsls r1, r1, #10	@ 00072178 8902
.org 0x7217a
	ldr r0, [r6, #84]	@ 0007217a 706d
.org 0x7217c
	adds r0, r0, r1	@ 0007217c 4018
.org 0x7217e
	str r0, [sp, #0]	@ 0007217e 0090
.org 0x72180
	ldr r0, [r6, #88]	@ 00072180 b06d
.org 0x72182
	ldr r3, [pc, #72]	@ 00072182 124b
.org 0x72184
	adds r0, r0, r3	@ 00072184 c018
.org 0x72186
	str r0, [sp, #4]	@ 00072186 0190
.org 0x72188
	adds r0, r6, #0	@ 00072188 301c
.org 0x7218a
	mov r1, sp	@ 0007218a 6946
.org 0x7218c
	adds r2, r7, #0	@ 0007218c 3a1c
.org 0x7218e
	bl 0xbe728	@ 0007218e 4cf0cbfa
.org 0x72192
	movs r0, #0	@ 00072192 0020
.org 0x72194
	strb r0, [r6, #19]	@ 00072194 f074
.org 0x72196
	adds r0, r6, #0	@ 00072196 301c
.org 0x72198
	adds r0, #115	@ 00072198 7330
.org 0x7219a
	ldrb r0, [r0, #0]	@ 0007219a 0078
.org 0x7219c
	cmp r0, #3	@ 0007219c 0328
.org 0x7219e
	bne.n 0x721ae	@ 0007219e 06d1
.org 0x721a0
	ldrb r1, [r6, #18]	@ 000721a0 b17c
.org 0x721a2
	cmp r1, #0	@ 000721a2 0029
.org 0x721a4
	bne.n 0x721ae	@ 000721a4 03d1
.org 0x721a6
	ldrb r0, [r6, #14]	@ 000721a6 b07b
.org 0x721a8
	adds r0, #1	@ 000721a8 0130
.org 0x721aa
	strb r0, [r6, #14]	@ 000721aa b073
.org 0x721ac
	strb r1, [r6, #15]	@ 000721ac f173
.org 0x721ae
	add sp, #8	@ 000721ae 02b0
.org 0x721b0
	pop {r3}	@ 000721b0 08bc
.org 0x721b2
	mov r8, r3	@ 000721b2 9846
.org 0x721b4
	pop {r4, r5, r6, r7}	@ 000721b4 f0bc
.org 0x721b6
	pop {r0}	@ 000721b6 01bc
.org 0x721b8
	bx r0	@ 000721b8 0047
