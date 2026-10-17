@ FUN_080b564c  entry 0x080b564c  size 84
.thumb
.org 0xb564c
FUN_080b564c:
	push {lr}	@ 000b564c 00b5
.org 0xb564e
	adds r3, r0, #0	@ 000b564e 031c
.org 0xb5650
	ldr r0, [pc, #44]	@ 000b5650 0b48
.org 0xb5652
	ldr r0, [r0, #0]	@ 000b5652 0068
.org 0xb5654
	ldr r1, [r0, #84]	@ 000b5654 416d
.org 0xb5656
	ldr r0, [r3, #84]	@ 000b5656 586d
.org 0xb5658
	cmp r1, r0	@ 000b5658 8142
.org 0xb565a
	ble.n 0xb5684	@ 000b565a 13dd
.org 0xb565c
	movs r2, #1	@ 000b565c 0122
.org 0xb565e
	ldrb r1, [r3, #10]	@ 000b565e 997a
.org 0xb5660
	movs r0, #16	@ 000b5660 1020
.org 0xb5662
	orrs r0, r1	@ 000b5662 0843
.org 0xb5664
	strb r0, [r3, #10]	@ 000b5664 9872
.org 0xb5666
	adds r0, r3, #0	@ 000b5666 181c
.org 0xb5668
	adds r0, #76	@ 000b5668 4c30
.org 0xb566a
	strb r2, [r0, #0]	@ 000b566a 0270
.org 0xb566c
	adds r2, r3, #0	@ 000b566c 1a1c
.org 0xb566e
	adds r2, #74	@ 000b566e 4a32
.org 0xb5670
	movs r3, #16	@ 000b5670 1023
.org 0xb5672
	ldrb r1, [r2, #0]	@ 000b5672 1178
.org 0xb5674
	movs r0, #17	@ 000b5674 1120
.org 0xb5676
	negs r0, r0	@ 000b5676 4042
.org 0xb5678
	ands r0, r1	@ 000b5678 0840
.org 0xb567a
	orrs r0, r3	@ 000b567a 1843
.org 0xb567c
	b.n 0xb56a0	@ 000b567c 10e0
.org 0xb567e
	.byte 0x00	@ 000b567e data
.org 0xb567f
	.byte 0x00	@ 000b567f data
.org 0xb5680
	.byte 0xf0,0xdb,0x02,0x02	@ 000b5680 data
.org 0xb5684
	movs r2, #0	@ 000b5684 0022
.org 0xb5686
	ldrb r1, [r3, #10]	@ 000b5686 997a
.org 0xb5688
	movs r0, #239	@ 000b5688 ef20
.org 0xb568a
	ands r0, r1	@ 000b568a 0840
.org 0xb568c
	strb r0, [r3, #10]	@ 000b568c 9872
.org 0xb568e
	adds r0, r3, #0	@ 000b568e 181c
.org 0xb5690
	adds r0, #76	@ 000b5690 4c30
.org 0xb5692
	strb r2, [r0, #0]	@ 000b5692 0270
.org 0xb5694
	adds r2, r3, #0	@ 000b5694 1a1c
.org 0xb5696
	adds r2, #74	@ 000b5696 4a32
.org 0xb5698
	ldrb r1, [r2, #0]	@ 000b5698 1178
.org 0xb569a
	movs r0, #17	@ 000b569a 1120
.org 0xb569c
	negs r0, r0	@ 000b569c 4042
.org 0xb569e
	ands r0, r1	@ 000b569e 0840
