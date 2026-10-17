@ FUN_080870f4  entry 0x080870f4  size 26
.thumb
.org 0x870f4
FUN_080870f4:
	push {lr}	@ 000870f4 00b5
.org 0x870f6
	adds r2, r0, #0	@ 000870f6 021c
.org 0x870f8
	adds r0, #185	@ 000870f8 b930
.org 0x870fa
	ldrb r0, [r0, #0]	@ 000870fa 0078
.org 0x870fc
	cmp r0, #0	@ 000870fc 0028
.org 0x870fe
	beq.n 0x8710a	@ 000870fe 04d0
.org 0x87100
	movs r1, #0	@ 00087100 0021
.org 0x87102
	movs r0, #7	@ 00087102 0720
.org 0x87104
	strb r0, [r2, #13]	@ 00087104 5073
.org 0x87106
	strb r1, [r2, #14]	@ 00087106 9173
.org 0x87108
	strb r1, [r2, #15]	@ 00087108 d173
.org 0x8710a
	pop {r0}	@ 0008710a 01bc
.org 0x8710c
	bx r0	@ 0008710c 0047
