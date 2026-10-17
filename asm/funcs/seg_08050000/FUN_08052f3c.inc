@ FUN_08052f3c  entry 0x08052f3c  size 54
.thumb
.org 0x52f3c
FUN_08052f3c:
	push {r4, lr}	@ 00052f3c 10b5
.org 0x52f3e
	adds r4, r0, #0	@ 00052f3e 041c
.org 0x52f40
	ldrb r0, [r4, #14]	@ 00052f40 a07b
.org 0x52f42
	cmp r0, #0	@ 00052f42 0028
.org 0x52f44
	bne.n 0x52f54	@ 00052f44 06d1
.org 0x52f46
	ldr r1, [pc, #44]	@ 00052f46 0b49
.org 0x52f48
	adds r0, r4, #0	@ 00052f48 201c
.org 0x52f4a
	bl 0x1cf00	@ 00052f4a c9f7d9ff
.org 0x52f4e
	ldrb r0, [r4, #14]	@ 00052f4e a07b
.org 0x52f50
	adds r0, #1	@ 00052f50 0130
.org 0x52f52
	strb r0, [r4, #14]	@ 00052f52 a073
.org 0x52f54
	adds r0, r4, #0	@ 00052f54 201c
.org 0x52f56
	bl 0x1cff0	@ 00052f56 caf74bf8
.org 0x52f5a
	adds r0, r4, #0	@ 00052f5a 201c
.org 0x52f5c
	adds r0, #115	@ 00052f5c 7330
.org 0x52f5e
	ldrb r0, [r0, #0]	@ 00052f5e 0078
.org 0x52f60
	cmp r0, #3	@ 00052f60 0328
.org 0x52f62
	bne.n 0x52f6c	@ 00052f62 03d1
.org 0x52f64
	movs r1, #0	@ 00052f64 0021
.org 0x52f66
	movs r0, #4	@ 00052f66 0420
.org 0x52f68
	strb r0, [r4, #13]	@ 00052f68 6073
.org 0x52f6a
	strb r1, [r4, #14]	@ 00052f6a a173
.org 0x52f6c
	pop {r4}	@ 00052f6c 10bc
.org 0x52f6e
	pop {r0}	@ 00052f6e 01bc
.org 0x52f70
	bx r0	@ 00052f70 0047
