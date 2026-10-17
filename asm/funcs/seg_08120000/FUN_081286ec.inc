@ FUN_081286ec  entry 0x081286ec  size 34
.thumb
.org 0x1286ec
FUN_081286ec:
	push {r4, lr}	@ 001286ec 10b5
.org 0x1286ee
	adds r2, r0, #0	@ 001286ee 021c
.org 0x1286f0
	lsls r1, r1, #16	@ 001286f0 0904
.org 0x1286f2
	lsrs r1, r1, #16	@ 001286f2 090c
.org 0x1286f4
	ldr r3, [r2, #52]	@ 001286f4 536b
.org 0x1286f6
	ldr r0, [pc, #24]	@ 001286f6 0648
.org 0x1286f8
	cmp r3, r0	@ 001286f8 8342
.org 0x1286fa
	bne.n 0x128708	@ 001286fa 05d1
.org 0x1286fc
	strh r1, [r2, #30]	@ 001286fc d183
.org 0x1286fe
	ldrh r4, [r2, #28]	@ 001286fe 948b
.org 0x128700
	adds r0, r1, #0	@ 00128700 081c
.org 0x128702
	muls r0, r4	@ 00128702 6043
.org 0x128704
	asrs r0, r0, #8	@ 00128704 0012
.org 0x128706
	strh r0, [r2, #32]	@ 00128706 1084
.org 0x128708
	pop {r4}	@ 00128708 10bc
.org 0x12870a
	pop {r0}	@ 0012870a 01bc
.org 0x12870c
	bx r0	@ 0012870c 0047
