@ FUN_080a51b8  entry 0x080a51b8  size 64
.thumb
.org 0xa51b8
FUN_080a51b8:
	push {r4, lr}	@ 000a51b8 10b5
.org 0xa51ba
	adds r4, r0, #0	@ 000a51ba 041c
.org 0xa51bc
	bl 0xa5294	@ 000a51bc 00f06af8
.org 0xa51c0
	ldrb r1, [r4, #10]	@ 000a51c0 a17a
.org 0xa51c2
	movs r0, #254	@ 000a51c2 fe20
.org 0xa51c4
	ands r0, r1	@ 000a51c4 0840
.org 0xa51c6
	movs r1, #0	@ 000a51c6 0021
.org 0xa51c8
	strb r0, [r4, #10]	@ 000a51c8 a072
.org 0xa51ca
	adds r0, r4, #0	@ 000a51ca 201c
.org 0xa51cc
	adds r0, #140	@ 000a51cc 8c30
.org 0xa51ce
	str r1, [r0, #0]	@ 000a51ce 0160
.org 0xa51d0
	adds r0, #4	@ 000a51d0 0430
.org 0xa51d2
	str r1, [r0, #0]	@ 000a51d2 0160
.org 0xa51d4
	adds r0, #4	@ 000a51d4 0430
.org 0xa51d6
	strb r1, [r0, #0]	@ 000a51d6 0170
.org 0xa51d8
	ldrb r1, [r4, #10]	@ 000a51d8 a17a
.org 0xa51da
	movs r0, #251	@ 000a51da fb20
.org 0xa51dc
	ands r0, r1	@ 000a51dc 0840
.org 0xa51de
	strb r0, [r4, #10]	@ 000a51de a072
.org 0xa51e0
	ldr r1, [pc, #20]	@ 000a51e0 0549
.org 0xa51e2
	ldrb r0, [r4, #9]	@ 000a51e2 607a
.org 0xa51e4
	lsls r0, r0, #2	@ 000a51e4 8000
.org 0xa51e6
	adds r0, r0, r1	@ 000a51e6 4018
.org 0xa51e8
	movs r1, #4	@ 000a51e8 0421
.org 0xa51ea
	str r1, [r4, #12]	@ 000a51ea e160
.org 0xa51ec
	ldr r0, [r0, #0]	@ 000a51ec 0068
.org 0xa51ee
	ldr r0, [r0, #16]	@ 000a51ee 0069
.org 0xa51f0
	str r0, [r4, #20]	@ 000a51f0 6061
.org 0xa51f2
	pop {r4}	@ 000a51f2 10bc
.org 0xa51f4
	pop {r0}	@ 000a51f4 01bc
.org 0xa51f6
	bx r0	@ 000a51f6 0047
