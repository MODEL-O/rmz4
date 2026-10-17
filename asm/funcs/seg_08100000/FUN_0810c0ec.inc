@ FUN_0810c0ec  entry 0x0810c0ec  size 72
.thumb
.org 0x10c0ec
FUN_0810c0ec:
	push {r4, r5, r6, lr}	@ 0010c0ec 70b5
.org 0x10c0ee
	adds r6, r0, #0	@ 0010c0ee 061c
.org 0x10c0f0
	lsls r1, r1, #24	@ 0010c0f0 0906
.org 0x10c0f2
	lsrs r5, r1, #24	@ 0010c0f2 0d0e
.org 0x10c0f4
	lsls r2, r2, #24	@ 0010c0f4 1206
.org 0x10c0f6
	lsrs r4, r2, #24	@ 0010c0f6 140e
.org 0x10c0f8
	ldr r0, [pc, #56]	@ 0010c0f8 0e48
.org 0x10c0fa
	ldr r0, [r0, #0]	@ 0010c0fa 0068
.org 0x10c0fc
	bl 0x5500	@ 0010c0fc f9f600fa
.org 0x10c100
	adds r3, r0, #0	@ 0010c100 031c
.org 0x10c102
	cmp r3, #0	@ 0010c102 002b
.org 0x10c104
	beq.n 0x10c12c	@ 0010c104 12d0
.org 0x10c106
	adds r1, r3, #0	@ 0010c106 191c
.org 0x10c108
	adds r1, #37	@ 0010c108 2531
.org 0x10c10a
	movs r2, #0	@ 0010c10a 0022
.org 0x10c10c
	movs r0, #16	@ 0010c10c 1020
.org 0x10c10e
	strb r0, [r1, #0]	@ 0010c10e 0870
.org 0x10c110
	ldr r1, [pc, #36]	@ 0010c110 0949
.org 0x10c112
	movs r0, #8	@ 0010c112 0820
.org 0x10c114
	strb r0, [r3, #9]	@ 0010c114 5872
.org 0x10c116
	ldr r0, [r1, #32]	@ 0010c116 086a
.org 0x10c118
	ldr r0, [r0, #0]	@ 0010c118 0068
.org 0x10c11a
	str r0, [r3, #20]	@ 0010c11a 5861
.org 0x10c11c
	movs r0, #0	@ 0010c11c 0020
.org 0x10c11e
	strh r2, [r3, #32]	@ 0010c11e 1a84
.org 0x10c120
	adds r1, r3, #0	@ 0010c120 191c
.org 0x10c122
	adds r1, #34	@ 0010c122 2231
.org 0x10c124
	strb r0, [r1, #0]	@ 0010c124 0870
.org 0x10c126
	str r6, [r3, #40]	@ 0010c126 9e62
.org 0x10c128
	strb r5, [r3, #16]	@ 0010c128 1d74
.org 0x10c12a
	strb r4, [r3, #17]	@ 0010c12a 5c74
.org 0x10c12c
	adds r0, r3, #0	@ 0010c12c 181c
.org 0x10c12e
	pop {r4, r5, r6}	@ 0010c12e 70bc
.org 0x10c130
	pop {r1}	@ 0010c130 02bc
.org 0x10c132
	bx r1	@ 0010c132 0847
