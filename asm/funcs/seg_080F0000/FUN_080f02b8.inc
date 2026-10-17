@ FUN_080f02b8  entry 0x080f02b8  size 48
.thumb
.org 0xf02b8
FUN_080f02b8:
	push {r4, lr}	@ 000f02b8 10b5
.org 0xf02ba
	adds r4, r0, #0	@ 000f02ba 041c
.org 0xf02bc
	ldrb r1, [r4, #10]	@ 000f02bc a17a
.org 0xf02be
	movs r0, #2	@ 000f02be 0220
.org 0xf02c0
	orrs r0, r1	@ 000f02c0 0843
.org 0xf02c2
	strb r0, [r4, #10]	@ 000f02c2 a072
.org 0xf02c4
	adds r0, r4, #0	@ 000f02c4 201c
.org 0xf02c6
	bl 0x1cc9c	@ 000f02c6 2cf7e9fc
.org 0xf02ca
	ldr r1, [pc, #28]	@ 000f02ca 0749
.org 0xf02cc
	ldrb r0, [r4, #9]	@ 000f02cc 607a
.org 0xf02ce
	lsls r0, r0, #2	@ 000f02ce 8000
.org 0xf02d0
	adds r0, r0, r1	@ 000f02d0 4018
.org 0xf02d2
	movs r1, #1	@ 000f02d2 0121
.org 0xf02d4
	str r1, [r4, #12]	@ 000f02d4 e160
.org 0xf02d6
	ldr r0, [r0, #0]	@ 000f02d6 0068
.org 0xf02d8
	ldr r0, [r0, #4]	@ 000f02d8 4068
.org 0xf02da
	str r0, [r4, #20]	@ 000f02da 6061
.org 0xf02dc
	adds r0, r4, #0	@ 000f02dc 201c
.org 0xf02de
	bl 0xed7c8	@ 000f02de fdf773fa
.org 0xf02e2
	pop {r4}	@ 000f02e2 10bc
.org 0xf02e4
	pop {r0}	@ 000f02e4 01bc
.org 0xf02e6
	bx r0	@ 000f02e6 0047
