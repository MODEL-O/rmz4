@ FUN_0803ab2c  entry 0x0803ab2c  size 116
.thumb
.org 0x3ab2c
FUN_0803ab2c:
	push {r4, lr}	@ 0003ab2c 10b5
.org 0x3ab2e
	adds r3, r0, #0	@ 0003ab2e 031c
.org 0x3ab30
	ldr r0, [pc, #40]	@ 0003ab30 0a48
.org 0x3ab32
	ldr r1, [pc, #44]	@ 0003ab32 0b49
.org 0x3ab34
	adds r0, r0, r1	@ 0003ab34 4018
.org 0x3ab36
	ldr r0, [r0, #0]	@ 0003ab36 0068
.org 0x3ab38
	adds r4, r0, #0	@ 0003ab38 041c
.org 0x3ab3a
	adds r4, #180	@ 0003ab3a b434
.org 0x3ab3c
	movs r1, #173	@ 0003ab3c ad21
.org 0x3ab3e
	lsls r1, r1, #1	@ 0003ab3e 4900
.org 0x3ab40
	adds r0, r0, r1	@ 0003ab40 4018
.org 0x3ab42
	ldrh r1, [r0, #0]	@ 0003ab42 0188
.org 0x3ab44
	movs r0, #8	@ 0003ab44 0820
.org 0x3ab46
	ands r0, r1	@ 0003ab46 0840
.org 0x3ab48
	lsls r0, r0, #16	@ 0003ab48 0004
.org 0x3ab4a
	lsrs r2, r0, #16	@ 0003ab4a 020c
.org 0x3ab4c
	cmp r2, #0	@ 0003ab4c 002a
.org 0x3ab4e
	beq.n 0x3ab64	@ 0003ab4e 09d0
.org 0x3ab50
	ldrb r1, [r3, #10]	@ 0003ab50 997a
.org 0x3ab52
	movs r0, #254	@ 0003ab52 fe20
.org 0x3ab54
	ands r0, r1	@ 0003ab54 0840
.org 0x3ab56
	movs r2, #0	@ 0003ab56 0022
.org 0x3ab58
	b.n 0x3ab76	@ 0003ab58 0de0
.org 0x3ab5a
	.byte 0x00	@ 0003ab5a data
.org 0x3ab5b
	.byte 0x00	@ 0003ab5b data
.org 0x3ab5c
	.byte 0x10,0xf6,0x02,0x02	@ 0003ab5c data
.org 0x3ab60
	.byte 0xa8,0x63,0x00,0x00	@ 0003ab60 data
.org 0x3ab64
	ldrb r0, [r4, #12]	@ 0003ab64 207b
.org 0x3ab66
	cmp r0, #1	@ 0003ab66 0128
.org 0x3ab68
	bhi.n 0x3aba4	@ 0003ab68 1cd8
.org 0x3ab6a
	ldrb r0, [r4, #13]	@ 0003ab6a 607b
.org 0x3ab6c
	cmp r0, #1	@ 0003ab6c 0128
.org 0x3ab6e
	bhi.n 0x3aba4	@ 0003ab6e 19d8
.org 0x3ab70
	ldrb r1, [r3, #10]	@ 0003ab70 997a
.org 0x3ab72
	movs r0, #254	@ 0003ab72 fe20
.org 0x3ab74
	ands r0, r1	@ 0003ab74 0840
.org 0x3ab76
	movs r1, #253	@ 0003ab76 fd21
.org 0x3ab78
	ands r0, r1	@ 0003ab78 0840
.org 0x3ab7a
	strb r0, [r3, #10]	@ 0003ab7a 9872
.org 0x3ab7c
	adds r0, r3, #0	@ 0003ab7c 181c
.org 0x3ab7e
	adds r0, #140	@ 0003ab7e 8c30
.org 0x3ab80
	str r2, [r0, #0]	@ 0003ab80 0260
.org 0x3ab82
	adds r0, #4	@ 0003ab82 0430
.org 0x3ab84
	str r2, [r0, #0]	@ 0003ab84 0260
.org 0x3ab86
	adds r0, #4	@ 0003ab86 0430
.org 0x3ab88
	strb r2, [r0, #0]	@ 0003ab88 0270
.org 0x3ab8a
	ldrb r1, [r3, #10]	@ 0003ab8a 997a
.org 0x3ab8c
	movs r0, #251	@ 0003ab8c fb20
.org 0x3ab8e
	ands r0, r1	@ 0003ab8e 0840
.org 0x3ab90
	strb r0, [r3, #10]	@ 0003ab90 9872
.org 0x3ab92
	ldr r1, [pc, #24]	@ 0003ab92 0649
.org 0x3ab94
	ldrb r0, [r3, #9]	@ 0003ab94 587a
.org 0x3ab96
	lsls r0, r0, #2	@ 0003ab96 8000
.org 0x3ab98
	adds r0, r0, r1	@ 0003ab98 4018
.org 0x3ab9a
	movs r1, #3	@ 0003ab9a 0321
.org 0x3ab9c
	str r1, [r3, #12]	@ 0003ab9c d960
.org 0x3ab9e
	ldr r0, [r0, #0]	@ 0003ab9e 0068
