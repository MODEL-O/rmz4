@ FUN_08084020  entry 0x08084020  size 316
.thumb
.org 0x84020
FUN_08084020:
	push {r4, r5, r6, lr}	@ 00084020 70b5
.org 0x84022
	adds r5, r0, #0	@ 00084022 051c
.org 0x84024
	ldrb r0, [r5, #14]	@ 00084024 a87b
.org 0x84026
	cmp r0, #0	@ 00084026 0028
.org 0x84028
	bne.n 0x8410e	@ 00084028 71d1
.org 0x8402a
	movs r1, #224	@ 0008402a e021
.org 0x8402c
	lsls r1, r1, #5	@ 0008402c 4901
.org 0x8402e
	adds r0, r5, #0	@ 0008402e 281c
.org 0x84030
	bl 0x1cf00	@ 00084030 98f766ff
.org 0x84034
	ldr r4, [pc, #88]	@ 00084034 164c
.org 0x84036
	ldr r2, [r4, #0]	@ 00084036 2268
.org 0x84038
	ldr r1, [r5, #84]	@ 00084038 696d
.org 0x8403a
	ldr r0, [r2, #84]	@ 0008403a 506d
.org 0x8403c
	subs r1, r1, r0	@ 0008403c 091a
.org 0x8403e
	str r1, [r5, #92]	@ 0008403e e965
.org 0x84040
	ldr r0, [r5, #88]	@ 00084040 a86d
.org 0x84042
	ldr r2, [r2, #88]	@ 00084042 926d
.org 0x84044
	subs r0, r0, r2	@ 00084044 801a
.org 0x84046
	ldr r2, [pc, #76]	@ 00084046 134a
.org 0x84048
	adds r0, r0, r2	@ 00084048 8018
.org 0x8404a
	str r0, [r5, #96]	@ 0008404a 2866
.org 0x8404c
	asrs r1, r1, #8	@ 0008404c 0912
.org 0x8404e
	adds r6, r1, #0	@ 0008404e 0e1c
.org 0x84050
	muls r6, r1	@ 00084050 4e43
.org 0x84052
	asrs r0, r0, #8	@ 00084052 0012
.org 0x84054
	adds r1, r0, #0	@ 00084054 011c
.org 0x84056
	muls r1, r0	@ 00084056 4143
.org 0x84058
	adds r0, r1, #0	@ 00084058 081c
.org 0x8405a
	adds r6, r6, r0	@ 0008405a 3618
.org 0x8405c
	adds r0, r6, #0	@ 0008405c 301c
.org 0x8405e
	bl 0x128bf4	@ 0008405e a4f0c9fd
.org 0x84062
	lsls r0, r0, #16	@ 00084062 0004
.org 0x84064
	lsrs r6, r0, #16	@ 00084064 060c
.org 0x84066
	cmp r6, #0	@ 00084066 002e
.org 0x84068
	beq.n 0x84098	@ 00084068 16d0
.org 0x8406a
	ldr r0, [r5, #92]	@ 0008406a e86d
.org 0x8406c
	adds r1, r6, #0	@ 0008406c 311c
.org 0x8406e
	bl 0x128fb8	@ 0008406e a4f0a3ff
.org 0x84072
	adds r4, r0, #0	@ 00084072 041c
.org 0x84074
	str r4, [r5, #92]	@ 00084074 ec65
.org 0x84076
	ldr r0, [r5, #96]	@ 00084076 286e
.org 0x84078
	adds r1, r6, #0	@ 00084078 311c
.org 0x8407a
	bl 0x128fb8	@ 0008407a a4f09dff
.org 0x8407e
	lsls r1, r4, #1	@ 0008407e 6100
.org 0x84080
	adds r1, r1, r4	@ 00084080 0919
.org 0x84082
	lsls r1, r1, #1	@ 00084082 4900
.org 0x84084
	str r1, [r5, #92]	@ 00084084 e965
.org 0x84086
	lsls r1, r0, #1	@ 00084086 4100
.org 0x84088
	adds r1, r1, r0	@ 00084088 0918
.org 0x8408a
	lsls r1, r1, #1	@ 0008408a 4900
.org 0x8408c
	str r1, [r5, #96]	@ 0008408c 2966
.org 0x8408e
	b.n 0x840b2	@ 0008408e 10e0
.org 0x84090
	.byte 0xf0,0xdb,0x02,0x02	@ 00084090 data
.org 0x84094
	.byte 0x00,0xe8,0xff,0xff	@ 00084094 data
.org 0x84098
	ldr r0, [r4, #0]	@ 00084098 2068
.org 0x8409a
	ldrb r1, [r0, #10]	@ 0008409a 817a
.org 0x8409c
	movs r0, #16	@ 0008409c 1020
.org 0x8409e
	ands r0, r1	@ 0008409e 0840
.org 0x840a0
	cmp r0, #0	@ 000840a0 0028
.org 0x840a2
	beq.n 0x840aa	@ 000840a2 02d0
.org 0x840a4
	movs r0, #192	@ 000840a4 c020
.org 0x840a6
	lsls r0, r0, #3	@ 000840a6 c000
.org 0x840a8
	b.n 0x840ac	@ 000840a8 00e0
.org 0x840aa
	ldr r0, [pc, #44]	@ 000840aa 0b48
.org 0x840ac
	str r0, [r5, #92]	@ 000840ac e865
.org 0x840ae
	movs r0, #0	@ 000840ae 0020
.org 0x840b0
	str r0, [r5, #96]	@ 000840b0 2866
.org 0x840b2
	ldr r0, [r5, #92]	@ 000840b2 e86d
.org 0x840b4
	cmp r0, #0	@ 000840b4 0028
.org 0x840b6
	ble.n 0x840dc	@ 000840b6 11dd
.org 0x840b8
	movs r2, #0	@ 000840b8 0022
.org 0x840ba
	ldrb r1, [r5, #10]	@ 000840ba a97a
.org 0x840bc
	movs r0, #239	@ 000840bc ef20
.org 0x840be
	ands r0, r1	@ 000840be 0840
.org 0x840c0
	strb r0, [r5, #10]	@ 000840c0 a872
.org 0x840c2
	adds r0, r5, #0	@ 000840c2 281c
.org 0x840c4
	adds r0, #76	@ 000840c4 4c30
.org 0x840c6
	strb r2, [r0, #0]	@ 000840c6 0270
.org 0x840c8
	adds r2, r5, #0	@ 000840c8 2a1c
.org 0x840ca
	adds r2, #74	@ 000840ca 4a32
.org 0x840cc
	ldrb r1, [r2, #0]	@ 000840cc 1178
.org 0x840ce
	movs r0, #17	@ 000840ce 1120
.org 0x840d0
	negs r0, r0	@ 000840d0 4042
.org 0x840d2
	ands r0, r1	@ 000840d2 0840
.org 0x840d4
	strb r0, [r2, #0]	@ 000840d4 1070
.org 0x840d6
	b.n 0x840fe	@ 000840d6 12e0
.org 0x840d8
	.byte 0x00,0xfa,0xff,0xff	@ 000840d8 data
.org 0x840dc
	movs r2, #1	@ 000840dc 0122
.org 0x840de
	ldrb r1, [r5, #10]	@ 000840de a97a
.org 0x840e0
	movs r0, #16	@ 000840e0 1020
.org 0x840e2
	orrs r0, r1	@ 000840e2 0843
.org 0x840e4
	strb r0, [r5, #10]	@ 000840e4 a872
.org 0x840e6
	adds r0, r5, #0	@ 000840e6 281c
.org 0x840e8
	adds r0, #76	@ 000840e8 4c30
.org 0x840ea
	strb r2, [r0, #0]	@ 000840ea 0270
.org 0x840ec
	adds r3, r5, #0	@ 000840ec 2b1c
.org 0x840ee
	adds r3, #74	@ 000840ee 4a33
.org 0x840f0
	movs r2, #16	@ 000840f0 1022
.org 0x840f2
	ldrb r1, [r3, #0]	@ 000840f2 1978
.org 0x840f4
	movs r0, #17	@ 000840f4 1120
.org 0x840f6
	negs r0, r0	@ 000840f6 4042
.org 0x840f8
	ands r0, r1	@ 000840f8 0840
.org 0x840fa
	orrs r0, r2	@ 000840fa 1043
.org 0x840fc
	strb r0, [r3, #0]	@ 000840fc 1870
.org 0x840fe
	adds r0, r5, #0	@ 000840fe 281c
.org 0x84100
	adds r0, #116	@ 00084100 7430
.org 0x84102
	ldr r1, [pc, #100]	@ 00084102 1949
.org 0x84104
	bl 0x5784	@ 00084104 81f73efb
.org 0x84108
	ldrb r0, [r5, #14]	@ 00084108 a87b
.org 0x8410a
	adds r0, #1	@ 0008410a 0130
.org 0x8410c
	strb r0, [r5, #14]	@ 0008410c a873
.org 0x8410e
	adds r0, r5, #0	@ 0008410e 281c
.org 0x84110
	bl 0x1cff0	@ 00084110 98f76eff
.org 0x84114
	ldr r0, [r5, #84]	@ 00084114 686d
.org 0x84116
	ldr r3, [r5, #92]	@ 00084116 eb6d
.org 0x84118
	adds r0, r0, r3	@ 00084118 c018
.org 0x8411a
	str r0, [r5, #84]	@ 0008411a 6865
.org 0x8411c
	ldr r1, [r5, #88]	@ 0008411c a96d
.org 0x8411e
	ldr r2, [r5, #96]	@ 0008411e 2a6e
.org 0x84120
	adds r1, r1, r2	@ 00084120 8918
.org 0x84122
	str r1, [r5, #88]	@ 00084122 a965
.org 0x84124
	adds r2, #64	@ 00084124 4032
.org 0x84126
	str r2, [r5, #96]	@ 00084126 2a66
.org 0x84128
	adds r0, r0, r3	@ 00084128 c018
.org 0x8412a
	bl 0x7c7c	@ 0008412a 83f7a7fd
.org 0x8412e
	lsls r0, r0, #16	@ 0008412e 0004
.org 0x84130
	cmp r0, #0	@ 00084130 0028
.org 0x84132
	bne.n 0x8414a	@ 00084132 0ad1
.org 0x84134
	ldr r0, [r5, #84]	@ 00084134 686d
.org 0x84136
	ldr r1, [r5, #92]	@ 00084136 e96d
.org 0x84138
	adds r0, r0, r1	@ 00084138 4018
.org 0x8413a
	ldr r1, [r5, #88]	@ 0008413a a96d
.org 0x8413c
	ldr r2, [pc, #44]	@ 0008413c 0b4a
.org 0x8413e
	adds r1, r1, r2	@ 0008413e 8918
.org 0x84140
	bl 0x7c7c	@ 00084140 83f79cfd
.org 0x84144
	lsls r0, r0, #16	@ 00084144 0004
.org 0x84146
	cmp r0, #0	@ 00084146 0028
.org 0x84148
	beq.n 0x84162	@ 00084148 0bd0
.org 0x8414a
	ldr r1, [pc, #36]	@ 0008414a 0949
.org 0x8414c
	ldrb r0, [r5, #9]	@ 0008414c 687a
.org 0x8414e
	lsls r0, r0, #2	@ 0008414e 8000
.org 0x84150
	adds r0, r0, r1	@ 00084150 4018
.org 0x84152
	movs r1, #2	@ 00084152 0221
.org 0x84154
	str r1, [r5, #12]	@ 00084154 e960
.org 0x84156
	ldr r0, [r0, #0]	@ 00084156 0068
.org 0x84158
	ldr r0, [r0, #8]	@ 00084158 8068
.org 0x8415a
	str r0, [r5, #20]	@ 0008415a 6861
