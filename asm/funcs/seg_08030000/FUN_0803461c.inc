@ FUN_0803461c  entry 0x0803461c  size 100
.thumb
.org 0x3461c
FUN_0803461c:
	push {lr}	@ 0003461c 00b5
.org 0x3461e
	adds r2, r0, #0	@ 0003461e 021c
.org 0x34620
	ldr r0, [pc, #52]	@ 00034620 0d48
.org 0x34622
	adds r3, r2, r0	@ 00034622 1318
.org 0x34624
	ldrb r0, [r3, #0]	@ 00034624 1878
.org 0x34626
	movs r1, #4	@ 00034626 0421
.org 0x34628
	orrs r0, r1	@ 00034628 0843
.org 0x3462a
	movs r1, #2	@ 0003462a 0221
.org 0x3462c
	orrs r0, r1	@ 0003462c 0843
.org 0x3462e
	strb r0, [r3, #0]	@ 0003462e 1870
.org 0x34630
	ldr r1, [pc, #40]	@ 00034630 0a49
.org 0x34632
	adds r3, r2, r1	@ 00034632 5318
.org 0x34634
	ldrb r0, [r3, #0]	@ 00034634 1878
.org 0x34636
	subs r0, #1	@ 00034636 0138
.org 0x34638
	lsls r0, r0, #24	@ 00034638 0006
.org 0x3463a
	lsrs r0, r0, #24	@ 0003463a 000e
.org 0x3463c
	cmp r0, #2	@ 0003463c 0228
.org 0x3463e
	bhi.n 0x34670	@ 0003463e 17d8
.org 0x34640
	adds r1, #86	@ 00034640 5631
.org 0x34642
	adds r0, r2, r1	@ 00034642 5018
.org 0x34644
	ldrb r1, [r0, #0]	@ 00034644 0178
.org 0x34646
	cmp r1, #4	@ 00034646 0429
.org 0x34648
	bne.n 0x34660	@ 00034648 0ad1
.org 0x3464a
	movs r0, #0	@ 0003464a 0020
.org 0x3464c
	strb r1, [r3, #0]	@ 0003464c 1970
.org 0x3464e
	movs r3, #129	@ 0003464e 8123
.org 0x34650
	lsls r3, r3, #1	@ 00034650 5b00
.org 0x34652
	adds r1, r2, r3	@ 00034652 d118
.org 0x34654
	strb r0, [r1, #0]	@ 00034654 0870
.org 0x34656
	b.n 0x34670	@ 00034656 0be0
.org 0x34658
	.byte 0x53,0x01,0x00,0x00	@ 00034658 data
.org 0x3465c
	.byte 0x01,0x01,0x00,0x00	@ 0003465c data
.org 0x34660
	ldr r1, [pc, #36]	@ 00034660 0949
.org 0x34662
	ldrb r0, [r0, #0]	@ 00034662 0078
.org 0x34664
	adds r0, r0, r1	@ 00034664 4018
.org 0x34666
	ldrb r1, [r0, #0]	@ 00034666 0178
.org 0x34668
	movs r3, #168	@ 00034668 a823
.org 0x3466a
	lsls r3, r3, #1	@ 0003466a 5b00
.org 0x3466c
	adds r0, r2, r3	@ 0003466c d018
.org 0x3466e
	strb r1, [r0, #0]	@ 0003466e 0170
.org 0x34670
	ldr r0, [pc, #24]	@ 00034670 0648
.org 0x34672
	ldr r3, [pc, #28]	@ 00034672 074b
.org 0x34674
	adds r1, r2, r3	@ 00034674 d118
.org 0x34676
	ldrb r1, [r1, #0]	@ 00034676 0978
.org 0x34678
	lsls r1, r1, #2	@ 00034678 8900
.org 0x3467a
	adds r1, r1, r0	@ 0003467a 0918
.org 0x3467c
	ldr r1, [r1, #0]	@ 0003467c 0968
.org 0x3467e
	adds r0, r2, #0	@ 0003467e 101c
