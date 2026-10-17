@ FUN_081088d8  entry 0x081088d8  size 26
.thumb
.org 0x1088d8
FUN_081088d8:
	push {lr}	@ 001088d8 00b5
.org 0x1088da
	ldr r2, [r0, #44]	@ 001088da c26a
.org 0x1088dc
	ldr r0, [r0, #12]	@ 001088dc c068
.org 0x1088de
	ldr r1, [r0, #44]	@ 001088de c16a
.org 0x1088e0
	movs r0, #8	@ 001088e0 0820
.org 0x1088e2
	ldrsb r0, [r1, r0]	@ 001088e2 0856
.org 0x1088e4
	cmp r0, #0	@ 001088e4 0028
.org 0x1088e6
	bne.n 0x1088ee	@ 001088e6 02d1
.org 0x1088e8
	adds r0, r2, #0	@ 001088e8 101c
.org 0x1088ea
	adds r0, #184	@ 001088ea b830
.org 0x1088ec
	str r1, [r0, #0]	@ 001088ec 0160
.org 0x1088ee
	pop {r0}	@ 001088ee 01bc
.org 0x1088f0
	bx r0	@ 001088f0 0047
