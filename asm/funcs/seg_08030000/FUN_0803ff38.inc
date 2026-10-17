@ FUN_0803ff38  entry 0x0803ff38  size 220
.thumb
.org 0x3ff38
FUN_0803ff38:
	push {r4, r5, lr}	@ 0003ff38 30b5
.org 0x3ff3a
	adds r5, r0, #0	@ 0003ff3a 051c
.org 0x3ff3c
	adds r4, r1, #0	@ 0003ff3c 0c1c
.org 0x3ff3e
	ldr r0, [pc, #64]	@ 0003ff3e 1048
.org 0x3ff40
	ldr r0, [r0, #0]	@ 0003ff40 0068
.org 0x3ff42
	bl 0x5500	@ 0003ff42 c5f7ddfa
.org 0x3ff46
	adds r3, r0, #0	@ 0003ff46 031c
.org 0x3ff48
	cmp r3, #0	@ 0003ff48 002b
.org 0x3ff4a
	beq.n 0x4002c	@ 0003ff4a 6fd0
.org 0x3ff4c
	adds r0, r5, #0	@ 0003ff4c 281c
.org 0x3ff4e
	adds r0, #248	@ 0003ff4e f830
.org 0x3ff50
	ldrb r0, [r0, #0]	@ 0003ff50 0078
.org 0x3ff52
	cmp r0, #2	@ 0003ff52 0228
.org 0x3ff54
	bne.n 0x3ff90	@ 0003ff54 1cd1
.org 0x3ff56
	ldr r1, [pc, #44]	@ 0003ff56 0b49
.org 0x3ff58
	movs r0, #8	@ 0003ff58 0820
.org 0x3ff5a
	strb r0, [r3, #9]	@ 0003ff5a 5872
.org 0x3ff5c
	ldr r0, [r1, #32]	@ 0003ff5c 086a
.org 0x3ff5e
	ldr r0, [r0, #0]	@ 0003ff5e 0068
.org 0x3ff60
	str r0, [r3, #20]	@ 0003ff60 5861
.org 0x3ff62
	ldrb r1, [r3, #11]	@ 0003ff62 d97a
.org 0x3ff64
	movs r0, #191	@ 0003ff64 bf20
.org 0x3ff66
	ands r0, r1	@ 0003ff66 0840
.org 0x3ff68
	strb r0, [r3, #11]	@ 0003ff68 d872
.org 0x3ff6a
	adds r1, r3, #0	@ 0003ff6a 191c
.org 0x3ff6c
	adds r1, #37	@ 0003ff6c 2531
.org 0x3ff6e
	movs r0, #16	@ 0003ff6e 1020
.org 0x3ff70
	strb r0, [r1, #0]	@ 0003ff70 0870
.org 0x3ff72
	ldr r0, [pc, #20]	@ 0003ff72 0548
.org 0x3ff74
	ldrh r0, [r0, #0]	@ 0003ff74 0088
.org 0x3ff76
	strh r0, [r3, #32]	@ 0003ff76 1884
.org 0x3ff78
	ldr r0, [pc, #16]	@ 0003ff78 0448
.org 0x3ff7a
	ldrb r0, [r0, #0]	@ 0003ff7a 0078
.org 0x3ff7c
	b.n 0x3ffb6	@ 0003ff7c 1be0
.org 0x3ff7e
	.byte 0x00	@ 0003ff7e data
.org 0x3ff7f
	.byte 0x00	@ 0003ff7f data
.org 0x3ff80
	.byte 0x88,0xed,0x02,0x02	@ 0003ff80 data
.org 0x3ff84
	.byte 0xf8,0x39,0x85,0x08	@ 0003ff84 data
.org 0x3ff88
	.byte 0xfc,0x36,0x85,0x08	@ 0003ff88 data
.org 0x3ff8c
	.byte 0x04,0x37,0x85,0x08	@ 0003ff8c data
.org 0x3ff90
	ldr r1, [pc, #68]	@ 0003ff90 1149
.org 0x3ff92
	movs r0, #8	@ 0003ff92 0820
.org 0x3ff94
	strb r0, [r3, #9]	@ 0003ff94 5872
.org 0x3ff96
	ldr r0, [r1, #32]	@ 0003ff96 086a
.org 0x3ff98
	ldr r0, [r0, #0]	@ 0003ff98 0068
.org 0x3ff9a
	str r0, [r3, #20]	@ 0003ff9a 5861
.org 0x3ff9c
	ldrb r1, [r3, #11]	@ 0003ff9c d97a
.org 0x3ff9e
	movs r0, #191	@ 0003ff9e bf20
.org 0x3ffa0
	ands r0, r1	@ 0003ffa0 0840
.org 0x3ffa2
	strb r0, [r3, #11]	@ 0003ffa2 d872
.org 0x3ffa4
	adds r1, r3, #0	@ 0003ffa4 191c
.org 0x3ffa6
	adds r1, #37	@ 0003ffa6 2531
.org 0x3ffa8
	movs r0, #16	@ 0003ffa8 1020
.org 0x3ffaa
	strb r0, [r1, #0]	@ 0003ffaa 0870
.org 0x3ffac
	ldr r0, [pc, #44]	@ 0003ffac 0b48
.org 0x3ffae
	ldrh r0, [r0, #2]	@ 0003ffae 4088
.org 0x3ffb0
	strh r0, [r3, #32]	@ 0003ffb0 1884
.org 0x3ffb2
	ldr r0, [pc, #44]	@ 0003ffb2 0b48
.org 0x3ffb4
	ldrb r0, [r0, #1]	@ 0003ffb4 4078
.org 0x3ffb6
	subs r1, #3	@ 0003ffb6 0339
.org 0x3ffb8
	strb r0, [r1, #0]	@ 0003ffb8 0870
.org 0x3ffba
	str r4, [r3, #40]	@ 0003ffba 9c62
.org 0x3ffbc
	str r5, [r3, #44]	@ 0003ffbc dd62
.org 0x3ffbe
	movs r0, #0	@ 0003ffbe 0020
.org 0x3ffc0
	strb r0, [r3, #16]	@ 0003ffc0 1874
.org 0x3ffc2
	strb r0, [r3, #17]	@ 0003ffc2 5874
.org 0x3ffc4
	ldrb r0, [r4, #10]	@ 0003ffc4 a07a
.org 0x3ffc6
	lsrs r2, r0, #4	@ 0003ffc6 0209
.org 0x3ffc8
	movs r0, #1	@ 0003ffc8 0120
.org 0x3ffca
	ands r2, r0	@ 0003ffca 0240
.org 0x3ffcc
	cmp r2, #0	@ 0003ffcc 002a
.org 0x3ffce
	beq.n 0x3ffe4	@ 0003ffce 09d0
.org 0x3ffd0
	ldrb r0, [r3, #10]	@ 0003ffd0 987a
.org 0x3ffd2
	movs r1, #16	@ 0003ffd2 1021
.org 0x3ffd4
	orrs r0, r1	@ 0003ffd4 0843
.org 0x3ffd6
	b.n 0x3ffea	@ 0003ffd6 08e0
.org 0x3ffd8
	.byte 0xf8,0x39,0x85,0x08	@ 0003ffd8 data
.org 0x3ffdc
	.byte 0xfc,0x36,0x85,0x08	@ 0003ffdc data
.org 0x3ffe0
	.byte 0x04,0x37,0x85,0x08	@ 0003ffe0 data
.org 0x3ffe4
	ldrb r1, [r3, #10]	@ 0003ffe4 997a
.org 0x3ffe6
	movs r0, #239	@ 0003ffe6 ef20
.org 0x3ffe8
	ands r0, r1	@ 0003ffe8 0840
.org 0x3ffea
	strb r0, [r3, #10]	@ 0003ffea 9872
.org 0x3ffec
	adds r1, r2, #0	@ 0003ffec 111c
.org 0x3ffee
	adds r0, r3, #0	@ 0003ffee 181c
.org 0x3fff0
	adds r0, #76	@ 0003fff0 4c30
.org 0x3fff2
	strb r1, [r0, #0]	@ 0003fff2 0170
.org 0x3fff4
	movs r0, #74	@ 0003fff4 4a20
.org 0x3fff6
	adds r0, r0, r3	@ 0003fff6 c018
.org 0x3fff8
	mov ip, r0	@ 0003fff8 8446
.org 0x3fffa
	lsls r1, r1, #4	@ 0003fffa 0901
.org 0x3fffc
	ldrb r2, [r0, #0]	@ 0003fffc 0278
.org 0x3fffe
	movs r0, #17	@ 0003fffe 1120
.org 0x40000
	negs r0, r0	@ 00040000 4042
.org 0x40002
	ands r0, r2	@ 00040002 1040
.org 0x40004
	orrs r0, r1	@ 00040004 0843
.org 0x40006
	mov r1, ip	@ 00040006 6146
.org 0x40008
	strb r0, [r1, #0]	@ 00040008 0870
.org 0x4000a
	ldrb r1, [r3, #10]	@ 0004000a 997a
.org 0x4000c
	movs r0, #16	@ 0004000c 1020
.org 0x4000e
	ands r0, r1	@ 0004000e 0840
.org 0x40010
	cmp r0, #0	@ 00040010 0028
.org 0x40012
	beq.n 0x4001c	@ 00040012 03d0
