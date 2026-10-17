@ FUN_081046cc  entry 0x081046cc  size 48
.thumb
.org 0x1046cc
FUN_081046cc:
	push {r4, lr}	@ 001046cc 10b5
.org 0x1046ce
	adds r4, r0, #0	@ 001046ce 041c
.org 0x1046d0
	bl 0x1cc9c	@ 001046d0 18f7e4fa
.org 0x1046d4
	ldrb r1, [r4, #10]	@ 001046d4 a17a
.org 0x1046d6
	movs r0, #1	@ 001046d6 0120
.org 0x1046d8
	orrs r0, r1	@ 001046d8 0843
.org 0x1046da
	movs r1, #2	@ 001046da 0221
.org 0x1046dc
	orrs r0, r1	@ 001046dc 0843
.org 0x1046de
	strb r0, [r4, #10]	@ 001046de a072
.org 0x1046e0
	ldr r0, [pc, #24]	@ 001046e0 0648
.org 0x1046e2
	str r0, [r4, #96]	@ 001046e2 2066
.org 0x1046e4
	ldr r1, [pc, #24]	@ 001046e4 0649
.org 0x1046e6
	adds r0, r4, #0	@ 001046e6 201c
.org 0x1046e8
	bl 0x1cf00	@ 001046e8 18f70afc
.org 0x1046ec
	adds r4, #73	@ 001046ec 4934
.org 0x1046ee
	ldrb r0, [r4, #0]	@ 001046ee 2078
.org 0x1046f0
	movs r1, #12	@ 001046f0 0c21
.org 0x1046f2
	orrs r0, r1	@ 001046f2 0843
.org 0x1046f4
	strb r0, [r4, #0]	@ 001046f4 2070
.org 0x1046f6
	pop {r4}	@ 001046f6 10bc
.org 0x1046f8
	pop {r0}	@ 001046f8 01bc
.org 0x1046fa
	bx r0	@ 001046fa 0047
