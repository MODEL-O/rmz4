@ FUN_0810d3c4  entry 0x0810d3c4  size 52
.thumb
.org 0x10d3c4
FUN_0810d3c4:
	push {r4, r5, r6, lr}	@ 0010d3c4 70b5
.org 0x10d3c6
	adds r6, r0, #0	@ 0010d3c6 061c
.org 0x10d3c8
	adds r3, r1, #0	@ 0010d3c8 0b1c
.org 0x10d3ca
	adds r4, r2, #0	@ 0010d3ca 141c
.org 0x10d3cc
	subs r2, r6, r3	@ 0010d3cc f21a
.org 0x10d3ce
	adds r0, r2, r4	@ 0010d3ce 1019
.org 0x10d3d0
	movs r5, #255	@ 0010d3d0 ff25
.org 0x10d3d2
	ands r0, r5	@ 0010d3d2 2840
.org 0x10d3d4
	lsls r1, r4, #1	@ 0010d3d4 6100
.org 0x10d3d6
	cmp r0, r1	@ 0010d3d6 8842
.org 0x10d3d8
	bhi.n 0x10d3de	@ 0010d3d8 01d8
.org 0x10d3da
	adds r3, r6, #0	@ 0010d3da 331c
.org 0x10d3dc
	b.n 0x10d3f0	@ 0010d3dc 08e0
.org 0x10d3de
	ands r2, r5	@ 0010d3de 2a40
.org 0x10d3e0
	movs r0, #1	@ 0010d3e0 0120
.org 0x10d3e2
	negs r0, r0	@ 0010d3e2 4042
.org 0x10d3e4
	cmp r2, #127	@ 0010d3e4 7f2a
.org 0x10d3e6
	bgt.n 0x10d3ea	@ 0010d3e6 00dc
.org 0x10d3e8
	movs r0, #1	@ 0010d3e8 0120
.org 0x10d3ea
	muls r0, r4	@ 0010d3ea 6043
.org 0x10d3ec
	adds r3, r3, r0	@ 0010d3ec 1b18
.org 0x10d3ee
	ands r3, r5	@ 0010d3ee 2b40
.org 0x10d3f0
	adds r0, r3, #0	@ 0010d3f0 181c
.org 0x10d3f2
	pop {r4, r5, r6}	@ 0010d3f2 70bc
.org 0x10d3f4
	pop {r1}	@ 0010d3f4 02bc
.org 0x10d3f6
	bx r1	@ 0010d3f6 0847
