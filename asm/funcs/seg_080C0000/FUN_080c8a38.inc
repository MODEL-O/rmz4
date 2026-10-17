@ FUN_080c8a38  entry 0x080c8a38  size 162
.thumb
.org 0xc8a38
FUN_080c8a38:
	push {r4, r5, r6, r7, lr}	@ 000c8a38 f0b5
.org 0xc8a3a
	adds r6, r0, #0	@ 000c8a3a 061c
.org 0xc8a3c
	ldr r0, [pc, #52]	@ 000c8a3c 0d48
.org 0xc8a3e
	ldr r7, [r0, #0]	@ 000c8a3e 0768
.org 0xc8a40
	ldrb r1, [r6, #10]	@ 000c8a40 b17a
.org 0xc8a42
	movs r0, #2	@ 000c8a42 0220
.org 0xc8a44
	movs r5, #0	@ 000c8a44 0025
.org 0xc8a46
	orrs r0, r1	@ 000c8a46 0843
.org 0xc8a48
	movs r1, #4	@ 000c8a48 0421
.org 0xc8a4a
	orrs r0, r1	@ 000c8a4a 0843
.org 0xc8a4c
	strb r0, [r6, #10]	@ 000c8a4c b072
.org 0xc8a4e
	adds r4, r6, #0	@ 000c8a4e 341c
.org 0xc8a50
	adds r4, #116	@ 000c8a50 7434
.org 0xc8a52
	ldr r1, [pc, #36]	@ 000c8a52 0949
.org 0xc8a54
	adds r2, r6, #0	@ 000c8a54 321c
.org 0xc8a56
	adds r2, #84	@ 000c8a56 5432
.org 0xc8a58
	adds r0, r4, #0	@ 000c8a58 201c
.org 0xc8a5a
	movs r3, #8	@ 000c8a5a 0823
.org 0xc8a5c
	bl 0x5760	@ 000c8a5c 3cf780fe
.org 0xc8a60
	str r6, [r4, #44]	@ 000c8a60 e662
.org 0xc8a62
	str r5, [r4, #36]	@ 000c8a62 6562
.org 0xc8a64
	ldr r0, [pc, #20]	@ 000c8a64 0548
.org 0xc8a66
	str r0, [r6, #96]	@ 000c8a66 3066
.org 0xc8a68
	ldrb r0, [r6, #17]	@ 000c8a68 707c
.org 0xc8a6a
	cmp r0, #0	@ 000c8a6a 0028
.org 0xc8a6c
	beq.n 0xc8a80	@ 000c8a6c 08d0
.org 0xc8a6e
	movs r0, #128	@ 000c8a6e 8020
.org 0xc8a70
	lsls r0, r0, #4	@ 000c8a70 0001
.org 0xc8a72
	b.n 0xc8a82	@ 000c8a72 06e0
.org 0xc8a74
	.byte 0xf0,0xdb,0x02,0x02	@ 000c8a74 data
.org 0xc8a78
	.byte 0x9c,0x60,0x86,0x08	@ 000c8a78 data
.org 0xc8a7c
	.byte 0x80,0xfb,0xff,0xff	@ 000c8a7c data
.org 0xc8a80
	ldr r0, [pc, #60]	@ 000c8a80 0f48
.org 0xc8a82
	str r0, [r6, #92]	@ 000c8a82 f065
.org 0xc8a84
	str r0, [r6, #100]	@ 000c8a84 7066
.org 0xc8a86
	cmp r7, #0	@ 000c8a86 002f
.org 0xc8a88
	bne.n 0xc8ac8	@ 000c8a88 1ed1
.org 0xc8a8a
	ldrb r1, [r6, #10]	@ 000c8a8a b17a
.org 0xc8a8c
	movs r0, #254	@ 000c8a8c fe20
.org 0xc8a8e
	ands r0, r1	@ 000c8a8e 0840
.org 0xc8a90
	movs r1, #253	@ 000c8a90 fd21
.org 0xc8a92
	ands r0, r1	@ 000c8a92 0840
.org 0xc8a94
	strb r0, [r6, #10]	@ 000c8a94 b072
.org 0xc8a96
	adds r0, r6, #0	@ 000c8a96 301c
.org 0xc8a98
	adds r0, #140	@ 000c8a98 8c30
.org 0xc8a9a
	str r7, [r0, #0]	@ 000c8a9a 0760
.org 0xc8a9c
	adds r0, #4	@ 000c8a9c 0430
.org 0xc8a9e
	str r7, [r0, #0]	@ 000c8a9e 0760
.org 0xc8aa0
	adds r0, #4	@ 000c8aa0 0430
.org 0xc8aa2
	strb r7, [r0, #0]	@ 000c8aa2 0770
.org 0xc8aa4
	ldrb r1, [r6, #10]	@ 000c8aa4 b17a
.org 0xc8aa6
	movs r0, #251	@ 000c8aa6 fb20
.org 0xc8aa8
	ands r0, r1	@ 000c8aa8 0840
.org 0xc8aaa
	strb r0, [r6, #10]	@ 000c8aaa b072
.org 0xc8aac
	ldr r1, [pc, #20]	@ 000c8aac 0549
.org 0xc8aae
	ldrb r0, [r6, #9]	@ 000c8aae 707a
.org 0xc8ab0
	lsls r0, r0, #2	@ 000c8ab0 8000
.org 0xc8ab2
	adds r0, r0, r1	@ 000c8ab2 4018
.org 0xc8ab4
	movs r1, #3	@ 000c8ab4 0321
.org 0xc8ab6
	str r1, [r6, #12]	@ 000c8ab6 f160
.org 0xc8ab8
	ldr r0, [r0, #0]	@ 000c8ab8 0068
.org 0xc8aba
	ldr r0, [r0, #12]	@ 000c8aba c068
.org 0xc8abc
	str r0, [r6, #20]	@ 000c8abc 7061
.org 0xc8abe
	b.n 0xc8ae8	@ 000c8abe 13e0
.org 0xc8ac0
	.byte 0x00,0xf8,0xff,0xff	@ 000c8ac0 data
.org 0xc8ac4
	.byte 0xf4,0x49,0x86,0x08	@ 000c8ac4 data
.org 0xc8ac8
	ldr r0, [r7, #84]	@ 000c8ac8 786d
.org 0xc8aca
	ldr r1, [r7, #88]	@ 000c8aca b96d
.org 0xc8acc
	str r0, [r6, #84]	@ 000c8acc 7065
.org 0xc8ace
	str r1, [r6, #88]	@ 000c8ace b165
.org 0xc8ad0
	ldr r1, [pc, #28]	@ 000c8ad0 0749
.org 0xc8ad2
	ldrb r0, [r6, #9]	@ 000c8ad2 707a
.org 0xc8ad4
	lsls r0, r0, #2	@ 000c8ad4 8000
.org 0xc8ad6
	adds r0, r0, r1	@ 000c8ad6 4018
.org 0xc8ad8
	movs r1, #1	@ 000c8ad8 0121
