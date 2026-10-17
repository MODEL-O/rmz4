@ FUN_08097d28  entry 0x08097d28  size 160
.thumb
.org 0x97d28
FUN_08097d28:
	push {r4, r5, r6, r7, lr}	@ 00097d28 f0b5
.org 0x97d2a
	adds r7, r0, #0	@ 00097d2a 071c
.org 0x97d2c
	bl 0x1cc9c	@ 00097d2c 84f7b6ff
.org 0x97d30
	ldrb r1, [r7, #10]	@ 00097d30 b97a
.org 0x97d32
	movs r0, #1	@ 00097d32 0120
.org 0x97d34
	orrs r0, r1	@ 00097d34 0843
.org 0x97d36
	movs r1, #2	@ 00097d36 0221
.org 0x97d38
	orrs r0, r1	@ 00097d38 0843
.org 0x97d3a
	strb r0, [r7, #10]	@ 00097d3a b872
.org 0x97d3c
	movs r1, #134	@ 00097d3c 8621
.org 0x97d3e
	lsls r1, r1, #8	@ 00097d3e 0902
.org 0x97d40
	adds r0, r7, #0	@ 00097d40 381c
.org 0x97d42
	bl 0x1cf00	@ 00097d42 85f7ddf8
.org 0x97d46
	adds r0, r7, #0	@ 00097d46 381c
.org 0x97d48
	bl 0x1cff0	@ 00097d48 85f752f9
.org 0x97d4c
	movs r5, #0	@ 00097d4c 0025
.org 0x97d4e
	ldrb r1, [r7, #10]	@ 00097d4e b97a
.org 0x97d50
	movs r0, #239	@ 00097d50 ef20
.org 0x97d52
	ands r0, r1	@ 00097d52 0840
.org 0x97d54
	strb r0, [r7, #10]	@ 00097d54 b872
.org 0x97d56
	movs r6, #1	@ 00097d56 0126
.org 0x97d58
	adds r0, r7, #0	@ 00097d58 381c
.org 0x97d5a
	adds r0, #76	@ 00097d5a 4c30
.org 0x97d5c
	strb r5, [r0, #0]	@ 00097d5c 0570
.org 0x97d5e
	adds r2, r7, #0	@ 00097d5e 3a1c
.org 0x97d60
	adds r2, #74	@ 00097d60 4a32
.org 0x97d62
	ldrb r1, [r2, #0]	@ 00097d62 1178
.org 0x97d64
	movs r0, #17	@ 00097d64 1120
.org 0x97d66
	negs r0, r0	@ 00097d66 4042
.org 0x97d68
	ands r0, r1	@ 00097d68 0840
.org 0x97d6a
	strb r0, [r2, #0]	@ 00097d6a 1070
.org 0x97d6c
	ldrb r1, [r7, #10]	@ 00097d6c b97a
.org 0x97d6e
	movs r0, #4	@ 00097d6e 0420
.org 0x97d70
	orrs r0, r1	@ 00097d70 0843
.org 0x97d72
	strb r0, [r7, #10]	@ 00097d72 b872
.org 0x97d74
	adds r4, r7, #0	@ 00097d74 3c1c
.org 0x97d76
	adds r4, #116	@ 00097d76 7434
.org 0x97d78
	ldr r1, [pc, #76]	@ 00097d78 1349
.org 0x97d7a
	adds r2, #10	@ 00097d7a 0a32
.org 0x97d7c
	adds r0, r4, #0	@ 00097d7c 201c
.org 0x97d7e
	movs r3, #8	@ 00097d7e 0823
.org 0x97d80
	bl 0x5760	@ 00097d80 6df7eefc
.org 0x97d84
	str r7, [r4, #44]	@ 00097d84 e762
.org 0x97d86
	ldr r0, [pc, #68]	@ 00097d86 1148
.org 0x97d88
	str r0, [r4, #36]	@ 00097d88 6062
.org 0x97d8a
	adds r0, r7, #0	@ 00097d8a 381c
.org 0x97d8c
	adds r0, #189	@ 00097d8c bd30
.org 0x97d8e
	strb r5, [r0, #0]	@ 00097d8e 0570
.org 0x97d90
	adds r1, r7, #0	@ 00097d90 391c
.org 0x97d92
	adds r1, #180	@ 00097d92 b431
.org 0x97d94
	ldr r0, [r7, #84]	@ 00097d94 786d
.org 0x97d96
	str r0, [r1, #0]	@ 00097d96 0860
.org 0x97d98
	adds r1, #4	@ 00097d98 0431
.org 0x97d9a
	ldr r0, [r7, #88]	@ 00097d9a b86d
.org 0x97d9c
	str r0, [r1, #0]	@ 00097d9c 0860
.org 0x97d9e
	strb r5, [r7, #18]	@ 00097d9e bd74
.org 0x97da0
	strb r5, [r7, #19]	@ 00097da0 fd74
.org 0x97da2
	adds r0, r7, #0	@ 00097da2 381c
.org 0x97da4
	adds r0, #192	@ 00097da4 c030
.org 0x97da6
	str r5, [r0, #0]	@ 00097da6 0560
.org 0x97da8
	ldr r1, [pc, #36]	@ 00097da8 0949
.org 0x97daa
	ldrb r0, [r7, #9]	@ 00097daa 787a
.org 0x97dac
	lsls r0, r0, #2	@ 00097dac 8000
.org 0x97dae
	adds r0, r0, r1	@ 00097dae 4018
.org 0x97db0
	str r6, [r7, #12]	@ 00097db0 fe60
.org 0x97db2
	ldr r0, [r0, #0]	@ 00097db2 0068
.org 0x97db4
	ldr r0, [r0, #4]	@ 00097db4 4068
.org 0x97db6
	str r0, [r7, #20]	@ 00097db6 7861
.org 0x97db8
	movs r0, #2	@ 00097db8 0220
.org 0x97dba
	strb r0, [r7, #13]	@ 00097dba 7873
.org 0x97dbc
	adds r0, r7, #0	@ 00097dbc 381c
.org 0x97dbe
	bl 0x97dd4	@ 00097dbe 00f009f8
.org 0x97dc2
	pop {r4, r5, r6, r7}	@ 00097dc2 f0bc
.org 0x97dc4
	pop {r0}	@ 00097dc4 01bc
.org 0x97dc6
	bx r0	@ 00097dc6 0047
