@ FUN_0810c634  entry 0x0810c634  size 82
.thumb
.org 0x10c634
FUN_0810c634:
	push {r4, r5, lr}	@ 0010c634 30b5
.org 0x10c636
	adds r4, r0, #0	@ 0010c636 041c
.org 0x10c638
	movs r5, #0	@ 0010c638 0025
.org 0x10c63a
	ldr r1, [pc, #76]	@ 0010c63a 1349
.org 0x10c63c
	ldrb r0, [r4, #9]	@ 0010c63c 607a
.org 0x10c63e
	lsls r0, r0, #2	@ 0010c63e 8000
.org 0x10c640
	adds r0, r0, r1	@ 0010c640 4018
.org 0x10c642
	movs r1, #1	@ 0010c642 0121
.org 0x10c644
	str r1, [r4, #12]	@ 0010c644 e160
.org 0x10c646
	ldr r0, [r0, #0]	@ 0010c646 0068
.org 0x10c648
	ldr r0, [r0, #4]	@ 0010c648 4068
.org 0x10c64a
	str r0, [r4, #20]	@ 0010c64a 6061
.org 0x10c64c
	ldrb r1, [r4, #10]	@ 0010c64c a17a
.org 0x10c64e
	movs r0, #254	@ 0010c64e fe20
.org 0x10c650
	ands r0, r1	@ 0010c650 0840
.org 0x10c652
	movs r1, #2	@ 0010c652 0221
.org 0x10c654
	orrs r0, r1	@ 0010c654 0843
.org 0x10c656
	strb r0, [r4, #10]	@ 0010c656 a072
.org 0x10c658
	adds r0, r4, #0	@ 0010c658 201c
.org 0x10c65a
	bl 0x1cc9c	@ 0010c65a 10f71ffb
.org 0x10c65e
	adds r0, r4, #0	@ 0010c65e 201c
.org 0x10c660
	adds r0, #76	@ 0010c660 4c30
.org 0x10c662
	strb r5, [r0, #0]	@ 0010c662 0570
.org 0x10c664
	adds r2, r4, #0	@ 0010c664 221c
.org 0x10c666
	adds r2, #74	@ 0010c666 4a32
.org 0x10c668
	ldrb r1, [r2, #0]	@ 0010c668 1178
.org 0x10c66a
	movs r0, #17	@ 0010c66a 1120
.org 0x10c66c
	negs r0, r0	@ 0010c66c 4042
.org 0x10c66e
	ands r0, r1	@ 0010c66e 0840
.org 0x10c670
	strb r0, [r2, #0]	@ 0010c670 1070
.org 0x10c672
	ldrb r1, [r4, #10]	@ 0010c672 a17a
.org 0x10c674
	movs r0, #239	@ 0010c674 ef20
.org 0x10c676
	ands r0, r1	@ 0010c676 0840
.org 0x10c678
	strb r0, [r4, #10]	@ 0010c678 a072
.org 0x10c67a
	adds r0, r4, #0	@ 0010c67a 201c
.org 0x10c67c
	bl 0x10c68c	@ 0010c67c 00f006f8
.org 0x10c680
	pop {r4, r5}	@ 0010c680 30bc
.org 0x10c682
	pop {r0}	@ 0010c682 01bc
.org 0x10c684
	bx r0	@ 0010c684 0047
