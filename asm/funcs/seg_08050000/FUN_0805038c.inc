@ FUN_0805038c  entry 0x0805038c  size 24
.thumb
.org 0x5038c
FUN_0805038c:
	push {lr}	@ 0005038c 00b5
.org 0x5038e
	adds r1, r0, #0	@ 0005038e 011c
.org 0x50390
	ldr r0, [pc, #16]	@ 00050390 0448
.org 0x50392
	ldr r0, [r0, #0]	@ 00050392 0068
.org 0x50394
	adds r1, #84	@ 00050394 5431
.org 0x50396
	bl 0x1cb30	@ 00050396 ccf7cbfb
.org 0x5039a
	cmp r0, #0	@ 0005039a 0028
.org 0x5039c
	bne.n 0x503a0	@ 0005039c 00d1
.org 0x5039e
	movs r0, #0	@ 0005039e 0020
.org 0x503a0
	pop {r1}	@ 000503a0 02bc
.org 0x503a2
	bx r1	@ 000503a2 0847
