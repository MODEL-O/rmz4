@ FUN_080c4a78  entry 0x080c4a78  size 100
.thumb
.org 0xc4a78
FUN_080c4a78:
	push {r4, r5, lr}	@ 000c4a78 30b5
.org 0xc4a7a
	adds r4, r0, #0	@ 000c4a7a 041c
.org 0xc4a7c
	ldr r5, [r4, #40]	@ 000c4a7c a56a
.org 0xc4a7e
	ldrb r0, [r4, #15]	@ 000c4a7e e07b
.org 0xc4a80
	cmp r0, #0	@ 000c4a80 0028
.org 0xc4a82
	bne.n 0xc4a92	@ 000c4a82 06d1
.org 0xc4a84
	ldr r1, [pc, #72]	@ 000c4a84 1249
.org 0xc4a86
	adds r0, r4, #0	@ 000c4a86 201c
.org 0xc4a88
	bl 0x1cf00	@ 000c4a88 58f73afa
.org 0xc4a8c
	ldrb r0, [r4, #15]	@ 000c4a8c e07b
.org 0xc4a8e
	adds r0, #1	@ 000c4a8e 0130
.org 0xc4a90
	strb r0, [r4, #15]	@ 000c4a90 e073
.org 0xc4a92
	ldrb r0, [r5, #12]	@ 000c4a92 287b
.org 0xc4a94
	cmp r0, #1	@ 000c4a94 0128
.org 0xc4a96
	bls.n 0xc4ad8	@ 000c4a96 1fd9
.org 0xc4a98
	ldrb r1, [r4, #10]	@ 000c4a98 a17a
.org 0xc4a9a
	movs r0, #254	@ 000c4a9a fe20
.org 0xc4a9c
	ands r0, r1	@ 000c4a9c 0840
.org 0xc4a9e
	movs r2, #0	@ 000c4a9e 0022
.org 0xc4aa0
	movs r1, #253	@ 000c4aa0 fd21
.org 0xc4aa2
	ands r0, r1	@ 000c4aa2 0840
.org 0xc4aa4
	strb r0, [r4, #10]	@ 000c4aa4 a072
.org 0xc4aa6
	adds r0, r4, #0	@ 000c4aa6 201c
.org 0xc4aa8
	adds r0, #140	@ 000c4aa8 8c30
.org 0xc4aaa
	str r2, [r0, #0]	@ 000c4aaa 0260
.org 0xc4aac
	adds r0, #4	@ 000c4aac 0430
.org 0xc4aae
	str r2, [r0, #0]	@ 000c4aae 0260
.org 0xc4ab0
	adds r0, #4	@ 000c4ab0 0430
.org 0xc4ab2
	strb r2, [r0, #0]	@ 000c4ab2 0270
.org 0xc4ab4
	ldrb r1, [r4, #10]	@ 000c4ab4 a17a
.org 0xc4ab6
	movs r0, #251	@ 000c4ab6 fb20
.org 0xc4ab8
	ands r0, r1	@ 000c4ab8 0840
.org 0xc4aba
	strb r0, [r4, #10]	@ 000c4aba a072
.org 0xc4abc
	ldr r1, [pc, #20]	@ 000c4abc 0549
.org 0xc4abe
	ldrb r0, [r4, #9]	@ 000c4abe 607a
.org 0xc4ac0
	lsls r0, r0, #2	@ 000c4ac0 8000
.org 0xc4ac2
	adds r0, r0, r1	@ 000c4ac2 4018
.org 0xc4ac4
	movs r1, #3	@ 000c4ac4 0321
.org 0xc4ac6
	str r1, [r4, #12]	@ 000c4ac6 e160
.org 0xc4ac8
	ldr r0, [r0, #0]	@ 000c4ac8 0068
.org 0xc4aca
	ldr r0, [r0, #12]	@ 000c4aca c068
.org 0xc4acc
	str r0, [r4, #20]	@ 000c4acc 6061
.org 0xc4ace
	b.n 0xc4ade	@ 000c4ace 06e0
.org 0xc4ad0
	.byte 0x01,0x53,0x00,0x00	@ 000c4ad0 data
.org 0xc4ad4
	.byte 0xf4,0x49,0x86,0x08	@ 000c4ad4 data
.org 0xc4ad8
	adds r0, r4, #0	@ 000c4ad8 201c
.org 0xc4ada
	bl 0x1cff0	@ 000c4ada 58f789fa
