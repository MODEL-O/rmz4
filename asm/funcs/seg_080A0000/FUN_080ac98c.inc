@ FUN_080ac98c  entry 0x080ac98c  size 94
.thumb
.org 0xac98c
FUN_080ac98c:
	push {r4, r5, lr}	@ 000ac98c 30b5
.org 0xac98e
	adds r4, r0, #0	@ 000ac98e 041c
.org 0xac990
	ldr r5, [r4, #40]	@ 000ac990 a56a
.org 0xac992
	ldrb r0, [r4, #15]	@ 000ac992 e07b
.org 0xac994
	cmp r0, #0	@ 000ac994 0028
.org 0xac996
	bne.n 0xac9b6	@ 000ac996 0ed1
.org 0xac998
	ldrb r1, [r4, #10]	@ 000ac998 a17a
.org 0xac99a
	movs r0, #1	@ 000ac99a 0120
.org 0xac99c
	orrs r0, r1	@ 000ac99c 0843
.org 0xac99e
	strb r0, [r4, #10]	@ 000ac99e a072
.org 0xac9a0
	adds r1, r4, #0	@ 000ac9a0 211c
.org 0xac9a2
	adds r1, #184	@ 000ac9a2 b831
.org 0xac9a4
	movs r0, #1	@ 000ac9a4 0120
.org 0xac9a6
	strb r0, [r1, #0]	@ 000ac9a6 0870
.org 0xac9a8
	ldr r1, [pc, #48]	@ 000ac9a8 0c49
.org 0xac9aa
	adds r0, r4, #0	@ 000ac9aa 201c
.org 0xac9ac
	bl 0x1cf00	@ 000ac9ac 70f7a8fa
.org 0xac9b0
	ldrb r0, [r4, #15]	@ 000ac9b0 e07b
.org 0xac9b2
	adds r0, #1	@ 000ac9b2 0130
.org 0xac9b4
	strb r0, [r4, #15]	@ 000ac9b4 e073
.org 0xac9b6
	adds r0, r4, #0	@ 000ac9b6 201c
.org 0xac9b8
	bl 0x1cff0	@ 000ac9b8 70f71afb
.org 0xac9bc
	ldr r0, [r5, #84]	@ 000ac9bc 686d
.org 0xac9be
	ldr r1, [r5, #88]	@ 000ac9be a96d
.org 0xac9c0
	str r0, [r4, #84]	@ 000ac9c0 6065
.org 0xac9c2
	str r1, [r4, #88]	@ 000ac9c2 a165
.org 0xac9c4
	adds r0, r4, #0	@ 000ac9c4 201c
.org 0xac9c6
	bl 0xacb5c	@ 000ac9c6 00f0c9f8
.org 0xac9ca
	adds r0, r4, #0	@ 000ac9ca 201c
.org 0xac9cc
	adds r0, #115	@ 000ac9cc 7330
.org 0xac9ce
	ldrb r0, [r0, #0]	@ 000ac9ce 0078
.org 0xac9d0
	cmp r0, #4	@ 000ac9d0 0428
.org 0xac9d2
	bne.n 0xac9e0	@ 000ac9d2 05d1
.org 0xac9d4
	adds r1, r4, #0	@ 000ac9d4 211c
.org 0xac9d6
	adds r1, #180	@ 000ac9d6 b431
.org 0xac9d8
	movs r0, #1	@ 000ac9d8 0120
.org 0xac9da
	b.n 0xac9e6	@ 000ac9da 04e0
.org 0xac9dc
	.byte 0x04,0xb0,0x00,0x00	@ 000ac9dc data
.org 0xac9e0
	adds r1, r4, #0	@ 000ac9e0 211c
.org 0xac9e2
	adds r1, #180	@ 000ac9e2 b431
.org 0xac9e4
	movs r0, #0	@ 000ac9e4 0020
.org 0xac9e6
	strb r0, [r1, #0]	@ 000ac9e6 0870
.org 0xac9e8
	pop {r4, r5}	@ 000ac9e8 30bc
