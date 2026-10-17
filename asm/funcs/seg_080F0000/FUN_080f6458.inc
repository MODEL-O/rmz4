@ FUN_080f6458  entry 0x080f6458  size 92
.thumb
.org 0xf6458
FUN_080f6458:
	push {lr}	@ 000f6458 00b5
.org 0xf645a
	adds r3, r0, #0	@ 000f645a 031c
.org 0xf645c
	ldr r0, [pc, #64]	@ 000f645c 1048
.org 0xf645e
	ldrb r1, [r0, #4]	@ 000f645e 0179
.org 0xf6460
	movs r0, #4	@ 000f6460 0420
.org 0xf6462
	ands r0, r1	@ 000f6462 0840
.org 0xf6464
	cmp r0, #0	@ 000f6464 0028
.org 0xf6466
	beq.n 0xf64a8	@ 000f6466 1fd0
.org 0xf6468
	ldrb r1, [r3, #10]	@ 000f6468 997a
.org 0xf646a
	movs r0, #254	@ 000f646a fe20
.org 0xf646c
	ands r0, r1	@ 000f646c 0840
.org 0xf646e
	movs r2, #0	@ 000f646e 0022
.org 0xf6470
	movs r1, #253	@ 000f6470 fd21
.org 0xf6472
	ands r0, r1	@ 000f6472 0840
.org 0xf6474
	strb r0, [r3, #10]	@ 000f6474 9872
.org 0xf6476
	adds r0, r3, #0	@ 000f6476 181c
.org 0xf6478
	adds r0, #140	@ 000f6478 8c30
.org 0xf647a
	str r2, [r0, #0]	@ 000f647a 0260
.org 0xf647c
	adds r0, #4	@ 000f647c 0430
.org 0xf647e
	str r2, [r0, #0]	@ 000f647e 0260
.org 0xf6480
	adds r0, #4	@ 000f6480 0430
.org 0xf6482
	strb r2, [r0, #0]	@ 000f6482 0270
.org 0xf6484
	ldrb r1, [r3, #10]	@ 000f6484 997a
.org 0xf6486
	movs r0, #251	@ 000f6486 fb20
.org 0xf6488
	ands r0, r1	@ 000f6488 0840
.org 0xf648a
	strb r0, [r3, #10]	@ 000f648a 9872
.org 0xf648c
	ldr r1, [pc, #20]	@ 000f648c 0549
.org 0xf648e
	ldrb r0, [r3, #9]	@ 000f648e 587a
.org 0xf6490
	lsls r0, r0, #2	@ 000f6490 8000
.org 0xf6492
	adds r0, r0, r1	@ 000f6492 4018
.org 0xf6494
	movs r1, #3	@ 000f6494 0321
.org 0xf6496
	str r1, [r3, #12]	@ 000f6496 d960
.org 0xf6498
	ldr r0, [r0, #0]	@ 000f6498 0068
.org 0xf649a
	ldr r0, [r0, #12]	@ 000f649a c068
.org 0xf649c
	str r0, [r3, #20]	@ 000f649c 5861
.org 0xf649e
	b.n 0xf64b8	@ 000f649e 0be0
.org 0xf64a0
	.byte 0xb0,0xe8,0x02,0x02	@ 000f64a0 data
.org 0xf64a4
	.byte 0xfc,0x92,0x86,0x08	@ 000f64a4 data
.org 0xf64a8
	ldr r0, [pc, #16]	@ 000f64a8 0448
.org 0xf64aa
	ldrb r1, [r3, #16]	@ 000f64aa 197c
.org 0xf64ac
	lsls r1, r1, #2	@ 000f64ac 8900
.org 0xf64ae
	adds r1, r1, r0	@ 000f64ae 0918
.org 0xf64b0
	ldr r1, [r1, #0]	@ 000f64b0 0968
.org 0xf64b2
	adds r0, r3, #0	@ 000f64b2 181c
