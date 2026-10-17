@ FUN_0804ff88  entry 0x0804ff88  size 134
.thumb
.org 0x4ff88
FUN_0804ff88:
	push {r4, r5, lr}	@ 0004ff88 30b5
.org 0x4ff8a
	adds r4, r0, #0	@ 0004ff8a 041c
.org 0x4ff8c
	lsls r1, r1, #24	@ 0004ff8c 0906
.org 0x4ff8e
	lsrs r5, r1, #24	@ 0004ff8e 0d0e
.org 0x4ff90
	ldr r0, [pc, #64]	@ 0004ff90 1048
.org 0x4ff92
	ldr r0, [r0, #0]	@ 0004ff92 0068
.org 0x4ff94
	bl 0x5500	@ 0004ff94 b5f7b4fa
.org 0x4ff98
	adds r2, r0, #0	@ 0004ff98 021c
.org 0x4ff9a
	cmp r2, #0	@ 0004ff9a 002a
.org 0x4ff9c
	beq.n 0x50018	@ 0004ff9c 3cd0
.org 0x4ff9e
	adds r0, r4, #0	@ 0004ff9e 201c
.org 0x4ffa0
	adds r0, #248	@ 0004ffa0 f830
.org 0x4ffa2
	ldrb r0, [r0, #0]	@ 0004ffa2 0078
.org 0x4ffa4
	cmp r0, #2	@ 0004ffa4 0228
.org 0x4ffa6
	bne.n 0x4ffe4	@ 0004ffa6 1dd1
.org 0x4ffa8
	ldr r0, [pc, #44]	@ 0004ffa8 0b48
.org 0x4ffaa
	movs r1, #60	@ 0004ffaa 3c21
.org 0x4ffac
	strb r1, [r2, #9]	@ 0004ffac 5172
.org 0x4ffae
	adds r0, #240	@ 0004ffae f030
.org 0x4ffb0
	ldr r0, [r0, #0]	@ 0004ffb0 0068
.org 0x4ffb2
	ldr r0, [r0, #0]	@ 0004ffb2 0068
.org 0x4ffb4
	str r0, [r2, #20]	@ 0004ffb4 5061
.org 0x4ffb6
	ldrb r1, [r2, #11]	@ 0004ffb6 d17a
.org 0x4ffb8
	movs r0, #191	@ 0004ffb8 bf20
.org 0x4ffba
	ands r0, r1	@ 0004ffba 0840
.org 0x4ffbc
	strb r0, [r2, #11]	@ 0004ffbc d072
.org 0x4ffbe
	adds r1, r2, #0	@ 0004ffbe 111c
.org 0x4ffc0
	adds r1, #37	@ 0004ffc0 2531
.org 0x4ffc2
	movs r0, #16	@ 0004ffc2 1020
.org 0x4ffc4
	strb r0, [r1, #0]	@ 0004ffc4 0870
.org 0x4ffc6
	ldr r0, [pc, #20]	@ 0004ffc6 0548
.org 0x4ffc8
	ldrh r0, [r0, #0]	@ 0004ffc8 0088
.org 0x4ffca
	strh r0, [r2, #32]	@ 0004ffca 1084
.org 0x4ffcc
	ldr r0, [pc, #16]	@ 0004ffcc 0448
.org 0x4ffce
	ldrb r0, [r0, #0]	@ 0004ffce 0078
.org 0x4ffd0
	b.n 0x5000c	@ 0004ffd0 1ce0
.org 0x4ffd2
	.byte 0x00	@ 0004ffd2 data
.org 0x4ffd3
	.byte 0x00	@ 0004ffd3 data
.org 0x4ffd4
	.byte 0x88,0xed,0x02,0x02	@ 0004ffd4 data
.org 0x4ffd8
	.byte 0xf8,0x39,0x85,0x08	@ 0004ffd8 data
.org 0x4ffdc
	.byte 0xfc,0x36,0x85,0x08	@ 0004ffdc data
.org 0x4ffe0
	.byte 0x04,0x37,0x85,0x08	@ 0004ffe0 data
.org 0x4ffe4
	ldr r0, [pc, #56]	@ 0004ffe4 0e48
.org 0x4ffe6
	movs r1, #60	@ 0004ffe6 3c21
.org 0x4ffe8
	strb r1, [r2, #9]	@ 0004ffe8 5172
.org 0x4ffea
	adds r0, #240	@ 0004ffea f030
.org 0x4ffec
	ldr r0, [r0, #0]	@ 0004ffec 0068
.org 0x4ffee
	ldr r0, [r0, #0]	@ 0004ffee 0068
.org 0x4fff0
	str r0, [r2, #20]	@ 0004fff0 5061
.org 0x4fff2
	ldrb r1, [r2, #11]	@ 0004fff2 d17a
.org 0x4fff4
	movs r0, #191	@ 0004fff4 bf20
.org 0x4fff6
	ands r0, r1	@ 0004fff6 0840
.org 0x4fff8
	strb r0, [r2, #11]	@ 0004fff8 d072
.org 0x4fffa
	adds r1, r2, #0	@ 0004fffa 111c
.org 0x4fffc
	adds r1, #37	@ 0004fffc 2531
.org 0x4fffe
	movs r0, #16	@ 0004fffe 1020
.org 0x50000
	strb r0, [r1, #0]	@ 00050000 0870
.org 0x50002
	ldr r0, [pc, #32]	@ 00050002 0848
.org 0x50004
	ldrh r0, [r0, #2]	@ 00050004 4088
.org 0x50006
	strh r0, [r2, #32]	@ 00050006 1084
.org 0x50008
	ldr r0, [pc, #28]	@ 00050008 0748
.org 0x5000a
	ldrb r0, [r0, #1]	@ 0005000a 4078
.org 0x5000c
	subs r1, #3	@ 0005000c 0339
