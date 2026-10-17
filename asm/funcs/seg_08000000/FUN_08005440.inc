@ FUN_08005440  entry 0x08005440  size 80
.thumb
.org 0x5440
FUN_08005440:
	push {r4, r5, r6, r7, lr}	@ 00005440 f0b5
.org 0x5442
	adds r4, r0, #0	@ 00005442 041c
.org 0x5444
	adds r5, r2, #0	@ 00005444 151c
.org 0x5446
	ldr r0, [sp, #20]	@ 00005446 0598
.org 0x5448
	lsls r1, r1, #24	@ 00005448 0906
.org 0x544a
	lsls r3, r3, #16	@ 0000544a 1b04
.org 0x544c
	lsrs r6, r3, #16	@ 0000544c 1e0c
.org 0x544e
	lsls r0, r0, #16	@ 0000544e 0004
.org 0x5450
	lsrs r3, r0, #16	@ 00005450 030c
.org 0x5452
	str r5, [r4, #0]	@ 00005452 2560
.org 0x5454
	lsrs r7, r1, #24	@ 00005454 0f0e
.org 0x5456
	asrs r1, r1, #24	@ 00005456 0916
.org 0x5458
	movs r2, #0	@ 00005458 0022
.org 0x545a
	strh r1, [r4, #4]	@ 0000545a a180
.org 0x545c
	strh r6, [r4, #6]	@ 0000545c e680
.org 0x545e
	strh r3, [r4, #8]	@ 0000545e 2381
.org 0x5460
	adds r0, r4, #0	@ 00005460 201c
.org 0x5462
	adds r0, #20	@ 00005462 1430
.org 0x5464
	str r0, [r4, #24]	@ 00005464 a061
.org 0x5466
	str r0, [r4, #20]	@ 00005466 6061
.org 0x5468
	str r2, [r4, #16]	@ 00005468 2261
.org 0x546a
	strh r3, [r4, #10]	@ 0000546a 6381
.org 0x546c
	lsls r1, r3, #16	@ 0000546c 1904
.org 0x546e
	cmp r1, #0	@ 0000546e 0029
.org 0x5470
	ble.n 0x548a	@ 00005470 0bdd
.org 0x5472
	lsls r0, r6, #16	@ 00005472 3004
.org 0x5474
	asrs r3, r0, #16	@ 00005474 0314
.org 0x5476
	str r2, [r5, #0]	@ 00005476 2a60
.org 0x5478
	adds r2, r5, #0	@ 00005478 2a1c
.org 0x547a
	strb r7, [r2, #8]	@ 0000547a 1772
.org 0x547c
	adds r5, r2, r3	@ 0000547c d518
.org 0x547e
	ldr r0, [pc, #16]	@ 0000547e 0448
.org 0x5480
	adds r1, r1, r0	@ 00005480 0918
.org 0x5482
	asrs r0, r1, #16	@ 00005482 0814
.org 0x5484
	cmp r0, #0	@ 00005484 0028
.org 0x5486
	bgt.n 0x5476	@ 00005486 f6dc
.org 0x5488
	str r2, [r4, #16]	@ 00005488 2261
.org 0x548a
	pop {r4, r5, r6, r7}	@ 0000548a f0bc
.org 0x548c
	pop {r0}	@ 0000548c 01bc
.org 0x548e
	bx r0	@ 0000548e 0047
