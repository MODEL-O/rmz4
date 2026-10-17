@ FUN_08008f58  entry 0x08008f58  size 20
.thumb
.org 0x8f58
FUN_08008f58:
	push {lr}	@ 00008f58 00b5
.org 0x8f5a
	asrs r0, r0, #1	@ 00008f5a 4010
.org 0x8f5c
	subs r0, r1, r0	@ 00008f5c 081a
.org 0x8f5e
	cmp r0, #0	@ 00008f5e 0028
.org 0x8f60
	bgt.n 0x8f66	@ 00008f60 01dc
.org 0x8f62
	movs r0, #0	@ 00008f62 0020
.org 0x8f64
	b.n 0x8f68	@ 00008f64 00e0
.org 0x8f66
	negs r0, r0	@ 00008f66 4042
.org 0x8f68
	pop {r1}	@ 00008f68 02bc
.org 0x8f6a
	bx r1	@ 00008f6a 0847
