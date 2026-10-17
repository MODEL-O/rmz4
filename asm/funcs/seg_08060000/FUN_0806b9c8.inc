@ FUN_0806b9c8  entry 0x0806b9c8  size 332
.thumb
.org 0x6b9c8
FUN_0806b9c8:
	push {r4, r5, r6, lr}	@ 0006b9c8 70b5
.org 0x6b9ca
	adds r4, r0, #0	@ 0006b9ca 041c
.org 0x6b9cc
	ldrb r0, [r4, #14]	@ 0006b9cc a07b
.org 0x6b9ce
	cmp r0, #0	@ 0006b9ce 0028
.org 0x6b9d0
	bne.n 0x6ba24	@ 0006b9d0 28d1
.org 0x6b9d2
	ldr r1, [pc, #44]	@ 0006b9d2 0b49
.org 0x6b9d4
	adds r0, r4, #0	@ 0006b9d4 201c
.org 0x6b9d6
	bl 0x1cf00	@ 0006b9d6 b1f793fa
.org 0x6b9da
	movs r0, #200	@ 0006b9da c820
.org 0x6b9dc
	bl 0x2b10	@ 0006b9dc 97f798f8
.org 0x6b9e0
	adds r1, r4, #0	@ 0006b9e0 211c
.org 0x6b9e2
	adds r1, #216	@ 0006b9e2 d831
.org 0x6b9e4
	movs r0, #1	@ 0006b9e4 0120
.org 0x6b9e6
	strb r0, [r1, #0]	@ 0006b9e6 0870
.org 0x6b9e8
	ldrb r1, [r4, #10]	@ 0006b9e8 a17a
.org 0x6b9ea
	movs r0, #16	@ 0006b9ea 1020
.org 0x6b9ec
	ands r0, r1	@ 0006b9ec 0840
.org 0x6b9ee
	cmp r0, #0	@ 0006b9ee 0028
.org 0x6b9f0
	beq.n 0x6ba04	@ 0006b9f0 08d0
.org 0x6b9f2
	movs r0, #128	@ 0006b9f2 8020
.org 0x6b9f4
	lsls r0, r0, #2	@ 0006b9f4 8000
.org 0x6b9f6
	str r0, [r4, #92]	@ 0006b9f6 e065
.org 0x6b9f8
	movs r0, #192	@ 0006b9f8 c020
.org 0x6b9fa
	lsls r0, r0, #5	@ 0006b9fa 4001
.org 0x6b9fc
	b.n 0x6ba0a	@ 0006b9fc 05e0
.org 0x6b9fe
	.byte 0x00	@ 0006b9fe data
.org 0x6b9ff
	.byte 0x00	@ 0006b9ff data
.org 0x6ba00
	.byte 0x0b,0xaa,0x00,0x00	@ 0006ba00 data
.org 0x6ba04
	ldr r0, [pc, #20]	@ 0006ba04 0548
.org 0x6ba06
	str r0, [r4, #92]	@ 0006ba06 e065
.org 0x6ba08
	ldr r0, [pc, #20]	@ 0006ba08 0548
.org 0x6ba0a
	str r0, [r4, #100]	@ 0006ba0a 6066
.org 0x6ba0c
	movs r0, #80	@ 0006ba0c 5020
.org 0x6ba0e
	str r0, [r4, #104]	@ 0006ba0e a066
.org 0x6ba10
	movs r1, #0	@ 0006ba10 0021
.org 0x6ba12
	movs r0, #24	@ 0006ba12 1820
.org 0x6ba14
	strb r0, [r4, #18]	@ 0006ba14 a074
.org 0x6ba16
	strb r1, [r4, #19]	@ 0006ba16 e174
.org 0x6ba18
	strb r1, [r4, #15]	@ 0006ba18 e173
.org 0x6ba1a
	b.n 0x6ba40	@ 0006ba1a 11e0
.org 0x6ba1c
	.byte 0x00,0xfe,0xff,0xff	@ 0006ba1c data
.org 0x6ba20
	.byte 0x00,0xe8,0xff,0xff	@ 0006ba20 data
.org 0x6ba24
	cmp r0, #1	@ 0006ba24 0128
.org 0x6ba26
	bne.n 0x6ba46	@ 0006ba26 0ed1
.org 0x6ba28
	adds r0, r4, #0	@ 0006ba28 201c
.org 0x6ba2a
	adds r0, #113	@ 0006ba2a 7130
.org 0x6ba2c
	ldrb r0, [r0, #0]	@ 0006ba2c 0078
.org 0x6ba2e
	lsls r0, r0, #24	@ 0006ba2e 0006
.org 0x6ba30
	asrs r0, r0, #24	@ 0006ba30 0016
.org 0x6ba32
	cmp r0, #0	@ 0006ba32 0028
.org 0x6ba34
	ble.n 0x6ba46	@ 0006ba34 07dd
.org 0x6ba36
	adds r0, r4, #0	@ 0006ba36 201c
.org 0x6ba38
	adds r0, #116	@ 0006ba38 7430
.org 0x6ba3a
	ldr r1, [pc, #44]	@ 0006ba3a 0b49
.org 0x6ba3c
	bl 0x5784	@ 0006ba3c 99f7a2fe
.org 0x6ba40
	ldrb r0, [r4, #14]	@ 0006ba40 a07b
.org 0x6ba42
	adds r0, #1	@ 0006ba42 0130
.org 0x6ba44
	strb r0, [r4, #14]	@ 0006ba44 a073
.org 0x6ba46
	adds r0, r4, #0	@ 0006ba46 201c
.org 0x6ba48
	bl 0x1cff0	@ 0006ba48 b1f7d2fa
.org 0x6ba4c
	ldrb r1, [r4, #15]	@ 0006ba4c e17b
.org 0x6ba4e
	adds r0, r1, #0	@ 0006ba4e 081c
.org 0x6ba50
	cmp r0, #0	@ 0006ba50 0028
.org 0x6ba52
	bne.n 0x6ba6c	@ 0006ba52 0bd1
.org 0x6ba54
	ldrb r0, [r4, #18]	@ 0006ba54 a07c
.org 0x6ba56
	subs r0, #1	@ 0006ba56 0138
.org 0x6ba58
	strb r0, [r4, #18]	@ 0006ba58 a074
.org 0x6ba5a
	lsls r0, r0, #24	@ 0006ba5a 0006
.org 0x6ba5c
	lsrs r0, r0, #24	@ 0006ba5c 000e
.org 0x6ba5e
	cmp r0, #255	@ 0006ba5e ff28
.org 0x6ba60
	bne.n 0x6bb26	@ 0006ba60 61d1
.org 0x6ba62
	adds r0, r1, #1	@ 0006ba62 481c
.org 0x6ba64
	strb r0, [r4, #15]	@ 0006ba64 e073
.org 0x6ba66
	b.n 0x6bb26	@ 0006ba66 5ee0
.org 0x6ba68
	.byte 0x84,0xc2,0x85,0x08	@ 0006ba68 data
.org 0x6ba6c
	cmp r0, #1	@ 0006ba6c 0128
.org 0x6ba6e
	bne.n 0x6bb26	@ 0006ba6e 5ad1
.org 0x6ba70
	ldr r0, [r4, #84]	@ 0006ba70 606d
.org 0x6ba72
	ldr r3, [r4, #92]	@ 0006ba72 e36d
.org 0x6ba74
	adds r2, r0, r3	@ 0006ba74 c218
.org 0x6ba76
	str r2, [r4, #84]	@ 0006ba76 6265
.org 0x6ba78
	cmp r3, #0	@ 0006ba78 002b
.org 0x6ba7a
	ble.n 0x6baa8	@ 0006ba7a 15dd
.org 0x6ba7c
	adds r1, r4, #0	@ 0006ba7c 211c
.org 0x6ba7e
	adds r1, #180	@ 0006ba7e b431
.org 0x6ba80
	ldr r0, [r1, #24]	@ 0006ba80 8869
.org 0x6ba82
	ldr r5, [r4, #100]	@ 0006ba82 656e
.org 0x6ba84
	subs r0, r0, r5	@ 0006ba84 401b
.org 0x6ba86
	adds r6, r1, #0	@ 0006ba86 0e1c
.org 0x6ba88
	cmp r2, r0	@ 0006ba88 8242
.org 0x6ba8a
	ble.n 0x6bacc	@ 0006ba8a 1fdd
.org 0x6ba8c
	str r0, [r4, #84]	@ 0006ba8c 6065
.org 0x6ba8e
	negs r0, r3	@ 0006ba8e 5842
.org 0x6ba90
	str r0, [r4, #92]	@ 0006ba90 e065
.org 0x6ba92
	negs r0, r5	@ 0006ba92 6842
.org 0x6ba94
	str r0, [r4, #100]	@ 0006ba94 6066
.org 0x6ba96
	ldr r0, [pc, #12]	@ 0006ba96 0348
.org 0x6ba98
	str r0, [r4, #96]	@ 0006ba98 2066
.org 0x6ba9a
	movs r0, #201	@ 0006ba9a c920
.org 0x6ba9c
	bl 0x2b10	@ 0006ba9c 97f738f8
.org 0x6baa0
	b.n 0x6bacc	@ 0006baa0 14e0
.org 0x6baa2
	.byte 0x00	@ 0006baa2 data
.org 0x6baa3
	.byte 0x00	@ 0006baa3 data
.org 0x6baa4
	.byte 0x60,0xfa,0xff,0xff	@ 0006baa4 data
.org 0x6baa8
	adds r1, r4, #0	@ 0006baa8 211c
.org 0x6baaa
	adds r1, #180	@ 0006baaa b431
.org 0x6baac
	ldr r0, [r1, #20]	@ 0006baac 4869
.org 0x6baae
	ldr r5, [r4, #100]	@ 0006baae 656e
.org 0x6bab0
	subs r0, r0, r5	@ 0006bab0 401b
.org 0x6bab2
	adds r6, r1, #0	@ 0006bab2 0e1c
.org 0x6bab4
	cmp r2, r0	@ 0006bab4 8242
.org 0x6bab6
	bge.n 0x6bacc	@ 0006bab6 09da
.org 0x6bab8
	str r0, [r4, #84]	@ 0006bab8 6065
.org 0x6baba
	negs r0, r3	@ 0006baba 5842
.org 0x6babc
	str r0, [r4, #92]	@ 0006babc e065
.org 0x6babe
	negs r0, r5	@ 0006babe 6842
.org 0x6bac0
	str r0, [r4, #100]	@ 0006bac0 6066
.org 0x6bac2
	ldr r0, [pc, #104]	@ 0006bac2 1a48
.org 0x6bac4
	str r0, [r4, #96]	@ 0006bac4 2066
.org 0x6bac6
	movs r0, #201	@ 0006bac6 c920
.org 0x6bac8
	bl 0x2b10	@ 0006bac8 97f722f8
.org 0x6bacc
	ldr r0, [r4, #88]	@ 0006bacc a06d
.org 0x6bace
	ldr r1, [r4, #96]	@ 0006bace 216e
.org 0x6bad0
	adds r0, r0, r1	@ 0006bad0 4018
.org 0x6bad2
	str r0, [r4, #88]	@ 0006bad2 a065
.org 0x6bad4
	ldr r2, [r4, #104]	@ 0006bad4 a26e
.org 0x6bad6
	adds r1, r1, r2	@ 0006bad6 8918
.org 0x6bad8
	str r1, [r4, #96]	@ 0006bad8 2166
.org 0x6bada
	ldr r1, [r6, #4]	@ 0006bada 7168
.org 0x6badc
	cmp r0, r1	@ 0006badc 8842
.org 0x6bade
	ble.n 0x6bb26	@ 0006bade 22dd
.org 0x6bae0
	str r1, [r4, #88]	@ 0006bae0 a165
.org 0x6bae2
	ldr r0, [pc, #72]	@ 0006bae2 1248
.org 0x6bae4
	str r0, [r4, #96]	@ 0006bae4 2066
.org 0x6bae6
	movs r0, #201	@ 0006bae6 c920
.org 0x6bae8
	bl 0x2b10	@ 0006bae8 97f712f8
.org 0x6baec
	ldrb r0, [r4, #19]	@ 0006baec e07c
.org 0x6baee
	adds r0, #1	@ 0006baee 0130
.org 0x6baf0
	strb r0, [r4, #19]	@ 0006baf0 e074
.org 0x6baf2
	lsls r0, r0, #24	@ 0006baf2 0006
.org 0x6baf4
	lsrs r0, r0, #24	@ 0006baf4 000e
.org 0x6baf6
	cmp r0, #5	@ 0006baf6 0528
.org 0x6baf8
	bhi.n 0x6bb1e	@ 0006baf8 11d8
.org 0x6bafa
	ldrb r0, [r4, #19]	@ 0006bafa e07c
.org 0x6bafc
	movs r2, #5	@ 0006bafc 0522
.org 0x6bafe
	subs r2, r2, r0	@ 0006bafe 121a
.org 0x6bb00
	lsls r2, r2, #3	@ 0006bb00 d200
.org 0x6bb02
	ldr r3, [pc, #44]	@ 0006bb02 0b4b
.org 0x6bb04
	ldr r1, [r3, #0]	@ 0006bb04 1968
.org 0x6bb06
	ldr r0, [pc, #44]	@ 0006bb06 0b48
.org 0x6bb08
	muls r0, r1	@ 0006bb08 4843
.org 0x6bb0a
	ldr r1, [pc, #44]	@ 0006bb0a 0b49
.org 0x6bb0c
	adds r0, r0, r1	@ 0006bb0c 4018
.org 0x6bb0e
	lsls r0, r0, #1	@ 0006bb0e 4000
.org 0x6bb10
	lsrs r1, r0, #1	@ 0006bb10 4108
.org 0x6bb12
	str r1, [r3, #0]	@ 0006bb12 1960
