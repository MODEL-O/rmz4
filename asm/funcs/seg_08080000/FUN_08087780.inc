@ FUN_08087780  entry 0x08087780  size 30
.thumb
.org 0x87780
FUN_08087780:
	push {lr}	@ 00087780 00b5
.org 0x87782
	adds r2, r0, #0	@ 00087782 021c
.org 0x87784
	adds r2, #180	@ 00087784 b432
.org 0x87786
	movs r3, #0	@ 00087786 0023
.org 0x87788
	movs r1, #3	@ 00087788 0321
.org 0x8778a
	strb r1, [r2, #0]	@ 0008778a 1170
.org 0x8778c
	movs r1, #1	@ 0008778c 0121
.org 0x8778e
	strb r1, [r0, #14]	@ 0008778e 8173
.org 0x87790
	strb r3, [r0, #15]	@ 00087790 c373
.org 0x87792
	ldr r1, [pc, #12]	@ 00087792 0349
.org 0x87794
	ldr r1, [r1, #4]	@ 00087794 4968
.org 0x87796
	bl 0x128f80	@ 00087796 a1f0f3fb
.org 0x8779a
	pop {r0}	@ 0008779a 01bc
.org 0x8779c
	bx r0	@ 0008779c 0047
