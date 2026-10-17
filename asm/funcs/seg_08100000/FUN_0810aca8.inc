@ FUN_0810aca8  entry 0x0810aca8  size 110
.thumb
.org 0x10aca8
FUN_0810aca8:
	push {r4, lr}	@ 0010aca8 10b5
.org 0x10acaa
	adds r4, r0, #0	@ 0010acaa 041c
.org 0x10acac
	bl 0x1cff0	@ 0010acac 12f7a0f9
.org 0x10acb0
	adds r0, r4, #0	@ 0010acb0 201c
.org 0x10acb2
	adds r0, #124	@ 0010acb2 7c30
.org 0x10acb4
	ldrb r0, [r0, #0]	@ 0010acb4 0078
.org 0x10acb6
	cmp r0, #0	@ 0010acb6 0028
.org 0x10acb8
	beq.n 0x10ace0	@ 0010acb8 12d0
.org 0x10acba
	ldrb r1, [r4, #10]	@ 0010acba a17a
.org 0x10acbc
	movs r0, #254	@ 0010acbc fe20
.org 0x10acbe
	ands r0, r1	@ 0010acbe 0840
.org 0x10acc0
	movs r1, #253	@ 0010acc0 fd21
.org 0x10acc2
	ands r0, r1	@ 0010acc2 0840
.org 0x10acc4
	strb r0, [r4, #10]	@ 0010acc4 a072
.org 0x10acc6
	ldr r1, [pc, #20]	@ 0010acc6 0549
.org 0x10acc8
	ldrb r0, [r4, #9]	@ 0010acc8 607a
.org 0x10acca
	lsls r0, r0, #2	@ 0010acca 8000
.org 0x10accc
	adds r0, r0, r1	@ 0010accc 4018
.org 0x10acce
	movs r1, #3	@ 0010acce 0321
.org 0x10acd0
	str r1, [r4, #12]	@ 0010acd0 e160
.org 0x10acd2
	ldr r0, [r0, #0]	@ 0010acd2 0068
.org 0x10acd4
	ldr r0, [r0, #12]	@ 0010acd4 c068
.org 0x10acd6
	str r0, [r4, #20]	@ 0010acd6 6061
.org 0x10acd8
	b.n 0x10ad16	@ 0010acd8 1de0
.org 0x10acda
	.byte 0x00	@ 0010acda data
.org 0x10acdb
	.byte 0x00	@ 0010acdb data
.org 0x10acdc
	.byte 0xf8,0xca,0x86,0x08	@ 0010acdc data
.org 0x10ace0
	ldr r2, [r4, #116]	@ 0010ace0 626f
.org 0x10ace2
	ldr r3, [r4, #120]	@ 0010ace2 a36f
.org 0x10ace4
	cmp r2, #0	@ 0010ace4 002a
.org 0x10ace6
	bne.n 0x10acf6	@ 0010ace6 06d1
.org 0x10ace8
	cmp r3, #0	@ 0010ace8 002b
.org 0x10acea
	bne.n 0x10acf6	@ 0010acea 04d1
.org 0x10acec
	ldrb r1, [r4, #10]	@ 0010acec a17a
.org 0x10acee
	movs r0, #254	@ 0010acee fe20
.org 0x10acf0
	ands r0, r1	@ 0010acf0 0840
.org 0x10acf2
	strb r0, [r4, #10]	@ 0010acf2 a072
.org 0x10acf4
	b.n 0x10ad16	@ 0010acf4 0fe0
.org 0x10acf6
	ldrb r1, [r4, #10]	@ 0010acf6 a17a
.org 0x10acf8
	movs r0, #1	@ 0010acf8 0120
.org 0x10acfa
	orrs r0, r1	@ 0010acfa 0843
.org 0x10acfc
	strb r0, [r4, #10]	@ 0010acfc a072
.org 0x10acfe
	str r2, [r4, #84]	@ 0010acfe 6265
.org 0x10ad00
	str r3, [r4, #88]	@ 0010ad00 a365
.org 0x10ad02
	ldr r0, [pc, #24]	@ 0010ad02 0648
.org 0x10ad04
	ldrh r1, [r0, #0]	@ 0010ad04 0188
.org 0x10ad06
	movs r0, #128	@ 0010ad06 8020
.org 0x10ad08
	lsls r0, r0, #1	@ 0010ad08 4000
.org 0x10ad0a
	cmp r1, r0	@ 0010ad0a 8142
.org 0x10ad0c
	bls.n 0x10ad16	@ 0010ad0c 03d9
.org 0x10ad0e
	movs r1, #128	@ 0010ad0e 8021
.org 0x10ad10
	lsls r1, r1, #10	@ 0010ad10 8902
.org 0x10ad12
	adds r0, r2, r1	@ 0010ad12 5018
.org 0x10ad14
	str r0, [r4, #84]	@ 0010ad14 6065
