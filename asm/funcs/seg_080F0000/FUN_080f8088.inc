@ FUN_080f8088  entry 0x080f8088  size 176
.thumb
.org 0xf8088
FUN_080f8088:
	push {r4, r5, r6, r7, lr}	@ 000f8088 f0b5
.org 0xf808a
	adds r6, r0, #0	@ 000f808a 061c
.org 0xf808c
	ldrb r0, [r6, #17]	@ 000f808c 707c
.org 0xf808e
	ldr r5, [pc, #68]	@ 000f808e 114d
.org 0xf8090
	cmp r0, #0	@ 000f8090 0028
.org 0xf8092
	bne.n 0xf8096	@ 000f8092 00d1
.org 0xf8094
	subs r5, #1	@ 000f8094 013d
.org 0xf8096
	ldrb r4, [r5, #0]	@ 000f8096 2c78
.org 0xf8098
	adds r0, r6, #0	@ 000f8098 301c
.org 0xf809a
	adds r0, #180	@ 000f809a b430
.org 0xf809c
	ldrb r1, [r0, #0]	@ 000f809c 0178
.org 0xf809e
	adds r7, r0, #0	@ 000f809e 071c
.org 0xf80a0
	cmp r1, #0	@ 000f80a0 0029
.org 0xf80a2
	beq.n 0xf80e0	@ 000f80a2 1dd0
.org 0xf80a4
	cmp r4, r1	@ 000f80a4 8c42
.org 0xf80a6
	beq.n 0xf80e0	@ 000f80a6 1bd0
.org 0xf80a8
	movs r5, #0	@ 000f80a8 0025
.org 0xf80aa
	strb r5, [r7, #0]	@ 000f80aa 3d70
.org 0xf80ac
	ldrb r1, [r6, #10]	@ 000f80ac b17a
.org 0xf80ae
	movs r0, #4	@ 000f80ae 0420
.org 0xf80b0
	orrs r0, r1	@ 000f80b0 0843
.org 0xf80b2
	strb r0, [r6, #10]	@ 000f80b2 b072
.org 0xf80b4
	adds r4, r6, #0	@ 000f80b4 341c
.org 0xf80b6
	adds r4, #116	@ 000f80b6 7434
.org 0xf80b8
	ldr r1, [pc, #28]	@ 000f80b8 0749
.org 0xf80ba
	adds r2, r6, #0	@ 000f80ba 321c
.org 0xf80bc
	adds r2, #84	@ 000f80bc 5432
.org 0xf80be
	adds r0, r4, #0	@ 000f80be 201c
.org 0xf80c0
	movs r3, #0	@ 000f80c0 0023
.org 0xf80c2
	bl 0x5760	@ 000f80c2 0df74dfb
.org 0xf80c6
	str r6, [r4, #44]	@ 000f80c6 e662
.org 0xf80c8
	str r5, [r4, #36]	@ 000f80c8 6562
.org 0xf80ca
	ldr r1, [pc, #16]	@ 000f80ca 0449
.org 0xf80cc
	adds r0, r6, #0	@ 000f80cc 301c
.org 0xf80ce
	bl 0x1cf00	@ 000f80ce 24f717ff
.org 0xf80d2
	b.n 0xf8138	@ 000f80d2 31e0
.org 0xf80d4
	.byte 0xf1,0xda,0x02,0x02	@ 000f80d4 data
.org 0xf80d8
	.byte 0x40,0xa3,0x86,0x08	@ 000f80d8 data
.org 0xf80dc
	.byte 0x02,0x73,0x00,0x00	@ 000f80dc data
.org 0xf80e0
	adds r0, r4, #0	@ 000f80e0 201c
.org 0xf80e2
	movs r1, #3	@ 000f80e2 0321
.org 0xf80e4
	bl 0x129198	@ 000f80e4 31f058f8
.org 0xf80e8
	lsls r0, r0, #24	@ 000f80e8 0006
.org 0xf80ea
	cmp r0, #0	@ 000f80ea 0028
.org 0xf80ec
	bne.n 0xf8138	@ 000f80ec 24d1
.org 0xf80ee
	ldrb r2, [r7, #0]	@ 000f80ee 3a78
.org 0xf80f0
	cmp r2, #0	@ 000f80f0 002a
.org 0xf80f2
	bne.n 0xf8138	@ 000f80f2 21d1
.org 0xf80f4
	cmp r4, #2	@ 000f80f4 022c
.org 0xf80f6
	bls.n 0xf8138	@ 000f80f6 1fd9
.org 0xf80f8
	adds r3, r6, #0	@ 000f80f8 331c
.org 0xf80fa
	adds r3, #140	@ 000f80fa 8c33
.org 0xf80fc
	ldr r0, [r3, #0]	@ 000f80fc 1868
.org 0xf80fe
	movs r1, #1	@ 000f80fe 0121
.org 0xf8100
	ands r0, r1	@ 000f8100 0840
.org 0xf8102
	cmp r0, #0	@ 000f8102 0028
.org 0xf8104
	beq.n 0xf8138	@ 000f8104 18d0
.org 0xf8106
	str r2, [r3, #0]	@ 000f8106 1a60
.org 0xf8108
	adds r0, r6, #0	@ 000f8108 301c
.org 0xf810a
	adds r0, #144	@ 000f810a 9030
.org 0xf810c
	str r2, [r0, #0]	@ 000f810c 0260
.org 0xf810e
	adds r0, #4	@ 000f810e 0430
.org 0xf8110
	strb r2, [r0, #0]	@ 000f8110 0270
.org 0xf8112
	ldrb r1, [r6, #10]	@ 000f8112 b17a
.org 0xf8114
	movs r0, #251	@ 000f8114 fb20
.org 0xf8116
	ands r0, r1	@ 000f8116 0840
.org 0xf8118
	strb r0, [r6, #10]	@ 000f8118 b072
.org 0xf811a
	ldr r1, [pc, #40]	@ 000f811a 0a49
.org 0xf811c
	adds r0, r6, #0	@ 000f811c 301c
.org 0xf811e
	bl 0x1cf00	@ 000f811e 24f7effe
.org 0xf8122
	adds r0, r4, #0	@ 000f8122 201c
.org 0xf8124
	movs r1, #3	@ 000f8124 0321
.org 0xf8126
	bl 0x129120	@ 000f8126 30f0fbff
.org 0xf812a
	lsls r0, r0, #24	@ 000f812a 0006
.org 0xf812c
	lsrs r0, r0, #24	@ 000f812c 000e
.org 0xf812e
	lsls r1, r0, #1	@ 000f812e 4100
.org 0xf8130
	adds r1, r1, r0	@ 000f8130 0918
.org 0xf8132
	subs r1, #2	@ 000f8132 0239
.org 0xf8134
	strb r1, [r7, #0]	@ 000f8134 3970
.org 0xf8136
	strb r1, [r5, #0]	@ 000f8136 2970
