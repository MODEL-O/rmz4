@ FUN_080de80c  entry 0x080de80c  size 28
.thumb
.org 0xde80c
FUN_080de80c:
	ldrb r2, [r0, #10]	@ 000de80c 827a
.org 0xde80e
	movs r1, #254	@ 000de80e fe21
.org 0xde810
	ands r1, r2	@ 000de810 1140
.org 0xde812
	strb r1, [r0, #10]	@ 000de812 8172
.org 0xde814
	ldr r2, [pc, #16]	@ 000de814 044a
.org 0xde816
	ldrb r1, [r0, #9]	@ 000de816 417a
.org 0xde818
	lsls r1, r1, #2	@ 000de818 8900
.org 0xde81a
	adds r1, r1, r2	@ 000de81a 8918
.org 0xde81c
	movs r2, #4	@ 000de81c 0422
.org 0xde81e
	str r2, [r0, #12]	@ 000de81e c260
.org 0xde820
	ldr r1, [r1, #0]	@ 000de820 0968
.org 0xde822
	ldr r1, [r1, #16]	@ 000de822 0969
.org 0xde824
	str r1, [r0, #20]	@ 000de824 4161
.org 0xde826
	bx lr	@ 000de826 7047
