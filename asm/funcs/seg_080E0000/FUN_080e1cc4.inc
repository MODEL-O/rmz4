@ FUN_080e1cc4  entry 0x080e1cc4  size 172
.thumb
.org 0xe1cc4
FUN_080e1cc4:
	push {r4, r5, r6, r7, lr}	@ 000e1cc4 f0b5
.org 0xe1cc6
	mov r7, r8	@ 000e1cc6 4746
.org 0xe1cc8
	push {r7}	@ 000e1cc8 80b4
.org 0xe1cca
	adds r5, r0, #0	@ 000e1cca 051c
.org 0xe1ccc
	ldr r0, [sp, #24]	@ 000e1ccc 0698
.org 0xe1cce
	lsls r1, r1, #24	@ 000e1cce 0906
.org 0xe1cd0
	lsrs r1, r1, #24	@ 000e1cd0 090e
.org 0xe1cd2
	mov r8, r1	@ 000e1cd2 8846
.org 0xe1cd4
	lsls r2, r2, #24	@ 000e1cd4 1206
.org 0xe1cd6
	lsrs r4, r2, #24	@ 000e1cd6 140e
.org 0xe1cd8
	lsls r3, r3, #24	@ 000e1cd8 1b06
.org 0xe1cda
	lsrs r6, r3, #24	@ 000e1cda 1e0e
.org 0xe1cdc
	lsls r0, r0, #24	@ 000e1cdc 0006
.org 0xe1cde
	lsrs r7, r0, #24	@ 000e1cde 070e
.org 0xe1ce0
	ldr r0, [pc, #68]	@ 000e1ce0 1148
.org 0xe1ce2
	ldr r0, [r0, #0]	@ 000e1ce2 0068
.org 0xe1ce4
	bl 0x5500	@ 000e1ce4 23f70cfc
.org 0xe1ce8
	adds r3, r0, #0	@ 000e1ce8 031c
.org 0xe1cea
	cmp r3, #0	@ 000e1cea 002b
.org 0xe1cec
	beq.n 0xe1d70	@ 000e1cec 40d0
.org 0xe1cee
	adds r1, r3, #0	@ 000e1cee 191c
.org 0xe1cf0
	adds r1, #37	@ 000e1cf0 2531
.org 0xe1cf2
	movs r2, #0	@ 000e1cf2 0022
.org 0xe1cf4
	movs r0, #1	@ 000e1cf4 0120
.org 0xe1cf6
	strb r0, [r1, #0]	@ 000e1cf6 0870
.org 0xe1cf8
	ldr r0, [pc, #48]	@ 000e1cf8 0c48
.org 0xe1cfa
	movs r1, #62	@ 000e1cfa 3e21
.org 0xe1cfc
	strb r1, [r3, #9]	@ 000e1cfc 5972
.org 0xe1cfe
	adds r0, #248	@ 000e1cfe f830
.org 0xe1d00
	ldr r0, [r0, #0]	@ 000e1d00 0068
.org 0xe1d02
	ldr r0, [r0, #0]	@ 000e1d02 0068
.org 0xe1d04
	str r0, [r3, #20]	@ 000e1d04 5861
.org 0xe1d06
	movs r0, #0	@ 000e1d06 0020
.org 0xe1d08
	strh r2, [r3, #32]	@ 000e1d08 1a84
.org 0xe1d0a
	adds r1, r3, #0	@ 000e1d0a 191c
.org 0xe1d0c
	adds r1, #34	@ 000e1d0c 2231
.org 0xe1d0e
	strb r0, [r1, #0]	@ 000e1d0e 0870
.org 0xe1d10
	ldr r0, [r5, #0]	@ 000e1d10 2868
.org 0xe1d12
	ldr r1, [r5, #4]	@ 000e1d12 6968
.org 0xe1d14
	str r0, [r3, #84]	@ 000e1d14 5865
.org 0xe1d16
	str r1, [r3, #88]	@ 000e1d16 9965
.org 0xe1d18
	adds r2, r4, #0	@ 000e1d18 221c
.org 0xe1d1a
	cmp r2, #0	@ 000e1d1a 002a
.org 0xe1d1c
	beq.n 0xe1d30	@ 000e1d1c 08d0
.org 0xe1d1e
	ldrb r0, [r3, #10]	@ 000e1d1e 987a
.org 0xe1d20
	movs r1, #16	@ 000e1d20 1021
.org 0xe1d22
	orrs r0, r1	@ 000e1d22 0843
.org 0xe1d24
	b.n 0xe1d36	@ 000e1d24 07e0
.org 0xe1d26
	.byte 0x00	@ 000e1d26 data
.org 0xe1d27
	.byte 0x00	@ 000e1d27 data
.org 0xe1d28
	.byte 0x9c,0xed,0x02,0x02	@ 000e1d28 data
.org 0xe1d2c
	.byte 0x64,0x6f,0x86,0x08	@ 000e1d2c data
.org 0xe1d30
	ldrb r1, [r3, #10]	@ 000e1d30 997a
.org 0xe1d32
	movs r0, #239	@ 000e1d32 ef20
.org 0xe1d34
	ands r0, r1	@ 000e1d34 0840
.org 0xe1d36
	strb r0, [r3, #10]	@ 000e1d36 9872
.org 0xe1d38
	movs r1, #1	@ 000e1d38 0121
.org 0xe1d3a
	ands r1, r2	@ 000e1d3a 1140
.org 0xe1d3c
	adds r0, r3, #0	@ 000e1d3c 181c
.org 0xe1d3e
	adds r0, #76	@ 000e1d3e 4c30
.org 0xe1d40
	strb r1, [r0, #0]	@ 000e1d40 0170
.org 0xe1d42
	movs r0, #74	@ 000e1d42 4a20
.org 0xe1d44
	adds r0, r0, r3	@ 000e1d44 c018
.org 0xe1d46
	mov ip, r0	@ 000e1d46 8446
.org 0xe1d48
	lsls r1, r1, #4	@ 000e1d48 0901
.org 0xe1d4a
	ldrb r2, [r0, #0]	@ 000e1d4a 0278
.org 0xe1d4c
	movs r0, #17	@ 000e1d4c 1120
.org 0xe1d4e
	negs r0, r0	@ 000e1d4e 4042
.org 0xe1d50
	ands r0, r2	@ 000e1d50 1040
.org 0xe1d52
	orrs r0, r1	@ 000e1d52 0843
.org 0xe1d54
	mov r1, ip	@ 000e1d54 6146
.org 0xe1d56
	strb r0, [r1, #0]	@ 000e1d56 0870
.org 0xe1d58
	cmp r6, #0	@ 000e1d58 002e
.org 0xe1d5a
	beq.n 0xe1d62	@ 000e1d5a 02d0
.org 0xe1d5c
	movs r0, #16	@ 000e1d5c 1020
.org 0xe1d5e
	negs r0, r0	@ 000e1d5e 4042
.org 0xe1d60
	b.n 0xe1d64	@ 000e1d60 00e0
.org 0xe1d62
	movs r0, #16	@ 000e1d62 1020
.org 0xe1d64
	str r0, [r3, #100]	@ 000e1d64 5866
.org 0xe1d66
	movs r0, #1	@ 000e1d66 0120
.org 0xe1d68
	strb r0, [r3, #16]	@ 000e1d68 1874
.org 0xe1d6a
	mov r0, r8	@ 000e1d6a 4046
.org 0xe1d6c
	strb r0, [r3, #17]	@ 000e1d6c 5874
.org 0xe1d6e
	strb r7, [r3, #18]	@ 000e1d6e 9f74
