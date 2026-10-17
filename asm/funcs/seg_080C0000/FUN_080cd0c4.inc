@ FUN_080cd0c4  entry 0x080cd0c4  size 38
.thumb
.org 0xcd0c4
FUN_080cd0c4:
	push {r4, lr}	@ 000cd0c4 10b5
.org 0xcd0c6
	adds r4, r0, #0	@ 000cd0c6 041c
.org 0xcd0c8
	adds r1, r4, #0	@ 000cd0c8 211c
.org 0xcd0ca
	adds r1, #84	@ 000cd0ca 5431
.org 0xcd0cc
	movs r0, #3	@ 000cd0cc 0320
.org 0xcd0ce
	bl 0xd0c88	@ 000cd0ce 03f0dbfd
.org 0xcd0d2
	ldr r1, [pc, #24]	@ 000cd0d2 0649
.org 0xcd0d4
	ldrb r0, [r4, #9]	@ 000cd0d4 607a
.org 0xcd0d6
	lsls r0, r0, #2	@ 000cd0d6 8000
.org 0xcd0d8
	adds r0, r0, r1	@ 000cd0d8 4018
.org 0xcd0da
	movs r1, #4	@ 000cd0da 0421
.org 0xcd0dc
	str r1, [r4, #12]	@ 000cd0dc e160
.org 0xcd0de
	ldr r0, [r0, #0]	@ 000cd0de 0068
.org 0xcd0e0
	ldr r0, [r0, #16]	@ 000cd0e0 0069
.org 0xcd0e2
	str r0, [r4, #20]	@ 000cd0e2 6061
.org 0xcd0e4
	pop {r4}	@ 000cd0e4 10bc
.org 0xcd0e6
	pop {r0}	@ 000cd0e6 01bc
.org 0xcd0e8
	bx r0	@ 000cd0e8 0047
