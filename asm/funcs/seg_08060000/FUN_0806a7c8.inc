@ FUN_0806a7c8  entry 0x0806a7c8  size 42
.thumb
.org 0x6a7c8
FUN_0806a7c8:
	sub sp, #16	@ 0006a7c8 84b0
.org 0x6a7ca
	lsls r1, r1, #24	@ 0006a7ca 0906
.org 0x6a7cc
	adds r2, r0, #0	@ 0006a7cc 021c
.org 0x6a7ce
	adds r2, #216	@ 0006a7ce d832
.org 0x6a7d0
	ldr r2, [r2, #0]	@ 0006a7d0 1268
.org 0x6a7d2
	str r2, [sp, #0]	@ 0006a7d2 0092
.org 0x6a7d4
	ldr r3, [pc, #28]	@ 0006a7d4 074b
.org 0x6a7d6
	adds r2, r2, r3	@ 0006a7d6 d218
.org 0x6a7d8
	str r2, [sp, #4]	@ 0006a7d8 0192
.org 0x6a7da
	adds r0, #220	@ 0006a7da dc30
.org 0x6a7dc
	ldr r0, [r0, #0]	@ 0006a7dc 0068
.org 0x6a7de
	str r0, [sp, #8]	@ 0006a7de 0290
.org 0x6a7e0
	ldr r2, [pc, #20]	@ 0006a7e0 054a
.org 0x6a7e2
	adds r0, r0, r2	@ 0006a7e2 8018
.org 0x6a7e4
	str r0, [sp, #12]	@ 0006a7e4 0390
.org 0x6a7e6
	lsrs r1, r1, #22	@ 0006a7e6 890d
.org 0x6a7e8
	mov r3, sp	@ 0006a7e8 6b46
.org 0x6a7ea
	adds r0, r3, r1	@ 0006a7ea 5818
.org 0x6a7ec
	ldr r0, [r0, #0]	@ 0006a7ec 0068
.org 0x6a7ee
	add sp, #16	@ 0006a7ee 04b0
.org 0x6a7f0
	bx lr	@ 0006a7f0 7047
