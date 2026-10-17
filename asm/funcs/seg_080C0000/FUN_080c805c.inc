@ FUN_080c805c  entry 0x080c805c  size 186
.thumb
.org 0xc805c
FUN_080c805c:
	push {r4, r5, r6, r7, lr}	@ 000c805c f0b5
.org 0xc805e
	adds r4, r0, #0	@ 000c805e 041c
.org 0xc8060
	ldr r5, [r4, #40]	@ 000c8060 a56a
.org 0xc8062
	ldrb r0, [r4, #10]	@ 000c8062 a07a
.org 0xc8064
	lsrs r2, r0, #4	@ 000c8064 0209
.org 0xc8066
	movs r0, #1	@ 000c8066 0120
.org 0xc8068
	ands r2, r0	@ 000c8068 0240
.org 0xc806a
	adds r7, r2, #0	@ 000c806a 171c
.org 0xc806c
	movs r6, #0	@ 000c806c 0026
.org 0xc806e
	ldrb r3, [r4, #15]	@ 000c806e e37b
.org 0xc8070
	cmp r3, #0	@ 000c8070 002b
.org 0xc8072
	bne.n 0xc8098	@ 000c8072 11d1
.org 0xc8074
	ldr r0, [r5, #84]	@ 000c8074 686d
.org 0xc8076
	ldr r1, [r5, #88]	@ 000c8076 a96d
.org 0xc8078
	str r0, [r4, #84]	@ 000c8078 6065
.org 0xc807a
	str r1, [r4, #88]	@ 000c807a a165
.org 0xc807c
	lsls r1, r2, #1	@ 000c807c 5100
.org 0xc807e
	subs r1, #1	@ 000c807e 0139
.org 0xc8080
	lsls r0, r1, #3	@ 000c8080 c800
.org 0xc8082
	subs r0, r0, r1	@ 000c8082 401a
.org 0xc8084
	lsls r0, r0, #6	@ 000c8084 8001
.org 0xc8086
	str r0, [r4, #92]	@ 000c8086 e065
.org 0xc8088
	str r6, [r4, #100]	@ 000c8088 6666
.org 0xc808a
	adds r0, r4, #0	@ 000c808a 201c
.org 0xc808c
	adds r0, #181	@ 000c808c b530
.org 0xc808e
	ldrb r0, [r0, #0]	@ 000c808e 0078
.org 0xc8090
	subs r0, #1	@ 000c8090 0138
.org 0xc8092
	strb r0, [r4, #18]	@ 000c8092 a074
.org 0xc8094
	adds r0, r3, #1	@ 000c8094 581c
.org 0xc8096
	strb r0, [r4, #15]	@ 000c8096 e073
.org 0xc8098
	adds r0, r4, #0	@ 000c8098 201c
.org 0xc809a
	bl 0x1cff0	@ 000c809a 54f7a9ff
.org 0xc809e
	ldr r1, [r4, #100]	@ 000c809e 616e
.org 0xc80a0
	ldr r0, [r4, #92]	@ 000c80a0 e06d
.org 0xc80a2
	adds r1, r1, r0	@ 000c80a2 0918
.org 0xc80a4
	str r1, [r4, #100]	@ 000c80a4 6166
.org 0xc80a6
	ldr r0, [r5, #84]	@ 000c80a6 686d
.org 0xc80a8
	adds r0, r0, r1	@ 000c80a8 4018
.org 0xc80aa
	str r0, [r4, #84]	@ 000c80aa 6065
.org 0xc80ac
	ldr r0, [r5, #88]	@ 000c80ac a86d
.org 0xc80ae
	str r0, [r4, #88]	@ 000c80ae a065
.org 0xc80b0
	adds r2, r4, #0	@ 000c80b0 221c
.org 0xc80b2
	adds r2, #181	@ 000c80b2 b532
.org 0xc80b4
	ldrb r3, [r4, #18]	@ 000c80b4 a37c
.org 0xc80b6
	mvns r0, r3	@ 000c80b6 d843
.org 0xc80b8
	ldrb r2, [r2, #0]	@ 000c80b8 1278
.org 0xc80ba
	adds r0, r0, r2	@ 000c80ba 8018
.org 0xc80bc
	lsls r0, r0, #24	@ 000c80bc 0006
.org 0xc80be
	lsrs r2, r0, #24	@ 000c80be 020e
.org 0xc80c0
	lsls r0, r7, #1	@ 000c80c0 7800
.org 0xc80c2
	subs r0, #1	@ 000c80c2 0138
.org 0xc80c4
	muls r0, r1	@ 000c80c4 4843
.org 0xc80c6
	ldr r1, [pc, #40]	@ 000c80c6 0a49
.org 0xc80c8
	adds r0, r0, r1	@ 000c80c8 4018
.org 0xc80ca
	adds r1, r0, #0	@ 000c80ca 011c
.org 0xc80cc
	cmp r0, #0	@ 000c80cc 0028
.org 0xc80ce
	bge.n 0xc80d4	@ 000c80ce 01da
.org 0xc80d0
	ldr r5, [pc, #32]	@ 000c80d0 084d
.org 0xc80d2
	adds r1, r0, r5	@ 000c80d2 4119
.org 0xc80d4
	asrs r0, r1, #12	@ 000c80d4 0813
.org 0xc80d6
	cmp r0, r2	@ 000c80d6 9042
.org 0xc80d8
	ble.n 0xc811a	@ 000c80d8 1fdd
.org 0xc80da
	cmp r3, #0	@ 000c80da 002b
.org 0xc80dc
	beq.n 0xc810a	@ 000c80dc 15d0
.org 0xc80de
	adds r0, r4, #0	@ 000c80de 201c
.org 0xc80e0
	adds r1, r2, #0	@ 000c80e0 111c
.org 0xc80e2
	bl 0xc7e38	@ 000c80e2 fff7a9fe
.org 0xc80e6
	cmp r0, #0	@ 000c80e6 0028
.org 0xc80e8
	bne.n 0xc80f8	@ 000c80e8 06d1
.org 0xc80ea
	movs r6, #1	@ 000c80ea 0126
.org 0xc80ec
	b.n 0xc8102	@ 000c80ec 09e0
.org 0xc80ee
	.byte 0x00	@ 000c80ee data
.org 0xc80ef
	.byte 0x00	@ 000c80ef data
.org 0xc80f0
	.byte 0x00,0xf8,0xff,0xff	@ 000c80f0 data
.org 0xc80f4
	.byte 0xff,0x0f,0x00,0x00	@ 000c80f4 data
.org 0xc80f8
	adds r1, r4, #0	@ 000c80f8 211c
.org 0xc80fa
	adds r1, #180	@ 000c80fa b431
.org 0xc80fc
	ldrb r0, [r1, #0]	@ 000c80fc 0878
.org 0xc80fe
	adds r0, #1	@ 000c80fe 0130
.org 0xc8100
	strb r0, [r1, #0]	@ 000c8100 0870
.org 0xc8102
	ldrb r0, [r4, #18]	@ 000c8102 a07c
.org 0xc8104
	subs r0, #1	@ 000c8104 0138
.org 0xc8106
	strb r0, [r4, #18]	@ 000c8106 a074
.org 0xc8108
	b.n 0xc810c	@ 000c8108 00e0
.org 0xc810a
	movs r6, #1	@ 000c810a 0126
.org 0xc810c
	cmp r6, #0	@ 000c810c 002e
.org 0xc810e
	beq.n 0xc811a	@ 000c810e 04d0
.org 0xc8110
	movs r1, #0	@ 000c8110 0021
.org 0xc8112
	movs r0, #1	@ 000c8112 0120
.org 0xc8114
	strb r0, [r4, #13]	@ 000c8114 6073
