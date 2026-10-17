@ FUN_0811f9a0  entry 0x0811f9a0  size 92
.thumb
.org 0x11f9a0
FUN_0811f9a0:
	push {r4, lr}	@ 0011f9a0 10b5
.org 0x11f9a2
	adds r3, r0, #0	@ 0011f9a2 031c
.org 0x11f9a4
	ldrh r0, [r3, #4]	@ 0011f9a4 9888
.org 0x11f9a6
	adds r0, #1	@ 0011f9a6 0130
.org 0x11f9a8
	adds r1, r0, #0	@ 0011f9a8 011c
.org 0x11f9aa
	strh r0, [r3, #4]	@ 0011f9aa 9880
.org 0x11f9ac
	lsls r0, r0, #16	@ 0011f9ac 0004
.org 0x11f9ae
	asrs r0, r0, #16	@ 0011f9ae 0014
.org 0x11f9b0
	cmp r0, #15	@ 0011f9b0 0f28
.org 0x11f9b2
	ble.n 0x11f9e8	@ 0011f9b2 19dd
.org 0x11f9b4
	ldr r1, [pc, #36]	@ 0011f9b4 0949
.org 0x11f9b6
	ldr r2, [pc, #40]	@ 0011f9b6 0a4a
.org 0x11f9b8
	adds r0, r1, r2	@ 0011f9b8 8818
.org 0x11f9ba
	movs r2, #32	@ 0011f9ba 2022
.org 0x11f9bc
	strb r2, [r0, #0]	@ 0011f9bc 0270
.org 0x11f9be
	ldr r4, [pc, #36]	@ 0011f9be 094c
.org 0x11f9c0
	adds r0, r1, r4	@ 0011f9c0 0819
.org 0x11f9c2
	strb r2, [r0, #0]	@ 0011f9c2 0270
.org 0x11f9c4
	movs r0, #128	@ 0011f9c4 8020
.org 0x11f9c6
	lsls r0, r0, #3	@ 0011f9c6 c000
.org 0x11f9c8
	adds r1, r1, r0	@ 0011f9c8 0918
.org 0x11f9ca
	strb r2, [r1, #0]	@ 0011f9ca 0a70
.org 0x11f9cc
	movs r0, #2	@ 0011f9cc 0220
.org 0x11f9ce
	strb r0, [r3, #1]	@ 0011f9ce 5870
.org 0x11f9d0
	movs r0, #0	@ 0011f9d0 0020
.org 0x11f9d2
	strb r0, [r3, #2]	@ 0011f9d2 9870
.org 0x11f9d4
	adds r0, r3, #0	@ 0011f9d4 181c
.org 0x11f9d6
	bl 0x11fa14	@ 0011f9d6 00f01df8
.org 0x11f9da
	b.n 0x11fa02	@ 0011f9da 12e0
.org 0x11f9dc
	.byte 0xc0,0x2a,0x00,0x03	@ 0011f9dc data
.org 0x11f9e0
	.byte 0x02,0x04,0x00,0x00	@ 0011f9e0 data
.org 0x11f9e4
	.byte 0x01,0x04,0x00,0x00	@ 0011f9e4 data
.org 0x11f9e8
	ldr r2, [pc, #28]	@ 0011f9e8 074a
.org 0x11f9ea
	ldr r3, [pc, #32]	@ 0011f9ea 084b
.org 0x11f9ec
	adds r0, r2, r3	@ 0011f9ec d018
.org 0x11f9ee
	strb r1, [r0, #0]	@ 0011f9ee 0170
.org 0x11f9f0
	movs r0, #255	@ 0011f9f0 ff20
.org 0x11f9f2
	ands r0, r1	@ 0011f9f2 0840
.org 0x11f9f4
	ldr r4, [pc, #24]	@ 0011f9f4 064c
.org 0x11f9f6
	adds r1, r2, r4	@ 0011f9f6 1119
.org 0x11f9f8
	strb r0, [r1, #0]	@ 0011f9f8 0870
.org 0x11f9fa
	movs r1, #128	@ 0011f9fa 8021
