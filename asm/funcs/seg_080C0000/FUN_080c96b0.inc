@ FUN_080c96b0  entry 0x080c96b0  size 38
.thumb
.org 0xc96b0
FUN_080c96b0:
	push {r4, lr}	@ 000c96b0 10b5
.org 0xc96b2
	adds r4, r0, #0	@ 000c96b2 041c
.org 0xc96b4
	adds r1, r4, #0	@ 000c96b4 211c
.org 0xc96b6
	adds r1, #84	@ 000c96b6 5431
.org 0xc96b8
	movs r0, #3	@ 000c96b8 0320
.org 0xc96ba
	bl 0xd0c88	@ 000c96ba 07f0e5fa
.org 0xc96be
	ldr r1, [pc, #24]	@ 000c96be 0649
.org 0xc96c0
	ldrb r0, [r4, #9]	@ 000c96c0 607a
.org 0xc96c2
	lsls r0, r0, #2	@ 000c96c2 8000
.org 0xc96c4
	adds r0, r0, r1	@ 000c96c4 4018
.org 0xc96c6
	movs r1, #4	@ 000c96c6 0421
.org 0xc96c8
	str r1, [r4, #12]	@ 000c96c8 e160
.org 0xc96ca
	ldr r0, [r0, #0]	@ 000c96ca 0068
.org 0xc96cc
	ldr r0, [r0, #16]	@ 000c96cc 0069
.org 0xc96ce
	str r0, [r4, #20]	@ 000c96ce 6061
.org 0xc96d0
	pop {r4}	@ 000c96d0 10bc
.org 0xc96d2
	pop {r0}	@ 000c96d2 01bc
.org 0xc96d4
	bx r0	@ 000c96d4 0047
