@ FUN_081278e8  entry 0x081278e8  size 36
.thumb
.org 0x1278e8
FUN_081278e8:
	push {r4, r5, lr}	@ 001278e8 30b5
.org 0x1278ea
	ldr r0, [pc, #32]	@ 001278ea 0848
.org 0x1278ec
	lsls r0, r0, #16	@ 001278ec 0004
.org 0x1278ee
	lsrs r0, r0, #16	@ 001278ee 000c
.org 0x1278f0
	cmp r0, #0	@ 001278f0 0028
.org 0x1278f2
	beq.n 0x127906	@ 001278f2 08d0
.org 0x1278f4
	ldr r5, [pc, #24]	@ 001278f4 064d
.org 0x1278f6
	adds r4, r0, #0	@ 001278f6 041c
.org 0x1278f8
	ldr r0, [r5, #0]	@ 001278f8 2868
.org 0x1278fa
	bl 0x127f84	@ 001278fa 00f043fb
.org 0x1278fe
	adds r5, #12	@ 001278fe 0c35
.org 0x127900
	subs r4, #1	@ 00127900 013c
.org 0x127902
	cmp r4, #0	@ 00127902 002c
.org 0x127904
	bne.n 0x1278f8	@ 00127904 f8d1
.org 0x127906
	pop {r4, r5}	@ 00127906 30bc
.org 0x127908
	pop {r0}	@ 00127908 01bc
.org 0x12790a
	bx r0	@ 0012790a 0047
