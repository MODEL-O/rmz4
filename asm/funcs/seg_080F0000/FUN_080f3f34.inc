@ FUN_080f3f34  entry 0x080f3f34  size 48
.thumb
.org 0xf3f34
FUN_080f3f34:
	push {r4, lr}	@ 000f3f34 10b5
.org 0xf3f36
	adds r4, r0, #0	@ 000f3f36 041c
.org 0xf3f38
	bl 0x1cc9c	@ 000f3f38 28f7b0fe
.org 0xf3f3c
	ldr r1, [pc, #36]	@ 000f3f3c 0949
.org 0xf3f3e
	adds r0, r4, #0	@ 000f3f3e 201c
.org 0xf3f40
	bl 0x1cf00	@ 000f3f40 28f7deff
.org 0xf3f44
	ldrb r1, [r4, #10]	@ 000f3f44 a17a
.org 0xf3f46
	movs r0, #1	@ 000f3f46 0120
.org 0xf3f48
	movs r2, #0	@ 000f3f48 0022
.org 0xf3f4a
	orrs r0, r1	@ 000f3f4a 0843
.org 0xf3f4c
	strb r0, [r4, #10]	@ 000f3f4c a072
.org 0xf3f4e
	adds r0, r4, #0	@ 000f3f4e 201c
.org 0xf3f50
	adds r0, #181	@ 000f3f50 b530
.org 0xf3f52
	strb r2, [r0, #0]	@ 000f3f52 0270
.org 0xf3f54
	adds r0, #1	@ 000f3f54 0130
.org 0xf3f56
	strb r2, [r0, #0]	@ 000f3f56 0270
.org 0xf3f58
	adds r4, #37	@ 000f3f58 2534
.org 0xf3f5a
	movs r0, #14	@ 000f3f5a 0e20
.org 0xf3f5c
	strb r0, [r4, #0]	@ 000f3f5c 2070
.org 0xf3f5e
	pop {r4}	@ 000f3f5e 10bc
.org 0xf3f60
	pop {r0}	@ 000f3f60 01bc
.org 0xf3f62
	bx r0	@ 000f3f62 0047
