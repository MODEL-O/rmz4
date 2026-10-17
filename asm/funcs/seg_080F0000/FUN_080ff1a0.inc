@ FUN_080ff1a0  entry 0x080ff1a0  size 62
.thumb
.org 0xff1a0
FUN_080ff1a0:
	push {r2, r3, r4, r7, lr}	@ 000ff1a0 9cb5
.org 0xff1a2
	lsrs r6, r0, #2	@ 000ff1a2 8608
.org 0xff1a4
	blt.n 0xff188	@ 000ff1a4 f0db
.org 0xff1a6
	lsls r2, r0, #8	@ 000ff1a6 0202
.org 0xff1a8
	lsls r0, r3, #24	@ 000ff1a8 1806
.org 0xff1aa
	lsrs r4, r0, #24	@ 000ff1aa 040e
.org 0xff1ac
	adds r0, r7, #0	@ 000ff1ac 381c
.org 0xff1ae
	mov r1, ip	@ 000ff1ae 6146
.org 0xff1b0
	movs r2, #0	@ 000ff1b0 0022
.org 0xff1b2
	adds r3, r4, #0	@ 000ff1b2 231c
.org 0xff1b4
	bl 0xd4c8c	@ 000ff1b4 d5f76afd
.org 0xff1b8
	ldr r7, [pc, #36]	@ 000ff1b8 094f
.org 0xff1ba
	ldrb r1, [r5, #10]	@ 000ff1ba a97a
.org 0xff1bc
	movs r2, #32	@ 000ff1bc 2022
.org 0xff1be
	adds r0, r2, #0	@ 000ff1be 101c
.org 0xff1c0
	ands r0, r1	@ 000ff1c0 0840
.org 0xff1c2
	lsls r0, r0, #24	@ 000ff1c2 0006
.org 0xff1c4
	lsrs r0, r0, #24	@ 000ff1c4 000e
.org 0xff1c6
	negs r0, r0	@ 000ff1c6 4042
.org 0xff1c8
	asrs r3, r0, #31	@ 000ff1c8 c317
.org 0xff1ca
	ands r3, r2	@ 000ff1ca 1340
.org 0xff1cc
	ldr r0, [pc, #20]	@ 000ff1cc 0548
.org 0xff1ce
	ldr r0, [r0, #0]	@ 000ff1ce 0068
.org 0xff1d0
	ldr r1, [r5, #84]	@ 000ff1d0 696d
.org 0xff1d2
	ldr r0, [r0, #84]	@ 000ff1d2 406d
.org 0xff1d4
	cmp r1, r0	@ 000ff1d4 8142
.org 0xff1d6
	blt.n 0xff1e8	@ 000ff1d6 07db
.org 0xff1d8
	movs r4, #1	@ 000ff1d8 0124
.org 0xff1da
	orrs r4, r3	@ 000ff1da 1c43
.org 0xff1dc
	b.n 0xff1ec	@ 000ff1dc 06e0
