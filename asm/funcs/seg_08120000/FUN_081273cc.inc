@ FUN_081273cc  entry 0x081273cc  size 48
.thumb
.org 0x1273cc
FUN_081273cc:
	ldrb r1, [r4, #18]	@ 001273cc a17c
.org 0x1273ce
	movs r0, #20	@ 001273ce 1420
.org 0x1273d0
	ldrsb r2, [r4, r0]	@ 001273d0 2256
.org 0x1273d2
	movs r3, #128	@ 001273d2 8023
.org 0x1273d4
	adds r3, r3, r2	@ 001273d4 9b18
.org 0x1273d6
	muls r3, r1	@ 001273d6 4b43
.org 0x1273d8
	ldrb r0, [r5, #16]	@ 001273d8 287c
.org 0x1273da
	muls r0, r3	@ 001273da 5843
.org 0x1273dc
	asrs r0, r0, #14	@ 001273dc 8013
.org 0x1273de
	cmp r0, #255	@ 001273de ff28
.org 0x1273e0
	bls.n 0x1273e4	@ 001273e0 00d9
.org 0x1273e2
	movs r0, #255	@ 001273e2 ff20
.org 0x1273e4
	strb r0, [r4, #2]	@ 001273e4 a070
.org 0x1273e6
	movs r3, #127	@ 001273e6 7f23
.org 0x1273e8
	subs r3, r3, r2	@ 001273e8 9b1a
.org 0x1273ea
	muls r3, r1	@ 001273ea 4b43
.org 0x1273ec
	ldrb r0, [r5, #17]	@ 001273ec 687c
.org 0x1273ee
	muls r0, r3	@ 001273ee 5843
.org 0x1273f0
	asrs r0, r0, #14	@ 001273f0 8013
.org 0x1273f2
	cmp r0, #255	@ 001273f2 ff28
.org 0x1273f4
	bls.n 0x1273f8	@ 001273f4 00d9
.org 0x1273f6
	movs r0, #255	@ 001273f6 ff20
.org 0x1273f8
	strb r0, [r4, #3]	@ 001273f8 e070
.org 0x1273fa
	bx lr	@ 001273fa 7047
