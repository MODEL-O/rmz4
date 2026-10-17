@ FUN_080c60d4  entry 0x080c60d4  size 76
.thumb
.org 0xc60d4
FUN_080c60d4:
	push {r4, r5, r6, lr}	@ 000c60d4 70b5
.org 0xc60d6
	adds r6, r0, #0	@ 000c60d6 061c
.org 0xc60d8
	lsls r1, r1, #24	@ 000c60d8 0906
.org 0xc60da
	lsrs r5, r1, #24	@ 000c60da 0d0e
.org 0xc60dc
	lsls r2, r2, #24	@ 000c60dc 1206
.org 0xc60de
	lsrs r4, r2, #24	@ 000c60de 140e
.org 0xc60e0
	ldr r0, [pc, #60]	@ 000c60e0 0f48
.org 0xc60e2
	ldr r0, [r0, #0]	@ 000c60e2 0068
.org 0xc60e4
	bl 0x5500	@ 000c60e4 3ff70cfa
.org 0xc60e8
	adds r3, r0, #0	@ 000c60e8 031c
.org 0xc60ea
	cmp r3, #0	@ 000c60ea 002b
.org 0xc60ec
	beq.n 0xc611a	@ 000c60ec 15d0
.org 0xc60ee
	adds r1, r3, #0	@ 000c60ee 191c
.org 0xc60f0
	adds r1, #37	@ 000c60f0 2531
.org 0xc60f2
	movs r2, #0	@ 000c60f2 0022
.org 0xc60f4
	movs r0, #8	@ 000c60f4 0820
.org 0xc60f6
	strb r0, [r1, #0]	@ 000c60f6 0870
.org 0xc60f8
	ldr r1, [pc, #40]	@ 000c60f8 0a49
.org 0xc60fa
	movs r0, #25	@ 000c60fa 1920
.org 0xc60fc
	strb r0, [r3, #9]	@ 000c60fc 5872
.org 0xc60fe
	ldr r0, [r1, #100]	@ 000c60fe 486e
.org 0xc6100
	ldr r0, [r0, #0]	@ 000c6100 0068
.org 0xc6102
	str r0, [r3, #20]	@ 000c6102 5861
.org 0xc6104
	movs r0, #0	@ 000c6104 0020
.org 0xc6106
	strh r2, [r3, #32]	@ 000c6106 1a84
.org 0xc6108
	adds r1, r3, #0	@ 000c6108 191c
.org 0xc610a
	adds r1, #34	@ 000c610a 2231
.org 0xc610c
	strb r0, [r1, #0]	@ 000c610c 0870
.org 0xc610e
	ldr r0, [r6, #0]	@ 000c610e 3068
.org 0xc6110
	ldr r1, [r6, #4]	@ 000c6110 7168
.org 0xc6112
	str r0, [r3, #84]	@ 000c6112 5865
.org 0xc6114
	str r1, [r3, #88]	@ 000c6114 9965
.org 0xc6116
	strb r5, [r3, #16]	@ 000c6116 1d74
.org 0xc6118
	strb r4, [r3, #17]	@ 000c6118 5c74
.org 0xc611a
	pop {r4, r5, r6}	@ 000c611a 70bc
.org 0xc611c
	pop {r0}	@ 000c611c 01bc
.org 0xc611e
	bx r0	@ 000c611e 0047
