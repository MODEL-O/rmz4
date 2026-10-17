@ FUN_0804bee0  entry 0x0804bee0  size 192
.thumb
.org 0x4bee0
FUN_0804bee0:
	push {r4, r5, r6, r7, lr}	@ 0004bee0 f0b5
.org 0x4bee2
	mov r7, sl	@ 0004bee2 5746
.org 0x4bee4
	mov r6, r9	@ 0004bee4 4e46
.org 0x4bee6
	mov r5, r8	@ 0004bee6 4546
.org 0x4bee8
	push {r5, r6, r7}	@ 0004bee8 e0b4
.org 0x4beea
	sub sp, #8	@ 0004beea 82b0
.org 0x4beec
	str r0, [sp, #0]	@ 0004beec 0090
.org 0x4beee
	lsls r1, r1, #24	@ 0004beee 0906
.org 0x4bef0
	lsrs r1, r1, #24	@ 0004bef0 090e
.org 0x4bef2
	str r1, [sp, #4]	@ 0004bef2 0191
.org 0x4bef4
	ldr r0, [pc, #108]	@ 0004bef4 1b48
.org 0x4bef6
	ldr r0, [r0, #0]	@ 0004bef6 0068
.org 0x4bef8
	bl 0x5500	@ 0004bef8 b9f702fb
.org 0x4befc
	adds r2, r0, #0	@ 0004befc 021c
.org 0x4befe
	cmp r2, #0	@ 0004befe 002a
.org 0x4bf00
	beq.n 0x4bfa0	@ 0004bf00 4ed0
.org 0x4bf02
	ldr r0, [pc, #100]	@ 0004bf02 1948
.org 0x4bf04
	movs r6, #44	@ 0004bf04 2c26
.org 0x4bf06
	strb r6, [r2, #9]	@ 0004bf06 5672
.org 0x4bf08
	adds r7, r0, #0	@ 0004bf08 071c
.org 0x4bf0a
	adds r7, #176	@ 0004bf0a b037
.org 0x4bf0c
	ldr r0, [r7, #0]	@ 0004bf0c 3868
.org 0x4bf0e
	ldr r0, [r0, #0]	@ 0004bf0e 0068
.org 0x4bf10
	str r0, [r2, #20]	@ 0004bf10 5061
.org 0x4bf12
	ldrb r1, [r2, #11]	@ 0004bf12 d17a
.org 0x4bf14
	movs r0, #191	@ 0004bf14 bf20
.org 0x4bf16
	mov r9, r0	@ 0004bf16 8146
.org 0x4bf18
	ands r0, r1	@ 0004bf18 0840
.org 0x4bf1a
	strb r0, [r2, #11]	@ 0004bf1a d072
.org 0x4bf1c
	adds r3, r2, #0	@ 0004bf1c 131c
.org 0x4bf1e
	adds r3, #37	@ 0004bf1e 2533
.org 0x4bf20
	movs r1, #16	@ 0004bf20 1021
.org 0x4bf22
	mov r8, r1	@ 0004bf22 8846
.org 0x4bf24
	mov r0, r8	@ 0004bf24 4046
.org 0x4bf26
	strb r0, [r3, #0]	@ 0004bf26 1870
.org 0x4bf28
	ldr r5, [pc, #64]	@ 0004bf28 104d
.org 0x4bf2a
	ldrh r0, [r5, #0]	@ 0004bf2a 2888
.org 0x4bf2c
	strh r0, [r2, #32]	@ 0004bf2c 1084
.org 0x4bf2e
	ldr r4, [pc, #64]	@ 0004bf2e 104c
.org 0x4bf30
	ldrb r0, [r4, #0]	@ 0004bf30 2078
.org 0x4bf32
	movs r1, #34	@ 0004bf32 2221
.org 0x4bf34
	adds r1, r1, r2	@ 0004bf34 8918
.org 0x4bf36
	mov ip, r1	@ 0004bf36 8c46
.org 0x4bf38
	strb r0, [r1, #0]	@ 0004bf38 0870
.org 0x4bf3a
	ldr r0, [sp, #0]	@ 0004bf3a 0098
.org 0x4bf3c
	adds r0, #248	@ 0004bf3c f830
.org 0x4bf3e
	ldrb r0, [r0, #0]	@ 0004bf3e 0078
.org 0x4bf40
	cmp r0, #2	@ 0004bf40 0228
.org 0x4bf42
	bne.n 0x4bf74	@ 0004bf42 17d1
.org 0x4bf44
	strb r6, [r2, #9]	@ 0004bf44 5672
.org 0x4bf46
	ldr r0, [r7, #0]	@ 0004bf46 3868
.org 0x4bf48
	ldr r0, [r0, #0]	@ 0004bf48 0068
.org 0x4bf4a
	str r0, [r2, #20]	@ 0004bf4a 5061
.org 0x4bf4c
	ldrb r1, [r2, #11]	@ 0004bf4c d17a
.org 0x4bf4e
	mov r0, r9	@ 0004bf4e 4846
.org 0x4bf50
	ands r0, r1	@ 0004bf50 0840
.org 0x4bf52
	strb r0, [r2, #11]	@ 0004bf52 d072
.org 0x4bf54
	mov r0, r8	@ 0004bf54 4046
.org 0x4bf56
	strb r0, [r3, #0]	@ 0004bf56 1870
.org 0x4bf58
	ldrh r0, [r5, #0]	@ 0004bf58 2888
.org 0x4bf5a
	strh r0, [r2, #32]	@ 0004bf5a 1084
.org 0x4bf5c
	adds r1, r4, #0	@ 0004bf5c 211c
.org 0x4bf5e
	ldrb r0, [r1, #0]	@ 0004bf5e 0878
.org 0x4bf60
	b.n 0x4bf8e	@ 0004bf60 15e0
.org 0x4bf62
	.byte 0x00	@ 0004bf62 data
.org 0x4bf63
	.byte 0x00	@ 0004bf63 data
.org 0x4bf64
	.byte 0x88,0xed,0x02,0x02	@ 0004bf64 data
.org 0x4bf68
	.byte 0xf8,0x39,0x85,0x08	@ 0004bf68 data
.org 0x4bf6c
	.byte 0xfc,0x36,0x85,0x08	@ 0004bf6c data
.org 0x4bf70
	.byte 0x04,0x37,0x85,0x08	@ 0004bf70 data
.org 0x4bf74
	strb r6, [r2, #9]	@ 0004bf74 5672
.org 0x4bf76
	ldr r0, [r7, #0]	@ 0004bf76 3868
.org 0x4bf78
	ldr r0, [r0, #0]	@ 0004bf78 0068
.org 0x4bf7a
	str r0, [r2, #20]	@ 0004bf7a 5061
.org 0x4bf7c
	ldrb r1, [r2, #11]	@ 0004bf7c d17a
.org 0x4bf7e
	mov r0, r9	@ 0004bf7e 4846
.org 0x4bf80
	ands r0, r1	@ 0004bf80 0840
.org 0x4bf82
	strb r0, [r2, #11]	@ 0004bf82 d072
.org 0x4bf84
	mov r0, r8	@ 0004bf84 4046
.org 0x4bf86
	strb r0, [r3, #0]	@ 0004bf86 1870
.org 0x4bf88
	ldrh r0, [r5, #2]	@ 0004bf88 6888
.org 0x4bf8a
	strh r0, [r2, #32]	@ 0004bf8a 1084
.org 0x4bf8c
	ldrb r0, [r4, #1]	@ 0004bf8c 6078
.org 0x4bf8e
	mov r1, ip	@ 0004bf8e 6146
.org 0x4bf90
	strb r0, [r1, #0]	@ 0004bf90 0870
.org 0x4bf92
	ldr r0, [sp, #0]	@ 0004bf92 0098
.org 0x4bf94
	str r0, [r2, #40]	@ 0004bf94 9062
.org 0x4bf96
	movs r0, #0	@ 0004bf96 0020
.org 0x4bf98
	strb r0, [r2, #16]	@ 0004bf98 1074
.org 0x4bf9a
	mov r1, sp	@ 0004bf9a 6946
.org 0x4bf9c
	ldrb r1, [r1, #4]	@ 0004bf9c 0979
.org 0x4bf9e
	strb r1, [r2, #17]	@ 0004bf9e 5174
