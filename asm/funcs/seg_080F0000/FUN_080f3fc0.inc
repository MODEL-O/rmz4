@ FUN_080f3fc0  entry 0x080f3fc0  size 48
.thumb
.org 0xf3fc0
FUN_080f3fc0:
	push {r4, lr}	@ 000f3fc0 10b5
.org 0xf3fc2
	adds r4, r0, #0	@ 000f3fc2 041c
.org 0xf3fc4
	bl 0x1cc9c	@ 000f3fc4 28f76afe
.org 0xf3fc8
	ldr r1, [pc, #36]	@ 000f3fc8 0949
.org 0xf3fca
	adds r0, r4, #0	@ 000f3fca 201c
.org 0xf3fcc
	bl 0x1cf00	@ 000f3fcc 28f798ff
.org 0xf3fd0
	ldrb r1, [r4, #10]	@ 000f3fd0 a17a
.org 0xf3fd2
	movs r0, #1	@ 000f3fd2 0120
.org 0xf3fd4
	movs r2, #0	@ 000f3fd4 0022
.org 0xf3fd6
	orrs r0, r1	@ 000f3fd6 0843
.org 0xf3fd8
	strb r0, [r4, #10]	@ 000f3fd8 a072
.org 0xf3fda
	adds r0, r4, #0	@ 000f3fda 201c
.org 0xf3fdc
	adds r0, #181	@ 000f3fdc b530
.org 0xf3fde
	strb r2, [r0, #0]	@ 000f3fde 0270
.org 0xf3fe0
	adds r0, #1	@ 000f3fe0 0130
.org 0xf3fe2
	strb r2, [r0, #0]	@ 000f3fe2 0270
.org 0xf3fe4
	adds r4, #37	@ 000f3fe4 2534
.org 0xf3fe6
	movs r0, #14	@ 000f3fe6 0e20
.org 0xf3fe8
	strb r0, [r4, #0]	@ 000f3fe8 2070
.org 0xf3fea
	pop {r4}	@ 000f3fea 10bc
.org 0xf3fec
	pop {r0}	@ 000f3fec 01bc
.org 0xf3fee
	bx r0	@ 000f3fee 0047
