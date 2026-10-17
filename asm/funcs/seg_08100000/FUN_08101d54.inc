@ FUN_08101d54  entry 0x08101d54  size 84
.thumb
.org 0x101d54
FUN_08101d54:
	push {r4, r5, lr}	@ 00101d54 30b5
.org 0x101d56
	adds r4, r0, #0	@ 00101d56 041c
.org 0x101d58
	lsls r1, r1, #24	@ 00101d58 0906
.org 0x101d5a
	lsrs r5, r1, #24	@ 00101d5a 0d0e
.org 0x101d5c
	ldr r0, [pc, #72]	@ 00101d5c 1248
.org 0x101d5e
	ldr r0, [r0, #0]	@ 00101d5e 0068
.org 0x101d60
	bl 0x5500	@ 00101d60 03f7cefb
.org 0x101d64
	adds r3, r0, #0	@ 00101d64 031c
.org 0x101d66
	cmp r3, #0	@ 00101d66 002b
.org 0x101d68
	beq.n 0x101da2	@ 00101d68 1bd0
.org 0x101d6a
	adds r1, r3, #0	@ 00101d6a 191c
.org 0x101d6c
	adds r1, #37	@ 00101d6c 2531
.org 0x101d6e
	movs r2, #0	@ 00101d6e 0022
.org 0x101d70
	movs r0, #30	@ 00101d70 1e20
.org 0x101d72
	strb r0, [r1, #0]	@ 00101d72 0870
.org 0x101d74
	ldr r0, [pc, #52]	@ 00101d74 0d48
.org 0x101d76
	movs r1, #64	@ 00101d76 4021
.org 0x101d78
	strb r1, [r3, #9]	@ 00101d78 5972
.org 0x101d7a
	adds r1, #192	@ 00101d7a c031
.org 0x101d7c
	adds r0, r0, r1	@ 00101d7c 4018
.org 0x101d7e
	ldr r0, [r0, #0]	@ 00101d7e 0068
.org 0x101d80
	ldr r0, [r0, #0]	@ 00101d80 0068
.org 0x101d82
	str r0, [r3, #20]	@ 00101d82 5861
.org 0x101d84
	movs r0, #0	@ 00101d84 0020
.org 0x101d86
	strh r2, [r3, #32]	@ 00101d86 1a84
.org 0x101d88
	adds r1, r3, #0	@ 00101d88 191c
.org 0x101d8a
	adds r1, #34	@ 00101d8a 2231
.org 0x101d8c
	strb r0, [r1, #0]	@ 00101d8c 0870
.org 0x101d8e
	ldrb r1, [r3, #11]	@ 00101d8e d97a
.org 0x101d90
	movs r0, #16	@ 00101d90 1020
.org 0x101d92
	orrs r0, r1	@ 00101d92 0843
.org 0x101d94
	strb r0, [r3, #11]	@ 00101d94 d872
.org 0x101d96
	ldrb r0, [r3, #28]	@ 00101d96 187f
.org 0x101d98
	strb r0, [r3, #29]	@ 00101d98 5877
.org 0x101d9a
	str r4, [r3, #40]	@ 00101d9a 9c62
.org 0x101d9c
	movs r0, #1	@ 00101d9c 0120
.org 0x101d9e
	strb r0, [r3, #16]	@ 00101d9e 1874
.org 0x101da0
	strb r5, [r3, #17]	@ 00101da0 5d74
.org 0x101da2
	pop {r4, r5}	@ 00101da2 30bc
.org 0x101da4
	pop {r0}	@ 00101da4 01bc
.org 0x101da6
	bx r0	@ 00101da6 0047
