@ FUN_080a8e50  entry 0x080a8e50  size 168
.thumb
.org 0xa8e50
FUN_080a8e50:
	push {r4, r5, r6, lr}	@ 000a8e50 70b5
.org 0xa8e52
	adds r4, r0, #0	@ 000a8e52 041c
.org 0xa8e54
	ldr r6, [r4, #44]	@ 000a8e54 e66a
.org 0xa8e56
	adds r0, #192	@ 000a8e56 c030
.org 0xa8e58
	ldr r5, [r0, #0]	@ 000a8e58 0568
.org 0xa8e5a
	ldr r0, [r5, #84]	@ 000a8e5a 686d
.org 0xa8e5c
	ldr r1, [r6, #84]	@ 000a8e5c 716d
.org 0xa8e5e
	subs r0, r0, r1	@ 000a8e5e 401a
.org 0xa8e60
	asrs r0, r0, #1	@ 000a8e60 4010
.org 0xa8e62
	adds r1, r1, r0	@ 000a8e62 0918
.org 0xa8e64
	str r1, [r4, #84]	@ 000a8e64 6165
.org 0xa8e66
	ldr r0, [r5, #88]	@ 000a8e66 a86d
.org 0xa8e68
	ldr r1, [r6, #88]	@ 000a8e68 b16d
.org 0xa8e6a
	subs r0, r0, r1	@ 000a8e6a 401a
.org 0xa8e6c
	asrs r0, r0, #1	@ 000a8e6c 4010
.org 0xa8e6e
	adds r1, r1, r0	@ 000a8e6e 0918
.org 0xa8e70
	str r1, [r4, #88]	@ 000a8e70 a165
.org 0xa8e72
	ldr r1, [r5, #84]	@ 000a8e72 696d
.org 0xa8e74
	ldr r0, [r6, #84]	@ 000a8e74 706d
.org 0xa8e76
	cmp r1, r0	@ 000a8e76 8142
.org 0xa8e78
	ble.n 0xa8e9e	@ 000a8e78 11dd
.org 0xa8e7a
	movs r2, #1	@ 000a8e7a 0122
.org 0xa8e7c
	ldrb r1, [r4, #10]	@ 000a8e7c a17a
.org 0xa8e7e
	movs r0, #16	@ 000a8e7e 1020
.org 0xa8e80
	orrs r0, r1	@ 000a8e80 0843
.org 0xa8e82
	strb r0, [r4, #10]	@ 000a8e82 a072
.org 0xa8e84
	adds r0, r4, #0	@ 000a8e84 201c
.org 0xa8e86
	adds r0, #76	@ 000a8e86 4c30
.org 0xa8e88
	strb r2, [r0, #0]	@ 000a8e88 0270
.org 0xa8e8a
	adds r3, r4, #0	@ 000a8e8a 231c
.org 0xa8e8c
	adds r3, #74	@ 000a8e8c 4a33
.org 0xa8e8e
	movs r2, #16	@ 000a8e8e 1022
.org 0xa8e90
	ldrb r1, [r3, #0]	@ 000a8e90 1978
.org 0xa8e92
	movs r0, #17	@ 000a8e92 1120
.org 0xa8e94
	negs r0, r0	@ 000a8e94 4042
.org 0xa8e96
	ands r0, r1	@ 000a8e96 0840
.org 0xa8e98
	orrs r0, r2	@ 000a8e98 1043
.org 0xa8e9a
	strb r0, [r3, #0]	@ 000a8e9a 1870
.org 0xa8e9c
	b.n 0xa8ebc	@ 000a8e9c 0ee0
.org 0xa8e9e
	movs r2, #0	@ 000a8e9e 0022
.org 0xa8ea0
	ldrb r1, [r4, #10]	@ 000a8ea0 a17a
.org 0xa8ea2
	movs r0, #239	@ 000a8ea2 ef20
.org 0xa8ea4
	ands r0, r1	@ 000a8ea4 0840
.org 0xa8ea6
	strb r0, [r4, #10]	@ 000a8ea6 a072
.org 0xa8ea8
	adds r0, r4, #0	@ 000a8ea8 201c
.org 0xa8eaa
	adds r0, #76	@ 000a8eaa 4c30
.org 0xa8eac
	strb r2, [r0, #0]	@ 000a8eac 0270
.org 0xa8eae
	adds r2, r4, #0	@ 000a8eae 221c
.org 0xa8eb0
	adds r2, #74	@ 000a8eb0 4a32
.org 0xa8eb2
	ldrb r1, [r2, #0]	@ 000a8eb2 1178
.org 0xa8eb4
	movs r0, #17	@ 000a8eb4 1120
.org 0xa8eb6
	negs r0, r0	@ 000a8eb6 4042
.org 0xa8eb8
	ands r0, r1	@ 000a8eb8 0840
.org 0xa8eba
	strb r0, [r2, #0]	@ 000a8eba 1070
.org 0xa8ebc
	ldr r0, [r5, #84]	@ 000a8ebc 686d
.org 0xa8ebe
	ldr r1, [r6, #84]	@ 000a8ebe 716d
.org 0xa8ec0
	subs r2, r0, r1	@ 000a8ec0 421a
.org 0xa8ec2
	cmp r2, #0	@ 000a8ec2 002a
.org 0xa8ec4
	blt.n 0xa8ed0	@ 000a8ec4 04db
.org 0xa8ec6
	movs r0, #128	@ 000a8ec6 8020
.org 0xa8ec8
	lsls r0, r0, #4	@ 000a8ec8 0001
.org 0xa8eca
	cmp r2, r0	@ 000a8eca 8242
.org 0xa8ecc
	bgt.n 0xa8eda	@ 000a8ecc 05dc
.org 0xa8ece
	b.n 0xa8ee8	@ 000a8ece 0be0
.org 0xa8ed0
	subs r1, r1, r0	@ 000a8ed0 091a
.org 0xa8ed2
	movs r0, #128	@ 000a8ed2 8020
.org 0xa8ed4
	lsls r0, r0, #4	@ 000a8ed4 0001
.org 0xa8ed6
	cmp r1, r0	@ 000a8ed6 8142
.org 0xa8ed8
	ble.n 0xa8ee8	@ 000a8ed8 06dd
.org 0xa8eda
	ldr r1, [pc, #8]	@ 000a8eda 0249
.org 0xa8edc
	adds r0, r4, #0	@ 000a8edc 201c
.org 0xa8ede
	bl 0x1cf00	@ 000a8ede 74f70ff8
.org 0xa8ee2
	b.n 0xa8ef0	@ 000a8ee2 05e0
.org 0xa8ee4
	.byte 0x06,0x8d,0x00,0x00	@ 000a8ee4 data
.org 0xa8ee8
	ldr r1, [pc, #16]	@ 000a8ee8 0449
.org 0xa8eea
	adds r0, r4, #0	@ 000a8eea 201c
.org 0xa8eec
	bl 0x1cf00	@ 000a8eec 74f708f8
.org 0xa8ef0
	adds r0, r4, #0	@ 000a8ef0 201c
.org 0xa8ef2
	bl 0x1cff0	@ 000a8ef2 74f77df8
.org 0xa8ef6
	pop {r4, r5, r6}	@ 000a8ef6 70bc
