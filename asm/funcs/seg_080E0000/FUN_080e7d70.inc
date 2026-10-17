@ FUN_080e7d70  entry 0x080e7d70  size 132
.thumb
.org 0xe7d70
FUN_080e7d70:
	push {r4, r5, r6, r7, lr}	@ 000e7d70 f0b5
.org 0xe7d72
	adds r6, r0, #0	@ 000e7d72 061c
.org 0xe7d74
	lsls r4, r1, #16	@ 000e7d74 0c04
.org 0xe7d76
	lsrs r7, r4, #16	@ 000e7d76 270c
.org 0xe7d78
	lsls r2, r2, #24	@ 000e7d78 1206
.org 0xe7d7a
	lsrs r5, r2, #24	@ 000e7d7a 150e
.org 0xe7d7c
	ldr r0, [pc, #76]	@ 000e7d7c 1348
.org 0xe7d7e
	ldr r0, [r0, #0]	@ 000e7d7e 0068
.org 0xe7d80
	bl 0x5500	@ 000e7d80 1df7befb
.org 0xe7d84
	adds r3, r0, #0	@ 000e7d84 031c
.org 0xe7d86
	cmp r3, #0	@ 000e7d86 002b
.org 0xe7d88
	beq.n 0xe7df6	@ 000e7d88 35d0
.org 0xe7d8a
	adds r1, r3, #0	@ 000e7d8a 191c
.org 0xe7d8c
	adds r1, #37	@ 000e7d8c 2531
.org 0xe7d8e
	movs r2, #0	@ 000e7d8e 0022
.org 0xe7d90
	movs r0, #1	@ 000e7d90 0120
.org 0xe7d92
	strb r0, [r1, #0]	@ 000e7d92 0870
.org 0xe7d94
	ldr r0, [pc, #56]	@ 000e7d94 0e48
.org 0xe7d96
	movs r1, #86	@ 000e7d96 5621
.org 0xe7d98
	strb r1, [r3, #9]	@ 000e7d98 5972
.org 0xe7d9a
	movs r1, #172	@ 000e7d9a ac21
.org 0xe7d9c
	lsls r1, r1, #1	@ 000e7d9c 4900
.org 0xe7d9e
	adds r0, r0, r1	@ 000e7d9e 4018
.org 0xe7da0
	ldr r0, [r0, #0]	@ 000e7da0 0068
.org 0xe7da2
	ldr r0, [r0, #0]	@ 000e7da2 0068
.org 0xe7da4
	str r0, [r3, #20]	@ 000e7da4 5861
.org 0xe7da6
	movs r0, #0	@ 000e7da6 0020
.org 0xe7da8
	strh r2, [r3, #32]	@ 000e7da8 1a84
.org 0xe7daa
	adds r1, r3, #0	@ 000e7daa 191c
.org 0xe7dac
	adds r1, #34	@ 000e7dac 2231
.org 0xe7dae
	strb r0, [r1, #0]	@ 000e7dae 0870
.org 0xe7db0
	ldr r0, [r6, #0]	@ 000e7db0 3068
.org 0xe7db2
	ldr r1, [r6, #4]	@ 000e7db2 7168
.org 0xe7db4
	str r0, [r3, #84]	@ 000e7db4 5865
.org 0xe7db6
	str r1, [r3, #88]	@ 000e7db6 9965
.org 0xe7db8
	lsrs r0, r4, #24	@ 000e7db8 200e
.org 0xe7dba
	strb r0, [r3, #16]	@ 000e7dba 1874
.org 0xe7dbc
	strb r7, [r3, #17]	@ 000e7dbc 5f74
.org 0xe7dbe
	adds r2, r5, #0	@ 000e7dbe 2a1c
.org 0xe7dc0
	cmp r2, #0	@ 000e7dc0 002a
.org 0xe7dc2
	beq.n 0xe7dd4	@ 000e7dc2 07d0
.org 0xe7dc4
	ldrb r0, [r3, #10]	@ 000e7dc4 987a
.org 0xe7dc6
	movs r1, #16	@ 000e7dc6 1021
.org 0xe7dc8
	orrs r0, r1	@ 000e7dc8 0843
.org 0xe7dca
	b.n 0xe7dda	@ 000e7dca 06e0
.org 0xe7dcc
	.byte 0x9c,0xed,0x02,0x02	@ 000e7dcc data
.org 0xe7dd0
	.byte 0x64,0x6f,0x86,0x08	@ 000e7dd0 data
.org 0xe7dd4
	ldrb r1, [r3, #10]	@ 000e7dd4 997a
.org 0xe7dd6
	movs r0, #239	@ 000e7dd6 ef20
.org 0xe7dd8
	ands r0, r1	@ 000e7dd8 0840
.org 0xe7dda
	strb r0, [r3, #10]	@ 000e7dda 9872
.org 0xe7ddc
	movs r1, #1	@ 000e7ddc 0121
.org 0xe7dde
	ands r1, r2	@ 000e7dde 1140
.org 0xe7de0
	adds r0, r3, #0	@ 000e7de0 181c
.org 0xe7de2
	adds r0, #76	@ 000e7de2 4c30
.org 0xe7de4
	strb r1, [r0, #0]	@ 000e7de4 0170
.org 0xe7de6
	adds r3, #74	@ 000e7de6 4a33
.org 0xe7de8
	lsls r1, r1, #4	@ 000e7de8 0901
.org 0xe7dea
	ldrb r2, [r3, #0]	@ 000e7dea 1a78
.org 0xe7dec
	movs r0, #17	@ 000e7dec 1120
.org 0xe7dee
	negs r0, r0	@ 000e7dee 4042
.org 0xe7df0
	ands r0, r2	@ 000e7df0 1040
.org 0xe7df2
	orrs r0, r1	@ 000e7df2 0843
