@ FUN_080e1434  entry 0x080e1434  size 20
.thumb
.org 0xe1434
FUN_080e1434:
	push {r4, lr}	@ 000e1434 10b5
.org 0xe1436
	adds r4, r0, #0	@ 000e1436 041c
.org 0xe1438
	bl 0xe14c0	@ 000e1438 00f042f8
.org 0xe143c
	adds r0, r4, #0	@ 000e143c 201c
.org 0xe143e
	bl 0x1cff0	@ 000e143e 3bf7d7fd
.org 0xe1442
	pop {r4}	@ 000e1442 10bc
.org 0xe1444
	pop {r0}	@ 000e1444 01bc
.org 0xe1446
	bx r0	@ 000e1446 0047
