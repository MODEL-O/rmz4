@ FUN_080ff988  entry 0x080ff988  size 32
.thumb
.org 0xff988
FUN_080ff988:
	push {lr}	@ 000ff988 00b5
.org 0xff98a
	ldr r1, [r0, #12]	@ 000ff98a c168
.org 0xff98c
	ldr r2, [r1, #44]	@ 000ff98c ca6a
.org 0xff98e
	ldr r3, [r0, #44]	@ 000ff98e c36a
.org 0xff990
	ldr r0, [r0, #20]	@ 000ff990 4069
.org 0xff992
	movs r1, #4	@ 000ff992 0421
.org 0xff994
	ands r0, r1	@ 000ff994 0840
.org 0xff996
	cmp r0, #0	@ 000ff996 0028
.org 0xff998
	beq.n 0xff9a4	@ 000ff998 04d0
.org 0xff99a
	movs r0, #8	@ 000ff99a 0820
.org 0xff99c
	ldrsb r0, [r2, r0]	@ 000ff99c 1056
.org 0xff99e
	cmp r0, #0	@ 000ff99e 0028
.org 0xff9a0
	bne.n 0xff9a4	@ 000ff9a0 00d1
.org 0xff9a2
	str r2, [r3, #44]	@ 000ff9a2 da62
.org 0xff9a4
	pop {r0}	@ 000ff9a4 01bc
.org 0xff9a6
	bx r0	@ 000ff9a6 0047
