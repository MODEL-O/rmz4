@ FUN_0803acb8  entry 0x0803acb8  size 92
.thumb
.org 0x3acb8
FUN_0803acb8:
	push {lr}	@ 0003acb8 00b5
.org 0x3acba
	adds r3, r0, #0	@ 0003acba 031c
.org 0x3acbc
	ldr r0, [pc, #84]	@ 0003acbc 1548
.org 0x3acbe
	ldr r1, [pc, #88]	@ 0003acbe 1649
.org 0x3acc0
	adds r0, r0, r1	@ 0003acc0 4018
.org 0x3acc2
	ldr r1, [r0, #0]	@ 0003acc2 0168
.org 0x3acc4
	ldrb r0, [r3, #16]	@ 0003acc4 187c
.org 0x3acc6
	cmp r0, #0	@ 0003acc6 0028
.org 0x3acc8
	beq.n 0x3ad10	@ 0003acc8 22d0
.org 0x3acca
	movs r2, #173	@ 0003acca ad22
.org 0x3accc
	lsls r2, r2, #1	@ 0003accc 5200
.org 0x3acce
	adds r0, r1, r2	@ 0003acce 8818
.org 0x3acd0
	ldrh r1, [r0, #0]	@ 0003acd0 0188
.org 0x3acd2
	movs r0, #64	@ 0003acd2 4020
.org 0x3acd4
	ands r0, r1	@ 0003acd4 0840
.org 0x3acd6
	cmp r0, #0	@ 0003acd6 0028
.org 0x3acd8
	beq.n 0x3ad10	@ 0003acd8 1ad0
.org 0x3acda
	ldrb r1, [r3, #10]	@ 0003acda 997a
.org 0x3acdc
	movs r0, #254	@ 0003acdc fe20
.org 0x3acde
	ands r0, r1	@ 0003acde 0840
.org 0x3ace0
	movs r2, #0	@ 0003ace0 0022
.org 0x3ace2
	movs r1, #253	@ 0003ace2 fd21
.org 0x3ace4
	ands r0, r1	@ 0003ace4 0840
.org 0x3ace6
	strb r0, [r3, #10]	@ 0003ace6 9872
.org 0x3ace8
	adds r0, r3, #0	@ 0003ace8 181c
.org 0x3acea
	adds r0, #140	@ 0003acea 8c30
.org 0x3acec
	str r2, [r0, #0]	@ 0003acec 0260
.org 0x3acee
	adds r0, #4	@ 0003acee 0430
.org 0x3acf0
	str r2, [r0, #0]	@ 0003acf0 0260
.org 0x3acf2
	adds r0, #4	@ 0003acf2 0430
.org 0x3acf4
	strb r2, [r0, #0]	@ 0003acf4 0270
.org 0x3acf6
	ldrb r1, [r3, #10]	@ 0003acf6 997a
.org 0x3acf8
	movs r0, #251	@ 0003acf8 fb20
.org 0x3acfa
	ands r0, r1	@ 0003acfa 0840
.org 0x3acfc
	strb r0, [r3, #10]	@ 0003acfc 9872
.org 0x3acfe
	ldr r1, [pc, #28]	@ 0003acfe 0749
.org 0x3ad00
	ldrb r0, [r3, #9]	@ 0003ad00 587a
.org 0x3ad02
	lsls r0, r0, #2	@ 0003ad02 8000
.org 0x3ad04
	adds r0, r0, r1	@ 0003ad04 4018
.org 0x3ad06
	movs r1, #3	@ 0003ad06 0321
.org 0x3ad08
	str r1, [r3, #12]	@ 0003ad08 d960
.org 0x3ad0a
	ldr r0, [r0, #0]	@ 0003ad0a 0068
.org 0x3ad0c
	ldr r0, [r0, #12]	@ 0003ad0c c068
.org 0x3ad0e
	str r0, [r3, #20]	@ 0003ad0e 5861
.org 0x3ad10
	pop {r0}	@ 0003ad10 01bc
.org 0x3ad12
	bx r0	@ 0003ad12 0047
