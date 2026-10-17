@ FUN_0807f9f4  entry 0x0807f9f4  size 30
.thumb
.org 0x7f9f4
FUN_0807f9f4:
	push {lr}	@ 0007f9f4 00b5
.org 0x7f9f6
	lsls r1, r1, #24	@ 0007f9f6 0906
.org 0x7f9f8
	lsrs r1, r1, #24	@ 0007f9f8 090e
.org 0x7f9fa
	lsls r2, r2, #24	@ 0007f9fa 1206
.org 0x7f9fc
	lsrs r2, r2, #24	@ 0007f9fc 120e
.org 0x7f9fe
	lsls r3, r3, #24	@ 0007f9fe 1b06
.org 0x7fa00
	lsrs r3, r3, #24	@ 0007fa00 1b0e
.org 0x7fa02
	ldr r0, [pc, #16]	@ 0007fa02 0448
.org 0x7fa04
	ldr r0, [r0, #0]	@ 0007fa04 0068
.org 0x7fa06
	bl 0x1cc20	@ 0007fa06 9df70bf9
.org 0x7fa0a
	lsls r0, r0, #16	@ 0007fa0a 0004
.org 0x7fa0c
	lsrs r0, r0, #16	@ 0007fa0c 000c
.org 0x7fa0e
	pop {r1}	@ 0007fa0e 02bc
.org 0x7fa10
	bx r1	@ 0007fa10 0847
