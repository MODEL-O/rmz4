@ FUN_080d89e0  entry 0x080d89e0  size 132
.thumb
.org 0xd89e0
FUN_080d89e0:
	push {r4, r5, r6, lr}	@ 000d89e0 70b5
.org 0xd89e2
	adds r4, r0, #0	@ 000d89e2 041c
.org 0xd89e4
	lsls r1, r1, #24	@ 000d89e4 0906
.org 0xd89e6
	lsrs r6, r1, #24	@ 000d89e6 0e0e
.org 0xd89e8
	lsls r2, r2, #24	@ 000d89e8 1206
.org 0xd89ea
	lsrs r5, r2, #24	@ 000d89ea 150e
.org 0xd89ec
	ldr r0, [pc, #68]	@ 000d89ec 1148
.org 0xd89ee
	ldr r0, [r0, #0]	@ 000d89ee 0068
.org 0xd89f0
	bl 0x5500	@ 000d89f0 2cf786fd
.org 0xd89f4
	adds r3, r0, #0	@ 000d89f4 031c
.org 0xd89f6
	cmp r3, #0	@ 000d89f6 002b
.org 0xd89f8
	beq.n 0xd8a64	@ 000d89f8 34d0
.org 0xd89fa
	adds r1, r3, #0	@ 000d89fa 191c
.org 0xd89fc
	adds r1, #37	@ 000d89fc 2531
.org 0xd89fe
	movs r2, #0	@ 000d89fe 0022
.org 0xd8a00
	movs r0, #1	@ 000d8a00 0120
.org 0xd8a02
	strb r0, [r1, #0]	@ 000d8a02 0870
.org 0xd8a04
	ldr r1, [pc, #48]	@ 000d8a04 0c49
.org 0xd8a06
	movs r0, #27	@ 000d8a06 1b20
.org 0xd8a08
	strb r0, [r3, #9]	@ 000d8a08 5872
.org 0xd8a0a
	ldr r0, [r1, #108]	@ 000d8a0a c86e
.org 0xd8a0c
	ldr r0, [r0, #0]	@ 000d8a0c 0068
.org 0xd8a0e
	str r0, [r3, #20]	@ 000d8a0e 5861
.org 0xd8a10
	movs r0, #0	@ 000d8a10 0020
.org 0xd8a12
	strh r2, [r3, #32]	@ 000d8a12 1a84
.org 0xd8a14
	adds r1, r3, #0	@ 000d8a14 191c
.org 0xd8a16
	adds r1, #34	@ 000d8a16 2231
.org 0xd8a18
	strb r0, [r1, #0]	@ 000d8a18 0870
.org 0xd8a1a
	strb r5, [r3, #16]	@ 000d8a1a 1d74
.org 0xd8a1c
	strb r0, [r3, #17]	@ 000d8a1c 5874
.org 0xd8a1e
	ldr r0, [r4, #0]	@ 000d8a1e 2068
.org 0xd8a20
	str r0, [r3, #84]	@ 000d8a20 5865
.org 0xd8a22
	ldr r0, [r4, #4]	@ 000d8a22 6068
.org 0xd8a24
	str r0, [r3, #88]	@ 000d8a24 9865
.org 0xd8a26
	adds r2, r6, #0	@ 000d8a26 321c
.org 0xd8a28
	cmp r2, #0	@ 000d8a28 002a
.org 0xd8a2a
	beq.n 0xd8a3c	@ 000d8a2a 07d0
.org 0xd8a2c
	ldrb r0, [r3, #10]	@ 000d8a2c 987a
.org 0xd8a2e
	movs r1, #16	@ 000d8a2e 1021
.org 0xd8a30
	orrs r0, r1	@ 000d8a30 0843
.org 0xd8a32
	b.n 0xd8a42	@ 000d8a32 06e0
.org 0xd8a34
	.byte 0x9c,0xed,0x02,0x02	@ 000d8a34 data
.org 0xd8a38
	.byte 0x64,0x6f,0x86,0x08	@ 000d8a38 data
.org 0xd8a3c
	ldrb r1, [r3, #10]	@ 000d8a3c 997a
.org 0xd8a3e
	movs r0, #239	@ 000d8a3e ef20
.org 0xd8a40
	ands r0, r1	@ 000d8a40 0840
.org 0xd8a42
	strb r0, [r3, #10]	@ 000d8a42 9872
.org 0xd8a44
	movs r1, #1	@ 000d8a44 0121
.org 0xd8a46
	ands r1, r2	@ 000d8a46 1140
.org 0xd8a48
	adds r0, r3, #0	@ 000d8a48 181c
.org 0xd8a4a
	adds r0, #76	@ 000d8a4a 4c30
.org 0xd8a4c
	strb r1, [r0, #0]	@ 000d8a4c 0170
.org 0xd8a4e
	movs r0, #74	@ 000d8a4e 4a20
.org 0xd8a50
	adds r0, r0, r3	@ 000d8a50 c018
.org 0xd8a52
	mov ip, r0	@ 000d8a52 8446
.org 0xd8a54
	lsls r1, r1, #4	@ 000d8a54 0901
.org 0xd8a56
	ldrb r2, [r0, #0]	@ 000d8a56 0278
.org 0xd8a58
	movs r0, #17	@ 000d8a58 1120
.org 0xd8a5a
	negs r0, r0	@ 000d8a5a 4042
.org 0xd8a5c
	ands r0, r2	@ 000d8a5c 1040
.org 0xd8a5e
	orrs r0, r1	@ 000d8a5e 0843
.org 0xd8a60
	mov r1, ip	@ 000d8a60 6146
.org 0xd8a62
	strb r0, [r1, #0]	@ 000d8a62 0870
