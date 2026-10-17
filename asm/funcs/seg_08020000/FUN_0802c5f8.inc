@ FUN_0802c5f8  entry 0x0802c5f8  size 50
.thumb
.org 0x2c5f8
FUN_0802c5f8:
	push {r4, r5, r6, lr}	@ 0002c5f8 70b5
.org 0x2c5fa
	adds r5, r0, #0	@ 0002c5fa 051c
.org 0x2c5fc
	adds r6, r1, #0	@ 0002c5fc 0e1c
.org 0x2c5fe
	lsls r2, r2, #24	@ 0002c5fe 1206
.org 0x2c600
	lsrs r4, r2, #24	@ 0002c600 140e
.org 0x2c602
	adds r2, r4, #0	@ 0002c602 221c
.org 0x2c604
	bl 0x2c62c	@ 0002c604 00f012f8
.org 0x2c608
	lsls r0, r0, #24	@ 0002c608 0006
.org 0x2c60a
	cmp r0, #0	@ 0002c60a 0028
.org 0x2c60c
	beq.n 0x2c622	@ 0002c60c 09d0
.org 0x2c60e
	adds r0, r5, #0	@ 0002c60e 281c
.org 0x2c610
	adds r1, r6, #0	@ 0002c610 311c
.org 0x2c612
	adds r2, r4, #0	@ 0002c612 221c
.org 0x2c614
	bl 0x2c670	@ 0002c614 00f02cf8
.org 0x2c618
	lsls r0, r0, #24	@ 0002c618 0006
.org 0x2c61a
	cmp r0, #0	@ 0002c61a 0028
.org 0x2c61c
	beq.n 0x2c622	@ 0002c61c 01d0
.org 0x2c61e
	movs r0, #1	@ 0002c61e 0120
.org 0x2c620
	b.n 0x2c624	@ 0002c620 00e0
.org 0x2c622
	movs r0, #0	@ 0002c622 0020
.org 0x2c624
	pop {r4, r5, r6}	@ 0002c624 70bc
.org 0x2c626
	pop {r1}	@ 0002c626 02bc
.org 0x2c628
	bx r1	@ 0002c628 0847
