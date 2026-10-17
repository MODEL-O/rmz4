@ FUN_080b316c  entry 0x080b316c  size 98
.thumb
.org 0xb316c
FUN_080b316c:
	push {r4, r5, lr}	@ 000b316c 30b5
.org 0xb316e
	adds r2, r0, #0	@ 000b316e 021c
.org 0xb3170
	adds r4, r1, #0	@ 000b3170 0c1c
.org 0xb3172
	ldrb r0, [r2, #13]	@ 000b3172 507b
.org 0xb3174
	cmp r0, #5	@ 000b3174 0528
.org 0xb3176
	beq.n 0xb31c8	@ 000b3176 27d0
.org 0xb3178
	cmp r0, #3	@ 000b3178 0328
.org 0xb317a
	beq.n 0xb31c8	@ 000b317a 25d0
.org 0xb317c
	adds r0, r2, #0	@ 000b317c 101c
.org 0xb317e
	adds r0, #183	@ 000b317e b730
.org 0xb3180
	ldrb r1, [r0, #0]	@ 000b3180 0178
.org 0xb3182
	adds r3, r0, #0	@ 000b3182 031c
.org 0xb3184
	cmp r1, #0	@ 000b3184 0029
.org 0xb3186
	bne.n 0xb31ba	@ 000b3186 18d1
.org 0xb3188
	subs r0, #3	@ 000b3188 0338
.org 0xb318a
	ldrb r0, [r0, #0]	@ 000b318a 0078
.org 0xb318c
	cmp r0, #0	@ 000b318c 0028
.org 0xb318e
	bne.n 0xb31a0	@ 000b318e 07d1
.org 0xb3190
	adds r1, r2, #0	@ 000b3190 111c
.org 0xb3192
	adds r1, #192	@ 000b3192 c031
.org 0xb3194
	adds r0, r2, #0	@ 000b3194 101c
.org 0xb3196
	adds r0, #184	@ 000b3196 b830
.org 0xb3198
	ldr r0, [r0, #0]	@ 000b3198 0068
.org 0xb319a
	movs r5, #176	@ 000b319a b025
.org 0xb319c
	lsls r5, r5, #5	@ 000b319c 6d01
.org 0xb319e
	b.n 0xb31ac	@ 000b319e 05e0
.org 0xb31a0
	adds r1, r2, #0	@ 000b31a0 111c
.org 0xb31a2
	adds r1, #192	@ 000b31a2 c031
.org 0xb31a4
	adds r0, r2, #0	@ 000b31a4 101c
.org 0xb31a6
	adds r0, #184	@ 000b31a6 b830
.org 0xb31a8
	ldr r0, [r0, #0]	@ 000b31a8 0068
.org 0xb31aa
	ldr r5, [pc, #36]	@ 000b31aa 094d
.org 0xb31ac
	adds r0, r0, r5	@ 000b31ac 4019
.org 0xb31ae
	str r0, [r1, #0]	@ 000b31ae 0860
.org 0xb31b0
	movs r1, #0	@ 000b31b0 0021
.org 0xb31b2
	movs r0, #1	@ 000b31b2 0120
.org 0xb31b4
	strb r0, [r3, #0]	@ 000b31b4 1870
.org 0xb31b6
	strb r0, [r2, #13]	@ 000b31b6 5073
.org 0xb31b8
	strb r1, [r2, #14]	@ 000b31b8 9173
.org 0xb31ba
	movs r0, #0	@ 000b31ba 0020
.org 0xb31bc
	str r0, [r2, #44]	@ 000b31bc d062
.org 0xb31be
	adds r1, r2, #0	@ 000b31be 111c
.org 0xb31c0
	adds r1, #182	@ 000b31c0 b631
.org 0xb31c2
	movs r0, #1	@ 000b31c2 0120
.org 0xb31c4
	strb r0, [r1, #0]	@ 000b31c4 0870
.org 0xb31c6
	str r4, [r2, #40]	@ 000b31c6 9462
.org 0xb31c8
	pop {r4, r5}	@ 000b31c8 30bc
.org 0xb31ca
	pop {r0}	@ 000b31ca 01bc
.org 0xb31cc
	bx r0	@ 000b31cc 0047
