@ FUN_080e8cdc  entry 0x080e8cdc  size 208
.thumb
.org 0xe8cdc
FUN_080e8cdc:
	push {r4, lr}	@ 000e8cdc 10b5
.org 0xe8cde
	mov ip, r0	@ 000e8cde 8446
.org 0xe8ce0
	ldr r4, [r0, #40]	@ 000e8ce0 846a
.org 0xe8ce2
	ldr r0, [r4, #84]	@ 000e8ce2 606d
.org 0xe8ce4
	mov r1, ip	@ 000e8ce4 6146
.org 0xe8ce6
	str r0, [r1, #84]	@ 000e8ce6 4865
.org 0xe8ce8
	ldr r0, [r4, #88]	@ 000e8ce8 a06d
.org 0xe8cea
	str r0, [r1, #88]	@ 000e8cea 8865
.org 0xe8cec
	ldrb r0, [r1, #19]	@ 000e8cec c87c
.org 0xe8cee
	adds r1, r0, #4	@ 000e8cee 011d
.org 0xe8cf0
	mov r2, ip	@ 000e8cf0 6246
.org 0xe8cf2
	strb r1, [r2, #19]	@ 000e8cf2 d174
.org 0xe8cf4
	ldr r1, [pc, #96]	@ 000e8cf4 1849
.org 0xe8cf6
	adds r0, #68	@ 000e8cf6 4430
.org 0xe8cf8
	lsls r0, r0, #24	@ 000e8cf8 0006
.org 0xe8cfa
	lsrs r0, r0, #23	@ 000e8cfa c00d
.org 0xe8cfc
	adds r0, r0, r1	@ 000e8cfc 4018
.org 0xe8cfe
	movs r1, #0	@ 000e8cfe 0021
.org 0xe8d00
	ldrsh r0, [r0, r1]	@ 000e8d00 405e
.org 0xe8d02
	movs r1, #128	@ 000e8d02 8021
.org 0xe8d04
	lsls r1, r1, #1	@ 000e8d04 4900
.org 0xe8d06
	adds r0, r0, r1	@ 000e8d06 4018
.org 0xe8d08
	lsls r0, r0, #12	@ 000e8d08 0003
.org 0xe8d0a
	lsrs r0, r0, #16	@ 000e8d0a 000c
.org 0xe8d0c
	adds r0, r0, r1	@ 000e8d0c 4018
.org 0xe8d0e
	mov r1, ip	@ 000e8d0e 6146
.org 0xe8d10
	adds r1, #80	@ 000e8d10 5031
.org 0xe8d12
	strh r0, [r1, #0]	@ 000e8d12 0880
.org 0xe8d14
	adds r1, #2	@ 000e8d14 0231
.org 0xe8d16
	strh r0, [r1, #0]	@ 000e8d16 0880
.org 0xe8d18
	adds r0, r4, #0	@ 000e8d18 201c
.org 0xe8d1a
	adds r0, #72	@ 000e8d1a 4830
.org 0xe8d1c
	ldrh r1, [r0, #0]	@ 000e8d1c 0188
.org 0xe8d1e
	lsls r1, r1, #22	@ 000e8d1e 8905
.org 0xe8d20
	mov r3, ip	@ 000e8d20 6346
.org 0xe8d22
	adds r3, #72	@ 000e8d22 4833
.org 0xe8d24
	lsrs r1, r1, #22	@ 000e8d24 890d
.org 0xe8d26
	ldrh r2, [r3, #0]	@ 000e8d26 1a88
.org 0xe8d28
	ldr r0, [pc, #48]	@ 000e8d28 0c48
.org 0xe8d2a
	ands r0, r2	@ 000e8d2a 1040
.org 0xe8d2c
	orrs r0, r1	@ 000e8d2c 0843
.org 0xe8d2e
	strh r0, [r3, #0]	@ 000e8d2e 1880
.org 0xe8d30
	ldr r0, [r4, #60]	@ 000e8d30 e06b
.org 0xe8d32
	mov r2, ip	@ 000e8d32 6246
.org 0xe8d34
	str r0, [r2, #60]	@ 000e8d34 d063
.org 0xe8d36
	adds r0, r4, #0	@ 000e8d36 201c
.org 0xe8d38
	adds r0, #78	@ 000e8d38 4e30
.org 0xe8d3a
	ldrb r0, [r0, #0]	@ 000e8d3a 0078
.org 0xe8d3c
	mov r1, ip	@ 000e8d3c 6146
.org 0xe8d3e
	adds r1, #78	@ 000e8d3e 4e31
.org 0xe8d40
	strb r0, [r1, #0]	@ 000e8d40 0870
.org 0xe8d42
	ldrb r0, [r4, #10]	@ 000e8d42 a07a
.org 0xe8d44
	lsrs r2, r0, #4	@ 000e8d44 0209
.org 0xe8d46
	movs r0, #1	@ 000e8d46 0120
.org 0xe8d48
	ands r2, r0	@ 000e8d48 0240
.org 0xe8d4a
	cmp r2, #0	@ 000e8d4a 002a
.org 0xe8d4c
	beq.n 0xe8d60	@ 000e8d4c 08d0
.org 0xe8d4e
	mov r1, ip	@ 000e8d4e 6146
.org 0xe8d50
	ldrb r0, [r1, #10]	@ 000e8d50 887a
.org 0xe8d52
	movs r1, #16	@ 000e8d52 1021
.org 0xe8d54
	orrs r0, r1	@ 000e8d54 0843
.org 0xe8d56
	b.n 0xe8d68	@ 000e8d56 07e0
.org 0xe8d58
	.byte 0x0c,0x93,0x12,0x08	@ 000e8d58 data
.org 0xe8d5c
	.byte 0x00,0xfc,0xff,0xff	@ 000e8d5c data
.org 0xe8d60
	mov r0, ip	@ 000e8d60 6046
.org 0xe8d62
	ldrb r1, [r0, #10]	@ 000e8d62 817a
.org 0xe8d64
	movs r0, #239	@ 000e8d64 ef20
.org 0xe8d66
	ands r0, r1	@ 000e8d66 0840
.org 0xe8d68
	mov r1, ip	@ 000e8d68 6146
.org 0xe8d6a
	strb r0, [r1, #10]	@ 000e8d6a 8872
.org 0xe8d6c
	adds r1, r2, #0	@ 000e8d6c 111c
.org 0xe8d6e
	mov r0, ip	@ 000e8d6e 6046
.org 0xe8d70
	adds r0, #76	@ 000e8d70 4c30
.org 0xe8d72
	strb r1, [r0, #0]	@ 000e8d72 0170
.org 0xe8d74
	mov r3, ip	@ 000e8d74 6346
.org 0xe8d76
	adds r3, #74	@ 000e8d76 4a33
.org 0xe8d78
	lsls r1, r1, #4	@ 000e8d78 0901
.org 0xe8d7a
	ldrb r2, [r3, #0]	@ 000e8d7a 1a78
.org 0xe8d7c
	movs r0, #17	@ 000e8d7c 1120
.org 0xe8d7e
	negs r0, r0	@ 000e8d7e 4042
.org 0xe8d80
	ands r0, r2	@ 000e8d80 1040
.org 0xe8d82
	orrs r0, r1	@ 000e8d82 0843
.org 0xe8d84
	strb r0, [r3, #0]	@ 000e8d84 1870
.org 0xe8d86
	ldrb r0, [r4, #12]	@ 000e8d86 207b
.org 0xe8d88
	cmp r0, #1	@ 000e8d88 0128
.org 0xe8d8a
	bhi.n 0xe8d94	@ 000e8d8a 03d8
.org 0xe8d8c
	mov r2, ip	@ 000e8d8c 6246
.org 0xe8d8e
	ldrb r0, [r2, #17]	@ 000e8d8e 507c
.org 0xe8d90
	cmp r0, #0	@ 000e8d90 0028
.org 0xe8d92
	beq.n 0xe8dae	@ 000e8d92 0cd0
.org 0xe8d94
	ldr r1, [pc, #28]	@ 000e8d94 0749
.org 0xe8d96
	mov r2, ip	@ 000e8d96 6246
.org 0xe8d98
	ldrb r0, [r2, #9]	@ 000e8d98 507a
.org 0xe8d9a
	lsls r0, r0, #2	@ 000e8d9a 8000
.org 0xe8d9c
	adds r0, r0, r1	@ 000e8d9c 4018
.org 0xe8d9e
	movs r1, #2	@ 000e8d9e 0221
.org 0xe8da0
	str r1, [r2, #12]	@ 000e8da0 d160
.org 0xe8da2
	ldr r0, [r0, #0]	@ 000e8da2 0068
.org 0xe8da4
	ldr r0, [r0, #8]	@ 000e8da4 8068
.org 0xe8da6
	str r0, [r2, #20]	@ 000e8da6 5061
.org 0xe8da8
	mov r0, ip	@ 000e8da8 6046
.org 0xe8daa
	bl 0xe8db8	@ 000e8daa 00f005f8
