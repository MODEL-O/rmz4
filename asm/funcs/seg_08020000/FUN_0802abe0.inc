@ FUN_0802abe0  entry 0x0802abe0  size 272
.thumb
.org 0x2abe0
FUN_0802abe0:
	push {r4, r5, r6, r7, lr}	@ 0002abe0 f0b5
.org 0x2abe2
	mov r7, sl	@ 0002abe2 5746
.org 0x2abe4
	mov r6, r9	@ 0002abe4 4e46
.org 0x2abe6
	mov r5, r8	@ 0002abe6 4546
.org 0x2abe8
	push {r5, r6, r7}	@ 0002abe8 e0b4
.org 0x2abea
	sub sp, #4	@ 0002abea 81b0
.org 0x2abec
	adds r5, r0, #0	@ 0002abec 051c
.org 0x2abee
	ldr r0, [pc, #220]	@ 0002abee 3748
.org 0x2abf0
	ldrh r0, [r0, #0]	@ 0002abf0 0088
.org 0x2abf2
	str r0, [sp, #0]	@ 0002abf2 0090
.org 0x2abf4
	ldr r0, [pc, #216]	@ 0002abf4 3648
.org 0x2abf6
	ldr r1, [sp, #0]	@ 0002abf6 0099
.org 0x2abf8
	adds r0, r1, r0	@ 0002abf8 0818
.org 0x2abfa
	ldrb r4, [r0, #0]	@ 0002abfa 0478
.org 0x2abfc
	ldr r2, [pc, #212]	@ 0002abfc 354a
.org 0x2abfe
	ldrb r1, [r2, #21]	@ 0002abfe 517d
.org 0x2ac00
	movs r0, #1	@ 0002ac00 0120
.org 0x2ac02
	ands r0, r1	@ 0002ac02 0840
.org 0x2ac04
	mov sl, r2	@ 0002ac04 9246
.org 0x2ac06
	cmp r0, #0	@ 0002ac06 0028
.org 0x2ac08
	bne.n 0x2acf8	@ 0002ac08 76d1
.org 0x2ac0a
	ldr r3, [pc, #204]	@ 0002ac0a 334b
.org 0x2ac0c
	lsls r2, r4, #4	@ 0002ac0c 2201
.org 0x2ac0e
	adds r0, r2, r3	@ 0002ac0e d018
.org 0x2ac10
	movs r7, #0	@ 0002ac10 0027
.org 0x2ac12
	ldrsh r0, [r0, r7]	@ 0002ac12 c05f
.org 0x2ac14
	mov r9, r3	@ 0002ac14 9946
.org 0x2ac16
	ldr r1, [sp, #0]	@ 0002ac16 0099
.org 0x2ac18
	cmp r1, r0	@ 0002ac18 8142
.org 0x2ac1a
	bne.n 0x2acf8	@ 0002ac1a 6dd1
.org 0x2ac1c
	mov ip, r3	@ 0002ac1c 9c46
.org 0x2ac1e
	adds r0, r2, #0	@ 0002ac1e 101c
.org 0x2ac20
	adds r0, #14	@ 0002ac20 0e30
.org 0x2ac22
	adds r6, r0, r3	@ 0002ac22 c618
.org 0x2ac24
	movs r7, #1	@ 0002ac24 0127
.org 0x2ac26
	negs r7, r7	@ 0002ac26 7f42
.org 0x2ac28
	mov r8, r7	@ 0002ac28 b846
.org 0x2ac2a
	ldr r0, [pc, #176]	@ 0002ac2a 2c48
.org 0x2ac2c
	movs r1, #232	@ 0002ac2c e821
.org 0x2ac2e
	lsls r1, r1, #1	@ 0002ac2e 4900
.org 0x2ac30
	adds r0, r0, r1	@ 0002ac30 4018
.org 0x2ac32
	ldrh r0, [r0, #0]	@ 0002ac32 0088
.org 0x2ac34
	movs r1, #127	@ 0002ac34 7f21
.org 0x2ac36
	ands r1, r0	@ 0002ac36 0140
.org 0x2ac38
	mov r0, ip	@ 0002ac38 6046
.org 0x2ac3a
	adds r0, #2	@ 0002ac3a 0230
.org 0x2ac3c
	adds r0, r2, r0	@ 0002ac3c 1018
.org 0x2ac3e
	movs r7, #0	@ 0002ac3e 0027
.org 0x2ac40
	ldrsh r0, [r0, r7]	@ 0002ac40 c05f
.org 0x2ac42
	cmp r1, r0	@ 0002ac42 8142
.org 0x2ac44
	bne.n 0x2ace4	@ 0002ac44 4ed1
.org 0x2ac46
	ldrb r0, [r5, #9]	@ 0002ac46 687a
.org 0x2ac48
	adds r1, r3, #0	@ 0002ac48 191c
.org 0x2ac4a
	adds r1, #8	@ 0002ac4a 0831
.org 0x2ac4c
	adds r1, r2, r1	@ 0002ac4c 5118
.org 0x2ac4e
	movs r3, #0	@ 0002ac4e 0023
.org 0x2ac50
	ldrsh r1, [r1, r3]	@ 0002ac50 c95e
.org 0x2ac52
	cmp r0, r1	@ 0002ac52 8842
.org 0x2ac54
	bne.n 0x2ace4	@ 0002ac54 46d1
.org 0x2ac56
	mov r0, ip	@ 0002ac56 6046
.org 0x2ac58
	adds r0, #6	@ 0002ac58 0630
.org 0x2ac5a
	adds r0, r2, r0	@ 0002ac5a 1018
.org 0x2ac5c
	movs r1, #8	@ 0002ac5c 0821
.org 0x2ac5e
	ldrsb r1, [r5, r1]	@ 0002ac5e 6956
.org 0x2ac60
	movs r7, #0	@ 0002ac60 0027
.org 0x2ac62
	ldrsh r0, [r0, r7]	@ 0002ac62 c05f
.org 0x2ac64
	cmp r1, r0	@ 0002ac64 8142
.org 0x2ac66
	bne.n 0x2ace4	@ 0002ac66 3dd1
.org 0x2ac68
	mov r0, ip	@ 0002ac68 6046
.org 0x2ac6a
	adds r0, #10	@ 0002ac6a 0a30
.org 0x2ac6c
	adds r3, r2, r0	@ 0002ac6c 1318
.org 0x2ac6e
	movs r1, #0	@ 0002ac6e 0021
.org 0x2ac70
	ldrsh r0, [r3, r1]	@ 0002ac70 585e
.org 0x2ac72
	cmp r0, r8	@ 0002ac72 4045
.org 0x2ac74
	beq.n 0x2ac7c	@ 0002ac74 02d0
.org 0x2ac76
	ldrb r1, [r5, #16]	@ 0002ac76 297c
.org 0x2ac78
	cmp r1, r0	@ 0002ac78 8142
.org 0x2ac7a
	bne.n 0x2ace4	@ 0002ac7a 33d1
.org 0x2ac7c
	mov r0, ip	@ 0002ac7c 6046
.org 0x2ac7e
	adds r0, #4	@ 0002ac7e 0430
.org 0x2ac80
	adds r4, r2, r0	@ 0002ac80 1418
.org 0x2ac82
	movs r1, #0	@ 0002ac82 0021
.org 0x2ac84
	ldrsh r0, [r4, r1]	@ 0002ac84 605e
.org 0x2ac86
	mov r5, sl	@ 0002ac86 5546
.org 0x2ac88
	adds r5, #24	@ 0002ac88 1835
.org 0x2ac8a
	adds r1, r0, r5	@ 0002ac8a 4119
.org 0x2ac8c
	ldrb r0, [r1, #0]	@ 0002ac8c 0878
.org 0x2ac8e
	cmp r0, #254	@ 0002ac8e fe28
.org 0x2ac90
	bhi.n 0x2ac96	@ 0002ac90 01d8
.org 0x2ac92
	adds r0, #1	@ 0002ac92 0130
.org 0x2ac94
	strb r0, [r1, #0]	@ 0002ac94 0870
.org 0x2ac96
	movs r3, #0	@ 0002ac96 0023
.org 0x2ac98
	ldrsh r0, [r4, r3]	@ 0002ac98 e05e
.org 0x2ac9a
	adds r0, r0, r5	@ 0002ac9a 4019
.org 0x2ac9c
	ldrb r1, [r0, #0]	@ 0002ac9c 0178
.org 0x2ac9e
	mov r0, ip	@ 0002ac9e 6046
.org 0x2aca0
	adds r0, #12	@ 0002aca0 0c30
.org 0x2aca2
	adds r0, r2, r0	@ 0002aca2 1018
.org 0x2aca4
	movs r7, #0	@ 0002aca4 0027
.org 0x2aca6
	ldrsh r0, [r0, r7]	@ 0002aca6 c05f
.org 0x2aca8
	cmp r1, r0	@ 0002aca8 8142
.org 0x2acaa
	bne.n 0x2acf8	@ 0002acaa 25d1
.org 0x2acac
	ldr r0, [pc, #48]	@ 0002acac 0c48
.org 0x2acae
	ldr r0, [r0, #0]	@ 0002acae 0068
.org 0x2acb0
	ldrb r2, [r6, #0]	@ 0002acb0 3278
.org 0x2acb2
	movs r1, #1	@ 0002acb2 0121
.org 0x2acb4
	movs r3, #0	@ 0002acb4 0023
.org 0x2acb6
	bl 0x1cc20	@ 0002acb6 f1f7b3ff
.org 0x2acba
	lsls r0, r0, #16	@ 0002acba 0004
.org 0x2acbc
	cmp r0, #0	@ 0002acbc 0028
.org 0x2acbe
	beq.n 0x2acf8	@ 0002acbe 1bd0
.org 0x2acc0
	movs r1, #0	@ 0002acc0 0021
.org 0x2acc2
	ldrsh r0, [r4, r1]	@ 0002acc2 605e
.org 0x2acc4
	adds r0, r0, r5	@ 0002acc4 4019
.org 0x2acc6
	movs r1, #0	@ 0002acc6 0021
.org 0x2acc8
	strb r1, [r0, #0]	@ 0002acc8 0170
.org 0x2acca
	b.n 0x2acf8	@ 0002acca 15e0
.org 0x2accc
	.byte 0x10,0xe9,0x02,0x02	@ 0002accc data
.org 0x2acd0
	.byte 0x7e,0x28,0x85,0x08	@ 0002acd0 data
.org 0x2acd4
	.byte 0xb0,0xe8,0x02,0x02	@ 0002acd4 data
.org 0x2acd8
	.byte 0xde,0x25,0x85,0x08	@ 0002acd8 data
.org 0x2acdc
	.byte 0xb0,0x0a,0x00,0x02	@ 0002acdc data
.org 0x2ace0
	.byte 0xa4,0xed,0x02,0x02	@ 0002ace0 data
.org 0x2ace4
	adds r6, #16	@ 0002ace4 1036
.org 0x2ace6
	adds r4, #1	@ 0002ace6 0134
.org 0x2ace8
	mov r3, r9	@ 0002ace8 4b46
.org 0x2acea
	lsls r2, r4, #4	@ 0002acea 2201
.org 0x2acec
	adds r0, r2, r3	@ 0002acec d018
.org 0x2acee
	movs r7, #0	@ 0002acee 0027
