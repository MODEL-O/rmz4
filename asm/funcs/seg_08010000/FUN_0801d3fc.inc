@ FUN_0801d3fc  entry 0x0801d3fc  size 66
.thumb
.org 0x1d3fc
FUN_0801d3fc:
	push {r4, lr}	@ 0001d3fc 10b5
.org 0x1d3fe
	movs r4, #13	@ 0001d3fe 0d24
.org 0x1d400
	ldr r1, [pc, #60]	@ 0001d400 0f49
.org 0x1d402
	ldrb r2, [r0, #29]	@ 0001d402 427f
.org 0x1d404
	lsrs r3, r2, #5	@ 0001d404 5309
.org 0x1d406
	lsls r3, r3, #2	@ 0001d406 9b00
.org 0x1d408
	adds r3, r3, r1	@ 0001d408 5b18
.org 0x1d40a
	movs r1, #31	@ 0001d40a 1f21
.org 0x1d40c
	ands r1, r2	@ 0001d40c 1140
.org 0x1d40e
	movs r2, #1	@ 0001d40e 0122
.org 0x1d410
	lsls r2, r1	@ 0001d410 8a40
.org 0x1d412
	ldr r1, [r3, #0]	@ 0001d412 1968
.org 0x1d414
	orrs r1, r2	@ 0001d414 1143
.org 0x1d416
	str r1, [r3, #0]	@ 0001d416 1960
.org 0x1d418
	ldrb r2, [r0, #11]	@ 0001d418 c27a
.org 0x1d41a
	movs r1, #32	@ 0001d41a 2021
.org 0x1d41c
	orrs r1, r2	@ 0001d41c 1143
.org 0x1d41e
	strb r1, [r0, #11]	@ 0001d41e c172
.org 0x1d420
	movs r1, #73	@ 0001d420 4921
.org 0x1d422
	adds r1, r1, r0	@ 0001d422 0918
.org 0x1d424
	mov ip, r1	@ 0001d424 8c46
.org 0x1d426
	movs r3, #208	@ 0001d426 d023
.org 0x1d428
	ldrb r2, [r1, #0]	@ 0001d428 0a78
.org 0x1d42a
	movs r1, #15	@ 0001d42a 0f21
.org 0x1d42c
	ands r1, r2	@ 0001d42c 1140
.org 0x1d42e
	orrs r1, r3	@ 0001d42e 1943
.org 0x1d430
	mov r2, ip	@ 0001d430 6246
.org 0x1d432
	strb r1, [r2, #0]	@ 0001d432 1170
.org 0x1d434
	adds r0, #35	@ 0001d434 2330
.org 0x1d436
	strb r4, [r0, #0]	@ 0001d436 0470
.org 0x1d438
	pop {r4}	@ 0001d438 10bc
.org 0x1d43a
	pop {r0}	@ 0001d43a 01bc
.org 0x1d43c
	bx r0	@ 0001d43c 0047
