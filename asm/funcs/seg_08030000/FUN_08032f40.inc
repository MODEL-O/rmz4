@ FUN_08032f40  entry 0x08032f40  size 62
.thumb
.org 0x32f40
FUN_08032f40:
	push {r4, r5, lr}	@ 00032f40 30b5
.org 0x32f42
	adds r5, r0, #0	@ 00032f42 051c
.org 0x32f44
	adds r3, r5, #0	@ 00032f44 2b1c
.org 0x32f46
	adds r3, #180	@ 00032f46 b433
.org 0x32f48
	ldr r2, [r3, #84]	@ 00032f48 5a6d
.org 0x32f4a
	cmp r2, #0	@ 00032f4a 002a
.org 0x32f4c
	beq.n 0x32f56	@ 00032f4c 03d0
.org 0x32f4e
	movs r1, #0	@ 00032f4e 0021
.org 0x32f50
	movs r0, #1	@ 00032f50 0120
.org 0x32f52
	strb r0, [r2, #17]	@ 00032f52 5074
.org 0x32f54
	str r1, [r3, #84]	@ 00032f54 5965
.org 0x32f56
	movs r1, #128	@ 00032f56 8021
.org 0x32f58
	lsls r1, r1, #1	@ 00032f58 4900
.org 0x32f5a
	adds r0, r5, r1	@ 00032f5a 6818
.org 0x32f5c
	movs r4, #0	@ 00032f5c 0024
.org 0x32f5e
	strb r4, [r0, #0]	@ 00032f5e 0470
.org 0x32f60
	ldr r0, [pc, #28]	@ 00032f60 0748
.org 0x32f62
	bl 0x3a964	@ 00032f62 07f0fffc
.org 0x32f66
	ldr r1, [pc, #28]	@ 00032f66 0749
.org 0x32f68
	movs r0, #1	@ 00032f68 0120
.org 0x32f6a
	strb r0, [r1, #0]	@ 00032f6a 0870
.org 0x32f6c
	movs r0, #2	@ 00032f6c 0220
.org 0x32f6e
	strb r0, [r5, #14]	@ 00032f6e a873
.org 0x32f70
	strb r4, [r5, #15]	@ 00032f70 ec73
.org 0x32f72
	adds r0, r5, #0	@ 00032f72 281c
.org 0x32f74
	bl 0x32f8c	@ 00032f74 00f00af8
.org 0x32f78
	pop {r4, r5}	@ 00032f78 30bc
.org 0x32f7a
	pop {r0}	@ 00032f7a 01bc
.org 0x32f7c
	bx r0	@ 00032f7c 0047
