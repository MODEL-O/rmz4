@ FUN_081098a4  entry 0x081098a4  size 44
.thumb
.org 0x1098a4
FUN_081098a4:
	push {r4, lr}	@ 001098a4 10b5
.org 0x1098a6
	adds r4, r0, #0	@ 001098a6 041c
.org 0x1098a8
	adds r0, #84	@ 001098a8 5430
.org 0x1098aa
	movs r1, #0	@ 001098aa 0021
.org 0x1098ac
	bl 0xdf924	@ 001098ac d6f73af8
.org 0x1098b0
	ldrb r1, [r4, #10]	@ 001098b0 a17a
.org 0x1098b2
	movs r0, #254	@ 001098b2 fe20
.org 0x1098b4
	ands r0, r1	@ 001098b4 0840
.org 0x1098b6
	strb r0, [r4, #10]	@ 001098b6 a072
.org 0x1098b8
	ldr r1, [pc, #20]	@ 001098b8 0549
.org 0x1098ba
	ldrb r0, [r4, #9]	@ 001098ba 607a
.org 0x1098bc
	lsls r0, r0, #2	@ 001098bc 8000
.org 0x1098be
	adds r0, r0, r1	@ 001098be 4018
.org 0x1098c0
	movs r1, #4	@ 001098c0 0421
.org 0x1098c2
	str r1, [r4, #12]	@ 001098c2 e160
.org 0x1098c4
	ldr r0, [r0, #0]	@ 001098c4 0068
.org 0x1098c6
	ldr r0, [r0, #16]	@ 001098c6 0069
.org 0x1098c8
	str r0, [r4, #20]	@ 001098c8 6061
.org 0x1098ca
	pop {r4}	@ 001098ca 10bc
.org 0x1098cc
	pop {r0}	@ 001098cc 01bc
.org 0x1098ce
	bx r0	@ 001098ce 0047
