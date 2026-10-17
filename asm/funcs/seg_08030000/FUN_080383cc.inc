@ FUN_080383cc  entry 0x080383cc  size 36
.thumb
.org 0x383cc
FUN_080383cc:
	push {lr}	@ 000383cc 00b5
.org 0x383ce
	lsls r1, r1, #24	@ 000383ce 0906
.org 0x383d0
	lsrs r1, r1, #24	@ 000383d0 090e
.org 0x383d2
	adds r0, #248	@ 000383d2 f830
.org 0x383d4
	ldrb r0, [r0, #0]	@ 000383d4 0078
.org 0x383d6
	cmp r0, #1	@ 000383d6 0128
.org 0x383d8
	bhi.n 0x383e4	@ 000383d8 04d8
.org 0x383da
	movs r0, #0	@ 000383da 0020
.org 0x383dc
	bl 0x3a8f8	@ 000383dc 02f08cfa
.org 0x383e0
	movs r0, #1	@ 000383e0 0120
.org 0x383e2
	b.n 0x383ec	@ 000383e2 03e0
.org 0x383e4
	movs r0, #1	@ 000383e4 0120
.org 0x383e6
	bl 0x3a8f8	@ 000383e6 02f087fa
.org 0x383ea
	movs r0, #2	@ 000383ea 0220
.org 0x383ec
	pop {r1}	@ 000383ec 02bc
.org 0x383ee
	bx r1	@ 000383ee 0847
