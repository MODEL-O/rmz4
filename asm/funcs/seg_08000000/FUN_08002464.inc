@ FUN_08002464  entry 0x08002464  size 48
.thumb
.org 0x2464
FUN_08002464:
	push {r4, lr}	@ 00002464 10b5
.org 0x2466
	ldr r0, [pc, #28]	@ 00002466 0748
.org 0x2468
	adds r1, r0, #0	@ 00002468 011c
.org 0x246a
	adds r2, r1, #0	@ 0000246a 0a1c
.org 0x246c
	adds r2, #48	@ 0000246c 3032
.org 0x246e
	movs r4, #0	@ 0000246e 0024
.org 0x2470
	movs r3, #15	@ 00002470 0f23
.org 0x2472
	ldrh r0, [r1, #0]	@ 00002472 0888
.org 0x2474
	cmp r0, #0	@ 00002474 0028
.org 0x2476
	beq.n 0x248a	@ 00002476 08d0
.org 0x2478
	ldrh r0, [r2, #0]	@ 00002478 1088
.org 0x247a
	cmp r0, #0	@ 0000247a 0028
.org 0x247c
	beq.n 0x2488	@ 0000247c 04d0
.org 0x247e
	strh r4, [r2, #0]	@ 0000247e 1480
.org 0x2480
	b.n 0x248a	@ 00002480 03e0
.org 0x2482
	.byte 0x00	@ 00002482 data
.org 0x2483
	.byte 0x00	@ 00002483 data
.org 0x2484
	.byte 0xa0,0x08,0x00,0x02	@ 00002484 data
.org 0x2488
	strh r0, [r1, #0]	@ 00002488 0880
.org 0x248a
	adds r1, #2	@ 0000248a 0231
.org 0x248c
	adds r2, #20	@ 0000248c 1432
.org 0x248e
	subs r3, #1	@ 0000248e 013b
.org 0x2490
	cmp r3, #0	@ 00002490 002b
.org 0x2492
	bge.n 0x2472	@ 00002492 eeda
