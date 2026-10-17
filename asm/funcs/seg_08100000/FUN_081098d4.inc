@ FUN_081098d4  entry 0x081098d4  size 76
.thumb
.org 0x1098d4
FUN_081098d4:
	push {r4, r5, r6, lr}	@ 001098d4 70b5
.org 0x1098d6
	adds r5, r0, #0	@ 001098d6 051c
.org 0x1098d8
	adds r6, r1, #0	@ 001098d8 0e1c
.org 0x1098da
	lsls r2, r2, #24	@ 001098da 1206
.org 0x1098dc
	lsrs r4, r2, #24	@ 001098dc 140e
.org 0x1098de
	ldr r0, [pc, #64]	@ 001098de 1048
.org 0x1098e0
	ldr r0, [r0, #0]	@ 001098e0 0068
.org 0x1098e2
	bl 0x5500	@ 001098e2 fbf60dfe
.org 0x1098e6
	adds r3, r0, #0	@ 001098e6 031c
.org 0x1098e8
	cmp r3, #0	@ 001098e8 002b
.org 0x1098ea
	beq.n 0x109918	@ 001098ea 15d0
.org 0x1098ec
	adds r1, r3, #0	@ 001098ec 191c
.org 0x1098ee
	adds r1, #37	@ 001098ee 2531
.org 0x1098f0
	movs r2, #0	@ 001098f0 0022
.org 0x1098f2
	movs r0, #16	@ 001098f2 1020
.org 0x1098f4
	strb r0, [r1, #0]	@ 001098f4 0870
.org 0x1098f6
	ldr r1, [pc, #44]	@ 001098f6 0b49
.org 0x1098f8
	movs r0, #1	@ 001098f8 0120
.org 0x1098fa
	strb r0, [r3, #9]	@ 001098fa 5872
.org 0x1098fc
	ldr r0, [r1, #4]	@ 001098fc 4868
.org 0x1098fe
	ldr r0, [r0, #0]	@ 001098fe 0068
.org 0x109900
	str r0, [r3, #20]	@ 00109900 5861
.org 0x109902
	movs r1, #0	@ 00109902 0021
.org 0x109904
	strh r2, [r3, #32]	@ 00109904 1a84
.org 0x109906
	adds r0, r3, #0	@ 00109906 181c
.org 0x109908
	adds r0, #34	@ 00109908 2230
.org 0x10990a
	strb r1, [r0, #0]	@ 0010990a 0170
.org 0x10990c
	adds r0, #146	@ 0010990c 9230
.org 0x10990e
	str r5, [r0, #0]	@ 0010990e 0560
.org 0x109910
	adds r0, #4	@ 00109910 0430
.org 0x109912
	str r6, [r0, #0]	@ 00109912 0660
.org 0x109914
	strb r4, [r3, #16]	@ 00109914 1c74
.org 0x109916
	strb r1, [r3, #17]	@ 00109916 5974
.org 0x109918
	adds r0, r3, #0	@ 00109918 181c
.org 0x10991a
	pop {r4, r5, r6}	@ 0010991a 70bc
.org 0x10991c
	pop {r1}	@ 0010991c 02bc
.org 0x10991e
	bx r1	@ 0010991e 0847
