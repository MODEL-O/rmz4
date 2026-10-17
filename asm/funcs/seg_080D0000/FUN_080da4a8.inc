@ FUN_080da4a8  entry 0x080da4a8  size 48
.thumb
.org 0xda4a8
FUN_080da4a8:
	push {r4, lr}	@ 000da4a8 10b5
.org 0xda4aa
	adds r4, r0, #0	@ 000da4aa 041c
.org 0xda4ac
	ldrb r1, [r4, #10]	@ 000da4ac a17a
.org 0xda4ae
	movs r0, #2	@ 000da4ae 0220
.org 0xda4b0
	orrs r0, r1	@ 000da4b0 0843
.org 0xda4b2
	strb r0, [r4, #10]	@ 000da4b2 a072
.org 0xda4b4
	adds r0, r4, #0	@ 000da4b4 201c
.org 0xda4b6
	bl 0xebf6c	@ 000da4b6 11f059fd
.org 0xda4ba
	ldr r1, [pc, #28]	@ 000da4ba 0749
.org 0xda4bc
	ldrb r0, [r4, #9]	@ 000da4bc 607a
.org 0xda4be
	lsls r0, r0, #2	@ 000da4be 8000
.org 0xda4c0
	adds r0, r0, r1	@ 000da4c0 4018
.org 0xda4c2
	movs r1, #1	@ 000da4c2 0121
.org 0xda4c4
	str r1, [r4, #12]	@ 000da4c4 e160
.org 0xda4c6
	ldr r0, [r0, #0]	@ 000da4c6 0068
.org 0xda4c8
	ldr r0, [r0, #4]	@ 000da4c8 4068
.org 0xda4ca
	str r0, [r4, #20]	@ 000da4ca 6061
.org 0xda4cc
	adds r0, r4, #0	@ 000da4cc 201c
.org 0xda4ce
	bl 0xda4dc	@ 000da4ce 00f005f8
.org 0xda4d2
	pop {r4}	@ 000da4d2 10bc
.org 0xda4d4
	pop {r0}	@ 000da4d4 01bc
.org 0xda4d6
	bx r0	@ 000da4d6 0047
