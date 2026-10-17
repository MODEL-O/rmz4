@ FUN_080294dc  entry 0x080294dc  size 36
.thumb
.org 0x294dc
FUN_080294dc:
	push {r4, r5, r6, r7, lr}	@ 000294dc f0b5
.org 0x294de
	sub sp, #12	@ 000294de 83b0
.org 0x294e0
	adds r7, r0, #0	@ 000294e0 071c
.org 0x294e2
	ldr r0, [r7, #12]	@ 000294e2 f868
.org 0x294e4
	ldrb r0, [r0, #1]	@ 000294e4 4078
.org 0x294e6
	cmp r0, #11	@ 000294e6 0b28
.org 0x294e8
	bls.n 0x294ec	@ 000294e8 00d9
.org 0x294ea
	b.n 0x29b50	@ 000294ea 31e3
.org 0x294ec
	lsls r0, r0, #2	@ 000294ec 8000
.org 0x294ee
	ldr r1, [pc, #8]	@ 000294ee 0249
.org 0x294f0
	adds r0, r0, r1	@ 000294f0 4018
.org 0x294f2
	ldr r0, [r0, #0]	@ 000294f2 0068
.org 0x294f4
	mov pc, r0	@ 000294f4 8746
.org 0x294f6
	.byte 0x00	@ 000294f6 data
.org 0x294f7
	.byte 0x00	@ 000294f7 data
.org 0x294f8
	.byte 0xfc,0x94,0x02,0x08	@ 000294f8 data
.org 0x294fc
	.byte 0x2c,0x95,0x02,0x08	@ 000294fc data
