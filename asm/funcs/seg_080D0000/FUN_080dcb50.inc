@ FUN_080dcb50  entry 0x080dcb50  size 212
.thumb
.org 0xdcb50
FUN_080dcb50:
	push {r4, r5, r6, lr}	@ 000dcb50 70b5
.org 0xdcb52
	adds r4, r0, #0	@ 000dcb52 041c
.org 0xdcb54
	ldr r0, [r4, #40]	@ 000dcb54 a06a
.org 0xdcb56
	ldrb r0, [r0, #10]	@ 000dcb56 807a
.org 0xdcb58
	lsls r0, r0, #24	@ 000dcb58 0006
.org 0xdcb5a
	lsrs r3, r0, #28	@ 000dcb5a 030f
.org 0xdcb5c
	movs r1, #1	@ 000dcb5c 0121
.org 0xdcb5e
	ands r3, r1	@ 000dcb5e 0b40
.org 0xdcb60
	lsrs r5, r0, #29	@ 000dcb60 450f
.org 0xdcb62
	ands r5, r1	@ 000dcb62 0d40
.org 0xdcb64
	ldrb r0, [r4, #14]	@ 000dcb64 a07b
.org 0xdcb66
	cmp r0, #0	@ 000dcb66 0028
.org 0xdcb68
	beq.n 0xdcb70	@ 000dcb68 02d0
.org 0xdcb6a
	cmp r0, #1	@ 000dcb6a 0128
.org 0xdcb6c
	beq.n 0xdcbe4	@ 000dcb6c 3ad0
.org 0xdcb6e
	b.n 0xdcc1e	@ 000dcb6e 56e0
.org 0xdcb70
	ldrb r1, [r4, #10]	@ 000dcb70 a17a
.org 0xdcb72
	movs r0, #1	@ 000dcb72 0120
.org 0xdcb74
	movs r6, #0	@ 000dcb74 0026
.org 0xdcb76
	adds r2, r0, #0	@ 000dcb76 021c
.org 0xdcb78
	orrs r2, r1	@ 000dcb78 0a43
.org 0xdcb7a
	strb r2, [r4, #10]	@ 000dcb7a a272
.org 0xdcb7c
	adds r1, r3, #0	@ 000dcb7c 191c
.org 0xdcb7e
	cmp r1, #0	@ 000dcb7e 0029
.org 0xdcb80
	beq.n 0xdcb88	@ 000dcb80 02d0
.org 0xdcb82
	movs r0, #16	@ 000dcb82 1020
.org 0xdcb84
	orrs r2, r0	@ 000dcb84 0243
.org 0xdcb86
	b.n 0xdcb8c	@ 000dcb86 01e0
.org 0xdcb88
	movs r0, #239	@ 000dcb88 ef20
.org 0xdcb8a
	ands r2, r0	@ 000dcb8a 0240
.org 0xdcb8c
	strb r2, [r4, #10]	@ 000dcb8c a272
.org 0xdcb8e
	adds r0, r4, #0	@ 000dcb8e 201c
.org 0xdcb90
	adds r0, #76	@ 000dcb90 4c30
.org 0xdcb92
	strb r1, [r0, #0]	@ 000dcb92 0170
.org 0xdcb94
	adds r2, r4, #0	@ 000dcb94 221c
.org 0xdcb96
	adds r2, #74	@ 000dcb96 4a32
.org 0xdcb98
	lsls r1, r1, #4	@ 000dcb98 0901
.org 0xdcb9a
	ldrb r3, [r2, #0]	@ 000dcb9a 1378
.org 0xdcb9c
	movs r0, #17	@ 000dcb9c 1120
.org 0xdcb9e
	negs r0, r0	@ 000dcb9e 4042
.org 0xdcba0
	ands r0, r3	@ 000dcba0 1840
.org 0xdcba2
	orrs r0, r1	@ 000dcba2 0843
.org 0xdcba4
	strb r0, [r2, #0]	@ 000dcba4 1070
.org 0xdcba6
	adds r3, r5, #0	@ 000dcba6 2b1c
.org 0xdcba8
	adds r5, r2, #0	@ 000dcba8 151c
.org 0xdcbaa
	cmp r3, #0	@ 000dcbaa 002b
.org 0xdcbac
	beq.n 0xdcbb6	@ 000dcbac 03d0
.org 0xdcbae
	ldrb r0, [r4, #10]	@ 000dcbae a07a
.org 0xdcbb0
	movs r1, #32	@ 000dcbb0 2021
.org 0xdcbb2
	orrs r0, r1	@ 000dcbb2 0843
.org 0xdcbb4
	b.n 0xdcbbc	@ 000dcbb4 02e0
.org 0xdcbb6
	ldrb r1, [r4, #10]	@ 000dcbb6 a17a
.org 0xdcbb8
	movs r0, #223	@ 000dcbb8 df20
.org 0xdcbba
	ands r0, r1	@ 000dcbba 0840
.org 0xdcbbc
	strb r0, [r4, #10]	@ 000dcbbc a072
.org 0xdcbbe
	adds r1, r3, #0	@ 000dcbbe 191c
.org 0xdcbc0
	adds r2, r4, #0	@ 000dcbc0 221c
.org 0xdcbc2
	adds r2, #77	@ 000dcbc2 4d32
.org 0xdcbc4
	strb r1, [r2, #0]	@ 000dcbc4 1170
.org 0xdcbc6
	lsls r1, r1, #5	@ 000dcbc6 4901
.org 0xdcbc8
	ldrb r2, [r5, #0]	@ 000dcbc8 2a78
.org 0xdcbca
	movs r0, #33	@ 000dcbca 2120
.org 0xdcbcc
	negs r0, r0	@ 000dcbcc 4042
.org 0xdcbce
	ands r0, r2	@ 000dcbce 1040
.org 0xdcbd0
	orrs r0, r1	@ 000dcbd0 0843
.org 0xdcbd2
	strb r0, [r5, #0]	@ 000dcbd2 2870
.org 0xdcbd4
	ldr r0, [r4, #116]	@ 000dcbd4 606f
.org 0xdcbd6
	ldrh r1, [r0, #0]	@ 000dcbd6 0188
.org 0xdcbd8
	adds r0, r4, #0	@ 000dcbd8 201c
.org 0xdcbda
	bl 0x1cf00	@ 000dcbda 40f791f9
.org 0xdcbde
	ldrb r0, [r4, #14]	@ 000dcbde a07b
.org 0xdcbe0
	adds r0, #1	@ 000dcbe0 0130
.org 0xdcbe2
	strb r0, [r4, #14]	@ 000dcbe2 a073
.org 0xdcbe4
	ldr r0, [r4, #84]	@ 000dcbe4 606d
.org 0xdcbe6
	ldr r1, [r4, #92]	@ 000dcbe6 e16d
.org 0xdcbe8
	adds r0, r0, r1	@ 000dcbe8 4018
.org 0xdcbea
	str r0, [r4, #84]	@ 000dcbea 6065
.org 0xdcbec
	ldr r0, [r4, #88]	@ 000dcbec a06d
.org 0xdcbee
	ldr r1, [r4, #96]	@ 000dcbee 216e
.org 0xdcbf0
	adds r0, r0, r1	@ 000dcbf0 4018
.org 0xdcbf2
	str r0, [r4, #88]	@ 000dcbf2 a065
.org 0xdcbf4
	ldr r0, [r4, #104]	@ 000dcbf4 a06e
.org 0xdcbf6
	adds r1, r1, r0	@ 000dcbf6 0918
.org 0xdcbf8
	str r1, [r4, #96]	@ 000dcbf8 2166
.org 0xdcbfa
	ldrb r0, [r4, #18]	@ 000dcbfa a07c
.org 0xdcbfc
	subs r0, #1	@ 000dcbfc 0138
.org 0xdcbfe
	strb r0, [r4, #18]	@ 000dcbfe a074
.org 0xdcc00
	lsls r0, r0, #24	@ 000dcc00 0006
.org 0xdcc02
	cmp r0, #0	@ 000dcc02 0028
.org 0xdcc04
	bne.n 0xdcc18	@ 000dcc04 08d1
.org 0xdcc06
	ldr r1, [pc, #28]	@ 000dcc06 0749
.org 0xdcc08
	ldrb r0, [r4, #9]	@ 000dcc08 607a
.org 0xdcc0a
	lsls r0, r0, #2	@ 000dcc0a 8000
.org 0xdcc0c
	adds r0, r0, r1	@ 000dcc0c 4018
.org 0xdcc0e
	movs r1, #2	@ 000dcc0e 0221
.org 0xdcc10
	str r1, [r4, #12]	@ 000dcc10 e160
.org 0xdcc12
	ldr r0, [r0, #0]	@ 000dcc12 0068
.org 0xdcc14
	ldr r0, [r0, #8]	@ 000dcc14 8068
.org 0xdcc16
	str r0, [r4, #20]	@ 000dcc16 6061
.org 0xdcc18
	adds r0, r4, #0	@ 000dcc18 201c
.org 0xdcc1a
	bl 0x1cff0	@ 000dcc1a 40f7e9f9
.org 0xdcc1e
	pop {r4, r5, r6}	@ 000dcc1e 70bc
.org 0xdcc20
	pop {r0}	@ 000dcc20 01bc
.org 0xdcc22
	bx r0	@ 000dcc22 0047
