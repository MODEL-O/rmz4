@ FUN_0810f500  entry 0x0810f500  size 28
.thumb
.org 0x10f500
FUN_0810f500:
	push {r4, r5, r6, lr}	@ 0010f500 70b5
.org 0x10f502
	adds r6, r0, #0	@ 0010f502 061c
.org 0x10f504
	ldrb r0, [r6, #13]	@ 0010f504 707b
.org 0x10f506
	cmp r0, #6	@ 0010f506 0628
.org 0x10f508
	bls.n 0x10f50c	@ 0010f508 00d9
.org 0x10f50a
	b.n 0x10f6ca	@ 0010f50a dee0
.org 0x10f50c
	lsls r0, r0, #2	@ 0010f50c 8000
.org 0x10f50e
	ldr r1, [pc, #8]	@ 0010f50e 0249
.org 0x10f510
	adds r0, r0, r1	@ 0010f510 4018
.org 0x10f512
	ldr r0, [r0, #0]	@ 0010f512 0068
.org 0x10f514
	mov pc, r0	@ 0010f514 8746
.org 0x10f516
	.byte 0x00	@ 0010f516 data
.org 0x10f517
	.byte 0x00	@ 0010f517 data
.org 0x10f518
	.byte 0x1c,0xf5,0x10,0x08	@ 0010f518 data
