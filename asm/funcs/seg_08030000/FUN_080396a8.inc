@ FUN_080396a8  entry 0x080396a8  size 22
.thumb
.org 0x396a8
FUN_080396a8:
	push {lr}	@ 000396a8 00b5
.org 0x396aa
	bl 0x2b700	@ 000396aa f2f729f8
.org 0x396ae
	lsls r0, r0, #24	@ 000396ae 0006
.org 0x396b0
	cmp r0, #0	@ 000396b0 0028
.org 0x396b2
	bne.n 0x396b8	@ 000396b2 01d1
.org 0x396b4
	movs r0, #0	@ 000396b4 0020
.org 0x396b6
	b.n 0x396ba	@ 000396b6 00e0
.org 0x396b8
	movs r0, #1	@ 000396b8 0120
.org 0x396ba
	pop {r1}	@ 000396ba 02bc
.org 0x396bc
	bx r1	@ 000396bc 0847
