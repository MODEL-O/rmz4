@ FUN_0803fad8  entry 0x0803fad8  size 264
.thumb
.org 0x3fad8
FUN_0803fad8:
	push {r4, r5, r6, lr}	@ 0003fad8 70b5
.org 0x3fada
	adds r5, r0, #0	@ 0003fada 051c
.org 0x3fadc
	adds r6, r1, #0	@ 0003fadc 0e1c
.org 0x3fade
	lsls r2, r2, #24	@ 0003fade 1206
.org 0x3fae0
	lsrs r4, r2, #24	@ 0003fae0 140e
.org 0x3fae2
	ldr r0, [pc, #68]	@ 0003fae2 1148
.org 0x3fae4
	ldr r0, [r0, #0]	@ 0003fae4 0068
.org 0x3fae6
	bl 0x5500	@ 0003fae6 c5f70bfd
.org 0x3faea
	mov ip, r0	@ 0003faea 8446
.org 0x3faec
	cmp r0, #0	@ 0003faec 0028
.org 0x3faee
	bne.n 0x3faf2	@ 0003faee 00d1
.org 0x3faf0
	b.n 0x3fbfa	@ 0003faf0 83e0
.org 0x3faf2
	adds r0, r5, #0	@ 0003faf2 281c
.org 0x3faf4
	adds r0, #248	@ 0003faf4 f830
.org 0x3faf6
	ldrb r0, [r0, #0]	@ 0003faf6 0078
.org 0x3faf8
	cmp r0, #2	@ 0003faf8 0228
.org 0x3fafa
	bne.n 0x3fb38	@ 0003fafa 1dd1
.org 0x3fafc
	ldr r1, [pc, #44]	@ 0003fafc 0b49
.org 0x3fafe
	movs r0, #7	@ 0003fafe 0720
.org 0x3fb00
	mov r2, ip	@ 0003fb00 6246
.org 0x3fb02
	strb r0, [r2, #9]	@ 0003fb02 5072
.org 0x3fb04
	ldr r0, [r1, #28]	@ 0003fb04 c869
.org 0x3fb06
	ldr r0, [r0, #0]	@ 0003fb06 0068
.org 0x3fb08
	str r0, [r2, #20]	@ 0003fb08 5061
.org 0x3fb0a
	ldrb r1, [r2, #11]	@ 0003fb0a d17a
.org 0x3fb0c
	movs r0, #191	@ 0003fb0c bf20
.org 0x3fb0e
	ands r0, r1	@ 0003fb0e 0840
.org 0x3fb10
	strb r0, [r2, #11]	@ 0003fb10 d072
.org 0x3fb12
	mov r1, ip	@ 0003fb12 6146
.org 0x3fb14
	adds r1, #37	@ 0003fb14 2531
.org 0x3fb16
	movs r0, #16	@ 0003fb16 1020
.org 0x3fb18
	strb r0, [r1, #0]	@ 0003fb18 0870
.org 0x3fb1a
	ldr r0, [pc, #20]	@ 0003fb1a 0548
.org 0x3fb1c
	ldrh r0, [r0, #0]	@ 0003fb1c 0088
.org 0x3fb1e
	strh r0, [r2, #32]	@ 0003fb1e 1084
.org 0x3fb20
	ldr r0, [pc, #16]	@ 0003fb20 0448
.org 0x3fb22
	ldrb r0, [r0, #0]	@ 0003fb22 0078
.org 0x3fb24
	b.n 0x3fb60	@ 0003fb24 1ce0
.org 0x3fb26
	.byte 0x00	@ 0003fb26 data
.org 0x3fb27
	.byte 0x00	@ 0003fb27 data
.org 0x3fb28
	.byte 0x88,0xed,0x02,0x02	@ 0003fb28 data
.org 0x3fb2c
	.byte 0xf8,0x39,0x85,0x08	@ 0003fb2c data
.org 0x3fb30
	.byte 0xfc,0x36,0x85,0x08	@ 0003fb30 data
.org 0x3fb34
	.byte 0x04,0x37,0x85,0x08	@ 0003fb34 data
.org 0x3fb38
	ldr r1, [pc, #80]	@ 0003fb38 1449
.org 0x3fb3a
	movs r0, #7	@ 0003fb3a 0720
.org 0x3fb3c
	mov r2, ip	@ 0003fb3c 6246
.org 0x3fb3e
	strb r0, [r2, #9]	@ 0003fb3e 5072
.org 0x3fb40
	ldr r0, [r1, #28]	@ 0003fb40 c869
.org 0x3fb42
	ldr r0, [r0, #0]	@ 0003fb42 0068
.org 0x3fb44
	str r0, [r2, #20]	@ 0003fb44 5061
.org 0x3fb46
	ldrb r1, [r2, #11]	@ 0003fb46 d17a
.org 0x3fb48
	movs r0, #191	@ 0003fb48 bf20
.org 0x3fb4a
	ands r0, r1	@ 0003fb4a 0840
.org 0x3fb4c
	strb r0, [r2, #11]	@ 0003fb4c d072
.org 0x3fb4e
	mov r1, ip	@ 0003fb4e 6146
.org 0x3fb50
	adds r1, #37	@ 0003fb50 2531
.org 0x3fb52
	movs r0, #16	@ 0003fb52 1020
.org 0x3fb54
	strb r0, [r1, #0]	@ 0003fb54 0870
.org 0x3fb56
	ldr r0, [pc, #56]	@ 0003fb56 0e48
.org 0x3fb58
	ldrh r0, [r0, #2]	@ 0003fb58 4088
.org 0x3fb5a
	strh r0, [r2, #32]	@ 0003fb5a 1084
.org 0x3fb5c
	ldr r0, [pc, #52]	@ 0003fb5c 0d48
.org 0x3fb5e
	ldrb r0, [r0, #1]	@ 0003fb5e 4078
.org 0x3fb60
	subs r1, #3	@ 0003fb60 0339
.org 0x3fb62
	strb r0, [r1, #0]	@ 0003fb62 0870
.org 0x3fb64
	mov r0, ip	@ 0003fb64 6046
.org 0x3fb66
	str r5, [r0, #44]	@ 0003fb66 c562
.org 0x3fb68
	ldr r0, [r6, #0]	@ 0003fb68 3068
.org 0x3fb6a
	ldr r1, [r6, #4]	@ 0003fb6a 7168
.org 0x3fb6c
	mov r2, ip	@ 0003fb6c 6246
.org 0x3fb6e
	str r0, [r2, #84]	@ 0003fb6e 5065
.org 0x3fb70
	str r1, [r2, #88]	@ 0003fb70 9165
.org 0x3fb72
	movs r0, #1	@ 0003fb72 0120
.org 0x3fb74
	strb r0, [r2, #16]	@ 0003fb74 1074
.org 0x3fb76
	strb r4, [r2, #17]	@ 0003fb76 5474
.org 0x3fb78
	adds r2, r4, #0	@ 0003fb78 221c
.org 0x3fb7a
	ands r2, r0	@ 0003fb7a 0240
.org 0x3fb7c
	cmp r2, #0	@ 0003fb7c 002a
.org 0x3fb7e
	beq.n 0x3fb98	@ 0003fb7e 0bd0
.org 0x3fb80
	mov r1, ip	@ 0003fb80 6146
.org 0x3fb82
	ldrb r0, [r1, #10]	@ 0003fb82 887a
.org 0x3fb84
	movs r1, #16	@ 0003fb84 1021
.org 0x3fb86
	orrs r0, r1	@ 0003fb86 0843
.org 0x3fb88
	b.n 0x3fba0	@ 0003fb88 0ae0
.org 0x3fb8a
	.byte 0x00	@ 0003fb8a data
.org 0x3fb8b
	.byte 0x00	@ 0003fb8b data
.org 0x3fb8c
	.byte 0xf8,0x39,0x85,0x08	@ 0003fb8c data
.org 0x3fb90
	.byte 0xfc,0x36,0x85,0x08	@ 0003fb90 data
.org 0x3fb94
	.byte 0x04,0x37,0x85,0x08	@ 0003fb94 data
.org 0x3fb98
	mov r0, ip	@ 0003fb98 6046
.org 0x3fb9a
	ldrb r1, [r0, #10]	@ 0003fb9a 817a
.org 0x3fb9c
	movs r0, #239	@ 0003fb9c ef20
.org 0x3fb9e
	ands r0, r1	@ 0003fb9e 0840
.org 0x3fba0
	mov r1, ip	@ 0003fba0 6146
.org 0x3fba2
	strb r0, [r1, #10]	@ 0003fba2 8872
.org 0x3fba4
	adds r1, r2, #0	@ 0003fba4 111c
.org 0x3fba6
	mov r0, ip	@ 0003fba6 6046
.org 0x3fba8
	adds r0, #76	@ 0003fba8 4c30
.org 0x3fbaa
	strb r1, [r0, #0]	@ 0003fbaa 0170
.org 0x3fbac
	mov r2, ip	@ 0003fbac 6246
.org 0x3fbae
	adds r2, #74	@ 0003fbae 4a32
.org 0x3fbb0
	lsls r1, r1, #4	@ 0003fbb0 0901
.org 0x3fbb2
	ldrb r3, [r2, #0]	@ 0003fbb2 1378
.org 0x3fbb4
	movs r0, #17	@ 0003fbb4 1120
.org 0x3fbb6
	negs r0, r0	@ 0003fbb6 4042
.org 0x3fbb8
	ands r0, r3	@ 0003fbb8 1840
.org 0x3fbba
	orrs r0, r1	@ 0003fbba 0843
.org 0x3fbbc
	strb r0, [r2, #0]	@ 0003fbbc 1070
.org 0x3fbbe
	movs r1, #0	@ 0003fbbe 0021
.org 0x3fbc0
	adds r3, r2, #0	@ 0003fbc0 131c
.org 0x3fbc2
	cmp r4, #1	@ 0003fbc2 012c
.org 0x3fbc4
	bhi.n 0x3fbc8	@ 0003fbc4 00d8
.org 0x3fbc6
	movs r1, #1	@ 0003fbc6 0121
.org 0x3fbc8
	adds r2, r1, #0	@ 0003fbc8 0a1c
.org 0x3fbca
	cmp r2, #0	@ 0003fbca 002a
.org 0x3fbcc
	beq.n 0x3fbd8	@ 0003fbcc 04d0
.org 0x3fbce
	mov r1, ip	@ 0003fbce 6146
.org 0x3fbd0
	ldrb r0, [r1, #10]	@ 0003fbd0 887a
.org 0x3fbd2
	movs r1, #32	@ 0003fbd2 2021
.org 0x3fbd4
	orrs r0, r1	@ 0003fbd4 0843
.org 0x3fbd6
	b.n 0x3fbe0	@ 0003fbd6 03e0
.org 0x3fbd8
	mov r0, ip	@ 0003fbd8 6046
.org 0x3fbda
	ldrb r1, [r0, #10]	@ 0003fbda 817a
.org 0x3fbdc
	movs r0, #223	@ 0003fbdc df20
.org 0x3fbde
	ands r0, r1	@ 0003fbde 0840
