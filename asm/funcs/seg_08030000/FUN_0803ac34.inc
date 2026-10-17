@ FUN_0803ac34  entry 0x0803ac34  size 116
.thumb
.org 0x3ac34
FUN_0803ac34:
	push {r4, lr}	@ 0003ac34 10b5
.org 0x3ac36
	adds r3, r0, #0	@ 0003ac36 031c
.org 0x3ac38
	ldr r0, [pc, #40]	@ 0003ac38 0a48
.org 0x3ac3a
	ldr r1, [pc, #44]	@ 0003ac3a 0b49
.org 0x3ac3c
	adds r0, r0, r1	@ 0003ac3c 4018
.org 0x3ac3e
	ldr r0, [r0, #0]	@ 0003ac3e 0068
.org 0x3ac40
	adds r4, r0, #0	@ 0003ac40 041c
.org 0x3ac42
	adds r4, #180	@ 0003ac42 b434
.org 0x3ac44
	movs r1, #173	@ 0003ac44 ad21
.org 0x3ac46
	lsls r1, r1, #1	@ 0003ac46 4900
.org 0x3ac48
	adds r0, r0, r1	@ 0003ac48 4018
.org 0x3ac4a
	ldrh r1, [r0, #0]	@ 0003ac4a 0188
.org 0x3ac4c
	movs r0, #32	@ 0003ac4c 2020
.org 0x3ac4e
	ands r0, r1	@ 0003ac4e 0840
.org 0x3ac50
	lsls r0, r0, #16	@ 0003ac50 0004
.org 0x3ac52
	lsrs r2, r0, #16	@ 0003ac52 020c
.org 0x3ac54
	cmp r2, #0	@ 0003ac54 002a
.org 0x3ac56
	beq.n 0x3ac6c	@ 0003ac56 09d0
.org 0x3ac58
	ldrb r1, [r3, #10]	@ 0003ac58 997a
.org 0x3ac5a
	movs r0, #254	@ 0003ac5a fe20
.org 0x3ac5c
	ands r0, r1	@ 0003ac5c 0840
.org 0x3ac5e
	movs r2, #0	@ 0003ac5e 0022
.org 0x3ac60
	b.n 0x3ac7e	@ 0003ac60 0de0
.org 0x3ac62
	.byte 0x00	@ 0003ac62 data
.org 0x3ac63
	.byte 0x00	@ 0003ac63 data
.org 0x3ac64
	.byte 0x10,0xf6,0x02,0x02	@ 0003ac64 data
.org 0x3ac68
	.byte 0xa8,0x63,0x00,0x00	@ 0003ac68 data
.org 0x3ac6c
	ldrb r0, [r4, #12]	@ 0003ac6c 207b
.org 0x3ac6e
	cmp r0, #1	@ 0003ac6e 0128
.org 0x3ac70
	bhi.n 0x3acac	@ 0003ac70 1cd8
.org 0x3ac72
	ldrb r0, [r4, #13]	@ 0003ac72 607b
.org 0x3ac74
	cmp r0, #1	@ 0003ac74 0128
.org 0x3ac76
	bhi.n 0x3acac	@ 0003ac76 19d8
.org 0x3ac78
	ldrb r1, [r3, #10]	@ 0003ac78 997a
.org 0x3ac7a
	movs r0, #254	@ 0003ac7a fe20
.org 0x3ac7c
	ands r0, r1	@ 0003ac7c 0840
.org 0x3ac7e
	movs r1, #253	@ 0003ac7e fd21
.org 0x3ac80
	ands r0, r1	@ 0003ac80 0840
.org 0x3ac82
	strb r0, [r3, #10]	@ 0003ac82 9872
.org 0x3ac84
	adds r0, r3, #0	@ 0003ac84 181c
.org 0x3ac86
	adds r0, #140	@ 0003ac86 8c30
.org 0x3ac88
	str r2, [r0, #0]	@ 0003ac88 0260
.org 0x3ac8a
	adds r0, #4	@ 0003ac8a 0430
.org 0x3ac8c
	str r2, [r0, #0]	@ 0003ac8c 0260
.org 0x3ac8e
	adds r0, #4	@ 0003ac8e 0430
.org 0x3ac90
	strb r2, [r0, #0]	@ 0003ac90 0270
.org 0x3ac92
	ldrb r1, [r3, #10]	@ 0003ac92 997a
.org 0x3ac94
	movs r0, #251	@ 0003ac94 fb20
.org 0x3ac96
	ands r0, r1	@ 0003ac96 0840
.org 0x3ac98
	strb r0, [r3, #10]	@ 0003ac98 9872
.org 0x3ac9a
	ldr r1, [pc, #24]	@ 0003ac9a 0649
.org 0x3ac9c
	ldrb r0, [r3, #9]	@ 0003ac9c 587a
.org 0x3ac9e
	lsls r0, r0, #2	@ 0003ac9e 8000
.org 0x3aca0
	adds r0, r0, r1	@ 0003aca0 4018
.org 0x3aca2
	movs r1, #3	@ 0003aca2 0321
.org 0x3aca4
	str r1, [r3, #12]	@ 0003aca4 d960
.org 0x3aca6
	ldr r0, [r0, #0]	@ 0003aca6 0068
