@ FUN_080c87b0  entry 0x080c87b0  size 30
.thumb
.org 0xc87b0
FUN_080c87b0:
	push {lr}	@ 000c87b0 00b5
.org 0xc87b2
	adds r2, r0, #0	@ 000c87b2 021c
.org 0xc87b4
	ldr r0, [pc, #24]	@ 000c87b4 0648
.org 0xc87b6
	adds r1, r0, #0	@ 000c87b6 011c
.org 0xc87b8
	adds r1, #38	@ 000c87b8 2631
.org 0xc87ba
	ldrb r0, [r1, #0]	@ 000c87ba 0878
.org 0xc87bc
	cmp r0, #0	@ 000c87bc 0028
.org 0xc87be
	beq.n 0xc87c4	@ 000c87be 01d0
.org 0xc87c0
	adds r0, #255	@ 000c87c0 ff30
.org 0xc87c2
	strb r0, [r1, #0]	@ 000c87c2 0870
.org 0xc87c4
	adds r0, r2, #0	@ 000c87c4 101c
.org 0xc87c6
	bl 0xbd3f8	@ 000c87c6 f4f717fe
.org 0xc87ca
	pop {r0}	@ 000c87ca 01bc
.org 0xc87cc
	bx r0	@ 000c87cc 0047
