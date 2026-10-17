@ FUN_0803c400  entry 0x0803c400  size 26
.thumb
.org 0x3c400
FUN_0803c400:
	push {lr}	@ 0003c400 00b5
.org 0x3c402
	adds r0, #140	@ 0003c402 8c30
.org 0x3c404
	ldr r0, [r0, #0]	@ 0003c404 0068
.org 0x3c406
	movs r1, #128	@ 0003c406 8021
.org 0x3c408
	lsls r1, r1, #5	@ 0003c408 4901
.org 0x3c40a
	ands r0, r1	@ 0003c40a 0840
.org 0x3c40c
	cmp r0, #0	@ 0003c40c 0028
.org 0x3c40e
	bne.n 0x3c414	@ 0003c40e 01d1
.org 0x3c410
	movs r0, #0	@ 0003c410 0020
.org 0x3c412
	b.n 0x3c416	@ 0003c412 00e0
.org 0x3c414
	movs r0, #1	@ 0003c414 0120
.org 0x3c416
	pop {r1}	@ 0003c416 02bc
.org 0x3c418
	bx r1	@ 0003c418 0847
