@ FUN_080d1bcc  entry 0x080d1bcc  size 124
.thumb
.org 0xd1bcc
FUN_080d1bcc:
	push {r4, r5, r6, lr}	@ 000d1bcc 70b5
.org 0xd1bce
	adds r6, r0, #0	@ 000d1bce 061c
.org 0xd1bd0
	lsls r1, r1, #24	@ 000d1bd0 0906
.org 0xd1bd2
	lsrs r4, r1, #24	@ 000d1bd2 0c0e
.org 0xd1bd4
	lsls r2, r2, #24	@ 000d1bd4 1206
.org 0xd1bd6
	lsrs r5, r2, #24	@ 000d1bd6 150e
.org 0xd1bd8
	ldr r0, [pc, #68]	@ 000d1bd8 1148
.org 0xd1bda
	ldr r0, [r0, #0]	@ 000d1bda 0068
.org 0xd1bdc
	bl 0x5500	@ 000d1bdc 33f790fc
.org 0xd1be0
	adds r3, r0, #0	@ 000d1be0 031c
.org 0xd1be2
	cmp r3, #0	@ 000d1be2 002b
.org 0xd1be4
	beq.n 0xd1c4a	@ 000d1be4 31d0
.org 0xd1be6
	adds r1, r3, #0	@ 000d1be6 191c
.org 0xd1be8
	adds r1, #37	@ 000d1be8 2531
.org 0xd1bea
	movs r2, #0	@ 000d1bea 0022
.org 0xd1bec
	movs r0, #1	@ 000d1bec 0120
.org 0xd1bee
	strb r0, [r1, #0]	@ 000d1bee 0870
.org 0xd1bf0
	ldr r1, [pc, #48]	@ 000d1bf0 0c49
.org 0xd1bf2
	movs r0, #5	@ 000d1bf2 0520
.org 0xd1bf4
	strb r0, [r3, #9]	@ 000d1bf4 5872
.org 0xd1bf6
	ldr r0, [r1, #20]	@ 000d1bf6 4869
.org 0xd1bf8
	ldr r0, [r0, #0]	@ 000d1bf8 0068
.org 0xd1bfa
	str r0, [r3, #20]	@ 000d1bfa 5861
.org 0xd1bfc
	movs r0, #0	@ 000d1bfc 0020
.org 0xd1bfe
	strh r2, [r3, #32]	@ 000d1bfe 1a84
.org 0xd1c00
	adds r1, r3, #0	@ 000d1c00 191c
.org 0xd1c02
	adds r1, #34	@ 000d1c02 2231
.org 0xd1c04
	strb r0, [r1, #0]	@ 000d1c04 0870
.org 0xd1c06
	strb r4, [r3, #16]	@ 000d1c06 1c74
.org 0xd1c08
	strb r0, [r3, #17]	@ 000d1c08 5874
.org 0xd1c0a
	ldr r0, [r6, #0]	@ 000d1c0a 3068
.org 0xd1c0c
	ldr r1, [r6, #4]	@ 000d1c0c 7168
.org 0xd1c0e
	str r0, [r3, #84]	@ 000d1c0e 5865
.org 0xd1c10
	str r1, [r3, #88]	@ 000d1c10 9965
.org 0xd1c12
	adds r2, r5, #0	@ 000d1c12 2a1c
.org 0xd1c14
	cmp r2, #0	@ 000d1c14 002a
.org 0xd1c16
	beq.n 0xd1c28	@ 000d1c16 07d0
.org 0xd1c18
	ldrb r0, [r3, #10]	@ 000d1c18 987a
.org 0xd1c1a
	movs r1, #16	@ 000d1c1a 1021
.org 0xd1c1c
	orrs r0, r1	@ 000d1c1c 0843
.org 0xd1c1e
	b.n 0xd1c2e	@ 000d1c1e 06e0
.org 0xd1c20
	.byte 0x9c,0xed,0x02,0x02	@ 000d1c20 data
.org 0xd1c24
	.byte 0x64,0x6f,0x86,0x08	@ 000d1c24 data
.org 0xd1c28
	ldrb r1, [r3, #10]	@ 000d1c28 997a
.org 0xd1c2a
	movs r0, #239	@ 000d1c2a ef20
.org 0xd1c2c
	ands r0, r1	@ 000d1c2c 0840
.org 0xd1c2e
	strb r0, [r3, #10]	@ 000d1c2e 9872
.org 0xd1c30
	movs r1, #1	@ 000d1c30 0121
.org 0xd1c32
	ands r1, r2	@ 000d1c32 1140
.org 0xd1c34
	adds r0, r3, #0	@ 000d1c34 181c
.org 0xd1c36
	adds r0, #76	@ 000d1c36 4c30
.org 0xd1c38
	strb r1, [r0, #0]	@ 000d1c38 0170
.org 0xd1c3a
	adds r3, #74	@ 000d1c3a 4a33
.org 0xd1c3c
	lsls r1, r1, #4	@ 000d1c3c 0901
.org 0xd1c3e
	ldrb r2, [r3, #0]	@ 000d1c3e 1a78
.org 0xd1c40
	movs r0, #17	@ 000d1c40 1120
.org 0xd1c42
	negs r0, r0	@ 000d1c42 4042
.org 0xd1c44
	ands r0, r2	@ 000d1c44 1040
.org 0xd1c46
	orrs r0, r1	@ 000d1c46 0843
