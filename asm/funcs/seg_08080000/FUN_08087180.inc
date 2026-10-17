@ FUN_08087180  entry 0x08087180  size 26
.thumb
.org 0x87180
FUN_08087180:
	push {lr}	@ 00087180 00b5
.org 0x87182
	adds r2, r0, #0	@ 00087182 021c
.org 0x87184
	adds r0, #185	@ 00087184 b930
.org 0x87186
	ldrb r0, [r0, #0]	@ 00087186 0078
.org 0x87188
	cmp r0, #0	@ 00087188 0028
.org 0x8718a
	beq.n 0x87196	@ 0008718a 04d0
.org 0x8718c
	movs r1, #0	@ 0008718c 0021
.org 0x8718e
	movs r0, #7	@ 0008718e 0720
.org 0x87190
	strb r0, [r2, #13]	@ 00087190 5073
.org 0x87192
	strb r1, [r2, #14]	@ 00087192 9173
.org 0x87194
	strb r1, [r2, #15]	@ 00087194 d173
.org 0x87196
	pop {r0}	@ 00087196 01bc
.org 0x87198
	bx r0	@ 00087198 0047
