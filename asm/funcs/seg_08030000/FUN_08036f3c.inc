@ FUN_08036f3c  entry 0x08036f3c  size 44
.thumb
.org 0x36f3c
FUN_08036f3c:
	push {r4, lr}	@ 00036f3c 10b5
.org 0x36f3e
	adds r4, r0, #0	@ 00036f3e 041c
.org 0x36f40
	bl 0x3a19c	@ 00036f40 03f02cf9
.org 0x36f44
	adds r1, r0, #0	@ 00036f44 011c
.org 0x36f46
	cmp r1, #0	@ 00036f46 0029
.org 0x36f48
	bne.n 0x36f54	@ 00036f48 04d1
.org 0x36f4a
	movs r2, #128	@ 00036f4a 8022
.org 0x36f4c
	lsls r2, r2, #1	@ 00036f4c 5200
.org 0x36f4e
	adds r0, r4, r2	@ 00036f4e a018
.org 0x36f50
	strb r1, [r0, #0]	@ 00036f50 0170
.org 0x36f52
	b.n 0x36f62	@ 00036f52 06e0
.org 0x36f54
	ldr r0, [pc, #16]	@ 00036f54 0448
.org 0x36f56
	adds r1, r4, r0	@ 00036f56 2118
.org 0x36f58
	movs r0, #1	@ 00036f58 0120
.org 0x36f5a
	strb r0, [r1, #0]	@ 00036f5a 0870
.org 0x36f5c
	adds r0, r4, #0	@ 00036f5c 201c
.org 0x36f5e
	bl 0x36f6c	@ 00036f5e 00f005f8
.org 0x36f62
	pop {r4}	@ 00036f62 10bc
.org 0x36f64
	pop {r0}	@ 00036f64 01bc
.org 0x36f66
	bx r0	@ 00036f66 0047
