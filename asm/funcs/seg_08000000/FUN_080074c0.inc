@ FUN_080074c0  entry 0x080074c0  size 142
.thumb
.org 0x74c0
FUN_080074c0:
	push {r4, r5, r6, r7, lr}	@ 000074c0 f0b5
.org 0x74c2
	lsls r2, r2, #16	@ 000074c2 1204
.org 0x74c4
	lsrs r2, r2, #16	@ 000074c4 120c
.org 0x74c6
	ldr r5, [pc, #136]	@ 000074c6 224d
.org 0x74c8
	movs r4, #232	@ 000074c8 e824
.org 0x74ca
	lsls r4, r4, #1	@ 000074ca 6400
.org 0x74cc
	adds r3, r5, r4	@ 000074cc 2b19
.org 0x74ce
	ldrb r3, [r3, #0]	@ 000074ce 1b78
.org 0x74d0
	movs r4, #127	@ 000074d0 7f24
.org 0x74d2
	ands r4, r3	@ 000074d2 1c40
.org 0x74d4
	ldr r6, [pc, #124]	@ 000074d4 1f4e
.org 0x74d6
	ldr r7, [pc, #128]	@ 000074d6 204f
.org 0x74d8
	adds r3, r5, r7	@ 000074d8 eb19
.org 0x74da
	ldrb r3, [r3, #0]	@ 000074da 1b78
.org 0x74dc
	lsrs r3, r3, #4	@ 000074dc 1b09
.org 0x74de
	lsls r3, r3, #2	@ 000074de 9b00
.org 0x74e0
	lsls r4, r4, #3	@ 000074e0 e400
.org 0x74e2
	adds r3, r3, r4	@ 000074e2 1b19
.org 0x74e4
	adds r3, r3, r6	@ 000074e4 9b19
.org 0x74e6
	ldr r6, [r3, #0]	@ 000074e6 1e68
.org 0x74e8
	ldr r3, [pc, #112]	@ 000074e8 1c4b
.org 0x74ea
	adds r5, r5, r3	@ 000074ea ed18
.org 0x74ec
	ldr r4, [r6, #8]	@ 000074ec b468
.org 0x74ee
	ldr r3, [r4, #8]	@ 000074ee a368
.org 0x74f0
	adds r4, r3, r4	@ 000074f0 1c19
.org 0x74f2
	lsls r3, r2, #2	@ 000074f2 9300
.org 0x74f4
	adds r3, r3, r2	@ 000074f4 9b18
.org 0x74f6
	lsls r2, r3, #4	@ 000074f6 1a01
.org 0x74f8
	subs r2, r2, r3	@ 000074f8 d21a
.org 0x74fa
	lsls r2, r2, #2	@ 000074fa 9200
.org 0x74fc
	adds r4, r4, r2	@ 000074fc a418
.org 0x74fe
	ldr r2, [r6, #12]	@ 000074fe f268
.org 0x7500
	ldrb r2, [r2, #2]	@ 00007500 9278
.org 0x7502
	lsls r3, r2, #4	@ 00007502 1301
.org 0x7504
	subs r3, r3, r2	@ 00007504 9b1a
.org 0x7506
	adds r2, r3, #0	@ 00007506 1a1c
.org 0x7508
	muls r2, r1	@ 00007508 4a43
.org 0x750a
	lsls r1, r2, #2	@ 0000750a 9100
.org 0x750c
	adds r1, r1, r2	@ 0000750c 8918
.org 0x750e
	lsls r1, r1, #1	@ 0000750e 4900
.org 0x7510
	lsls r2, r0, #4	@ 00007510 0201
.org 0x7512
	subs r2, r2, r0	@ 00007512 121a
.org 0x7514
	adds r1, r1, r2	@ 00007514 8918
.org 0x7516
	lsls r1, r1, #1	@ 00007516 4900
.org 0x7518
	adds r5, r1, r5	@ 00007518 4d19
.org 0x751a
	movs r6, #0	@ 0000751a 0026
.org 0x751c
	lsls r7, r3, #1	@ 0000751c 5f00
.org 0x751e
	adds r0, r4, #0	@ 0000751e 201c
.org 0x7520
	adds r1, r5, #0	@ 00007520 291c
.org 0x7522
	movs r2, #30	@ 00007522 1e22
.org 0x7524
	bl 0xb30	@ 00007524 f9f704fb
.org 0x7528
	adds r5, r5, r7	@ 00007528 ed19
.org 0x752a
	adds r4, #30	@ 0000752a 1e34
.org 0x752c
	lsls r0, r6, #16	@ 0000752c 3004
.org 0x752e
	movs r1, #128	@ 0000752e 8021
.org 0x7530
	lsls r1, r1, #9	@ 00007530 4902
.org 0x7532
	adds r0, r0, r1	@ 00007532 4018
.org 0x7534
	lsrs r6, r0, #16	@ 00007534 060c
.org 0x7536
	asrs r0, r0, #16	@ 00007536 0014
.org 0x7538
	cmp r0, #9	@ 00007538 0928
.org 0x753a
	ble.n 0x751e	@ 0000753a f0dd
.org 0x753c
	ldr r0, [pc, #16]	@ 0000753c 0448
.org 0x753e
	movs r3, #176	@ 0000753e b023
.org 0x7540
	lsls r3, r3, #10	@ 00007540 9b02
.org 0x7542
	adds r0, r0, r3	@ 00007542 c018
.org 0x7544
	movs r1, #1	@ 00007544 0121
.org 0x7546
	strh r1, [r0, #0]	@ 00007546 0180
.org 0x7548
	pop {r4, r5, r6, r7}	@ 00007548 f0bc
.org 0x754a
	pop {r0}	@ 0000754a 01bc
.org 0x754c
	bx r0	@ 0000754c 0047
