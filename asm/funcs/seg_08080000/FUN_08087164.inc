@ FUN_08087164  entry 0x08087164  size 26
.thumb
.org 0x87164
FUN_08087164:
	push {lr}	@ 00087164 00b5
.org 0x87166
	adds r2, r0, #0	@ 00087166 021c
.org 0x87168
	adds r0, #185	@ 00087168 b930
.org 0x8716a
	ldrb r0, [r0, #0]	@ 0008716a 0078
.org 0x8716c
	cmp r0, #0	@ 0008716c 0028
.org 0x8716e
	beq.n 0x8717a	@ 0008716e 04d0
.org 0x87170
	movs r1, #0	@ 00087170 0021
.org 0x87172
	movs r0, #7	@ 00087172 0720
.org 0x87174
	strb r0, [r2, #13]	@ 00087174 5073
.org 0x87176
	strb r1, [r2, #14]	@ 00087176 9173
.org 0x87178
	strb r1, [r2, #15]	@ 00087178 d173
.org 0x8717a
	pop {r0}	@ 0008717a 01bc
.org 0x8717c
	bx r0	@ 0008717c 0047
