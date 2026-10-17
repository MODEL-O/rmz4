@ FUN_0801dd7c  entry 0x0801dd7c  size 36
.thumb
.org 0x1dd7c
FUN_0801dd7c:
	push {r4, lr}	@ 0001dd7c 10b5
.org 0x1dd7e
	lsls r0, r0, #24	@ 0001dd7e 0006
.org 0x1dd80
	lsrs r0, r0, #24	@ 0001dd80 000e
.org 0x1dd82
	lsls r1, r1, #24	@ 0001dd82 0906
.org 0x1dd84
	lsrs r4, r1, #24	@ 0001dd84 0c0e
.org 0x1dd86
	cmp r0, #8	@ 0001dd86 0828
.org 0x1dd88
	bls.n 0x1dd8c	@ 0001dd88 00d9
.org 0x1dd8a
	b.n 0x1df28	@ 0001dd8a cde0
.org 0x1dd8c
	lsls r0, r0, #2	@ 0001dd8c 8000
.org 0x1dd8e
	ldr r1, [pc, #8]	@ 0001dd8e 0249
.org 0x1dd90
	adds r0, r0, r1	@ 0001dd90 4018
.org 0x1dd92
	ldr r0, [r0, #0]	@ 0001dd92 0068
.org 0x1dd94
	mov pc, r0	@ 0001dd94 8746
.org 0x1dd96
	.byte 0x00	@ 0001dd96 data
.org 0x1dd97
	.byte 0x00	@ 0001dd97 data
.org 0x1dd98
	.byte 0x9c,0xdd,0x01,0x08	@ 0001dd98 data
.org 0x1dd9c
	.byte 0xc0,0xdd,0x01,0x08	@ 0001dd9c data
