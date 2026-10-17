@ FUN_0808712c  entry 0x0808712c  size 26
.thumb
.org 0x8712c
FUN_0808712c:
	push {lr}	@ 0008712c 00b5
.org 0x8712e
	adds r2, r0, #0	@ 0008712e 021c
.org 0x87130
	adds r0, #185	@ 00087130 b930
.org 0x87132
	ldrb r0, [r0, #0]	@ 00087132 0078
.org 0x87134
	cmp r0, #0	@ 00087134 0028
.org 0x87136
	beq.n 0x87142	@ 00087136 04d0
.org 0x87138
	movs r1, #0	@ 00087138 0021
.org 0x8713a
	movs r0, #7	@ 0008713a 0720
.org 0x8713c
	strb r0, [r2, #13]	@ 0008713c 5073
.org 0x8713e
	strb r1, [r2, #14]	@ 0008713e 9173
.org 0x87140
	strb r1, [r2, #15]	@ 00087140 d173
.org 0x87142
	pop {r0}	@ 00087142 01bc
.org 0x87144
	bx r0	@ 00087144 0047
