@ FUN_080a343c  entry 0x080a343c  size 132
.thumb
.org 0xa343c
FUN_080a343c:
	push {r4, r5, lr}	@ 000a343c 30b5
.org 0xa343e
	adds r4, r0, #0	@ 000a343e 041c
.org 0xa3440
	ldr r5, [r4, #44]	@ 000a3440 e56a
.org 0xa3442
	bl 0x1cc9c	@ 000a3442 79f72bfc
.org 0xa3446
	ldrb r1, [r4, #10]	@ 000a3446 a17a
.org 0xa3448
	movs r0, #1	@ 000a3448 0120
.org 0xa344a
	orrs r0, r1	@ 000a344a 0843
.org 0xa344c
	movs r1, #2	@ 000a344c 0221
.org 0xa344e
	orrs r0, r1	@ 000a344e 0843
.org 0xa3450
	strb r0, [r4, #10]	@ 000a3450 a072
.org 0xa3452
	ldr r0, [pc, #108]	@ 000a3452 1b48
.org 0xa3454
	adds r1, r0, #0	@ 000a3454 011c
.org 0xa3456
	ldrb r0, [r4, #17]	@ 000a3456 607c
.org 0xa3458
	adds r1, r1, r0	@ 000a3458 0918
.org 0xa345a
	lsls r1, r1, #16	@ 000a345a 0904
.org 0xa345c
	lsrs r1, r1, #16	@ 000a345c 090c
.org 0xa345e
	adds r0, r4, #0	@ 000a345e 201c
.org 0xa3460
	bl 0x1cf00	@ 000a3460 79f74efd
.org 0xa3464
	adds r0, r4, #0	@ 000a3464 201c
.org 0xa3466
	bl 0x1cff0	@ 000a3466 79f7c3fd
.org 0xa346a
	ldrb r1, [r4, #11]	@ 000a346a e17a
.org 0xa346c
	movs r0, #16	@ 000a346c 1020
.org 0xa346e
	orrs r0, r1	@ 000a346e 0843
.org 0xa3470
	strb r0, [r4, #11]	@ 000a3470 e072
.org 0xa3472
	ldrb r0, [r5, #28]	@ 000a3472 287f
.org 0xa3474
	strb r0, [r4, #29]	@ 000a3474 6077
.org 0xa3476
	movs r2, #0	@ 000a3476 0022
.org 0xa3478
	ldrb r1, [r4, #10]	@ 000a3478 a17a
.org 0xa347a
	movs r0, #239	@ 000a347a ef20
.org 0xa347c
	ands r0, r1	@ 000a347c 0840
.org 0xa347e
	strb r0, [r4, #10]	@ 000a347e a072
.org 0xa3480
	movs r3, #1	@ 000a3480 0123
.org 0xa3482
	adds r0, r4, #0	@ 000a3482 201c
.org 0xa3484
	adds r0, #76	@ 000a3484 4c30
.org 0xa3486
	strb r2, [r0, #0]	@ 000a3486 0270
.org 0xa3488
	adds r2, r4, #0	@ 000a3488 221c
.org 0xa348a
	adds r2, #74	@ 000a348a 4a32
.org 0xa348c
	ldrb r1, [r2, #0]	@ 000a348c 1178
.org 0xa348e
	movs r0, #17	@ 000a348e 1120
.org 0xa3490
	negs r0, r0	@ 000a3490 4042
.org 0xa3492
	ands r0, r1	@ 000a3492 0840
.org 0xa3494
	strb r0, [r2, #0]	@ 000a3494 1070
.org 0xa3496
	adds r1, r4, #0	@ 000a3496 211c
.org 0xa3498
	adds r1, #180	@ 000a3498 b431
.org 0xa349a
	ldr r0, [r4, #84]	@ 000a349a 606d
.org 0xa349c
	str r0, [r1, #0]	@ 000a349c 0860
.org 0xa349e
	adds r1, #4	@ 000a349e 0431
.org 0xa34a0
	ldr r0, [r4, #88]	@ 000a34a0 a06d
.org 0xa34a2
	str r0, [r1, #0]	@ 000a34a2 0860
.org 0xa34a4
	ldr r1, [pc, #28]	@ 000a34a4 0749
.org 0xa34a6
	ldrb r0, [r4, #9]	@ 000a34a6 607a
.org 0xa34a8
	lsls r0, r0, #2	@ 000a34a8 8000
.org 0xa34aa
	adds r0, r0, r1	@ 000a34aa 4018
.org 0xa34ac
	str r3, [r4, #12]	@ 000a34ac e360
.org 0xa34ae
	ldr r0, [r0, #0]	@ 000a34ae 0068
.org 0xa34b0
	ldr r0, [r0, #4]	@ 000a34b0 4068
.org 0xa34b2
	str r0, [r4, #20]	@ 000a34b2 6061
.org 0xa34b4
	adds r0, r4, #0	@ 000a34b4 201c
.org 0xa34b6
	bl 0xa32e4	@ 000a34b6 fff715ff
.org 0xa34ba
	pop {r4, r5}	@ 000a34ba 30bc
.org 0xa34bc
	pop {r0}	@ 000a34bc 01bc
.org 0xa34be
	bx r0	@ 000a34be 0047
