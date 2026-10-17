@ FUN_0803abb0  entry 0x0803abb0  size 116
.thumb
.org 0x3abb0
FUN_0803abb0:
	push {r4, lr}	@ 0003abb0 10b5
.org 0x3abb2
	adds r3, r0, #0	@ 0003abb2 031c
.org 0x3abb4
	ldr r0, [pc, #40]	@ 0003abb4 0a48
.org 0x3abb6
	ldr r1, [pc, #44]	@ 0003abb6 0b49
.org 0x3abb8
	adds r0, r0, r1	@ 0003abb8 4018
.org 0x3abba
	ldr r0, [r0, #0]	@ 0003abba 0068
.org 0x3abbc
	adds r4, r0, #0	@ 0003abbc 041c
.org 0x3abbe
	adds r4, #180	@ 0003abbe b434
.org 0x3abc0
	movs r1, #173	@ 0003abc0 ad21
.org 0x3abc2
	lsls r1, r1, #1	@ 0003abc2 4900
.org 0x3abc4
	adds r0, r0, r1	@ 0003abc4 4018
.org 0x3abc6
	ldrh r1, [r0, #0]	@ 0003abc6 0188
.org 0x3abc8
	movs r0, #16	@ 0003abc8 1020
.org 0x3abca
	ands r0, r1	@ 0003abca 0840
.org 0x3abcc
	lsls r0, r0, #16	@ 0003abcc 0004
.org 0x3abce
	lsrs r2, r0, #16	@ 0003abce 020c
.org 0x3abd0
	cmp r2, #0	@ 0003abd0 002a
.org 0x3abd2
	beq.n 0x3abe8	@ 0003abd2 09d0
.org 0x3abd4
	ldrb r1, [r3, #10]	@ 0003abd4 997a
.org 0x3abd6
	movs r0, #254	@ 0003abd6 fe20
.org 0x3abd8
	ands r0, r1	@ 0003abd8 0840
.org 0x3abda
	movs r2, #0	@ 0003abda 0022
.org 0x3abdc
	b.n 0x3abfa	@ 0003abdc 0de0
.org 0x3abde
	.byte 0x00	@ 0003abde data
.org 0x3abdf
	.byte 0x00	@ 0003abdf data
.org 0x3abe0
	.byte 0x10,0xf6,0x02,0x02	@ 0003abe0 data
.org 0x3abe4
	.byte 0xa8,0x63,0x00,0x00	@ 0003abe4 data
.org 0x3abe8
	ldrb r0, [r4, #12]	@ 0003abe8 207b
.org 0x3abea
	cmp r0, #1	@ 0003abea 0128
.org 0x3abec
	bhi.n 0x3ac28	@ 0003abec 1cd8
.org 0x3abee
	ldrb r0, [r4, #13]	@ 0003abee 607b
.org 0x3abf0
	cmp r0, #1	@ 0003abf0 0128
.org 0x3abf2
	bhi.n 0x3ac28	@ 0003abf2 19d8
.org 0x3abf4
	ldrb r1, [r3, #10]	@ 0003abf4 997a
.org 0x3abf6
	movs r0, #254	@ 0003abf6 fe20
.org 0x3abf8
	ands r0, r1	@ 0003abf8 0840
.org 0x3abfa
	movs r1, #253	@ 0003abfa fd21
.org 0x3abfc
	ands r0, r1	@ 0003abfc 0840
.org 0x3abfe
	strb r0, [r3, #10]	@ 0003abfe 9872
.org 0x3ac00
	adds r0, r3, #0	@ 0003ac00 181c
.org 0x3ac02
	adds r0, #140	@ 0003ac02 8c30
.org 0x3ac04
	str r2, [r0, #0]	@ 0003ac04 0260
.org 0x3ac06
	adds r0, #4	@ 0003ac06 0430
.org 0x3ac08
	str r2, [r0, #0]	@ 0003ac08 0260
.org 0x3ac0a
	adds r0, #4	@ 0003ac0a 0430
.org 0x3ac0c
	strb r2, [r0, #0]	@ 0003ac0c 0270
.org 0x3ac0e
	ldrb r1, [r3, #10]	@ 0003ac0e 997a
.org 0x3ac10
	movs r0, #251	@ 0003ac10 fb20
.org 0x3ac12
	ands r0, r1	@ 0003ac12 0840
.org 0x3ac14
	strb r0, [r3, #10]	@ 0003ac14 9872
.org 0x3ac16
	ldr r1, [pc, #24]	@ 0003ac16 0649
.org 0x3ac18
	ldrb r0, [r3, #9]	@ 0003ac18 587a
.org 0x3ac1a
	lsls r0, r0, #2	@ 0003ac1a 8000
.org 0x3ac1c
	adds r0, r0, r1	@ 0003ac1c 4018
.org 0x3ac1e
	movs r1, #3	@ 0003ac1e 0321
.org 0x3ac20
	str r1, [r3, #12]	@ 0003ac20 d960
.org 0x3ac22
	ldr r0, [r0, #0]	@ 0003ac22 0068
