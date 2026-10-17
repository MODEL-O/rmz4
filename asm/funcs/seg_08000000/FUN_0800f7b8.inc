@ FUN_0800f7b8  entry 0x0800f7b8  size 24
.thumb
.org 0xf7b8
FUN_0800f7b8:
	push {lr}	@ 0000f7b8 00b5
.org 0xf7ba
	adds r3, r0, #0	@ 0000f7ba 031c
.org 0xf7bc
	ldrb r2, [r3, #14]	@ 0000f7bc 9a7b
.org 0xf7be
	cmp r2, #0	@ 0000f7be 002a
.org 0xf7c0
	bne.n 0xf7cc	@ 0000f7c0 04d1
.org 0xf7c2
	ldr r0, [pc, #12]	@ 0000f7c2 0348
.org 0xf7c4
	ldr r1, [pc, #12]	@ 0000f7c4 0349
.org 0xf7c6
	str r1, [r0, #0]	@ 0000f7c6 0160
.org 0xf7c8
	adds r0, r2, #1	@ 0000f7c8 501c
.org 0xf7ca
	strb r0, [r3, #14]	@ 0000f7ca 9873
.org 0xf7cc
	pop {r0}	@ 0000f7cc 01bc
.org 0xf7ce
	bx r0	@ 0000f7ce 0047
