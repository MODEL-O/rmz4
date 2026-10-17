@ FUN_0810aa28  entry 0x0810aa28  size 138
.thumb
.org 0x10aa28
FUN_0810aa28:
	push {r4, r5, lr}	@ 0010aa28 30b5
.org 0x10aa2a
	adds r4, r0, #0	@ 0010aa2a 041c
.org 0x10aa2c
	ldr r0, [r4, #40]	@ 0010aa2c a06a
.org 0x10aa2e
	ldr r1, [pc, #36]	@ 0010aa2e 0949
.org 0x10aa30
	adds r0, r0, r1	@ 0010aa30 4018
.org 0x10aa32
	ldr r3, [r0, #0]	@ 0010aa32 0368
.org 0x10aa34
	ldrb r2, [r4, #17]	@ 0010aa34 627c
.org 0x10aa36
	movs r1, #3	@ 0010aa36 0321
.org 0x10aa38
	ands r1, r2	@ 0010aa38 1140
.org 0x10aa3a
	lsls r0, r1, #1	@ 0010aa3a 4800
.org 0x10aa3c
	adds r0, r0, r1	@ 0010aa3c 4018
.org 0x10aa3e
	lsls r0, r0, #3	@ 0010aa3e c000
.org 0x10aa40
	adds r0, #128	@ 0010aa40 8030
.org 0x10aa42
	lsls r0, r0, #8	@ 0010aa42 0002
.org 0x10aa44
	str r0, [r4, #84]	@ 0010aa44 6065
.org 0x10aa46
	movs r0, #1	@ 0010aa46 0120
.org 0x10aa48
	ands r0, r2	@ 0010aa48 1040
.org 0x10aa4a
	cmp r0, #0	@ 0010aa4a 0028
.org 0x10aa4c
	beq.n 0x10aa58	@ 0010aa4c 04d0
.org 0x10aa4e
	movs r0, #192	@ 0010aa4e c020
.org 0x10aa50
	lsls r0, r0, #6	@ 0010aa50 8001
.org 0x10aa52
	b.n 0x10aa5c	@ 0010aa52 03e0
.org 0x10aa54
	.byte 0xa8,0x63,0x00,0x00	@ 0010aa54 data
.org 0x10aa58
	movs r0, #224	@ 0010aa58 e020
.org 0x10aa5a
	lsls r0, r0, #6	@ 0010aa5a 8001
.org 0x10aa5c
	str r0, [r4, #88]	@ 0010aa5c a065
.org 0x10aa5e
	ldrb r0, [r4, #17]	@ 0010aa5e 607c
.org 0x10aa60
	cmp r0, #3	@ 0010aa60 0328
.org 0x10aa62
	bls.n 0x10aa6e	@ 0010aa62 04d9
.org 0x10aa64
	ldr r0, [r4, #88]	@ 0010aa64 a06d
.org 0x10aa66
	movs r1, #128	@ 0010aa66 8021
.org 0x10aa68
	lsls r1, r1, #5	@ 0010aa68 4901
.org 0x10aa6a
	adds r0, r0, r1	@ 0010aa6a 4018
.org 0x10aa6c
	str r0, [r4, #88]	@ 0010aa6c a065
.org 0x10aa6e
	adds r0, r3, #0	@ 0010aa6e 181c
.org 0x10aa70
	adds r0, #180	@ 0010aa70 b430
.org 0x10aa72
	ldrh r1, [r0, #20]	@ 0010aa72 818a
.org 0x10aa74
	ldrb r2, [r4, #17]	@ 0010aa74 627c
.org 0x10aa76
	movs r5, #1	@ 0010aa76 0125
.org 0x10aa78
	adds r0, r5, #0	@ 0010aa78 281c
.org 0x10aa7a
	lsls r0, r2	@ 0010aa7a 9040
.org 0x10aa7c
	ands r1, r0	@ 0010aa7c 0140
.org 0x10aa7e
	asrs r1, r2	@ 0010aa7e 1141
.org 0x10aa80
	cmp r1, #0	@ 0010aa80 0029
.org 0x10aa82
	beq.n 0x10aaa0	@ 0010aa82 0dd0
.org 0x10aa84
	ldr r1, [pc, #20]	@ 0010aa84 0549
.org 0x10aa86
	lsls r0, r2, #1	@ 0010aa86 5000
.org 0x10aa88
	adds r0, r0, r1	@ 0010aa88 4018
.org 0x10aa8a
	ldrh r1, [r0, #0]	@ 0010aa8a 0188
.org 0x10aa8c
	adds r0, r4, #0	@ 0010aa8c 201c
.org 0x10aa8e
	bl 0x1cf00	@ 0010aa8e 12f737fa
.org 0x10aa92
	adds r1, r4, #0	@ 0010aa92 211c
.org 0x10aa94
	adds r1, #34	@ 0010aa94 2231
.org 0x10aa96
	movs r0, #0	@ 0010aa96 0020
.org 0x10aa98
	strb r0, [r1, #0]	@ 0010aa98 0870
.org 0x10aa9a
	b.n 0x10aab4	@ 0010aa9a 0be0
.org 0x10aa9c
	.byte 0x94,0xcb,0x86,0x08	@ 0010aa9c data
.org 0x10aaa0
	ldr r1, [pc, #24]	@ 0010aaa0 0649
.org 0x10aaa2
	lsls r0, r2, #1	@ 0010aaa2 5000
.org 0x10aaa4
	adds r0, r0, r1	@ 0010aaa4 4018
.org 0x10aaa6
	ldrh r1, [r0, #0]	@ 0010aaa6 0188
.org 0x10aaa8
	adds r0, r4, #0	@ 0010aaa8 201c
.org 0x10aaaa
	bl 0x1cf00	@ 0010aaaa 12f729fa
.org 0x10aaae
	adds r0, r4, #0	@ 0010aaae 201c
.org 0x10aab0
	adds r0, #34	@ 0010aab0 2230
