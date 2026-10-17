@ FUN_08117d2c  entry 0x08117d2c  size 94
.thumb
.org 0x117d2c
FUN_08117d2c:
	push {r4, lr}	@ 00117d2c 10b5
.org 0x117d2e
	adds r4, r0, #0	@ 00117d2e 041c
.org 0x117d30
	ldrh r0, [r4, #4]	@ 00117d30 a088
.org 0x117d32
	adds r0, #1	@ 00117d32 0130
.org 0x117d34
	adds r1, r0, #0	@ 00117d34 011c
.org 0x117d36
	strh r0, [r4, #4]	@ 00117d36 a080
.org 0x117d38
	lsls r0, r0, #16	@ 00117d38 0004
.org 0x117d3a
	asrs r0, r0, #16	@ 00117d3a 0014
.org 0x117d3c
	cmp r0, #15	@ 00117d3c 0f28
.org 0x117d3e
	ble.n 0x117d70	@ 00117d3e 17dd
.org 0x117d40
	ldr r1, [pc, #32]	@ 00117d40 0849
.org 0x117d42
	ldr r2, [pc, #36]	@ 00117d42 094a
.org 0x117d44
	adds r0, r1, r2	@ 00117d44 8818
.org 0x117d46
	movs r2, #32	@ 00117d46 2022
.org 0x117d48
	strb r2, [r0, #0]	@ 00117d48 0270
.org 0x117d4a
	ldr r3, [pc, #32]	@ 00117d4a 084b
.org 0x117d4c
	adds r0, r1, r3	@ 00117d4c c818
.org 0x117d4e
	strb r2, [r0, #0]	@ 00117d4e 0270
.org 0x117d50
	movs r0, #128	@ 00117d50 8020
.org 0x117d52
	lsls r0, r0, #3	@ 00117d52 c000
.org 0x117d54
	adds r1, r1, r0	@ 00117d54 0918
.org 0x117d56
	strb r2, [r1, #0]	@ 00117d56 0a70
.org 0x117d58
	movs r0, #2	@ 00117d58 0220
.org 0x117d5a
	strb r0, [r4, #1]	@ 00117d5a 6070
.org 0x117d5c
	adds r0, r4, #0	@ 00117d5c 201c
.org 0x117d5e
	bl 0x117da0	@ 00117d5e 00f01ff8
.org 0x117d62
	b.n 0x117d8a	@ 00117d62 12e0
.org 0x117d64
	.byte 0xc0,0x2a,0x00,0x03	@ 00117d64 data
.org 0x117d68
	.byte 0x02,0x04,0x00,0x00	@ 00117d68 data
.org 0x117d6c
	.byte 0x01,0x04,0x00,0x00	@ 00117d6c data
.org 0x117d70
	ldr r2, [pc, #36]	@ 00117d70 094a
.org 0x117d72
	ldr r3, [pc, #40]	@ 00117d72 0a4b
.org 0x117d74
	adds r0, r2, r3	@ 00117d74 d018
.org 0x117d76
	strb r1, [r0, #0]	@ 00117d76 0170
.org 0x117d78
	movs r0, #255	@ 00117d78 ff20
.org 0x117d7a
	ands r0, r1	@ 00117d7a 0840
.org 0x117d7c
	subs r3, #1	@ 00117d7c 013b
.org 0x117d7e
	adds r1, r2, r3	@ 00117d7e d118
.org 0x117d80
	strb r0, [r1, #0]	@ 00117d80 0870
.org 0x117d82
	movs r1, #128	@ 00117d82 8021
.org 0x117d84
	lsls r1, r1, #3	@ 00117d84 c900
.org 0x117d86
	adds r2, r2, r1	@ 00117d86 5218
.org 0x117d88
	strb r0, [r2, #0]	@ 00117d88 1070
