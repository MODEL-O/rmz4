@ FUN_0804ab64  entry 0x0804ab64  size 278
.thumb
.org 0x4ab64
FUN_0804ab64:
	push {r4, lr}	@ 0004ab64 10b5
.org 0x4ab66
	sub sp, #8	@ 0004ab66 82b0
.org 0x4ab68
	adds r4, r0, #0	@ 0004ab68 041c
.org 0x4ab6a
	bl 0x1cff0	@ 0004ab6a d2f741fa
.org 0x4ab6e
	ldrb r0, [r4, #17]	@ 0004ab6e 607c
.org 0x4ab70
	cmp r0, #2	@ 0004ab70 0228
.org 0x4ab72
	bhi.n 0x4abd8	@ 0004ab72 31d8
.org 0x4ab74
	ldrb r0, [r4, #18]	@ 0004ab74 a07c
.org 0x4ab76
	adds r0, #1	@ 0004ab76 0130
.org 0x4ab78
	strb r0, [r4, #18]	@ 0004ab78 a074
.org 0x4ab7a
	lsls r0, r0, #24	@ 0004ab7a 0006
.org 0x4ab7c
	lsrs r0, r0, #24	@ 0004ab7c 000e
.org 0x4ab7e
	cmp r0, #9	@ 0004ab7e 0928
.org 0x4ab80
	bne.n 0x4abd8	@ 0004ab80 2ad1
.org 0x4ab82
	ldrb r1, [r4, #10]	@ 0004ab82 a17a
.org 0x4ab84
	movs r0, #16	@ 0004ab84 1020
.org 0x4ab86
	ands r0, r1	@ 0004ab86 0840
.org 0x4ab88
	cmp r0, #0	@ 0004ab88 0028
.org 0x4ab8a
	beq.n 0x4ab94	@ 0004ab8a 03d0
.org 0x4ab8c
	ldr r0, [r4, #84]	@ 0004ab8c 606d
.org 0x4ab8e
	movs r1, #128	@ 0004ab8e 8021
.org 0x4ab90
	lsls r1, r1, #5	@ 0004ab90 4901
.org 0x4ab92
	b.n 0x4ab98	@ 0004ab92 01e0
.org 0x4ab94
	ldr r0, [r4, #84]	@ 0004ab94 606d
.org 0x4ab96
	ldr r1, [pc, #32]	@ 0004ab96 0849
.org 0x4ab98
	adds r0, r0, r1	@ 0004ab98 4018
.org 0x4ab9a
	str r0, [r4, #100]	@ 0004ab9a 6066
.org 0x4ab9c
	ldr r0, [r4, #100]	@ 0004ab9c 606e
.org 0x4ab9e
	ldr r1, [r4, #88]	@ 0004ab9e a16d
.org 0x4aba0
	bl 0x8534	@ 0004aba0 bdf7c8fc
.org 0x4aba4
	str r0, [r4, #104]	@ 0004aba4 a066
.org 0x4aba6
	ldr r1, [r4, #88]	@ 0004aba6 a16d
.org 0x4aba8
	subs r2, r0, r1	@ 0004aba8 421a
.org 0x4abaa
	cmp r2, #0	@ 0004abaa 002a
.org 0x4abac
	blt.n 0x4abc0	@ 0004abac 08db
.org 0x4abae
	ldr r0, [pc, #12]	@ 0004abae 0348
.org 0x4abb0
	cmp r2, r0	@ 0004abb0 8242
.org 0x4abb2
	ble.n 0x4abc8	@ 0004abb2 09dd
.org 0x4abb4
	b.n 0x4abd8	@ 0004abb4 10e0
.org 0x4abb6
	.byte 0x00	@ 0004abb6 data
.org 0x4abb7
	.byte 0x00	@ 0004abb7 data
.org 0x4abb8
	.byte 0x00,0xf0,0xff,0xff	@ 0004abb8 data
.org 0x4abbc
	.byte 0xff,0x0e,0x00,0x00	@ 0004abbc data
.org 0x4abc0
	subs r1, r1, r0	@ 0004abc0 091a
.org 0x4abc2
	ldr r0, [pc, #68]	@ 0004abc2 1148
.org 0x4abc4
	cmp r1, r0	@ 0004abc4 8142
.org 0x4abc6
	bgt.n 0x4abd8	@ 0004abc6 07dc
.org 0x4abc8
	ldr r0, [r4, #40]	@ 0004abc8 a06a
.org 0x4abca
	ldrb r2, [r4, #17]	@ 0004abca 627c
.org 0x4abcc
	adds r2, #1	@ 0004abcc 0132
.org 0x4abce
	lsls r2, r2, #24	@ 0004abce 1206
.org 0x4abd0
	lsrs r2, r2, #24	@ 0004abd0 120e
.org 0x4abd2
	adds r1, r4, #0	@ 0004abd2 211c
.org 0x4abd4
	bl 0x4a790	@ 0004abd4 fff7dcfd
.org 0x4abd8
	ldrb r0, [r4, #13]	@ 0004abd8 607b
.org 0x4abda
	cmp r0, #0	@ 0004abda 0028
.org 0x4abdc
	bne.n 0x4ac54	@ 0004abdc 3ad1
.org 0x4abde
	adds r0, r4, #0	@ 0004abde 201c
.org 0x4abe0
	adds r0, #113	@ 0004abe0 7130
.org 0x4abe2
	ldrb r0, [r0, #0]	@ 0004abe2 0078
.org 0x4abe4
	subs r0, #1	@ 0004abe4 0138
.org 0x4abe6
	lsls r0, r0, #24	@ 0004abe6 0006
.org 0x4abe8
	lsrs r0, r0, #24	@ 0004abe8 000e
.org 0x4abea
	cmp r0, #9	@ 0004abea 0928
.org 0x4abec
	bhi.n 0x4ac10	@ 0004abec 10d8
.org 0x4abee
	adds r0, r4, #0	@ 0004abee 201c
.org 0x4abf0
	adds r0, #116	@ 0004abf0 7430
.org 0x4abf2
	ldr r1, [pc, #24]	@ 0004abf2 0649
.org 0x4abf4
	movs r3, #1	@ 0004abf4 0123
.org 0x4abf6
	negs r3, r3	@ 0004abf6 5b42
.org 0x4abf8
	str r3, [sp, #0]	@ 0004abf8 0093
.org 0x4abfa
	ldrb r2, [r4, #17]	@ 0004abfa 627c
.org 0x4abfc
	adds r2, #2	@ 0004abfc 0232
.org 0x4abfe
	str r2, [sp, #4]	@ 0004abfe 0192
.org 0x4ac00
	adds r2, r3, #0	@ 0004ac00 1a1c
.org 0x4ac02
	bl 0x5794	@ 0004ac02 baf7c7fd
.org 0x4ac06
	b.n 0x4ac28	@ 0004ac06 0fe0
.org 0x4ac08
	.byte 0xff,0x0e,0x00,0x00	@ 0004ac08 data
.org 0x4ac0c
	.byte 0xf4,0x73,0x85,0x08	@ 0004ac0c data
.org 0x4ac10
	adds r0, r4, #0	@ 0004ac10 201c
.org 0x4ac12
	adds r0, #116	@ 0004ac12 7430
.org 0x4ac14
	ldr r1, [pc, #40]	@ 0004ac14 0a49
.org 0x4ac16
	movs r3, #1	@ 0004ac16 0123
.org 0x4ac18
	negs r3, r3	@ 0004ac18 5b42
.org 0x4ac1a
	str r3, [sp, #0]	@ 0004ac1a 0093
.org 0x4ac1c
	ldrb r2, [r4, #17]	@ 0004ac1c 627c
.org 0x4ac1e
	adds r2, #2	@ 0004ac1e 0232
.org 0x4ac20
	str r2, [sp, #4]	@ 0004ac20 0192
.org 0x4ac22
	adds r2, r3, #0	@ 0004ac22 1a1c
.org 0x4ac24
	bl 0x5794	@ 0004ac24 baf7b6fd
.org 0x4ac28
	adds r0, r4, #0	@ 0004ac28 201c
.org 0x4ac2a
	adds r0, #140	@ 0004ac2a 8c30
.org 0x4ac2c
	ldr r1, [r0, #0]	@ 0004ac2c 0168
.org 0x4ac2e
	movs r0, #128	@ 0004ac2e 8020
.org 0x4ac30
	lsls r0, r0, #5	@ 0004ac30 4001
.org 0x4ac32
	ands r0, r1	@ 0004ac32 0840
.org 0x4ac34
	cmp r0, #0	@ 0004ac34 0028
.org 0x4ac36
	beq.n 0x4ac44	@ 0004ac36 05d0
.org 0x4ac38
	movs r0, #43	@ 0004ac38 2b20
.org 0x4ac3a
	bl 0x2b10	@ 0004ac3a b7f769ff
.org 0x4ac3e
	b.n 0x4ac4c	@ 0004ac3e 05e0
.org 0x4ac40
	.byte 0xc4,0x73,0x85,0x08	@ 0004ac40 data
.org 0x4ac44
	movs r0, #4	@ 0004ac44 0420
.org 0x4ac46
	ands r1, r0	@ 0004ac46 0140
.org 0x4ac48
	cmp r1, #0	@ 0004ac48 0029
.org 0x4ac4a
	beq.n 0x4ac6c	@ 0004ac4a 0fd0
.org 0x4ac4c
	ldrb r0, [r4, #13]	@ 0004ac4c 607b
.org 0x4ac4e
	adds r0, #1	@ 0004ac4e 0130
.org 0x4ac50
	strb r0, [r4, #13]	@ 0004ac50 6073
.org 0x4ac52
	b.n 0x4ac6c	@ 0004ac52 0be0
.org 0x4ac54
	adds r0, r4, #0	@ 0004ac54 201c
.org 0x4ac56
	adds r0, #140	@ 0004ac56 8c30
.org 0x4ac58
	movs r1, #0	@ 0004ac58 0021
.org 0x4ac5a
	str r1, [r0, #0]	@ 0004ac5a 0160
.org 0x4ac5c
	adds r0, #4	@ 0004ac5c 0430
.org 0x4ac5e
	str r1, [r0, #0]	@ 0004ac5e 0160
.org 0x4ac60
	adds r0, #4	@ 0004ac60 0430
.org 0x4ac62
	strb r1, [r0, #0]	@ 0004ac62 0170
.org 0x4ac64
	ldrb r1, [r4, #10]	@ 0004ac64 a17a
.org 0x4ac66
	movs r0, #251	@ 0004ac66 fb20
.org 0x4ac68
	ands r0, r1	@ 0004ac68 0840
.org 0x4ac6a
	strb r0, [r4, #10]	@ 0004ac6a a072
.org 0x4ac6c
	adds r0, r4, #0	@ 0004ac6c 201c
.org 0x4ac6e
	adds r0, #115	@ 0004ac6e 7330
.org 0x4ac70
	ldrb r0, [r0, #0]	@ 0004ac70 0078
.org 0x4ac72
	cmp r0, #3	@ 0004ac72 0328
.org 0x4ac74
	bne.n 0x4ac88	@ 0004ac74 08d1
.org 0x4ac76
	ldr r1, [pc, #24]	@ 0004ac76 0649
.org 0x4ac78
	ldrb r0, [r4, #9]	@ 0004ac78 607a
