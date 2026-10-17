@ FUN_0810e66c  entry 0x0810e66c  size 36
.thumb
.org 0x10e66c
FUN_0810e66c:
	push {r4, lr}	@ 0010e66c 10b5
.org 0x10e66e
	movs r2, #0	@ 0010e66e 0022
.org 0x10e670
	movs r3, #0	@ 0010e670 0023
.org 0x10e672
	strh r3, [r0, #0]	@ 0010e672 0380
.org 0x10e674
	movs r4, #1	@ 0010e674 0124
.org 0x10e676
	movs r1, #1	@ 0010e676 0121
.org 0x10e678
	strh r1, [r0, #2]	@ 0010e678 4180
.org 0x10e67a
	strb r2, [r0, #4]	@ 0010e67a 0271
.org 0x10e67c
	strb r2, [r0, #6]	@ 0010e67c 8271
.org 0x10e67e
	strb r2, [r0, #7]	@ 0010e67e c271
.org 0x10e680
	strh r3, [r0, #22]	@ 0010e680 c382
.org 0x10e682
	strb r4, [r0, #5]	@ 0010e682 4471
.org 0x10e684
	ldr r1, [r0, #24]	@ 0010e684 8169
.org 0x10e686
	str r1, [r0, #28]	@ 0010e686 c161
.org 0x10e688
	str r3, [r0, #32]	@ 0010e688 0362
.org 0x10e68a
	pop {r4}	@ 0010e68a 10bc
.org 0x10e68c
	pop {r0}	@ 0010e68c 01bc
.org 0x10e68e
	bx r0	@ 0010e68e 0047
