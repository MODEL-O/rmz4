@ FUN_080d8e58  entry 0x080d8e58  size 148
.thumb
.org 0xd8e58
FUN_080d8e58:
	push {r4, r5, r6, lr}	@ 000d8e58 70b5
.org 0xd8e5a
	adds r5, r0, #0	@ 000d8e5a 051c
.org 0xd8e5c
	lsls r1, r1, #24	@ 000d8e5c 0906
.org 0xd8e5e
	lsrs r6, r1, #24	@ 000d8e5e 0e0e
.org 0xd8e60
	ldr r0, [pc, #92]	@ 000d8e60 1748
.org 0xd8e62
	ldr r0, [r0, #0]	@ 000d8e62 0068
.org 0xd8e64
	bl 0x5500	@ 000d8e64 2cf74cfb
.org 0xd8e68
	mov ip, r0	@ 000d8e68 8446
.org 0xd8e6a
	cmp r0, #0	@ 000d8e6a 0028
.org 0xd8e6c
	beq.n 0xd8eee	@ 000d8e6c 3fd0
.org 0xd8e6e
	adds r0, #37	@ 000d8e6e 2530
.org 0xd8e70
	movs r3, #0	@ 000d8e70 0023
.org 0xd8e72
	movs r4, #1	@ 000d8e72 0124
.org 0xd8e74
	strb r4, [r0, #0]	@ 000d8e74 0470
.org 0xd8e76
	ldr r1, [pc, #76]	@ 000d8e76 1349
.org 0xd8e78
	movs r0, #28	@ 000d8e78 1c20
.org 0xd8e7a
	mov r2, ip	@ 000d8e7a 6246
.org 0xd8e7c
	strb r0, [r2, #9]	@ 000d8e7c 5072
.org 0xd8e7e
	ldr r0, [r1, #112]	@ 000d8e7e 086f
.org 0xd8e80
	ldr r0, [r0, #0]	@ 000d8e80 0068
.org 0xd8e82
	str r0, [r2, #20]	@ 000d8e82 5061
.org 0xd8e84
	movs r2, #0	@ 000d8e84 0022
.org 0xd8e86
	mov r0, ip	@ 000d8e86 6046
.org 0xd8e88
	strh r3, [r0, #32]	@ 000d8e88 0384
.org 0xd8e8a
	adds r0, #34	@ 000d8e8a 2230
.org 0xd8e8c
	strb r2, [r0, #0]	@ 000d8e8c 0270
.org 0xd8e8e
	ldr r0, [r5, #84]	@ 000d8e8e 686d
.org 0xd8e90
	ldr r1, [r5, #88]	@ 000d8e90 a96d
.org 0xd8e92
	mov r3, ip	@ 000d8e92 6346
.org 0xd8e94
	str r0, [r3, #84]	@ 000d8e94 5865
.org 0xd8e96
	str r1, [r3, #88]	@ 000d8e96 9965
.org 0xd8e98
	ldr r0, [r5, #92]	@ 000d8e98 e86d
.org 0xd8e9a
	ldr r1, [r5, #96]	@ 000d8e9a 296e
.org 0xd8e9c
	str r0, [r3, #92]	@ 000d8e9c d865
.org 0xd8e9e
	str r1, [r3, #96]	@ 000d8e9e 1966
.org 0xd8ea0
	strb r2, [r3, #16]	@ 000d8ea0 1a74
.org 0xd8ea2
	strb r2, [r3, #17]	@ 000d8ea2 5a74
.org 0xd8ea4
	mov r0, ip	@ 000d8ea4 6046
.org 0xd8ea6
	adds r0, #124	@ 000d8ea6 7c30
.org 0xd8ea8
	strb r6, [r0, #0]	@ 000d8ea8 0670
.org 0xd8eaa
	ldrb r0, [r5, #10]	@ 000d8eaa a87a
.org 0xd8eac
	lsrs r2, r0, #4	@ 000d8eac 0209
.org 0xd8eae
	ands r2, r4	@ 000d8eae 2240
.org 0xd8eb0
	cmp r2, #0	@ 000d8eb0 002a
.org 0xd8eb2
	beq.n 0xd8ec8	@ 000d8eb2 09d0
.org 0xd8eb4
	ldrb r0, [r3, #10]	@ 000d8eb4 987a
.org 0xd8eb6
	movs r1, #16	@ 000d8eb6 1021
.org 0xd8eb8
	orrs r0, r1	@ 000d8eb8 0843
.org 0xd8eba
	strb r0, [r3, #10]	@ 000d8eba 9872
.org 0xd8ebc
	b.n 0xd8ed4	@ 000d8ebc 0ae0
.org 0xd8ebe
	.byte 0x00	@ 000d8ebe data
.org 0xd8ebf
	.byte 0x00	@ 000d8ebf data
.org 0xd8ec0
	.byte 0x9c,0xed,0x02,0x02	@ 000d8ec0 data
.org 0xd8ec4
	.byte 0x64,0x6f,0x86,0x08	@ 000d8ec4 data
.org 0xd8ec8
	mov r0, ip	@ 000d8ec8 6046
.org 0xd8eca
	ldrb r1, [r0, #10]	@ 000d8eca 817a
.org 0xd8ecc
	movs r0, #239	@ 000d8ecc ef20
.org 0xd8ece
	ands r0, r1	@ 000d8ece 0840
.org 0xd8ed0
	mov r1, ip	@ 000d8ed0 6146
.org 0xd8ed2
	strb r0, [r1, #10]	@ 000d8ed2 8872
.org 0xd8ed4
	adds r1, r2, #0	@ 000d8ed4 111c
.org 0xd8ed6
	mov r0, ip	@ 000d8ed6 6046
.org 0xd8ed8
	adds r0, #76	@ 000d8ed8 4c30
.org 0xd8eda
	strb r1, [r0, #0]	@ 000d8eda 0170
.org 0xd8edc
	mov r3, ip	@ 000d8edc 6346
.org 0xd8ede
	adds r3, #74	@ 000d8ede 4a33
.org 0xd8ee0
	lsls r1, r1, #4	@ 000d8ee0 0901
.org 0xd8ee2
	ldrb r2, [r3, #0]	@ 000d8ee2 1a78
.org 0xd8ee4
	movs r0, #17	@ 000d8ee4 1120
.org 0xd8ee6
	negs r0, r0	@ 000d8ee6 4042
.org 0xd8ee8
	ands r0, r2	@ 000d8ee8 1040
.org 0xd8eea
	orrs r0, r1	@ 000d8eea 0843
