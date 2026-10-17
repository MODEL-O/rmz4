@ FUN_08087148  entry 0x08087148  size 26
.thumb
.org 0x87148
FUN_08087148:
	push {lr}	@ 00087148 00b5
.org 0x8714a
	adds r2, r0, #0	@ 0008714a 021c
.org 0x8714c
	adds r0, #185	@ 0008714c b930
.org 0x8714e
	ldrb r0, [r0, #0]	@ 0008714e 0078
.org 0x87150
	cmp r0, #0	@ 00087150 0028
.org 0x87152
	beq.n 0x8715e	@ 00087152 04d0
.org 0x87154
	movs r1, #0	@ 00087154 0021
.org 0x87156
	movs r0, #7	@ 00087156 0720
.org 0x87158
	strb r0, [r2, #13]	@ 00087158 5073
.org 0x8715a
	strb r1, [r2, #14]	@ 0008715a 9173
.org 0x8715c
	strb r1, [r2, #15]	@ 0008715c d173
.org 0x8715e
	pop {r0}	@ 0008715e 01bc
.org 0x87160
	bx r0	@ 00087160 0047
