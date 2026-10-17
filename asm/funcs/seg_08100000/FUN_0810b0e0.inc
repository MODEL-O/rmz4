@ FUN_0810b0e0  entry 0x0810b0e0  size 70
.thumb
.org 0x10b0e0
FUN_0810b0e0:
	push {r4, r5, r6, lr}	@ 0010b0e0 70b5
.org 0x10b0e2
	adds r6, r0, #0	@ 0010b0e2 061c
.org 0x10b0e4
	lsls r1, r1, #24	@ 0010b0e4 0906
.org 0x10b0e6
	lsrs r5, r1, #24	@ 0010b0e6 0d0e
.org 0x10b0e8
	lsls r2, r2, #24	@ 0010b0e8 1206
.org 0x10b0ea
	lsrs r4, r2, #24	@ 0010b0ea 140e
.org 0x10b0ec
	ldr r0, [pc, #56]	@ 0010b0ec 0e48
.org 0x10b0ee
	ldr r0, [r0, #0]	@ 0010b0ee 0068
.org 0x10b0f0
	bl 0x5500	@ 0010b0f0 faf606fa
.org 0x10b0f4
	adds r3, r0, #0	@ 0010b0f4 031c
.org 0x10b0f6
	cmp r3, #0	@ 0010b0f6 002b
.org 0x10b0f8
	beq.n 0x10b120	@ 0010b0f8 12d0
.org 0x10b0fa
	adds r1, r3, #0	@ 0010b0fa 191c
.org 0x10b0fc
	adds r1, #37	@ 0010b0fc 2531
.org 0x10b0fe
	movs r2, #0	@ 0010b0fe 0022
.org 0x10b100
	movs r0, #16	@ 0010b100 1020
.org 0x10b102
	strb r0, [r1, #0]	@ 0010b102 0870
.org 0x10b104
	ldr r1, [pc, #36]	@ 0010b104 0949
.org 0x10b106
	movs r0, #5	@ 0010b106 0520
.org 0x10b108
	strb r0, [r3, #9]	@ 0010b108 5872
.org 0x10b10a
	ldr r0, [r1, #20]	@ 0010b10a 4869
.org 0x10b10c
	ldr r0, [r0, #0]	@ 0010b10c 0068
.org 0x10b10e
	str r0, [r3, #20]	@ 0010b10e 5861
.org 0x10b110
	movs r0, #0	@ 0010b110 0020
.org 0x10b112
	strh r2, [r3, #32]	@ 0010b112 1a84
.org 0x10b114
	adds r1, r3, #0	@ 0010b114 191c
.org 0x10b116
	adds r1, #34	@ 0010b116 2231
.org 0x10b118
	strb r0, [r1, #0]	@ 0010b118 0870
.org 0x10b11a
	str r6, [r3, #40]	@ 0010b11a 9e62
.org 0x10b11c
	strb r5, [r3, #16]	@ 0010b11c 1d74
.org 0x10b11e
	strb r4, [r3, #17]	@ 0010b11e 5c74
.org 0x10b120
	pop {r4, r5, r6}	@ 0010b120 70bc
.org 0x10b122
	pop {r0}	@ 0010b122 01bc
.org 0x10b124
	bx r0	@ 0010b124 0047
