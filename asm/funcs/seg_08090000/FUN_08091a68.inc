@ FUN_08091a68  entry 0x08091a68  size 134
.thumb
.org 0x91a68
FUN_08091a68:
	push {r4, r5, r6, lr}	@ 00091a68 70b5
.org 0x91a6a
	adds r4, r0, #0	@ 00091a6a 041c
.org 0x91a6c
	ldr r0, [pc, #108]	@ 00091a6c 1b48
.org 0x91a6e
	ldr r5, [r0, #0]	@ 00091a6e 0568
.org 0x91a70
	ldr r6, [r4, #40]	@ 00091a70 a66a
.org 0x91a72
	ldrb r0, [r4, #14]	@ 00091a72 a07b
.org 0x91a74
	cmp r0, #0	@ 00091a74 0028
.org 0x91a76
	bne.n 0x91a8a	@ 00091a76 08d1
.org 0x91a78
	ldr r1, [pc, #100]	@ 00091a78 1949
.org 0x91a7a
	adds r0, r4, #0	@ 00091a7a 201c
.org 0x91a7c
	bl 0x1cf00	@ 00091a7c 8bf740fa
.org 0x91a80
	movs r0, #32	@ 00091a80 2020
.org 0x91a82
	strb r0, [r4, #18]	@ 00091a82 a074
.org 0x91a84
	ldrb r0, [r4, #14]	@ 00091a84 a07b
.org 0x91a86
	adds r0, #1	@ 00091a86 0130
.org 0x91a88
	strb r0, [r4, #14]	@ 00091a88 a073
.org 0x91a8a
	adds r0, r4, #0	@ 00091a8a 201c
.org 0x91a8c
	bl 0x1cff0	@ 00091a8c 8bf7b0fa
.org 0x91a90
	adds r0, r4, #0	@ 00091a90 201c
.org 0x91a92
	adds r0, #113	@ 00091a92 7130
.org 0x91a94
	ldrb r0, [r0, #0]	@ 00091a94 0078
.org 0x91a96
	lsls r0, r0, #24	@ 00091a96 0006
.org 0x91a98
	asrs r0, r0, #24	@ 00091a98 0016
.org 0x91a9a
	cmp r0, #0	@ 00091a9a 0028
.org 0x91a9c
	bne.n 0x91ab2	@ 00091a9c 09d1
.org 0x91a9e
	adds r0, r4, #0	@ 00091a9e 201c
.org 0x91aa0
	adds r0, #114	@ 00091aa0 7230
.org 0x91aa2
	ldrb r0, [r0, #0]	@ 00091aa2 0078
.org 0x91aa4
	lsls r0, r0, #24	@ 00091aa4 0006
.org 0x91aa6
	asrs r0, r0, #24	@ 00091aa6 0016
.org 0x91aa8
	cmp r0, #1	@ 00091aa8 0128
.org 0x91aaa
	bgt.n 0x91ab2	@ 00091aaa 02dc
.org 0x91aac
	movs r0, #55	@ 00091aac 3720
.org 0x91aae
	bl 0x2b10	@ 00091aae 71f72ff8
.org 0x91ab2
	adds r2, r6, #0	@ 00091ab2 321c
.org 0x91ab4
	adds r2, #180	@ 00091ab4 b432
.org 0x91ab6
	movs r0, #16	@ 00091ab6 1020
.org 0x91ab8
	strh r0, [r2, #30]	@ 00091ab8 d083
.org 0x91aba
	cmp r5, #0	@ 00091aba 002d
.org 0x91abc
	beq.n 0x91ace	@ 00091abc 07d0
.org 0x91abe
	adds r0, r4, #0	@ 00091abe 201c
.org 0x91ac0
	adds r0, #140	@ 00091ac0 8c30
.org 0x91ac2
	ldr r0, [r0, #0]	@ 00091ac2 0068
.org 0x91ac4
	movs r1, #128	@ 00091ac4 8021
.org 0x91ac6
	lsls r1, r1, #4	@ 00091ac6 0901
.org 0x91ac8
	ands r0, r1	@ 00091ac8 0840
.org 0x91aca
	cmp r0, #0	@ 00091aca 0028
.org 0x91acc
	bne.n 0x91ae4	@ 00091acc 0ad1
.org 0x91ace
	movs r0, #60	@ 00091ace 3c20
.org 0x91ad0
	strh r0, [r2, #30]	@ 00091ad0 d083
.org 0x91ad2
	movs r0, #5	@ 00091ad2 0520
.org 0x91ad4
	strb r0, [r4, #13]	@ 00091ad4 6073
.org 0x91ad6
	movs r0, #0	@ 00091ad6 0020
.org 0x91ad8
	strb r0, [r4, #14]	@ 00091ad8 a073
.org 0x91ada
	b.n 0x91af0	@ 00091ada 09e0
.org 0x91adc
	.byte 0xf0,0xdb,0x02,0x02	@ 00091adc data
.org 0x91ae0
	.byte 0x0b,0x3c,0x00,0x00	@ 00091ae0 data
.org 0x91ae4
	ldr r0, [r4, #84]	@ 00091ae4 606d
.org 0x91ae6
	str r0, [r5, #84]	@ 00091ae6 6865
.org 0x91ae8
	ldr r0, [r4, #88]	@ 00091ae8 a06d
.org 0x91aea
	str r0, [r5, #88]	@ 00091aea a865
.org 0x91aec
	movs r0, #0	@ 00091aec 0020
