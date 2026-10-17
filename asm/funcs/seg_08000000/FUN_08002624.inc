@ FUN_08002624  entry 0x08002624  size 58
.thumb
.org 0x2624
FUN_08002624:
	push {r4, lr}	@ 00002624 10b5
.org 0x2626
	lsls r0, r0, #16	@ 00002626 0004
.org 0x2628
	movs r1, #128	@ 00002628 8021
.org 0x262a
	lsls r1, r1, #9	@ 0000262a 4902
.org 0x262c
	adds r0, r0, r1	@ 0000262c 4018
.org 0x262e
	lsrs r3, r0, #16	@ 0000262e 030c
.org 0x2630
	movs r2, #0	@ 00002630 0022
.org 0x2632
	ldr r0, [pc, #44]	@ 00002632 0b48
.org 0x2634
	ldrh r1, [r0, #0]	@ 00002634 0188
.org 0x2636
	adds r4, r0, #0	@ 00002636 041c
.org 0x2638
	cmp r1, r3	@ 00002638 9942
.org 0x263a
	beq.n 0x264c	@ 0000263a 07d0
.org 0x263c
	adds r1, r4, #0	@ 0000263c 211c
.org 0x263e
	adds r1, #2	@ 0000263e 0231
.org 0x2640
	adds r2, #1	@ 00002640 0132
.org 0x2642
	cmp r2, #15	@ 00002642 0f2a
.org 0x2644
	bgt.n 0x264c	@ 00002644 02dc
.org 0x2646
	ldrh r0, [r1, #0]	@ 00002646 0888
.org 0x2648
	cmp r0, r3	@ 00002648 9842
.org 0x264a
	bne.n 0x263e	@ 0000264a f8d1
.org 0x264c
	cmp r2, #16	@ 0000264c 102a
.org 0x264e
	beq.n 0x2658	@ 0000264e 03d0
.org 0x2650
	lsls r0, r2, #1	@ 00002650 5000
.org 0x2652
	adds r0, r0, r4	@ 00002652 0019
.org 0x2654
	movs r1, #0	@ 00002654 0021
.org 0x2656
	strh r1, [r0, #0]	@ 00002656 0180
.org 0x2658
	pop {r4}	@ 00002658 10bc
.org 0x265a
	pop {r0}	@ 0000265a 01bc
.org 0x265c
	bx r0	@ 0000265c 0047
