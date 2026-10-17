@ FUN_08018c4c  entry 0x08018c4c  size 44
.thumb
.org 0x18c4c
FUN_08018c4c:
	push {lr}	@ 00018c4c 00b5
.org 0x18c4e
	adds r3, r0, #0	@ 00018c4e 031c
.org 0x18c50
	ldrb r0, [r3, #14]	@ 00018c50 987b
.org 0x18c52
	cmp r0, #0	@ 00018c52 0028
.org 0x18c54
	bne.n 0x18c74	@ 00018c54 0ed1
.org 0x18c56
	ldr r0, [r3, #92]	@ 00018c56 d86d
.org 0x18c58
	lsls r0, r0, #16	@ 00018c58 0004
.org 0x18c5a
	lsrs r0, r0, #20	@ 00018c5a 000d
.org 0x18c5c
	lsls r0, r0, #1	@ 00018c5c 4000
.org 0x18c5e
	ldr r1, [pc, #24]	@ 00018c5e 0649
.org 0x18c60
	adds r0, r0, r1	@ 00018c60 4018
.org 0x18c62
	ldrh r2, [r0, #0]	@ 00018c62 0288
.org 0x18c64
	ldr r1, [pc, #20]	@ 00018c64 0549
.org 0x18c66
	ands r1, r2	@ 00018c66 1140
.org 0x18c68
	movs r2, #3	@ 00018c68 0322
.org 0x18c6a
	orrs r1, r2	@ 00018c6a 1143
.org 0x18c6c
	strh r1, [r0, #0]	@ 00018c6c 0180
.org 0x18c6e
	ldrb r0, [r3, #14]	@ 00018c6e 987b
.org 0x18c70
	adds r0, #1	@ 00018c70 0130
.org 0x18c72
	strb r0, [r3, #14]	@ 00018c72 9873
.org 0x18c74
	pop {r0}	@ 00018c74 01bc
.org 0x18c76
	bx r0	@ 00018c76 0047
