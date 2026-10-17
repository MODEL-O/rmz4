@ FUN_080dfe98  entry 0x080dfe98  size 78
.thumb
.org 0xdfe98
FUN_080dfe98:
	push {r4, r5, r6, lr}	@ 000dfe98 70b5
.org 0xdfe9a
	adds r6, r0, #0	@ 000dfe9a 061c
.org 0xdfe9c
	lsls r1, r1, #24	@ 000dfe9c 0906
.org 0xdfe9e
	lsrs r5, r1, #24	@ 000dfe9e 0d0e
.org 0xdfea0
	lsls r2, r2, #24	@ 000dfea0 1206
.org 0xdfea2
	lsrs r4, r2, #24	@ 000dfea2 140e
.org 0xdfea4
	ldr r0, [pc, #64]	@ 000dfea4 1048
.org 0xdfea6
	ldr r0, [r0, #0]	@ 000dfea6 0068
.org 0xdfea8
	bl 0x5500	@ 000dfea8 25f72afb
.org 0xdfeac
	adds r3, r0, #0	@ 000dfeac 031c
.org 0xdfeae
	cmp r3, #0	@ 000dfeae 002b
.org 0xdfeb0
	beq.n 0xdfee0	@ 000dfeb0 16d0
.org 0xdfeb2
	adds r1, r3, #0	@ 000dfeb2 191c
.org 0xdfeb4
	adds r1, #37	@ 000dfeb4 2531
.org 0xdfeb6
	movs r2, #0	@ 000dfeb6 0022
.org 0xdfeb8
	movs r0, #1	@ 000dfeb8 0120
.org 0xdfeba
	strb r0, [r1, #0]	@ 000dfeba 0870
.org 0xdfebc
	ldr r0, [pc, #44]	@ 000dfebc 0b48
.org 0xdfebe
	movs r1, #54	@ 000dfebe 3621
.org 0xdfec0
	strb r1, [r3, #9]	@ 000dfec0 5972
.org 0xdfec2
	adds r0, #216	@ 000dfec2 d830
.org 0xdfec4
	ldr r0, [r0, #0]	@ 000dfec4 0068
.org 0xdfec6
	ldr r0, [r0, #0]	@ 000dfec6 0068
.org 0xdfec8
	str r0, [r3, #20]	@ 000dfec8 5861
.org 0xdfeca
	movs r0, #0	@ 000dfeca 0020
.org 0xdfecc
	strh r2, [r3, #32]	@ 000dfecc 1a84
.org 0xdfece
	adds r1, r3, #0	@ 000dfece 191c
.org 0xdfed0
	adds r1, #34	@ 000dfed0 2231
.org 0xdfed2
	strb r0, [r1, #0]	@ 000dfed2 0870
.org 0xdfed4
	ldr r0, [r6, #0]	@ 000dfed4 3068
.org 0xdfed6
	ldr r1, [r6, #4]	@ 000dfed6 7168
.org 0xdfed8
	str r0, [r3, #84]	@ 000dfed8 5865
.org 0xdfeda
	str r1, [r3, #88]	@ 000dfeda 9965
.org 0xdfedc
	strb r5, [r3, #16]	@ 000dfedc 1d74
.org 0xdfede
	strb r4, [r3, #17]	@ 000dfede 5c74
.org 0xdfee0
	pop {r4, r5, r6}	@ 000dfee0 70bc
.org 0xdfee2
	pop {r0}	@ 000dfee2 01bc
.org 0xdfee4
	bx r0	@ 000dfee4 0047
