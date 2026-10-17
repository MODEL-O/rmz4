@ FUN_080d6f94  entry 0x080d6f94  size 98
.thumb
.org 0xd6f94
FUN_080d6f94:
	push {r4, lr}	@ 000d6f94 10b5
.org 0xd6f96
	adds r4, r0, #0	@ 000d6f96 041c
.org 0xd6f98
	bl 0x1cc9c	@ 000d6f98 45f780fe
.org 0xd6f9c
	ldrb r1, [r4, #10]	@ 000d6f9c a17a
.org 0xd6f9e
	movs r0, #1	@ 000d6f9e 0120
.org 0xd6fa0
	orrs r0, r1	@ 000d6fa0 0843
.org 0xd6fa2
	movs r1, #2	@ 000d6fa2 0221
.org 0xd6fa4
	orrs r0, r1	@ 000d6fa4 0843
.org 0xd6fa6
	strb r0, [r4, #10]	@ 000d6fa6 a072
.org 0xd6fa8
	ldr r1, [pc, #24]	@ 000d6fa8 0649
.org 0xd6faa
	adds r0, r4, #0	@ 000d6faa 201c
.org 0xd6fac
	bl 0x1cf00	@ 000d6fac 45f7a8ff
.org 0xd6fb0
	ldrb r1, [r4, #10]	@ 000d6fb0 a17a
.org 0xd6fb2
	movs r0, #16	@ 000d6fb2 1020
.org 0xd6fb4
	ands r0, r1	@ 000d6fb4 0840
.org 0xd6fb6
	cmp r0, #0	@ 000d6fb6 0028
.org 0xd6fb8
	beq.n 0xd6fc8	@ 000d6fb8 06d0
.org 0xd6fba
	movs r0, #64	@ 000d6fba 4020
.org 0xd6fbc
	str r0, [r4, #92]	@ 000d6fbc e065
.org 0xd6fbe
	subs r0, #66	@ 000d6fbe 4238
.org 0xd6fc0
	b.n 0xd6fd0	@ 000d6fc0 06e0
.org 0xd6fc2
	.byte 0x00	@ 000d6fc2 data
.org 0xd6fc3
	.byte 0x00	@ 000d6fc3 data
.org 0xd6fc4
	.byte 0x07,0x1c,0x00,0x00	@ 000d6fc4 data
.org 0xd6fc8
	movs r0, #64	@ 000d6fc8 4020
.org 0xd6fca
	negs r0, r0	@ 000d6fca 4042
.org 0xd6fcc
	str r0, [r4, #92]	@ 000d6fcc e065
.org 0xd6fce
	movs r0, #2	@ 000d6fce 0220
.org 0xd6fd0
	str r0, [r4, #100]	@ 000d6fd0 6066
.org 0xd6fd2
	movs r0, #64	@ 000d6fd2 4020
.org 0xd6fd4
	str r0, [r4, #96]	@ 000d6fd4 2066
.org 0xd6fd6
	subs r0, #66	@ 000d6fd6 4238
.org 0xd6fd8
	str r0, [r4, #104]	@ 000d6fd8 a066
.org 0xd6fda
	movs r0, #32	@ 000d6fda 2020
.org 0xd6fdc
	strb r0, [r4, #18]	@ 000d6fdc a074
.org 0xd6fde
	ldr r1, [pc, #28]	@ 000d6fde 0749
.org 0xd6fe0
	ldrb r0, [r4, #9]	@ 000d6fe0 607a
.org 0xd6fe2
	lsls r0, r0, #2	@ 000d6fe2 8000
.org 0xd6fe4
	adds r0, r0, r1	@ 000d6fe4 4018
.org 0xd6fe6
	movs r1, #1	@ 000d6fe6 0121
.org 0xd6fe8
	str r1, [r4, #12]	@ 000d6fe8 e160
.org 0xd6fea
	ldr r0, [r0, #0]	@ 000d6fea 0068
.org 0xd6fec
	ldr r0, [r0, #4]	@ 000d6fec 4068
.org 0xd6fee
	str r0, [r4, #20]	@ 000d6fee 6061
.org 0xd6ff0
	adds r0, r4, #0	@ 000d6ff0 201c
.org 0xd6ff2
	bl 0xd6ef4	@ 000d6ff2 fff77fff
