@ FUN_08018c80  entry 0x08018c80  size 44
.thumb
.org 0x18c80
FUN_08018c80:
	push {lr}	@ 00018c80 00b5
.org 0x18c82
	adds r3, r0, #0	@ 00018c82 031c
.org 0x18c84
	ldrb r0, [r3, #14]	@ 00018c84 987b
.org 0x18c86
	cmp r0, #0	@ 00018c86 0028
.org 0x18c88
	bne.n 0x18ca8	@ 00018c88 0ed1
.org 0x18c8a
	ldr r0, [r3, #92]	@ 00018c8a d86d
.org 0x18c8c
	lsls r0, r0, #16	@ 00018c8c 0004
.org 0x18c8e
	lsrs r0, r0, #20	@ 00018c8e 000d
.org 0x18c90
	lsls r0, r0, #1	@ 00018c90 4000
.org 0x18c92
	ldr r1, [pc, #24]	@ 00018c92 0649
.org 0x18c94
	adds r0, r0, r1	@ 00018c94 4018
.org 0x18c96
	ldrh r2, [r0, #0]	@ 00018c96 0288
.org 0x18c98
	ldr r1, [pc, #20]	@ 00018c98 0549
.org 0x18c9a
	ands r1, r2	@ 00018c9a 1140
.org 0x18c9c
	movs r2, #1	@ 00018c9c 0122
.org 0x18c9e
	orrs r1, r2	@ 00018c9e 1143
.org 0x18ca0
	strh r1, [r0, #0]	@ 00018ca0 0180
.org 0x18ca2
	ldrb r0, [r3, #14]	@ 00018ca2 987b
.org 0x18ca4
	adds r0, #1	@ 00018ca4 0130
.org 0x18ca6
	strb r0, [r3, #14]	@ 00018ca6 9873
.org 0x18ca8
	pop {r0}	@ 00018ca8 01bc
.org 0x18caa
	bx r0	@ 00018caa 0047
