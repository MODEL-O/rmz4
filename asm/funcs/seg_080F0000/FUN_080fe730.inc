@ FUN_080fe730  entry 0x080fe730  size 28
.thumb
.org 0xfe730
FUN_080fe730:
	push {lr}	@ 000fe730 00b5
.org 0xfe732
	adds r1, r0, #0	@ 000fe732 011c
.org 0xfe734
	ldrb r0, [r1, #16]	@ 000fe734 087c
.org 0xfe736
	cmp r0, #0	@ 000fe736 0028
.org 0xfe738
	bne.n 0xfe742	@ 000fe738 03d1
.org 0xfe73a
	adds r0, r1, #0	@ 000fe73a 081c
.org 0xfe73c
	bl 0xfe7c4	@ 000fe73c 00f042f8
.org 0xfe740
	b.n 0xfe748	@ 000fe740 02e0
.org 0xfe742
	adds r0, r1, #0	@ 000fe742 081c
.org 0xfe744
	bl 0xfe7e0	@ 000fe744 00f04cf8
.org 0xfe748
	pop {r0}	@ 000fe748 01bc
.org 0xfe74a
	bx r0	@ 000fe74a 0047
