@ FUN_080e61e0  entry 0x080e61e0  size 114
.thumb
.org 0xe61e0
FUN_080e61e0:
	push {r4, lr}	@ 000e61e0 10b5
.org 0xe61e2
	adds r4, r0, #0	@ 000e61e2 041c
.org 0xe61e4
	ldr r0, [r4, #84]	@ 000e61e4 606d
.org 0xe61e6
	ldr r1, [r4, #92]	@ 000e61e6 e16d
.org 0xe61e8
	adds r0, r0, r1	@ 000e61e8 4018
.org 0xe61ea
	str r0, [r4, #84]	@ 000e61ea 6065
.org 0xe61ec
	ldr r0, [r4, #88]	@ 000e61ec a06d
.org 0xe61ee
	ldr r1, [r4, #96]	@ 000e61ee 216e
.org 0xe61f0
	adds r0, r0, r1	@ 000e61f0 4018
.org 0xe61f2
	str r0, [r4, #88]	@ 000e61f2 a065
.org 0xe61f4
	adds r1, #64	@ 000e61f4 4031
.org 0xe61f6
	str r1, [r4, #96]	@ 000e61f6 2166
.org 0xe61f8
	adds r3, r4, #0	@ 000e61f8 231c
.org 0xe61fa
	adds r3, #116	@ 000e61fa 7433
.org 0xe61fc
	ldrb r0, [r3, #0]	@ 000e61fc 1878
.org 0xe61fe
	cmp r0, #0	@ 000e61fe 0028
.org 0xe6200
	bne.n 0xe6210	@ 000e6200 06d1
.org 0xe6202
	ldrb r0, [r4, #10]	@ 000e6202 a07a
.org 0xe6204
	movs r1, #254	@ 000e6204 fe21
.org 0xe6206
	ands r1, r0	@ 000e6206 0140
.org 0xe6208
	strb r1, [r4, #10]	@ 000e6208 a172
.org 0xe620a
	movs r0, #1	@ 000e620a 0120
.org 0xe620c
	strb r0, [r3, #0]	@ 000e620c 1870
.org 0xe620e
	b.n 0xe621c	@ 000e620e 05e0
.org 0xe6210
	ldrb r0, [r4, #10]	@ 000e6210 a07a
.org 0xe6212
	movs r1, #1	@ 000e6212 0121
.org 0xe6214
	movs r2, #0	@ 000e6214 0022
.org 0xe6216
	orrs r1, r0	@ 000e6216 0143
.org 0xe6218
	strb r1, [r4, #10]	@ 000e6218 a172
.org 0xe621a
	strb r2, [r3, #0]	@ 000e621a 1a70
.org 0xe621c
	ldr r0, [r4, #84]	@ 000e621c 606d
.org 0xe621e
	ldr r1, [r4, #88]	@ 000e621e a16d
.org 0xe6220
	bl 0x7c7c	@ 000e6220 21f72cfd
.org 0xe6224
	lsls r0, r0, #16	@ 000e6224 0004
.org 0xe6226
	lsrs r0, r0, #16	@ 000e6226 000c
.org 0xe6228
	cmp r0, #15	@ 000e6228 0f28
.org 0xe622a
	beq.n 0xe624c	@ 000e622a 0fd0
.org 0xe622c
	cmp r0, #0	@ 000e622c 0028
.org 0xe622e
	beq.n 0xe624c	@ 000e622e 0dd0
.org 0xe6230
	adds r1, r4, #0	@ 000e6230 211c
.org 0xe6232
	adds r1, #84	@ 000e6232 5431
.org 0xe6234
	movs r0, #3	@ 000e6234 0320
.org 0xe6236
	bl 0xd0c88	@ 000e6236 eaf727fd
.org 0xe623a
	ldr r1, [pc, #24]	@ 000e623a 0649
.org 0xe623c
	ldrb r0, [r4, #9]	@ 000e623c 607a
.org 0xe623e
	lsls r0, r0, #2	@ 000e623e 8000
.org 0xe6240
	adds r0, r0, r1	@ 000e6240 4018
.org 0xe6242
	movs r1, #2	@ 000e6242 0221
.org 0xe6244
	str r1, [r4, #12]	@ 000e6244 e160
.org 0xe6246
	ldr r0, [r0, #0]	@ 000e6246 0068
.org 0xe6248
	ldr r0, [r0, #8]	@ 000e6248 8068
.org 0xe624a
	str r0, [r4, #20]	@ 000e624a 6061
.org 0xe624c
	pop {r4}	@ 000e624c 10bc
.org 0xe624e
	pop {r0}	@ 000e624e 01bc
.org 0xe6250
	bx r0	@ 000e6250 0047
