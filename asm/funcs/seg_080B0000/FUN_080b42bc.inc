@ FUN_080b42bc  entry 0x080b42bc  size 80
.thumb
.org 0xb42bc
FUN_080b42bc:
	push {r4, r5, lr}	@ 000b42bc 30b5
.org 0xb42be
	adds r4, r0, #0	@ 000b42be 041c
.org 0xb42c0
	ldrb r5, [r4, #14]	@ 000b42c0 a57b
.org 0xb42c2
	cmp r5, #0	@ 000b42c2 002d
.org 0xb42c4
	bne.n 0xb42e4	@ 000b42c4 0ed1
.org 0xb42c6
	ldrb r0, [r4, #16]	@ 000b42c6 207c
.org 0xb42c8
	lsls r1, r0, #3	@ 000b42c8 c100
.org 0xb42ca
	adds r1, r1, r0	@ 000b42ca 0918
.org 0xb42cc
	ldr r0, [pc, #60]	@ 000b42cc 0f48
.org 0xb42ce
	adds r1, r1, r0	@ 000b42ce 0918
.org 0xb42d0
	lsls r1, r1, #16	@ 000b42d0 0904
.org 0xb42d2
	lsrs r1, r1, #16	@ 000b42d2 090c
.org 0xb42d4
	adds r0, r4, #0	@ 000b42d4 201c
.org 0xb42d6
	bl 0x1cf00	@ 000b42d6 68f713fe
.org 0xb42da
	str r5, [r4, #96]	@ 000b42da 2566
.org 0xb42dc
	str r5, [r4, #92]	@ 000b42dc e565
.org 0xb42de
	ldrb r0, [r4, #14]	@ 000b42de a07b
.org 0xb42e0
	adds r0, #1	@ 000b42e0 0130
.org 0xb42e2
	strb r0, [r4, #14]	@ 000b42e2 a073
.org 0xb42e4
	adds r0, r4, #0	@ 000b42e4 201c
.org 0xb42e6
	bl 0x1cff0	@ 000b42e6 68f783fe
.org 0xb42ea
	ldr r0, [r4, #84]	@ 000b42ea 606d
.org 0xb42ec
	ldr r1, [r4, #88]	@ 000b42ec a16d
.org 0xb42ee
	bl 0x8534	@ 000b42ee 54f721f9
.org 0xb42f2
	str r0, [r4, #88]	@ 000b42f2 a065
.org 0xb42f4
	adds r0, r4, #0	@ 000b42f4 201c
.org 0xb42f6
	adds r0, #115	@ 000b42f6 7330
.org 0xb42f8
	ldrb r0, [r0, #0]	@ 000b42f8 0078
.org 0xb42fa
	cmp r0, #3	@ 000b42fa 0328
.org 0xb42fc
	bne.n 0xb4306	@ 000b42fc 03d1
.org 0xb42fe
	movs r1, #0	@ 000b42fe 0021
.org 0xb4300
	movs r0, #2	@ 000b4300 0220
.org 0xb4302
	strb r0, [r4, #13]	@ 000b4302 6073
.org 0xb4304
	strb r1, [r4, #14]	@ 000b4304 a173
.org 0xb4306
	pop {r4, r5}	@ 000b4306 30bc
.org 0xb4308
	pop {r0}	@ 000b4308 01bc
.org 0xb430a
	bx r0	@ 000b430a 0047
