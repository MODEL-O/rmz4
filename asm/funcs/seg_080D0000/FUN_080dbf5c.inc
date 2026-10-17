@ FUN_080dbf5c  entry 0x080dbf5c  size 138
.thumb
.org 0xdbf5c
FUN_080dbf5c:
	push {r4, r5, r6, r7, lr}	@ 000dbf5c f0b5
.org 0xdbf5e
	mov r7, sl	@ 000dbf5e 5746
.org 0xdbf60
	mov r6, r9	@ 000dbf60 4e46
.org 0xdbf62
	mov r5, r8	@ 000dbf62 4546
.org 0xdbf64
	push {r5, r6, r7}	@ 000dbf64 e0b4
.org 0xdbf66
	sub sp, #4	@ 000dbf66 81b0
.org 0xdbf68
	mov sl, r0	@ 000dbf68 8246
.org 0xdbf6a
	adds r6, r1, #0	@ 000dbf6a 0e1c
.org 0xdbf6c
	mov r9, r2	@ 000dbf6c 9146
.org 0xdbf6e
	ldr r0, [sp, #36]	@ 000dbf6e 0998
.org 0xdbf70
	lsls r3, r3, #24	@ 000dbf70 1b06
.org 0xdbf72
	lsrs r7, r3, #24	@ 000dbf72 1f0e
.org 0xdbf74
	lsls r0, r0, #24	@ 000dbf74 0006
.org 0xdbf76
	lsrs r0, r0, #24	@ 000dbf76 000e
.org 0xdbf78
	mov r8, r0	@ 000dbf78 8046
.org 0xdbf7a
	movs r4, #0	@ 000dbf7a 0024
.org 0xdbf7c
	cmp r4, r7	@ 000dbf7c bc42
.org 0xdbf7e
	bge.n 0xdbfd6	@ 000dbf7e 2ada
.org 0xdbf80
	movs r5, #0	@ 000dbf80 0025
.org 0xdbf82
	movs r3, #1	@ 000dbf82 0123
.org 0xdbf84
	ldr r0, [pc, #96]	@ 000dbf84 1848
.org 0xdbf86
	ldr r0, [r0, #0]	@ 000dbf86 0068
.org 0xdbf88
	str r3, [sp, #0]	@ 000dbf88 0093
.org 0xdbf8a
	bl 0x5500	@ 000dbf8a 29f7b9fa
.org 0xdbf8e
	adds r1, r0, #0	@ 000dbf8e 011c
.org 0xdbf90
	ldr r3, [sp, #0]	@ 000dbf90 009b
.org 0xdbf92
	cmp r1, #0	@ 000dbf92 0029
.org 0xdbf94
	beq.n 0xdbfd0	@ 000dbf94 1cd0
.org 0xdbf96
	adds r0, #37	@ 000dbf96 2530
.org 0xdbf98
	strb r3, [r0, #0]	@ 000dbf98 0370
.org 0xdbf9a
	movs r0, #43	@ 000dbf9a 2b20
.org 0xdbf9c
	strb r0, [r1, #9]	@ 000dbf9c 4872
.org 0xdbf9e
	ldr r2, [pc, #76]	@ 000dbf9e 134a
.org 0xdbfa0
	ldr r0, [r2, #0]	@ 000dbfa0 1068
.org 0xdbfa2
	ldr r0, [r0, #0]	@ 000dbfa2 0068
.org 0xdbfa4
	str r0, [r1, #20]	@ 000dbfa4 4861
.org 0xdbfa6
	strh r5, [r1, #32]	@ 000dbfa6 0d84
.org 0xdbfa8
	adds r2, r1, #0	@ 000dbfa8 0a1c
.org 0xdbfaa
	adds r2, #34	@ 000dbfaa 2232
.org 0xdbfac
	strb r5, [r2, #0]	@ 000dbfac 1570
.org 0xdbfae
	strb r5, [r1, #16]	@ 000dbfae 0d74
.org 0xdbfb0
	strb r4, [r1, #17]	@ 000dbfb0 4c74
.org 0xdbfb2
	mov r0, sl	@ 000dbfb2 5046
.org 0xdbfb4
	str r0, [r1, #40]	@ 000dbfb4 8862
.org 0xdbfb6
	mov r0, r9	@ 000dbfb6 4846
.org 0xdbfb8
	str r0, [r1, #116]	@ 000dbfb8 4867
.org 0xdbfba
	ldr r0, [r6, #0]	@ 000dbfba 3068
.org 0xdbfbc
	str r0, [r1, #84]	@ 000dbfbc 4865
.org 0xdbfbe
	ldr r0, [r6, #4]	@ 000dbfbe 7068
.org 0xdbfc0
	str r0, [r1, #88]	@ 000dbfc0 8865
.org 0xdbfc2
	mov r0, r8	@ 000dbfc2 4046
.org 0xdbfc4
	strb r0, [r2, #0]	@ 000dbfc4 1070
.org 0xdbfc6
	adds r0, r1, #0	@ 000dbfc6 081c
.org 0xdbfc8
	adds r0, #120	@ 000dbfc8 7830
.org 0xdbfca
	strb r3, [r0, #0]	@ 000dbfca 0370
.org 0xdbfcc
	adds r0, #1	@ 000dbfcc 0130
.org 0xdbfce
	strb r5, [r0, #0]	@ 000dbfce 0570
.org 0xdbfd0
	adds r4, #1	@ 000dbfd0 0134
.org 0xdbfd2
	cmp r4, r7	@ 000dbfd2 bc42
.org 0xdbfd4
	blt.n 0xdbf84	@ 000dbfd4 d6db
.org 0xdbfd6
	add sp, #4	@ 000dbfd6 01b0
.org 0xdbfd8
	pop {r3, r4, r5}	@ 000dbfd8 38bc
.org 0xdbfda
	mov r8, r3	@ 000dbfda 9846
.org 0xdbfdc
	mov r9, r4	@ 000dbfdc a146
.org 0xdbfde
	mov sl, r5	@ 000dbfde aa46
.org 0xdbfe0
	pop {r4, r5, r6, r7}	@ 000dbfe0 f0bc
.org 0xdbfe2
	pop {r0}	@ 000dbfe2 01bc
.org 0xdbfe4
	bx r0	@ 000dbfe4 0047
