@ FUN_080e0dc0  entry 0x080e0dc0  size 94
.thumb
.org 0xe0dc0
FUN_080e0dc0:
	push {r4, r5, r6, lr}	@ 000e0dc0 70b5
.org 0xe0dc2
	adds r6, r0, #0	@ 000e0dc2 061c
.org 0xe0dc4
	lsls r1, r1, #24	@ 000e0dc4 0906
.org 0xe0dc6
	lsrs r4, r1, #24	@ 000e0dc6 0c0e
.org 0xe0dc8
	lsls r2, r2, #24	@ 000e0dc8 1206
.org 0xe0dca
	lsrs r5, r2, #24	@ 000e0dca 150e
.org 0xe0dcc
	ldr r0, [pc, #80]	@ 000e0dcc 1448
.org 0xe0dce
	ldr r0, [r0, #0]	@ 000e0dce 0068
.org 0xe0dd0
	bl 0x5500	@ 000e0dd0 24f796fb
.org 0xe0dd4
	adds r3, r0, #0	@ 000e0dd4 031c
.org 0xe0dd6
	cmp r3, #0	@ 000e0dd6 002b
.org 0xe0dd8
	beq.n 0xe0e16	@ 000e0dd8 1dd0
.org 0xe0dda
	adds r1, r3, #0	@ 000e0dda 191c
.org 0xe0ddc
	adds r1, #37	@ 000e0ddc 2531
.org 0xe0dde
	movs r2, #0	@ 000e0dde 0022
.org 0xe0de0
	movs r0, #1	@ 000e0de0 0120
.org 0xe0de2
	strb r0, [r1, #0]	@ 000e0de2 0870
.org 0xe0de4
	ldr r0, [pc, #60]	@ 000e0de4 0f48
.org 0xe0de6
	movs r1, #58	@ 000e0de6 3a21
.org 0xe0de8
	strb r1, [r3, #9]	@ 000e0de8 5972
.org 0xe0dea
	adds r0, #232	@ 000e0dea e830
.org 0xe0dec
	ldr r0, [r0, #0]	@ 000e0dec 0068
.org 0xe0dee
	ldr r0, [r0, #0]	@ 000e0dee 0068
.org 0xe0df0
	str r0, [r3, #20]	@ 000e0df0 5861
.org 0xe0df2
	movs r0, #0	@ 000e0df2 0020
.org 0xe0df4
	strh r2, [r3, #32]	@ 000e0df4 1a84
.org 0xe0df6
	adds r1, r3, #0	@ 000e0df6 191c
.org 0xe0df8
	adds r1, #34	@ 000e0df8 2231
.org 0xe0dfa
	strb r0, [r1, #0]	@ 000e0dfa 0870
.org 0xe0dfc
	ldr r0, [r6, #0]	@ 000e0dfc 3068
.org 0xe0dfe
	ldr r1, [r6, #4]	@ 000e0dfe 7168
.org 0xe0e00
	str r0, [r3, #84]	@ 000e0e00 5865
.org 0xe0e02
	str r1, [r3, #88]	@ 000e0e02 9965
.org 0xe0e04
	strb r4, [r3, #16]	@ 000e0e04 1c74
.org 0xe0e06
	strb r5, [r3, #17]	@ 000e0e06 5d74
.org 0xe0e08
	cmp r4, #1	@ 000e0e08 012c
.org 0xe0e0a
	bne.n 0xe0e16	@ 000e0e0a 04d1
.org 0xe0e0c
	ldr r1, [pc, #24]	@ 000e0e0c 0649
.org 0xe0e0e
	adds r1, #38	@ 000e0e0e 2631
.org 0xe0e10
	ldrb r0, [r1, #0]	@ 000e0e10 0878
.org 0xe0e12
	adds r0, #1	@ 000e0e12 0130
.org 0xe0e14
	strb r0, [r1, #0]	@ 000e0e14 0870
.org 0xe0e16
	adds r0, r3, #0	@ 000e0e16 181c
.org 0xe0e18
	pop {r4, r5, r6}	@ 000e0e18 70bc
.org 0xe0e1a
	pop {r1}	@ 000e0e1a 02bc
.org 0xe0e1c
	bx r1	@ 000e0e1c 0847
