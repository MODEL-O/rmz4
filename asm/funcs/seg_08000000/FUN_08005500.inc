@ FUN_08005500  entry 0x08005500  size 50
.thumb
.org 0x5500
FUN_08005500:
	push {lr}	@ 00005500 00b5
.org 0x5502
	adds r3, r0, #0	@ 00005502 031c
.org 0x5504
	ldr r2, [r3, #16]	@ 00005504 1a69
.org 0x5506
	cmp r2, #0	@ 00005506 002a
.org 0x5508
	beq.n 0x552c	@ 00005508 10d0
.org 0x550a
	ldr r0, [r2, #0]	@ 0000550a 1068
.org 0x550c
	str r0, [r3, #16]	@ 0000550c 1861
.org 0x550e
	ldrh r0, [r3, #10]	@ 0000550e 5889
.org 0x5510
	subs r0, #1	@ 00005510 0138
.org 0x5512
	movs r1, #0	@ 00005512 0021
.org 0x5514
	strh r0, [r3, #10]	@ 00005514 5881
.org 0x5516
	adds r0, r3, #0	@ 00005516 181c
.org 0x5518
	adds r0, #20	@ 00005518 1430
.org 0x551a
	str r0, [r2, #4]	@ 0000551a 5060
.org 0x551c
	ldr r0, [r3, #20]	@ 0000551c 5869
.org 0x551e
	str r0, [r2, #0]	@ 0000551e 1060
.org 0x5520
	ldr r0, [r3, #20]	@ 00005520 5869
.org 0x5522
	str r2, [r0, #4]	@ 00005522 4260
.org 0x5524
	str r2, [r3, #20]	@ 00005524 5a61
.org 0x5526
	strh r1, [r2, #10]	@ 00005526 5181
.org 0x5528
	str r1, [r2, #12]	@ 00005528 d160
.org 0x552a
	str r1, [r2, #16]	@ 0000552a 1161
.org 0x552c
	adds r0, r2, #0	@ 0000552c 101c
.org 0x552e
	pop {r1}	@ 0000552e 02bc
.org 0x5530
	bx r1	@ 00005530 0847
