@ FUN_08074034  entry 0x08074034  size 188
.thumb
.org 0x74034
FUN_08074034:
	push {r4, lr}	@ 00074034 10b5
.org 0x74036
	adds r4, r0, #0	@ 00074036 041c
.org 0x74038
	adds r0, #140	@ 00074038 8c30
.org 0x7403a
	ldr r0, [r0, #0]	@ 0007403a 0068
.org 0x7403c
	movs r1, #128	@ 0007403c 8021
.org 0x7403e
	lsls r1, r1, #2	@ 0007403e 8900
.org 0x74040
	ands r0, r1	@ 00074040 0840
.org 0x74042
	cmp r0, #0	@ 00074042 0028
.org 0x74044
	bne.n 0x74052	@ 00074044 05d1
.org 0x74046
	adds r0, r4, #0	@ 00074046 201c
.org 0x74048
	adds r0, #164	@ 00074048 a430
.org 0x7404a
	movs r1, #0	@ 0007404a 0021
.org 0x7404c
	ldrsh r0, [r0, r1]	@ 0007404c 405e
.org 0x7404e
	cmp r0, #0	@ 0007404e 0028
.org 0x74050
	bne.n 0x74080	@ 00074050 16d1
.org 0x74052
	ldr r0, [pc, #36]	@ 00074052 0948
.org 0x74054
	ldrh r1, [r0, #8]	@ 00074054 0189
.org 0x74056
	movs r0, #8	@ 00074056 0820
.org 0x74058
	ands r0, r1	@ 00074058 0840
.org 0x7405a
	cmp r0, #0	@ 0007405a 0028
.org 0x7405c
	bne.n 0x74080	@ 0007405c 10d1
.org 0x7405e
	ldr r1, [pc, #28]	@ 0007405e 0749
.org 0x74060
	ldrb r0, [r4, #9]	@ 00074060 607a
.org 0x74062
	lsls r0, r0, #2	@ 00074062 8000
.org 0x74064
	adds r0, r0, r1	@ 00074064 4018
.org 0x74066
	movs r1, #2	@ 00074066 0221
.org 0x74068
	str r1, [r4, #12]	@ 00074068 e160
.org 0x7406a
	ldr r0, [r0, #0]	@ 0007406a 0068
.org 0x7406c
	ldr r0, [r0, #8]	@ 0007406c 8068
.org 0x7406e
	str r0, [r4, #20]	@ 0007406e 6061
.org 0x74070
	adds r0, r4, #0	@ 00074070 201c
.org 0x74072
	bl 0x74108	@ 00074072 00f049f8
.org 0x74076
	b.n 0x740fc	@ 00074076 41e0
.org 0x74078
	.byte 0x10,0xe9,0x02,0x02	@ 00074078 data
.org 0x7407c
	.byte 0x70,0x7d,0x85,0x08	@ 0007407c data
.org 0x74080
	adds r0, r4, #0	@ 00074080 201c
.org 0x74082
	adds r0, #140	@ 00074082 8c30
.org 0x74084
	ldr r0, [r0, #0]	@ 00074084 0068
.org 0x74086
	movs r1, #1	@ 00074086 0121
.org 0x74088
	ands r0, r1	@ 00074088 0840
.org 0x7408a
	cmp r0, #0	@ 0007408a 0028
.org 0x7408c
	beq.n 0x7409a	@ 0007408c 05d0
.org 0x7408e
	ldr r2, [pc, #84]	@ 0007408e 154a
.org 0x74090
	movs r0, #24	@ 00074090 1820
.org 0x74092
	adds r1, r4, #0	@ 00074092 211c
.org 0x74094
	bl 0x2adac	@ 00074094 b6f78afe
.org 0x74098
	str r0, [r4, #44]	@ 00074098 e062
.org 0x7409a
	ldr r0, [r4, #44]	@ 0007409a e06a
.org 0x7409c
	cmp r0, #0	@ 0007409c 0028
.org 0x7409e
	beq.n 0x740ac	@ 0007409e 05d0
.org 0x740a0
	bl 0x2b3e4	@ 000740a0 b7f7a0f9
.org 0x740a4
	cmp r0, #0	@ 000740a4 0028
.org 0x740a6
	beq.n 0x740ac	@ 000740a6 01d0
.org 0x740a8
	movs r0, #0	@ 000740a8 0020
.org 0x740aa
	str r0, [r4, #44]	@ 000740aa e062
.org 0x740ac
	adds r2, r4, #0	@ 000740ac 221c
.org 0x740ae
	adds r2, #180	@ 000740ae b432
.org 0x740b0
	adds r3, r4, #0	@ 000740b0 231c
.org 0x740b2
	adds r3, #227	@ 000740b2 e333
.org 0x740b4
	ldrb r1, [r3, #0]	@ 000740b4 1978
.org 0x740b6
	lsls r0, r1, #1	@ 000740b6 4800
.org 0x740b8
	adds r0, r0, r1	@ 000740b8 4018
.org 0x740ba
	lsls r0, r0, #10	@ 000740ba 8002
.org 0x740bc
	ldr r1, [pc, #40]	@ 000740bc 0a49
.org 0x740be
	adds r0, r0, r1	@ 000740be 4018
.org 0x740c0
	ldr r1, [r2, #0]	@ 000740c0 1168
.org 0x740c2
	adds r1, r1, r0	@ 000740c2 0918
.org 0x740c4
	ldr r0, [r4, #84]	@ 000740c4 606d
.org 0x740c6
	cmp r0, r1	@ 000740c6 8842
.org 0x740c8
	ble.n 0x740ce	@ 000740c8 01dd
.org 0x740ca
	subs r0, #64	@ 000740ca 4038
.org 0x740cc
	str r0, [r4, #84]	@ 000740cc 6065
.org 0x740ce
	ldrb r0, [r4, #13]	@ 000740ce 607b
.org 0x740d0
	cmp r0, #6	@ 000740d0 0628
.org 0x740d2
	beq.n 0x740ec	@ 000740d2 0bd0
.org 0x740d4
	ldrb r1, [r3, #0]	@ 000740d4 1978
.org 0x740d6
	cmp r1, #0	@ 000740d6 0029
.org 0x740d8
	bne.n 0x740ec	@ 000740d8 08d1
.org 0x740da
	movs r0, #6	@ 000740da 0620
.org 0x740dc
	strb r0, [r4, #13]	@ 000740dc 6073
.org 0x740de
	strb r1, [r4, #14]	@ 000740de a173
.org 0x740e0
	b.n 0x740fc	@ 000740e0 0ce0
.org 0x740e2
	.byte 0x00	@ 000740e2 data
.org 0x740e3
	.byte 0x00	@ 000740e3 data
.org 0x740e4
	.byte 0x98,0xcd,0x85,0x08	@ 000740e4 data
.org 0x740e8
	.byte 0x00,0xa0,0xff,0xff	@ 000740e8 data
.org 0x740ec
	ldr r0, [pc, #20]	@ 000740ec 0548
.org 0x740ee
	ldrb r1, [r4, #13]	@ 000740ee 617b
