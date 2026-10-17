@ FUN_0804df64  entry 0x0804df64  size 196
.thumb
.org 0x4df64
FUN_0804df64:
	push {r4, r5, r6, r7, lr}	@ 0004df64 f0b5
.org 0x4df66
	mov r7, sl	@ 0004df66 5746
.org 0x4df68
	mov r6, r9	@ 0004df68 4e46
.org 0x4df6a
	mov r5, r8	@ 0004df6a 4546
.org 0x4df6c
	push {r5, r6, r7}	@ 0004df6c e0b4
.org 0x4df6e
	sub sp, #8	@ 0004df6e 82b0
.org 0x4df70
	str r0, [sp, #0]	@ 0004df70 0090
.org 0x4df72
	lsls r1, r1, #24	@ 0004df72 0906
.org 0x4df74
	lsrs r1, r1, #24	@ 0004df74 090e
.org 0x4df76
	str r1, [sp, #4]	@ 0004df76 0191
.org 0x4df78
	ldr r0, [pc, #112]	@ 0004df78 1c48
.org 0x4df7a
	ldr r0, [r0, #0]	@ 0004df7a 0068
.org 0x4df7c
	bl 0x5500	@ 0004df7c b7f7c0fa
.org 0x4df80
	adds r2, r0, #0	@ 0004df80 021c
.org 0x4df82
	cmp r2, #0	@ 0004df82 002a
.org 0x4df84
	beq.n 0x4e028	@ 0004df84 50d0
.org 0x4df86
	ldr r0, [pc, #104]	@ 0004df86 1a48
.org 0x4df88
	movs r6, #52	@ 0004df88 3426
.org 0x4df8a
	strb r6, [r2, #9]	@ 0004df8a 5672
.org 0x4df8c
	adds r7, r0, #0	@ 0004df8c 071c
.org 0x4df8e
	adds r7, #208	@ 0004df8e d037
.org 0x4df90
	ldr r0, [r7, #0]	@ 0004df90 3868
.org 0x4df92
	ldr r0, [r0, #0]	@ 0004df92 0068
.org 0x4df94
	str r0, [r2, #20]	@ 0004df94 5061
.org 0x4df96
	ldrb r1, [r2, #11]	@ 0004df96 d17a
.org 0x4df98
	movs r0, #191	@ 0004df98 bf20
.org 0x4df9a
	mov r9, r0	@ 0004df9a 8146
.org 0x4df9c
	ands r0, r1	@ 0004df9c 0840
.org 0x4df9e
	strb r0, [r2, #11]	@ 0004df9e d072
.org 0x4dfa0
	adds r3, r2, #0	@ 0004dfa0 131c
.org 0x4dfa2
	adds r3, #37	@ 0004dfa2 2533
.org 0x4dfa4
	movs r1, #16	@ 0004dfa4 1021
.org 0x4dfa6
	mov r8, r1	@ 0004dfa6 8846
.org 0x4dfa8
	mov r0, r8	@ 0004dfa8 4046
.org 0x4dfaa
	strb r0, [r3, #0]	@ 0004dfaa 1870
.org 0x4dfac
	ldr r5, [pc, #68]	@ 0004dfac 114d
.org 0x4dfae
	ldrh r0, [r5, #0]	@ 0004dfae 2888
.org 0x4dfb0
	strh r0, [r2, #32]	@ 0004dfb0 1084
.org 0x4dfb2
	ldr r4, [pc, #68]	@ 0004dfb2 114c
.org 0x4dfb4
	ldrb r0, [r4, #0]	@ 0004dfb4 2078
.org 0x4dfb6
	movs r1, #34	@ 0004dfb6 2221
.org 0x4dfb8
	adds r1, r1, r2	@ 0004dfb8 8918
.org 0x4dfba
	mov ip, r1	@ 0004dfba 8c46
.org 0x4dfbc
	strb r0, [r1, #0]	@ 0004dfbc 0870
.org 0x4dfbe
	ldr r0, [sp, #0]	@ 0004dfbe 0098
.org 0x4dfc0
	adds r0, #248	@ 0004dfc0 f830
.org 0x4dfc2
	ldrb r0, [r0, #0]	@ 0004dfc2 0078
.org 0x4dfc4
	cmp r0, #2	@ 0004dfc4 0228
.org 0x4dfc6
	bne.n 0x4dffc	@ 0004dfc6 19d1
.org 0x4dfc8
	strb r6, [r2, #9]	@ 0004dfc8 5672
.org 0x4dfca
	ldr r0, [r7, #0]	@ 0004dfca 3868
.org 0x4dfcc
	ldr r0, [r0, #0]	@ 0004dfcc 0068
.org 0x4dfce
	str r0, [r2, #20]	@ 0004dfce 5061
.org 0x4dfd0
	ldrb r1, [r2, #11]	@ 0004dfd0 d17a
.org 0x4dfd2
	mov r0, r9	@ 0004dfd2 4846
.org 0x4dfd4
	ands r0, r1	@ 0004dfd4 0840
.org 0x4dfd6
	strb r0, [r2, #11]	@ 0004dfd6 d072
.org 0x4dfd8
	mov r0, r8	@ 0004dfd8 4046
.org 0x4dfda
	strb r0, [r3, #0]	@ 0004dfda 1870
.org 0x4dfdc
	ldrh r0, [r5, #0]	@ 0004dfdc 2888
.org 0x4dfde
	strh r0, [r2, #32]	@ 0004dfde 1084
.org 0x4dfe0
	adds r1, r4, #0	@ 0004dfe0 211c
.org 0x4dfe2
	ldrb r0, [r1, #0]	@ 0004dfe2 0878
.org 0x4dfe4
	mov r3, ip	@ 0004dfe4 6346
.org 0x4dfe6
	strb r0, [r3, #0]	@ 0004dfe6 1870
.org 0x4dfe8
	b.n 0x4e01a	@ 0004dfe8 17e0
.org 0x4dfea
	.byte 0x00	@ 0004dfea data
.org 0x4dfeb
	.byte 0x00	@ 0004dfeb data
.org 0x4dfec
	.byte 0x88,0xed,0x02,0x02	@ 0004dfec data
.org 0x4dff0
	.byte 0xf8,0x39,0x85,0x08	@ 0004dff0 data
.org 0x4dff4
	.byte 0xfc,0x36,0x85,0x08	@ 0004dff4 data
.org 0x4dff8
	.byte 0x04,0x37,0x85,0x08	@ 0004dff8 data
.org 0x4dffc
	strb r6, [r2, #9]	@ 0004dffc 5672
.org 0x4dffe
	ldr r0, [r7, #0]	@ 0004dffe 3868
.org 0x4e000
	ldr r0, [r0, #0]	@ 0004e000 0068
.org 0x4e002
	str r0, [r2, #20]	@ 0004e002 5061
.org 0x4e004
	ldrb r1, [r2, #11]	@ 0004e004 d17a
.org 0x4e006
	mov r0, r9	@ 0004e006 4846
.org 0x4e008
	ands r0, r1	@ 0004e008 0840
.org 0x4e00a
	strb r0, [r2, #11]	@ 0004e00a d072
.org 0x4e00c
	mov r0, r8	@ 0004e00c 4046
.org 0x4e00e
	strb r0, [r3, #0]	@ 0004e00e 1870
.org 0x4e010
	ldrh r0, [r5, #2]	@ 0004e010 6888
.org 0x4e012
	strh r0, [r2, #32]	@ 0004e012 1084
.org 0x4e014
	ldrb r0, [r4, #1]	@ 0004e014 6078
.org 0x4e016
	mov r1, ip	@ 0004e016 6146
.org 0x4e018
	strb r0, [r1, #0]	@ 0004e018 0870
.org 0x4e01a
	ldr r3, [sp, #0]	@ 0004e01a 009b
.org 0x4e01c
	str r3, [r2, #40]	@ 0004e01c 9362
.org 0x4e01e
	movs r0, #0	@ 0004e01e 0020
.org 0x4e020
	mov r1, sp	@ 0004e020 6946
.org 0x4e022
	ldrb r1, [r1, #4]	@ 0004e022 0979
.org 0x4e024
	strb r1, [r2, #16]	@ 0004e024 1174
.org 0x4e026
	strb r0, [r2, #17]	@ 0004e026 5074
