@ FUN_0810f28c  entry 0x0810f28c  size 28
.thumb
.org 0x10f28c
FUN_0810f28c:
	push {r4, r5, r6, lr}	@ 0010f28c 70b5
.org 0x10f28e
	adds r6, r0, #0	@ 0010f28e 061c
.org 0x10f290
	ldrb r0, [r6, #13]	@ 0010f290 707b
.org 0x10f292
	cmp r0, #6	@ 0010f292 0628
.org 0x10f294
	bls.n 0x10f298	@ 0010f294 00d9
.org 0x10f296
	b.n 0x10f4f8	@ 0010f296 2fe1
.org 0x10f298
	lsls r0, r0, #2	@ 0010f298 8000
.org 0x10f29a
	ldr r1, [pc, #8]	@ 0010f29a 0249
.org 0x10f29c
	adds r0, r0, r1	@ 0010f29c 4018
.org 0x10f29e
	ldr r0, [r0, #0]	@ 0010f29e 0068
.org 0x10f2a0
	mov pc, r0	@ 0010f2a0 8746
.org 0x10f2a2
	.byte 0x00	@ 0010f2a2 data
.org 0x10f2a3
	.byte 0x00	@ 0010f2a3 data
.org 0x10f2a4
	.byte 0xa8,0xf2,0x10,0x08	@ 0010f2a4 data
