@ FUN_0802b5c4  entry 0x0802b5c4  size 68
.thumb
.org 0x2b5c4
FUN_0802b5c4:
	push {r4, r5, r6, lr}	@ 0002b5c4 70b5
.org 0x2b5c6
	adds r6, r0, #0	@ 0002b5c6 061c
.org 0x2b5c8
	adds r5, r6, #0	@ 0002b5c8 351c
.org 0x2b5ca
	adds r5, #164	@ 0002b5ca a435
.org 0x2b5cc
	movs r0, #0	@ 0002b5cc 0020
.org 0x2b5ce
	ldrsh r4, [r5, r0]	@ 0002b5ce 2c5e
.org 0x2b5d0
	adds r0, r6, #0	@ 0002b5d0 301c
.org 0x2b5d2
	bl 0x2b61c	@ 0002b5d2 00f023f8
.org 0x2b5d6
	lsls r0, r0, #24	@ 0002b5d6 0006
.org 0x2b5d8
	lsrs r0, r0, #24	@ 0002b5d8 000e
.org 0x2b5da
	cmp r4, r0	@ 0002b5da 8442
.org 0x2b5dc
	bge.n 0x2b600	@ 0002b5dc 10da
.org 0x2b5de
	ldrh r0, [r5, #0]	@ 0002b5de 2888
.org 0x2b5e0
	adds r0, #1	@ 0002b5e0 0130
.org 0x2b5e2
	strh r0, [r5, #0]	@ 0002b5e2 2880
.org 0x2b5e4
	movs r0, #31	@ 0002b5e4 1f20
.org 0x2b5e6
	bl 0x2b10	@ 0002b5e6 d7f793fa
.org 0x2b5ea
	movs r0, #0	@ 0002b5ea 0020
.org 0x2b5ec
	ldrsh r4, [r5, r0]	@ 0002b5ec 2c5e
.org 0x2b5ee
	adds r0, r6, #0	@ 0002b5ee 301c
.org 0x2b5f0
	bl 0x2b61c	@ 0002b5f0 00f014f8
.org 0x2b5f4
	lsls r0, r0, #24	@ 0002b5f4 0006
.org 0x2b5f6
	lsrs r0, r0, #24	@ 0002b5f6 000e
.org 0x2b5f8
	cmp r4, r0	@ 0002b5f8 8442
.org 0x2b5fa
	beq.n 0x2b600	@ 0002b5fa 01d0
.org 0x2b5fc
	movs r0, #1	@ 0002b5fc 0120
.org 0x2b5fe
	b.n 0x2b602	@ 0002b5fe 00e0
.org 0x2b600
	movs r0, #0	@ 0002b600 0020
.org 0x2b602
	pop {r4, r5, r6}	@ 0002b602 70bc
.org 0x2b604
	pop {r1}	@ 0002b604 02bc
.org 0x2b606
	bx r1	@ 0002b606 0847
