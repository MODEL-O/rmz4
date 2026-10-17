@ FUN_08001430  entry 0x08001430  size 34
.thumb
.org 0x1430
FUN_08001430:
	push {r4, lr}	@ 00001430 10b5
.org 0x1432
	movs r2, #0	@ 00001432 0022
.org 0x1434
	adds r4, r0, #0	@ 00001434 041c
.org 0x1436
	adds r4, #12	@ 00001436 0c34
.org 0x1438
	movs r3, #0	@ 00001438 0023
.org 0x143a
	adds r1, r0, #0	@ 0000143a 011c
.org 0x143c
	adds r1, #16	@ 0000143c 1031
.org 0x143e
	adds r0, r4, r2	@ 0000143e a018
.org 0x1440
	strb r3, [r0, #0]	@ 00001440 0370
.org 0x1442
	strh r3, [r1, #0]	@ 00001442 0b80
.org 0x1444
	adds r1, #2	@ 00001444 0231
.org 0x1446
	adds r2, #1	@ 00001446 0132
.org 0x1448
	cmp r2, #3	@ 00001448 032a
.org 0x144a
	ble.n 0x143e	@ 0000144a f8dd
.org 0x144c
	pop {r4}	@ 0000144c 10bc
.org 0x144e
	pop {r0}	@ 0000144e 01bc
.org 0x1450
	bx r0	@ 00001450 0047
