@ FUN_08008f8c  entry 0x08008f8c  size 20
.thumb
.org 0x8f8c
FUN_08008f8c:
	push {lr}	@ 00008f8c 00b5
.org 0x8f8e
	asrs r0, r0, #2	@ 00008f8e 8010
.org 0x8f90
	subs r0, r1, r0	@ 00008f90 081a
.org 0x8f92
	cmp r0, #0	@ 00008f92 0028
.org 0x8f94
	bgt.n 0x8f9a	@ 00008f94 01dc
.org 0x8f96
	movs r0, #0	@ 00008f96 0020
.org 0x8f98
	b.n 0x8f9c	@ 00008f98 00e0
.org 0x8f9a
	negs r0, r0	@ 00008f9a 4042
.org 0x8f9c
	pop {r1}	@ 00008f9c 02bc
.org 0x8f9e
	bx r1	@ 00008f9e 0847
