@ FUN_080d265c  entry 0x080d265c  size 46
.thumb
.org 0xd265c
FUN_080d265c:
	push {r4, lr}	@ 000d265c 10b5
.org 0xd265e
	adds r4, r0, #0	@ 000d265e 041c
.org 0xd2660
	bl 0x1cff0	@ 000d2660 4af7c6fc
.org 0xd2664
	ldrb r0, [r4, #18]	@ 000d2664 a07c
.org 0xd2666
	subs r0, #1	@ 000d2666 0138
.org 0xd2668
	strb r0, [r4, #18]	@ 000d2668 a074
.org 0xd266a
	lsls r0, r0, #24	@ 000d266a 0006
.org 0xd266c
	lsrs r0, r0, #24	@ 000d266c 000e
.org 0xd266e
	cmp r0, #255	@ 000d266e ff28
.org 0xd2670
	bne.n 0xd2684	@ 000d2670 08d1
.org 0xd2672
	ldr r1, [pc, #24]	@ 000d2672 0649
.org 0xd2674
	ldrb r0, [r4, #9]	@ 000d2674 607a
.org 0xd2676
	lsls r0, r0, #2	@ 000d2676 8000
.org 0xd2678
	adds r0, r0, r1	@ 000d2678 4018
.org 0xd267a
	movs r1, #2	@ 000d267a 0221
.org 0xd267c
	str r1, [r4, #12]	@ 000d267c e160
.org 0xd267e
	ldr r0, [r0, #0]	@ 000d267e 0068
.org 0xd2680
	ldr r0, [r0, #8]	@ 000d2680 8068
.org 0xd2682
	str r0, [r4, #20]	@ 000d2682 6061
.org 0xd2684
	pop {r4}	@ 000d2684 10bc
.org 0xd2686
	pop {r0}	@ 000d2686 01bc
.org 0xd2688
	bx r0	@ 000d2688 0047
