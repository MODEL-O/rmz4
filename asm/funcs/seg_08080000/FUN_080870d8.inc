@ FUN_080870d8  entry 0x080870d8  size 26
.thumb
.org 0x870d8
FUN_080870d8:
	push {lr}	@ 000870d8 00b5
.org 0x870da
	adds r2, r0, #0	@ 000870da 021c
.org 0x870dc
	adds r0, #185	@ 000870dc b930
.org 0x870de
	ldrb r0, [r0, #0]	@ 000870de 0078
.org 0x870e0
	cmp r0, #0	@ 000870e0 0028
.org 0x870e2
	beq.n 0x870ee	@ 000870e2 04d0
.org 0x870e4
	movs r1, #0	@ 000870e4 0021
.org 0x870e6
	movs r0, #7	@ 000870e6 0720
.org 0x870e8
	strb r0, [r2, #13]	@ 000870e8 5073
.org 0x870ea
	strb r1, [r2, #14]	@ 000870ea 9173
.org 0x870ec
	strb r1, [r2, #15]	@ 000870ec d173
.org 0x870ee
	pop {r0}	@ 000870ee 01bc
.org 0x870f0
	bx r0	@ 000870f0 0047
