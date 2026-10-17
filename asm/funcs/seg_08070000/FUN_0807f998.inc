@ FUN_0807f998  entry 0x0807f998  size 24
.thumb
.org 0x7f998
FUN_0807f998:
	push {lr}	@ 0007f998 00b5
.org 0x7f99a
	adds r1, r0, #0	@ 0007f99a 011c
.org 0x7f99c
	ldr r0, [pc, #16]	@ 0007f99c 0448
.org 0x7f99e
	ldr r0, [r0, #0]	@ 0007f99e 0068
.org 0x7f9a0
	adds r1, #84	@ 0007f9a0 5431
.org 0x7f9a2
	bl 0x1cb30	@ 0007f9a2 9df7c5f8
.org 0x7f9a6
	cmp r0, #0	@ 0007f9a6 0028
.org 0x7f9a8
	bne.n 0x7f9ac	@ 0007f9a8 00d1
.org 0x7f9aa
	movs r0, #0	@ 0007f9aa 0020
.org 0x7f9ac
	pop {r1}	@ 0007f9ac 02bc
.org 0x7f9ae
	bx r1	@ 0007f9ae 0847
