@ FUN_0800f728  entry 0x0800f728  size 28
.thumb
.org 0xf728
FUN_0800f728:
	push {r4, lr}	@ 0000f728 10b5
.org 0xf72a
	adds r4, r0, #0	@ 0000f72a 041c
.org 0xf72c
	ldrb r0, [r4, #14]	@ 0000f72c a07b
.org 0xf72e
	cmp r0, #0	@ 0000f72e 0028
.org 0xf730
	bne.n 0xf73e	@ 0000f730 05d1
.org 0xf732
	movs r0, #121	@ 0000f732 7920
.org 0xf734
	bl 0x2b10	@ 0000f734 f3f7ecf9
.org 0xf738
	ldrb r0, [r4, #14]	@ 0000f738 a07b
.org 0xf73a
	adds r0, #1	@ 0000f73a 0130
.org 0xf73c
	strb r0, [r4, #14]	@ 0000f73c a073
.org 0xf73e
	pop {r4}	@ 0000f73e 10bc
.org 0xf740
	pop {r0}	@ 0000f740 01bc
.org 0xf742
	bx r0	@ 0000f742 0047
