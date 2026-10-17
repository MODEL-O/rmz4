@ FUN_08005760  entry 0x08005760  size 36
.thumb
.org 0x5760
FUN_08005760:
	push {r4, r5, lr}	@ 00005760 30b5
.org 0x5762
	movs r4, #0	@ 00005762 0024
.org 0x5764
	str r4, [r0, #24]	@ 00005764 8461
.org 0x5766
	str r4, [r0, #28]	@ 00005766 c461
.org 0x5768
	adds r5, r0, #0	@ 00005768 051c
.org 0x576a
	adds r5, #32	@ 0000576a 2035
.org 0x576c
	strb r4, [r5, #0]	@ 0000576c 2c70
.org 0x576e
	str r2, [r0, #8]	@ 0000576e 8260
.org 0x5770
	strh r3, [r0, #48]	@ 00005770 0386
.org 0x5772
	str r4, [r0, #36]	@ 00005772 4462
.org 0x5774
	str r4, [r0, #40]	@ 00005774 8462
.org 0x5776
	str r4, [r0, #44]	@ 00005776 c462
.org 0x5778
	str r4, [r0, #32]	@ 00005778 0462
.org 0x577a
	bl 0x5784	@ 0000577a 00f003f8
.org 0x577e
	pop {r4, r5}	@ 0000577e 30bc
.org 0x5780
	pop {r0}	@ 00005780 01bc
.org 0x5782
	bx r0	@ 00005782 0047
