@ FUN_080caeb4  entry 0x080caeb4  size 78
.thumb
.org 0xcaeb4
FUN_080caeb4:
	push {r4, r5, r6, lr}	@ 000caeb4 70b5
.org 0xcaeb6
	adds r6, r0, #0	@ 000caeb6 061c
.org 0xcaeb8
	lsls r1, r1, #24	@ 000caeb8 0906
.org 0xcaeba
	lsrs r5, r1, #24	@ 000caeba 0d0e
.org 0xcaebc
	lsls r2, r2, #24	@ 000caebc 1206
.org 0xcaebe
	lsrs r4, r2, #24	@ 000caebe 140e
.org 0xcaec0
	ldr r0, [pc, #64]	@ 000caec0 1048
.org 0xcaec2
	ldr r0, [r0, #0]	@ 000caec2 0068
.org 0xcaec4
	bl 0x5500	@ 000caec4 3af71cfb
.org 0xcaec8
	adds r3, r0, #0	@ 000caec8 031c
.org 0xcaeca
	cmp r3, #0	@ 000caeca 002b
.org 0xcaecc
	beq.n 0xcaefc	@ 000caecc 16d0
.org 0xcaece
	adds r1, r3, #0	@ 000caece 191c
.org 0xcaed0
	adds r1, #37	@ 000caed0 2531
.org 0xcaed2
	movs r2, #0	@ 000caed2 0022
.org 0xcaed4
	movs r0, #8	@ 000caed4 0820
.org 0xcaed6
	strb r0, [r1, #0]	@ 000caed6 0870
.org 0xcaed8
	ldr r0, [pc, #44]	@ 000caed8 0b48
.org 0xcaeda
	movs r1, #38	@ 000caeda 2621
.org 0xcaedc
	strb r1, [r3, #9]	@ 000caedc 5972
.org 0xcaede
	adds r0, #152	@ 000caede 9830
.org 0xcaee0
	ldr r0, [r0, #0]	@ 000caee0 0068
.org 0xcaee2
	ldr r0, [r0, #0]	@ 000caee2 0068
.org 0xcaee4
	str r0, [r3, #20]	@ 000caee4 5861
.org 0xcaee6
	movs r0, #0	@ 000caee6 0020
.org 0xcaee8
	strh r2, [r3, #32]	@ 000caee8 1a84
.org 0xcaeea
	adds r1, r3, #0	@ 000caeea 191c
.org 0xcaeec
	adds r1, #34	@ 000caeec 2231
.org 0xcaeee
	strb r0, [r1, #0]	@ 000caeee 0870
.org 0xcaef0
	ldr r0, [r6, #0]	@ 000caef0 3068
.org 0xcaef2
	ldr r1, [r6, #4]	@ 000caef2 7168
.org 0xcaef4
	str r0, [r3, #84]	@ 000caef4 5865
.org 0xcaef6
	str r1, [r3, #88]	@ 000caef6 9965
.org 0xcaef8
	strb r5, [r3, #16]	@ 000caef8 1d74
.org 0xcaefa
	strb r4, [r3, #17]	@ 000caefa 5c74
.org 0xcaefc
	pop {r4, r5, r6}	@ 000caefc 70bc
.org 0xcaefe
	pop {r0}	@ 000caefe 01bc
.org 0xcaf00
	bx r0	@ 000caf00 0047
