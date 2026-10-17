@ FUN_08018d34  entry 0x08018d34  size 232
.thumb
.org 0x18d34
FUN_08018d34:
	push {r4, r5, r6, r7, lr}	@ 00018d34 f0b5
.org 0x18d36
	mov r7, r9	@ 00018d36 4f46
.org 0x18d38
	mov r6, r8	@ 00018d38 4646
.org 0x18d3a
	push {r6, r7}	@ 00018d3a c0b4
.org 0x18d3c
	sub sp, #8	@ 00018d3c 82b0
.org 0x18d3e
	adds r7, r0, #0	@ 00018d3e 071c
.org 0x18d40
	ldr r0, [r7, #92]	@ 00018d40 f86d
.org 0x18d42
	lsls r0, r0, #16	@ 00018d42 0004
.org 0x18d44
	lsrs r3, r0, #16	@ 00018d44 030c
.org 0x18d46
	ldr r0, [pc, #36]	@ 00018d46 0948
.org 0x18d48
	ldrb r1, [r0, #4]	@ 00018d48 0179
.org 0x18d4a
	movs r0, #32	@ 00018d4a 2020
.org 0x18d4c
	ands r0, r1	@ 00018d4c 0840
.org 0x18d4e
	cmp r0, #0	@ 00018d4e 0028
.org 0x18d50
	bne.n 0x18d7c	@ 00018d50 14d1
.org 0x18d52
	ldr r0, [pc, #28]	@ 00018d52 0748
.org 0x18d54
	ldr r1, [pc, #28]	@ 00018d54 0749
.org 0x18d56
	adds r0, r0, r1	@ 00018d56 4018
.org 0x18d58
	ldrb r0, [r0, #0]	@ 00018d58 0078
.org 0x18d5a
	cmp r0, #1	@ 00018d5a 0128
.org 0x18d5c
	beq.n 0x18d7c	@ 00018d5c 0ed0
.org 0x18d5e
	ldr r0, [pc, #24]	@ 00018d5e 0648
.org 0x18d60
	lsls r1, r3, #8	@ 00018d60 1902
.org 0x18d62
	ldrh r2, [r0, #0]	@ 00018d62 0288
.org 0x18d64
	orrs r1, r2	@ 00018d64 1143
.org 0x18d66
	strh r1, [r0, #0]	@ 00018d66 0180
.org 0x18d68
	b.n 0x18d86	@ 00018d68 0de0
.org 0x18d6a
	.byte 0x00	@ 00018d6a data
.org 0x18d6b
	.byte 0x00	@ 00018d6b data
.org 0x18d6c
	.byte 0xb0,0xe8,0x02,0x02	@ 00018d6c data
.org 0x18d70
	.byte 0xb0,0x0a,0x00,0x02	@ 00018d70 data
.org 0x18d74
	.byte 0x2a,0xd0,0x02,0x00	@ 00018d74 data
.org 0x18d78
	.byte 0x00,0x0a,0x00,0x02	@ 00018d78 data
.org 0x18d7c
	ldr r2, [pc, #176]	@ 00018d7c 2c4a
.org 0x18d7e
	lsls r1, r3, #8	@ 00018d7e 1902
.org 0x18d80
	ldrh r0, [r2, #0]	@ 00018d80 1088
.org 0x18d82
	bics r0, r1	@ 00018d82 8843
.org 0x18d84
	strh r0, [r2, #0]	@ 00018d84 1080
.org 0x18d86
	ldr r0, [pc, #172]	@ 00018d86 2b48
.org 0x18d88
	mov r8, r0	@ 00018d88 8046
.org 0x18d8a
	ldr r0, [pc, #172]	@ 00018d8a 2b48
.org 0x18d8c
	add r0, r8	@ 00018d8c 4044
.org 0x18d8e
	ldrh r0, [r0, #0]	@ 00018d8e 0088
.org 0x18d90
	lsrs r3, r3, #4	@ 00018d90 1b09
.org 0x18d92
	mov r9, r3	@ 00018d92 9946
.org 0x18d94
	cmp r0, #0	@ 00018d94 0028
.org 0x18d96
	beq.n 0x18dda	@ 00018d96 20d0
.org 0x18d98
	movs r2, #0	@ 00018d98 0022
.org 0x18d9a
	lsls r5, r3, #1	@ 00018d9a 5d00
.org 0x18d9c
	ldr r0, [pc, #156]	@ 00018d9c 2748
.org 0x18d9e
	adds r5, r5, r0	@ 00018d9e 2d18
.org 0x18da0
	ldrh r0, [r5, #0]	@ 00018da0 2888
.org 0x18da2
	movs r4, #248	@ 00018da2 f824
.org 0x18da4
	lsls r4, r4, #5	@ 00018da4 6401
.org 0x18da6
	adds r1, r4, #0	@ 00018da6 211c
.org 0x18da8
	ands r1, r0	@ 00018da8 0140
.org 0x18daa
	lsls r1, r1, #3	@ 00018daa c900
.org 0x18dac
	movs r0, #192	@ 00018dac c020
.org 0x18dae
	lsls r0, r0, #19	@ 00018dae c004
.org 0x18db0
	adds r1, r1, r0	@ 00018db0 0918
.org 0x18db2
	str r2, [sp, #0]	@ 00018db2 0092
.org 0x18db4
	movs r6, #128	@ 00018db4 8026
.org 0x18db6
	lsls r6, r6, #2	@ 00018db6 b600
.org 0x18db8
	ldr r2, [pc, #132]	@ 00018db8 214a
.org 0x18dba
	mov r0, sp	@ 00018dba 6846
.org 0x18dbc
	bl 0x128be0	@ 00018dbc 0ff110ff
.org 0x18dc0
	ldr r0, [pc, #128]	@ 00018dc0 2048
.org 0x18dc2
	ldr r0, [r0, #0]	@ 00018dc2 0068
.org 0x18dc4
	ldr r1, [pc, #128]	@ 00018dc4 2049
.org 0x18dc6
	adds r0, r0, r1	@ 00018dc6 4018
.org 0x18dc8
	ldrh r1, [r5, #0]	@ 00018dc8 2988
.org 0x18dca
	ands r4, r1	@ 00018dca 0c40
.org 0x18dcc
	lsls r4, r4, #3	@ 00018dcc e400
.org 0x18dce
	ldr r1, [pc, #124]	@ 00018dce 1f49
.org 0x18dd0
	adds r4, r4, r1	@ 00018dd0 6418
.org 0x18dd2
	adds r1, r4, #0	@ 00018dd2 211c
.org 0x18dd4
	adds r2, r6, #0	@ 00018dd4 321c
.org 0x18dd6
	bl 0x128be0	@ 00018dd6 0ff103ff
.org 0x18dda
	mov r0, r9	@ 00018dda 4846
.org 0x18ddc
	lsls r3, r0, #2	@ 00018ddc 8300
.org 0x18dde
	ldr r2, [pc, #112]	@ 00018dde 1c4a
.org 0x18de0
	adds r4, r3, r2	@ 00018de0 9c18
.org 0x18de2
	ldr r1, [r7, #52]	@ 00018de2 796b
.org 0x18de4
	ldr r0, [pc, #108]	@ 00018de4 1b48
.org 0x18de6
	add r0, r8	@ 00018de6 4044
.org 0x18de8
	ldr r0, [r0, #0]	@ 00018de8 0068
.org 0x18dea
	asrs r0, r0, #8	@ 00018dea 0012
.org 0x18dec
	subs r1, r1, r0	@ 00018dec 091a
.org 0x18dee
	ldr r0, [pc, #104]	@ 00018dee 1a48
.org 0x18df0
	add r0, r8	@ 00018df0 4044
.org 0x18df2
	adds r1, #80	@ 00018df2 5031
.org 0x18df4
	ldrh r0, [r0, #0]	@ 00018df4 0088
.org 0x18df6
	adds r1, r1, r0	@ 00018df6 0918
.org 0x18df8
	ldr r0, [r7, #44]	@ 00018df8 f86a
.org 0x18dfa
	asrs r0, r0, #8	@ 00018dfa 0012
.org 0x18dfc
	adds r1, r1, r0	@ 00018dfc 0918
.org 0x18dfe
	strh r1, [r4, #0]	@ 00018dfe 2180
.org 0x18e00
	adds r2, #2	@ 00018e00 0232
.org 0x18e02
	adds r3, r3, r2	@ 00018e02 9b18
.org 0x18e04
	ldr r1, [r7, #56]	@ 00018e04 b96b
.org 0x18e06
	ldr r0, [pc, #84]	@ 00018e06 1548
.org 0x18e08
	add r0, r8	@ 00018e08 4044
.org 0x18e0a
	ldr r0, [r0, #0]	@ 00018e0a 0068
.org 0x18e0c
	asrs r0, r0, #8	@ 00018e0c 0012
.org 0x18e0e
	ldr r2, [pc, #80]	@ 00018e0e 144a
.org 0x18e10
	add r2, r8	@ 00018e10 4244
.org 0x18e12
	subs r1, r1, r0	@ 00018e12 091a
.org 0x18e14
	ldrh r2, [r2, #0]	@ 00018e14 1288
.org 0x18e16
	adds r1, r1, r2	@ 00018e16 8918
.org 0x18e18
	ldr r0, [r7, #48]	@ 00018e18 386b
.org 0x18e1a
	asrs r0, r0, #8	@ 00018e1a 0012
