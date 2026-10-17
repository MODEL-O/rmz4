@ FUN_080da450  entry 0x080da450  size 30
.thumb
.org 0xda450
FUN_080da450:
	push {lr}	@ 000da450 00b5
.org 0xda452
	movs r2, #0	@ 000da452 0022
.org 0xda454
	movs r1, #16	@ 000da454 1021
.org 0xda456
	strb r1, [r0, #18]	@ 000da456 8174
.org 0xda458
	ldr r1, [r0, #88]	@ 000da458 816d
.org 0xda45a
	ldr r3, [pc, #20]	@ 000da45a 054b
.org 0xda45c
	adds r1, r1, r3	@ 000da45c c918
.org 0xda45e
	str r1, [r0, #88]	@ 000da45e 8165
.org 0xda460
	str r2, [r0, #92]	@ 000da460 c265
.org 0xda462
	str r2, [r0, #96]	@ 000da462 0266
.org 0xda464
	ldr r1, [pc, #12]	@ 000da464 0349
.org 0xda466
	bl 0x1cf00	@ 000da466 42f74bfd
.org 0xda46a
	pop {r0}	@ 000da46a 01bc
.org 0xda46c
	bx r0	@ 000da46c 0047
