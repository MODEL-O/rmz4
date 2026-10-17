@ FUN_080b699c  entry 0x080b699c  size 114
.thumb
.org 0xb699c
FUN_080b699c:
	push {r4, r5, r6, lr}	@ 000b699c 70b5
.org 0xb699e
	adds r4, r0, #0	@ 000b699e 041c
.org 0xb69a0
	ldr r6, [r4, #40]	@ 000b69a0 a66a
.org 0xb69a2
	ldrb r5, [r4, #15]	@ 000b69a2 e57b
.org 0xb69a4
	cmp r5, #0	@ 000b69a4 002d
.org 0xb69a6
	bne.n 0xb69d8	@ 000b69a6 17d1
.org 0xb69a8
	movs r0, #168	@ 000b69a8 a820
.org 0xb69aa
	bl 0x2b10	@ 000b69aa 4cf7b1f8
.org 0xb69ae
	adds r0, r4, #0	@ 000b69ae 201c
.org 0xb69b0
	bl 0xb6a8c	@ 000b69b0 00f06cf8
.org 0xb69b4
	adds r0, r4, #0	@ 000b69b4 201c
.org 0xb69b6
	adds r0, #140	@ 000b69b6 8c30
.org 0xb69b8
	str r5, [r0, #0]	@ 000b69b8 0560
.org 0xb69ba
	adds r0, #4	@ 000b69ba 0430
.org 0xb69bc
	str r5, [r0, #0]	@ 000b69bc 0560
.org 0xb69be
	adds r0, #4	@ 000b69be 0430
.org 0xb69c0
	strb r5, [r0, #0]	@ 000b69c0 0570
.org 0xb69c2
	ldrb r1, [r4, #10]	@ 000b69c2 a17a
.org 0xb69c4
	movs r0, #251	@ 000b69c4 fb20
.org 0xb69c6
	ands r0, r1	@ 000b69c6 0840
.org 0xb69c8
	movs r1, #254	@ 000b69c8 fe21
.org 0xb69ca
	ands r0, r1	@ 000b69ca 0840
.org 0xb69cc
	strb r0, [r4, #10]	@ 000b69cc a072
.org 0xb69ce
	movs r0, #64	@ 000b69ce 4020
.org 0xb69d0
	strb r0, [r4, #18]	@ 000b69d0 a074
.org 0xb69d2
	ldrb r0, [r4, #15]	@ 000b69d2 e07b
.org 0xb69d4
	adds r0, #1	@ 000b69d4 0130
.org 0xb69d6
	strb r0, [r4, #15]	@ 000b69d6 e073
.org 0xb69d8
	ldrb r0, [r4, #18]	@ 000b69d8 a07c
.org 0xb69da
	subs r0, #1	@ 000b69da 0138
.org 0xb69dc
	strb r0, [r4, #18]	@ 000b69dc a074
.org 0xb69de
	lsls r0, r0, #24	@ 000b69de 0006
.org 0xb69e0
	cmp r0, #0	@ 000b69e0 0028
.org 0xb69e2
	bne.n 0xb6a08	@ 000b69e2 11d1
.org 0xb69e4
	adds r1, r6, #0	@ 000b69e4 311c
.org 0xb69e6
	adds r1, #204	@ 000b69e6 cc31
.org 0xb69e8
	ldrh r2, [r1, #0]	@ 000b69e8 0a88
.org 0xb69ea
	movs r3, #0	@ 000b69ea 0023
.org 0xb69ec
	ldrsh r0, [r1, r3]	@ 000b69ec c85e
.org 0xb69ee
	cmp r0, #0	@ 000b69ee 0028
.org 0xb69f0
	beq.n 0xb69f6	@ 000b69f0 01d0
.org 0xb69f2
	subs r0, r2, #1	@ 000b69f2 501e
.org 0xb69f4
	strh r0, [r1, #0]	@ 000b69f4 0880
.org 0xb69f6
	ldr r1, [pc, #24]	@ 000b69f6 0649
.org 0xb69f8
	ldrb r0, [r4, #9]	@ 000b69f8 607a
.org 0xb69fa
	lsls r0, r0, #2	@ 000b69fa 8000
.org 0xb69fc
	adds r0, r0, r1	@ 000b69fc 4018
.org 0xb69fe
	movs r1, #4	@ 000b69fe 0421
.org 0xb6a00
	str r1, [r4, #12]	@ 000b6a00 e160
.org 0xb6a02
	ldr r0, [r0, #0]	@ 000b6a02 0068
.org 0xb6a04
	ldr r0, [r0, #16]	@ 000b6a04 0069
.org 0xb6a06
	str r0, [r4, #20]	@ 000b6a06 6061
.org 0xb6a08
	pop {r4, r5, r6}	@ 000b6a08 70bc
.org 0xb6a0a
	pop {r0}	@ 000b6a0a 01bc
.org 0xb6a0c
	bx r0	@ 000b6a0c 0047
