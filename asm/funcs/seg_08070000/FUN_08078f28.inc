@ FUN_08078f28  entry 0x08078f28  size 58
.thumb
.org 0x78f28
FUN_08078f28:
	push {r4, r5, lr}	@ 00078f28 30b5
.org 0x78f2a
	adds r4, r0, #0	@ 00078f2a 041c
.org 0x78f2c
	adds r5, r4, #0	@ 00078f2c 251c
.org 0x78f2e
	adds r5, #212	@ 00078f2e d435
.org 0x78f30
	ldrh r0, [r5, #0]	@ 00078f30 2888
.org 0x78f32
	adds r0, #1	@ 00078f32 0130
.org 0x78f34
	strh r0, [r5, #0]	@ 00078f34 2880
.org 0x78f36
	lsls r0, r0, #16	@ 00078f36 0004
.org 0x78f38
	lsrs r0, r0, #16	@ 00078f38 000c
.org 0x78f3a
	cmp r0, #14	@ 00078f3a 0e28
.org 0x78f3c
	bhi.n 0x78f48	@ 00078f3c 04d8
.org 0x78f3e
	adds r0, r4, #0	@ 00078f3e 201c
.org 0x78f40
	adds r0, #214	@ 00078f40 d630
.org 0x78f42
	ldrb r0, [r0, #0]	@ 00078f42 0078
.org 0x78f44
	cmp r0, #1	@ 00078f44 0128
.org 0x78f46
	beq.n 0x78f5c	@ 00078f46 09d0
.org 0x78f48
	movs r0, #199	@ 00078f48 c720
.org 0x78f4a
	lsls r0, r0, #1	@ 00078f4a 4000
.org 0x78f4c
	bl 0x2b10	@ 00078f4c 89f7e0fd
.org 0x78f50
	adds r1, r4, #0	@ 00078f50 211c
.org 0x78f52
	adds r1, #214	@ 00078f52 d631
.org 0x78f54
	movs r0, #1	@ 00078f54 0120
.org 0x78f56
	strb r0, [r1, #0]	@ 00078f56 0870
.org 0x78f58
	movs r0, #0	@ 00078f58 0020
.org 0x78f5a
	strh r0, [r5, #0]	@ 00078f5a 2880
.org 0x78f5c
	pop {r4, r5}	@ 00078f5c 30bc
.org 0x78f5e
	pop {r0}	@ 00078f5e 01bc
.org 0x78f60
	bx r0	@ 00078f60 0047
