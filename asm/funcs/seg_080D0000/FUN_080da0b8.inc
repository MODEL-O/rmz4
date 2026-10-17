@ FUN_080da0b8  entry 0x080da0b8  size 66
.thumb
.org 0xda0b8
FUN_080da0b8:
	push {r4, lr}	@ 000da0b8 10b5
.org 0xda0ba
	adds r4, r0, #0	@ 000da0ba 041c
.org 0xda0bc
	bl 0x1cc9c	@ 000da0bc 42f7eefd
.org 0xda0c0
	ldrb r1, [r4, #10]	@ 000da0c0 a17a
.org 0xda0c2
	movs r0, #1	@ 000da0c2 0120
.org 0xda0c4
	orrs r0, r1	@ 000da0c4 0843
.org 0xda0c6
	movs r1, #2	@ 000da0c6 0221
.org 0xda0c8
	orrs r0, r1	@ 000da0c8 0843
.org 0xda0ca
	strb r0, [r4, #10]	@ 000da0ca a072
.org 0xda0cc
	ldr r1, [pc, #44]	@ 000da0cc 0b49
.org 0xda0ce
	ldrb r0, [r4, #17]	@ 000da0ce 607c
.org 0xda0d0
	lsls r0, r0, #2	@ 000da0d0 8000
.org 0xda0d2
	adds r0, r0, r1	@ 000da0d2 4018
.org 0xda0d4
	ldr r1, [r0, #0]	@ 000da0d4 0168
.org 0xda0d6
	adds r0, r4, #0	@ 000da0d6 201c
.org 0xda0d8
	bl 0x128f80	@ 000da0d8 4ef052ff
.org 0xda0dc
	ldr r1, [pc, #32]	@ 000da0dc 0849
.org 0xda0de
	ldrb r0, [r4, #9]	@ 000da0de 607a
.org 0xda0e0
	lsls r0, r0, #2	@ 000da0e0 8000
.org 0xda0e2
	adds r0, r0, r1	@ 000da0e2 4018
.org 0xda0e4
	movs r1, #1	@ 000da0e4 0121
.org 0xda0e6
	str r1, [r4, #12]	@ 000da0e6 e160
.org 0xda0e8
	ldr r0, [r0, #0]	@ 000da0e8 0068
.org 0xda0ea
	ldr r0, [r0, #4]	@ 000da0ea 4068
.org 0xda0ec
	str r0, [r4, #20]	@ 000da0ec 6061
.org 0xda0ee
	adds r0, r4, #0	@ 000da0ee 201c
.org 0xda0f0
	bl 0xda104	@ 000da0f0 00f008f8
.org 0xda0f4
	pop {r4}	@ 000da0f4 10bc
.org 0xda0f6
	pop {r0}	@ 000da0f6 01bc
.org 0xda0f8
	bx r0	@ 000da0f8 0047
