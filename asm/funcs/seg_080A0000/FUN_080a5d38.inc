@ FUN_080a5d38  entry 0x080a5d38  size 190
.thumb
.org 0xa5d38
FUN_080a5d38:
	push {r4, r5, r6, r7, lr}	@ 000a5d38 f0b5
.org 0xa5d3a
	adds r5, r0, #0	@ 000a5d3a 051c
.org 0xa5d3c
	ldr r7, [r5, #40]	@ 000a5d3c af6a
.org 0xa5d3e
	ldrb r0, [r5, #15]	@ 000a5d3e e87b
.org 0xa5d40
	cmp r0, #1	@ 000a5d40 0128
.org 0xa5d42
	beq.n 0xa5d7c	@ 000a5d42 1bd0
.org 0xa5d44
	cmp r0, #1	@ 000a5d44 0128
.org 0xa5d46
	bgt.n 0xa5d4e	@ 000a5d46 02dc
.org 0xa5d48
	cmp r0, #0	@ 000a5d48 0028
.org 0xa5d4a
	beq.n 0xa5d58	@ 000a5d4a 05d0
.org 0xa5d4c
	b.n 0xa5dfa	@ 000a5d4c 55e0
.org 0xa5d4e
	cmp r0, #2	@ 000a5d4e 0228
.org 0xa5d50
	beq.n 0xa5da0	@ 000a5d50 26d0
.org 0xa5d52
	cmp r0, #3	@ 000a5d52 0328
.org 0xa5d54
	beq.n 0xa5dde	@ 000a5d54 43d0
.org 0xa5d56
	b.n 0xa5dfa	@ 000a5d56 50e0
.org 0xa5d58
	adds r0, r5, #0	@ 000a5d58 281c
.org 0xa5d5a
	adds r0, #116	@ 000a5d5a 7430
.org 0xa5d5c
	ldr r1, [pc, #56]	@ 000a5d5c 0e49
.org 0xa5d5e
	bl 0x5784	@ 000a5d5e 5ff711fd
.org 0xa5d62
	ldr r1, [pc, #56]	@ 000a5d62 0e49
.org 0xa5d64
	adds r0, r5, #0	@ 000a5d64 281c
.org 0xa5d66
	bl 0x1cf00	@ 000a5d66 77f7cbf8
.org 0xa5d6a
	adds r0, r5, #0	@ 000a5d6a 281c
.org 0xa5d6c
	movs r1, #5	@ 000a5d6c 0521
.org 0xa5d6e
	bl 0x1d3d0	@ 000a5d6e 77f72ffb
.org 0xa5d72
	movs r0, #32	@ 000a5d72 2020
.org 0xa5d74
	strb r0, [r5, #18]	@ 000a5d74 a874
.org 0xa5d76
	ldrb r0, [r5, #15]	@ 000a5d76 e87b
.org 0xa5d78
	adds r0, #1	@ 000a5d78 0130
.org 0xa5d7a
	strb r0, [r5, #15]	@ 000a5d7a e873
.org 0xa5d7c
	adds r0, r5, #0	@ 000a5d7c 281c
.org 0xa5d7e
	bl 0x1cff0	@ 000a5d7e 77f737f9
.org 0xa5d82
	ldrb r0, [r5, #18]	@ 000a5d82 a87c
.org 0xa5d84
	subs r0, #1	@ 000a5d84 0138
.org 0xa5d86
	strb r0, [r5, #18]	@ 000a5d86 a874
.org 0xa5d88
	lsls r0, r0, #24	@ 000a5d88 0006
.org 0xa5d8a
	cmp r0, #0	@ 000a5d8a 0028
.org 0xa5d8c
	bne.n 0xa5dfa	@ 000a5d8c 35d1
.org 0xa5d8e
	ldrb r0, [r5, #15]	@ 000a5d8e e87b
.org 0xa5d90
	adds r0, #1	@ 000a5d90 0130
.org 0xa5d92
	strb r0, [r5, #15]	@ 000a5d92 e873
.org 0xa5d94
	b.n 0xa5dfa	@ 000a5d94 31e0
.org 0xa5d96
	.byte 0x00	@ 000a5d96 data
.org 0xa5d97
	.byte 0x00	@ 000a5d97 data
.org 0xa5d98
	.byte 0x54,0x24,0x86,0x08	@ 000a5d98 data
.org 0xa5d9c
	.byte 0x07,0x88,0x00,0x00	@ 000a5d9c data
.org 0xa5da0
	movs r0, #156	@ 000a5da0 9c20
.org 0xa5da2
	lsls r0, r0, #1	@ 000a5da2 4000
.org 0xa5da4
	bl 0x2b10	@ 000a5da4 5cf7b4fe
.org 0xa5da8
	ldr r1, [pc, #84]	@ 000a5da8 1549
.org 0xa5daa
	adds r0, r5, #0	@ 000a5daa 281c
.org 0xa5dac
	bl 0x1cf00	@ 000a5dac 77f7a8f8
.org 0xa5db0
	adds r4, r5, #0	@ 000a5db0 2c1c
.org 0xa5db2
	adds r4, #84	@ 000a5db2 5434
.org 0xa5db4
	adds r0, r4, #0	@ 000a5db4 201c
.org 0xa5db6
	movs r1, #0	@ 000a5db6 0021
.org 0xa5db8
	movs r2, #0	@ 000a5db8 0022
.org 0xa5dba
	bl 0xe2064	@ 000a5dba 3cf053f9
.org 0xa5dbe
	movs r6, #0	@ 000a5dbe 0026
.org 0xa5dc0
	lsls r3, r6, #24	@ 000a5dc0 3306
.org 0xa5dc2
	lsrs r3, r3, #24	@ 000a5dc2 1b0e
.org 0xa5dc4
	adds r0, r7, #0	@ 000a5dc4 381c
.org 0xa5dc6
	adds r1, r4, #0	@ 000a5dc6 211c
.org 0xa5dc8
	movs r2, #1	@ 000a5dc8 0122
.org 0xa5dca
	bl 0xbd94c	@ 000a5dca 17f0bffd
.org 0xa5dce
	adds r6, #1	@ 000a5dce 0136
.org 0xa5dd0
	cmp r6, #5	@ 000a5dd0 052e
.org 0xa5dd2
	ble.n 0xa5dc0	@ 000a5dd2 f5dd
.org 0xa5dd4
	movs r0, #24	@ 000a5dd4 1820
.org 0xa5dd6
	strb r0, [r5, #18]	@ 000a5dd6 a874
.org 0xa5dd8
	ldrb r0, [r5, #15]	@ 000a5dd8 e87b
.org 0xa5dda
	adds r0, #1	@ 000a5dda 0130
.org 0xa5ddc
	strb r0, [r5, #15]	@ 000a5ddc e873
.org 0xa5dde
	adds r0, r5, #0	@ 000a5dde 281c
.org 0xa5de0
	bl 0x1cff0	@ 000a5de0 77f706f9
.org 0xa5de4
	ldrb r0, [r5, #18]	@ 000a5de4 a87c
.org 0xa5de6
	subs r0, #1	@ 000a5de6 0138
.org 0xa5de8
	strb r0, [r5, #18]	@ 000a5de8 a874
.org 0xa5dea
	lsls r0, r0, #24	@ 000a5dea 0006
.org 0xa5dec
	lsrs r1, r0, #24	@ 000a5dec 010e
.org 0xa5dee
	cmp r1, #0	@ 000a5dee 0029
.org 0xa5df0
	bne.n 0xa5dfa	@ 000a5df0 03d1
.org 0xa5df2
	movs r0, #3	@ 000a5df2 0320
.org 0xa5df4
	strb r0, [r5, #13]	@ 000a5df4 6873
