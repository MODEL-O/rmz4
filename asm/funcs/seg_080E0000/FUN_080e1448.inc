@ FUN_080e1448  entry 0x080e1448  size 54
.thumb
.org 0xe1448
FUN_080e1448:
	push {r4, lr}	@ 000e1448 10b5
.org 0xe144a
	adds r4, r0, #0	@ 000e144a 041c
.org 0xe144c
	adds r0, #120	@ 000e144c 7830
.org 0xe144e
	ldrb r2, [r0, #0]	@ 000e144e 0278
.org 0xe1450
	cmp r2, #0	@ 000e1450 002a
.org 0xe1452
	beq.n 0xe1466	@ 000e1452 08d0
.org 0xe1454
	ldr r0, [r4, #116]	@ 000e1454 606f
.org 0xe1456
	ldrb r1, [r0, #0]	@ 000e1456 0178
.org 0xe1458
	eors r1, r2	@ 000e1458 5140
.org 0xe145a
	strb r1, [r0, #0]	@ 000e145a 0170
.org 0xe145c
	adds r1, r4, #0	@ 000e145c 211c
.org 0xe145e
	adds r1, #84	@ 000e145e 5431
.org 0xe1460
	movs r0, #3	@ 000e1460 0320
.org 0xe1462
	bl 0xd0c88	@ 000e1462 eff711fc
.org 0xe1466
	ldr r1, [pc, #24]	@ 000e1466 0649
.org 0xe1468
	ldrb r0, [r4, #9]	@ 000e1468 607a
.org 0xe146a
	lsls r0, r0, #2	@ 000e146a 8000
.org 0xe146c
	adds r0, r0, r1	@ 000e146c 4018
.org 0xe146e
	movs r1, #4	@ 000e146e 0421
.org 0xe1470
	str r1, [r4, #12]	@ 000e1470 e160
.org 0xe1472
	ldr r0, [r0, #0]	@ 000e1472 0068
.org 0xe1474
	ldr r0, [r0, #16]	@ 000e1474 0069
.org 0xe1476
	str r0, [r4, #20]	@ 000e1476 6061
.org 0xe1478
	pop {r4}	@ 000e1478 10bc
.org 0xe147a
	pop {r0}	@ 000e147a 01bc
.org 0xe147c
	bx r0	@ 000e147c 0047
