@ FUN_0804ecbc  entry 0x0804ecbc  size 196
.thumb
.org 0x4ecbc
FUN_0804ecbc:
	push {r4, r5, r6, r7, lr}	@ 0004ecbc f0b5
.org 0x4ecbe
	mov r7, sl	@ 0004ecbe 5746
.org 0x4ecc0
	mov r6, r9	@ 0004ecc0 4e46
.org 0x4ecc2
	mov r5, r8	@ 0004ecc2 4546
.org 0x4ecc4
	push {r5, r6, r7}	@ 0004ecc4 e0b4
.org 0x4ecc6
	sub sp, #8	@ 0004ecc6 82b0
.org 0x4ecc8
	str r0, [sp, #0]	@ 0004ecc8 0090
.org 0x4ecca
	lsls r1, r1, #24	@ 0004ecca 0906
.org 0x4eccc
	lsrs r1, r1, #24	@ 0004eccc 090e
.org 0x4ecce
	str r1, [sp, #4]	@ 0004ecce 0191
.org 0x4ecd0
	ldr r0, [pc, #112]	@ 0004ecd0 1c48
.org 0x4ecd2
	ldr r0, [r0, #0]	@ 0004ecd2 0068
.org 0x4ecd4
	bl 0x5500	@ 0004ecd4 b6f714fc
.org 0x4ecd8
	adds r2, r0, #0	@ 0004ecd8 021c
.org 0x4ecda
	cmp r2, #0	@ 0004ecda 002a
.org 0x4ecdc
	beq.n 0x4ed80	@ 0004ecdc 50d0
.org 0x4ecde
	ldr r0, [pc, #104]	@ 0004ecde 1a48
.org 0x4ece0
	movs r6, #55	@ 0004ece0 3726
.org 0x4ece2
	strb r6, [r2, #9]	@ 0004ece2 5672
.org 0x4ece4
	adds r7, r0, #0	@ 0004ece4 071c
.org 0x4ece6
	adds r7, #220	@ 0004ece6 dc37
.org 0x4ece8
	ldr r0, [r7, #0]	@ 0004ece8 3868
.org 0x4ecea
	ldr r0, [r0, #0]	@ 0004ecea 0068
.org 0x4ecec
	str r0, [r2, #20]	@ 0004ecec 5061
.org 0x4ecee
	ldrb r1, [r2, #11]	@ 0004ecee d17a
.org 0x4ecf0
	movs r0, #191	@ 0004ecf0 bf20
.org 0x4ecf2
	mov r9, r0	@ 0004ecf2 8146
.org 0x4ecf4
	ands r0, r1	@ 0004ecf4 0840
.org 0x4ecf6
	strb r0, [r2, #11]	@ 0004ecf6 d072
.org 0x4ecf8
	adds r3, r2, #0	@ 0004ecf8 131c
.org 0x4ecfa
	adds r3, #37	@ 0004ecfa 2533
.org 0x4ecfc
	movs r1, #16	@ 0004ecfc 1021
.org 0x4ecfe
	mov r8, r1	@ 0004ecfe 8846
.org 0x4ed00
	mov r0, r8	@ 0004ed00 4046
.org 0x4ed02
	strb r0, [r3, #0]	@ 0004ed02 1870
.org 0x4ed04
	ldr r5, [pc, #68]	@ 0004ed04 114d
.org 0x4ed06
	ldrh r0, [r5, #0]	@ 0004ed06 2888
.org 0x4ed08
	strh r0, [r2, #32]	@ 0004ed08 1084
.org 0x4ed0a
	ldr r4, [pc, #68]	@ 0004ed0a 114c
.org 0x4ed0c
	ldrb r0, [r4, #0]	@ 0004ed0c 2078
.org 0x4ed0e
	movs r1, #34	@ 0004ed0e 2221
.org 0x4ed10
	adds r1, r1, r2	@ 0004ed10 8918
.org 0x4ed12
	mov ip, r1	@ 0004ed12 8c46
.org 0x4ed14
	strb r0, [r1, #0]	@ 0004ed14 0870
.org 0x4ed16
	ldr r0, [sp, #0]	@ 0004ed16 0098
.org 0x4ed18
	adds r0, #248	@ 0004ed18 f830
.org 0x4ed1a
	ldrb r0, [r0, #0]	@ 0004ed1a 0078
.org 0x4ed1c
	cmp r0, #2	@ 0004ed1c 0228
.org 0x4ed1e
	bne.n 0x4ed54	@ 0004ed1e 19d1
.org 0x4ed20
	strb r6, [r2, #9]	@ 0004ed20 5672
.org 0x4ed22
	ldr r0, [r7, #0]	@ 0004ed22 3868
.org 0x4ed24
	ldr r0, [r0, #0]	@ 0004ed24 0068
.org 0x4ed26
	str r0, [r2, #20]	@ 0004ed26 5061
.org 0x4ed28
	ldrb r1, [r2, #11]	@ 0004ed28 d17a
.org 0x4ed2a
	mov r0, r9	@ 0004ed2a 4846
.org 0x4ed2c
	ands r0, r1	@ 0004ed2c 0840
.org 0x4ed2e
	strb r0, [r2, #11]	@ 0004ed2e d072
.org 0x4ed30
	mov r0, r8	@ 0004ed30 4046
.org 0x4ed32
	strb r0, [r3, #0]	@ 0004ed32 1870
.org 0x4ed34
	ldrh r0, [r5, #0]	@ 0004ed34 2888
.org 0x4ed36
	strh r0, [r2, #32]	@ 0004ed36 1084
.org 0x4ed38
	adds r1, r4, #0	@ 0004ed38 211c
.org 0x4ed3a
	ldrb r0, [r1, #0]	@ 0004ed3a 0878
.org 0x4ed3c
	mov r3, ip	@ 0004ed3c 6346
.org 0x4ed3e
	strb r0, [r3, #0]	@ 0004ed3e 1870
.org 0x4ed40
	b.n 0x4ed72	@ 0004ed40 17e0
.org 0x4ed42
	.byte 0x00	@ 0004ed42 data
.org 0x4ed43
	.byte 0x00	@ 0004ed43 data
.org 0x4ed44
	.byte 0x88,0xed,0x02,0x02	@ 0004ed44 data
.org 0x4ed48
	.byte 0xf8,0x39,0x85,0x08	@ 0004ed48 data
.org 0x4ed4c
	.byte 0xfc,0x36,0x85,0x08	@ 0004ed4c data
.org 0x4ed50
	.byte 0x04,0x37,0x85,0x08	@ 0004ed50 data
.org 0x4ed54
	strb r6, [r2, #9]	@ 0004ed54 5672
.org 0x4ed56
	ldr r0, [r7, #0]	@ 0004ed56 3868
.org 0x4ed58
	ldr r0, [r0, #0]	@ 0004ed58 0068
.org 0x4ed5a
	str r0, [r2, #20]	@ 0004ed5a 5061
.org 0x4ed5c
	ldrb r1, [r2, #11]	@ 0004ed5c d17a
.org 0x4ed5e
	mov r0, r9	@ 0004ed5e 4846
.org 0x4ed60
	ands r0, r1	@ 0004ed60 0840
.org 0x4ed62
	strb r0, [r2, #11]	@ 0004ed62 d072
.org 0x4ed64
	mov r0, r8	@ 0004ed64 4046
.org 0x4ed66
	strb r0, [r3, #0]	@ 0004ed66 1870
.org 0x4ed68
	ldrh r0, [r5, #2]	@ 0004ed68 6888
.org 0x4ed6a
	strh r0, [r2, #32]	@ 0004ed6a 1084
.org 0x4ed6c
	ldrb r0, [r4, #1]	@ 0004ed6c 6078
.org 0x4ed6e
	mov r1, ip	@ 0004ed6e 6146
.org 0x4ed70
	strb r0, [r1, #0]	@ 0004ed70 0870
.org 0x4ed72
	ldr r3, [sp, #0]	@ 0004ed72 009b
.org 0x4ed74
	str r3, [r2, #40]	@ 0004ed74 9362
.org 0x4ed76
	movs r0, #0	@ 0004ed76 0020
.org 0x4ed78
	mov r1, sp	@ 0004ed78 6946
.org 0x4ed7a
	ldrb r1, [r1, #4]	@ 0004ed7a 0979
.org 0x4ed7c
	strb r1, [r2, #16]	@ 0004ed7c 1174
.org 0x4ed7e
	strb r0, [r2, #17]	@ 0004ed7e 5074
