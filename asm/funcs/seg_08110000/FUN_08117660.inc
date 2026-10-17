@ FUN_08117660  entry 0x08117660  size 28
.thumb
.org 0x117660
FUN_08117660:
	push {r4, r5, r6, r7, lr}	@ 00117660 f0b5
.org 0x117662
	adds r5, r0, #0	@ 00117662 051c
.org 0x117664
	ldrb r0, [r5, #3]	@ 00117664 e878
.org 0x117666
	cmp r0, #21	@ 00117666 1528
.org 0x117668
	bls.n 0x11766c	@ 00117668 00d9
.org 0x11766a
	b.n 0x1178a0	@ 0011766a 19e1
.org 0x11766c
	lsls r0, r0, #2	@ 0011766c 8000
.org 0x11766e
	ldr r1, [pc, #8]	@ 0011766e 0249
.org 0x117670
	adds r0, r0, r1	@ 00117670 4018
.org 0x117672
	ldr r0, [r0, #0]	@ 00117672 0068
.org 0x117674
	mov pc, r0	@ 00117674 8746
.org 0x117676
	.byte 0x00	@ 00117676 data
.org 0x117677
	.byte 0x00	@ 00117677 data
.org 0x117678
	.byte 0x7c,0x76,0x11,0x08	@ 00117678 data
