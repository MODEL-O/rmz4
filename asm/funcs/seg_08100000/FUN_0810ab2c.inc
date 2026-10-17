@ FUN_0810ab2c  entry 0x0810ab2c  size 172
.thumb
.org 0x10ab2c
FUN_0810ab2c:
	push {r4, r5, lr}	@ 0010ab2c 30b5
.org 0x10ab2e
	adds r4, r0, #0	@ 0010ab2e 041c
.org 0x10ab30
	ldr r0, [r4, #40]	@ 0010ab30 a06a
.org 0x10ab32
	ldr r1, [pc, #24]	@ 0010ab32 0649
.org 0x10ab34
	adds r0, r0, r1	@ 0010ab34 4018
.org 0x10ab36
	ldr r5, [r0, #0]	@ 0010ab36 0568
.org 0x10ab38
	adds r0, r5, #0	@ 0010ab38 281c
.org 0x10ab3a
	adds r0, #188	@ 0010ab3a bc30
.org 0x10ab3c
	ldrb r2, [r4, #17]	@ 0010ab3c 627c
.org 0x10ab3e
	adds r0, r0, r2	@ 0010ab3e 8018
.org 0x10ab40
	ldrb r1, [r0, #0]	@ 0010ab40 0178
.org 0x10ab42
	cmp r1, #32	@ 0010ab42 2029
.org 0x10ab44
	bne.n 0x10ab50	@ 0010ab44 04d1
.org 0x10ab46
	movs r1, #11	@ 0010ab46 0b21
.org 0x10ab48
	b.n 0x10ab70	@ 0010ab48 12e0
.org 0x10ab4a
	.byte 0x00	@ 0010ab4a data
.org 0x10ab4b
	.byte 0x00	@ 0010ab4b data
.org 0x10ab4c
	.byte 0xa8,0x63,0x00,0x00	@ 0010ab4c data
.org 0x10ab50
	cmp r1, #0	@ 0010ab50 0029
.org 0x10ab52
	bne.n 0x10ab58	@ 0010ab52 01d1
.org 0x10ab54
	movs r1, #0	@ 0010ab54 0021
.org 0x10ab56
	b.n 0x10ab70	@ 0010ab56 0be0
.org 0x10ab58
	cmp r1, #31	@ 0010ab58 1f29
.org 0x10ab5a
	bne.n 0x10ab60	@ 0010ab5a 01d1
.org 0x10ab5c
	movs r1, #10	@ 0010ab5c 0a21
.org 0x10ab5e
	b.n 0x10ab70	@ 0010ab5e 07e0
.org 0x10ab60
	ldrb r0, [r0, #0]	@ 0010ab60 0078
.org 0x10ab62
	subs r0, #1	@ 0010ab62 0138
.org 0x10ab64
	movs r1, #3	@ 0010ab64 0321
.org 0x10ab66
	bl 0x128fb8	@ 0010ab66 1ef027fa
.org 0x10ab6a
	adds r0, #1	@ 0010ab6a 0130
.org 0x10ab6c
	lsls r0, r0, #24	@ 0010ab6c 0006
.org 0x10ab6e
	lsrs r1, r0, #24	@ 0010ab6e 010e
.org 0x10ab70
	ldrb r0, [r4, #17]	@ 0010ab70 607c
.org 0x10ab72
	cmp r0, #1	@ 0010ab72 0128
.org 0x10ab74
	bhi.n 0x10ab86	@ 0010ab74 07d8
.org 0x10ab76
	movs r2, #216	@ 0010ab76 d822
.org 0x10ab78
	lsls r2, r2, #6	@ 0010ab78 9201
.org 0x10ab7a
	adds r0, r2, #0	@ 0010ab7a 101c
.org 0x10ab7c
	orrs r1, r0	@ 0010ab7c 0143
.org 0x10ab7e
	adds r0, r4, #0	@ 0010ab7e 201c
.org 0x10ab80
	bl 0x1cf00	@ 0010ab80 12f7bef9
.org 0x10ab84
	b.n 0x10ab90	@ 0010ab84 04e0
.org 0x10ab86
	ldr r0, [pc, #76]	@ 0010ab86 1348
.org 0x10ab88
	adds r1, r1, r0	@ 0010ab88 0918
.org 0x10ab8a
	adds r0, r4, #0	@ 0010ab8a 201c
.org 0x10ab8c
	bl 0x1cf00	@ 0010ab8c 12f7b8f9
.org 0x10ab90
	movs r2, #0	@ 0010ab90 0022
.org 0x10ab92
	movs r1, #0	@ 0010ab92 0021
.org 0x10ab94
	ldrb r0, [r4, #17]	@ 0010ab94 607c
.org 0x10ab96
	cmp r2, r0	@ 0010ab96 8242
.org 0x10ab98
	bcs.n 0x10abb6	@ 0010ab98 0dd2
.org 0x10ab9a
	adds r5, #188	@ 0010ab9a bc35
.org 0x10ab9c
	adds r3, r0, #0	@ 0010ab9c 031c
.org 0x10ab9e
	adds r0, r5, r1	@ 0010ab9e 6818
.org 0x10aba0
	ldrb r0, [r0, #0]	@ 0010aba0 0078
.org 0x10aba2
	cmp r0, #255	@ 0010aba2 ff28
.org 0x10aba4
	beq.n 0x10abac	@ 0010aba4 02d0
.org 0x10aba6
	adds r0, r2, #1	@ 0010aba6 501c
.org 0x10aba8
	lsls r0, r0, #24	@ 0010aba8 0006
.org 0x10abaa
	lsrs r2, r0, #24	@ 0010abaa 020e
.org 0x10abac
	adds r0, r1, #1	@ 0010abac 481c
.org 0x10abae
	lsls r0, r0, #24	@ 0010abae 0006
.org 0x10abb0
	lsrs r1, r0, #24	@ 0010abb0 010e
.org 0x10abb2
	cmp r1, r3	@ 0010abb2 9942
.org 0x10abb4
	bcc.n 0x10ab9e	@ 0010abb4 f3d3
.org 0x10abb6
	lsls r0, r2, #1	@ 0010abb6 5000
.org 0x10abb8
	adds r0, r0, r2	@ 0010abb8 8018
.org 0x10abba
	lsls r0, r0, #11	@ 0010abba c002
.org 0x10abbc
	movs r1, #136	@ 0010abbc 8821
.org 0x10abbe
	lsls r1, r1, #8	@ 0010abbe 0902
.org 0x10abc0
	adds r0, r0, r1	@ 0010abc0 4018
.org 0x10abc2
	str r0, [r4, #84]	@ 0010abc2 6065
.org 0x10abc4
	movs r0, #1	@ 0010abc4 0120
.org 0x10abc6
	ands r2, r0	@ 0010abc6 0240
.org 0x10abc8
	cmp r2, #0	@ 0010abc8 002a
.org 0x10abca
	beq.n 0x10abd8	@ 0010abca 05d0
.org 0x10abcc
	movs r0, #176	@ 0010abcc b020
.org 0x10abce
	lsls r0, r0, #7	@ 0010abce c001
.org 0x10abd0
	b.n 0x10abdc	@ 0010abd0 04e0
.org 0x10abd2
	.byte 0x00	@ 0010abd2 data
.org 0x10abd3
	.byte 0x00	@ 0010abd3 data
.org 0x10abd4
	.byte 0x0e,0x36,0x00,0x00	@ 0010abd4 data
