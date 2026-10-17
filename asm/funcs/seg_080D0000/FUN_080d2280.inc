@ FUN_080d2280  entry 0x080d2280  size 62
.thumb
.org 0xd2280
FUN_080d2280:
	push {r4, lr}	@ 000d2280 10b5
.org 0xd2282
	adds r4, r0, #0	@ 000d2282 041c
.org 0xd2284
	bl 0x1cc9c	@ 000d2284 4af70afd
.org 0xd2288
	ldrb r1, [r4, #10]	@ 000d2288 a17a
.org 0xd228a
	movs r0, #1	@ 000d228a 0120
.org 0xd228c
	orrs r0, r1	@ 000d228c 0843
.org 0xd228e
	movs r1, #2	@ 000d228e 0221
.org 0xd2290
	orrs r0, r1	@ 000d2290 0843
.org 0xd2292
	strb r0, [r4, #10]	@ 000d2292 a072
.org 0xd2294
	adds r0, r4, #0	@ 000d2294 201c
.org 0xd2296
	movs r1, #5	@ 000d2296 0521
.org 0xd2298
	bl 0x1cf00	@ 000d2298 4af732fe
.org 0xd229c
	movs r0, #4	@ 000d229c 0420
.org 0xd229e
	strb r0, [r4, #18]	@ 000d229e a074
.org 0xd22a0
	ldr r1, [pc, #28]	@ 000d22a0 0749
.org 0xd22a2
	ldrb r0, [r4, #9]	@ 000d22a2 607a
.org 0xd22a4
	lsls r0, r0, #2	@ 000d22a4 8000
.org 0xd22a6
	adds r0, r0, r1	@ 000d22a6 4018
.org 0xd22a8
	movs r1, #1	@ 000d22a8 0121
.org 0xd22aa
	str r1, [r4, #12]	@ 000d22aa e160
.org 0xd22ac
	ldr r0, [r0, #0]	@ 000d22ac 0068
.org 0xd22ae
	ldr r0, [r0, #4]	@ 000d22ae 4068
.org 0xd22b0
	str r0, [r4, #20]	@ 000d22b0 6061
.org 0xd22b2
	adds r0, r4, #0	@ 000d22b2 201c
.org 0xd22b4
	bl 0xd1dd0	@ 000d22b4 fff78cfd
.org 0xd22b8
	pop {r4}	@ 000d22b8 10bc
.org 0xd22ba
	pop {r0}	@ 000d22ba 01bc
.org 0xd22bc
	bx r0	@ 000d22bc 0047
