@ FUN_08087110  entry 0x08087110  size 26
.thumb
.org 0x87110
FUN_08087110:
	push {lr}	@ 00087110 00b5
.org 0x87112
	adds r2, r0, #0	@ 00087112 021c
.org 0x87114
	adds r0, #185	@ 00087114 b930
.org 0x87116
	ldrb r0, [r0, #0]	@ 00087116 0078
.org 0x87118
	cmp r0, #0	@ 00087118 0028
.org 0x8711a
	beq.n 0x87126	@ 0008711a 04d0
.org 0x8711c
	movs r1, #0	@ 0008711c 0021
.org 0x8711e
	movs r0, #7	@ 0008711e 0720
.org 0x87120
	strb r0, [r2, #13]	@ 00087120 5073
.org 0x87122
	strb r1, [r2, #14]	@ 00087122 9173
.org 0x87124
	strb r1, [r2, #15]	@ 00087124 d173
.org 0x87126
	pop {r0}	@ 00087126 01bc
.org 0x87128
	bx r0	@ 00087128 0047
