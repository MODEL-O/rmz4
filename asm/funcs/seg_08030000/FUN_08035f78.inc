@ FUN_08035f78  entry 0x08035f78  size 98
.thumb
.org 0x35f78
FUN_08035f78:
	push {r4, r5, lr}	@ 00035f78 30b5
.org 0x35f7a
	adds r5, r0, #0	@ 00035f7a 051c
.org 0x35f7c
	movs r0, #129	@ 00035f7c 8120
.org 0x35f7e
	lsls r0, r0, #1	@ 00035f7e 4000
.org 0x35f80
	adds r4, r5, r0	@ 00035f80 2c18
.org 0x35f82
	ldrb r0, [r4, #0]	@ 00035f82 2078
.org 0x35f84
	cmp r0, #0	@ 00035f84 0028
.org 0x35f86
	bne.n 0x35f9c	@ 00035f86 09d1
.org 0x35f88
	ldr r1, [pc, #12]	@ 00035f88 0349
.org 0x35f8a
	adds r0, r5, #0	@ 00035f8a 281c
.org 0x35f8c
	bl 0x1cf00	@ 00035f8c e6f7b8ff
.org 0x35f90
	ldrb r0, [r4, #0]	@ 00035f90 2078
.org 0x35f92
	adds r0, #1	@ 00035f92 0130
.org 0x35f94
	strb r0, [r4, #0]	@ 00035f94 2070
.org 0x35f96
	b.n 0x35fa4	@ 00035f96 05e0
.org 0x35f98
	.byte 0x01,0x19,0x00,0x00	@ 00035f98 data
.org 0x35f9c
	ldr r1, [pc, #36]	@ 00035f9c 0949
.org 0x35f9e
	adds r0, r5, #0	@ 00035f9e 281c
.org 0x35fa0
	bl 0x3a3b0	@ 00035fa0 04f006fa
.org 0x35fa4
	adds r0, r5, #0	@ 00035fa4 281c
.org 0x35fa6
	adds r0, #115	@ 00035fa6 7330
.org 0x35fa8
	ldrb r0, [r0, #0]	@ 00035fa8 0078
.org 0x35faa
	cmp r0, #3	@ 00035faa 0328
.org 0x35fac
	bne.n 0x35fe2	@ 00035fac 19d1
.org 0x35fae
	ldrb r0, [r5, #14]	@ 00035fae a87b
.org 0x35fb0
	cmp r0, #1	@ 00035fb0 0128
.org 0x35fb2
	bne.n 0x35fcc	@ 00035fb2 0bd1
.org 0x35fb4
	ldr r1, [pc, #16]	@ 00035fb4 0449
.org 0x35fb6
	adds r0, r5, #0	@ 00035fb6 281c
.org 0x35fb8
	movs r2, #2	@ 00035fb8 0222
.org 0x35fba
	movs r3, #1	@ 00035fba 0123
.org 0x35fbc
	bl 0x1cfc8	@ 00035fbc e7f704f8
.org 0x35fc0
	b.n 0x35fd8	@ 00035fc0 0ae0
.org 0x35fc2
	.byte 0x00	@ 00035fc2 data
.org 0x35fc3
	.byte 0x00	@ 00035fc3 data
.org 0x35fc4
	.byte 0x01,0x19,0x00,0x00	@ 00035fc4 data
.org 0x35fc8
	.byte 0x03,0x04,0x00,0x00	@ 00035fc8 data
.org 0x35fcc
	ldr r1, [pc, #24]	@ 00035fcc 0649
.org 0x35fce
	adds r0, r5, #0	@ 00035fce 281c
.org 0x35fd0
	movs r2, #2	@ 00035fd0 0222
.org 0x35fd2
	movs r3, #1	@ 00035fd2 0123
.org 0x35fd4
	bl 0x1cfc8	@ 00035fd4 e6f7f8ff
.org 0x35fd8
	movs r0, #128	@ 00035fd8 8020
