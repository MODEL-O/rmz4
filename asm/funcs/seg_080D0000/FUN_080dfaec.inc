@ FUN_080dfaec  entry 0x080dfaec  size 428
.thumb
.org 0xdfaec
FUN_080dfaec:
	push {r4, r5, r6, r7, lr}	@ 000dfaec f0b5
.org 0xdfaee
	mov r7, r9	@ 000dfaee 4f46
.org 0xdfaf0
	mov r6, r8	@ 000dfaf0 4646
.org 0xdfaf2
	push {r6, r7}	@ 000dfaf2 c0b4
.org 0xdfaf4
	adds r6, r0, #0	@ 000dfaf4 061c
.org 0xdfaf6
	bl 0x1cc9c	@ 000dfaf6 3df7d1f8
.org 0xdfafa
	adds r0, r6, #0	@ 000dfafa 301c
.org 0xdfafc
	bl 0x1ceec	@ 000dfafc 3df7f6f9
.org 0xdfb00
	ldrb r0, [r6, #10]	@ 000dfb00 b07a
.org 0xdfb02
	movs r4, #1	@ 000dfb02 0124
.org 0xdfb04
	movs r5, #0	@ 000dfb04 0025
.org 0xdfb06
	orrs r0, r4	@ 000dfb06 2043
.org 0xdfb08
	movs r1, #2	@ 000dfb08 0221
.org 0xdfb0a
	orrs r0, r1	@ 000dfb0a 0843
.org 0xdfb0c
	strb r0, [r6, #10]	@ 000dfb0c b072
.org 0xdfb0e
	movs r1, #248	@ 000dfb0e f821
.org 0xdfb10
	lsls r1, r1, #7	@ 000dfb10 c901
.org 0xdfb12
	adds r0, r6, #0	@ 000dfb12 301c
.org 0xdfb14
	bl 0x1cf00	@ 000dfb14 3df7f4f9
.org 0xdfb18
	ldr r2, [pc, #32]	@ 000dfb18 084a
.org 0xdfb1a
	ldr r1, [r2, #0]	@ 000dfb1a 1168
.org 0xdfb1c
	ldr r0, [pc, #32]	@ 000dfb1c 0848
.org 0xdfb1e
	muls r0, r1	@ 000dfb1e 4843
.org 0xdfb20
	ldr r1, [pc, #32]	@ 000dfb20 0849
.org 0xdfb22
	adds r0, r0, r1	@ 000dfb22 4018
.org 0xdfb24
	lsls r0, r0, #1	@ 000dfb24 4000
.org 0xdfb26
	lsrs r1, r0, #1	@ 000dfb26 4108
.org 0xdfb28
	str r1, [r2, #0]	@ 000dfb28 1160
.org 0xdfb2a
	lsrs r2, r0, #17	@ 000dfb2a 420c
.org 0xdfb2c
	ands r2, r4	@ 000dfb2c 2240
.org 0xdfb2e
	cmp r2, #0	@ 000dfb2e 002a
.org 0xdfb30
	beq.n 0xdfb48	@ 000dfb30 0ad0
.org 0xdfb32
	ldrb r0, [r6, #10]	@ 000dfb32 b07a
.org 0xdfb34
	movs r1, #16	@ 000dfb34 1021
.org 0xdfb36
	orrs r0, r1	@ 000dfb36 0843
.org 0xdfb38
	b.n 0xdfb4e	@ 000dfb38 09e0
.org 0xdfb3a
	.byte 0x00	@ 000dfb3a data
.org 0xdfb3b
	.byte 0x00	@ 000dfb3b data
.org 0xdfb3c
	.byte 0x38,0xdc,0x02,0x02	@ 000dfb3c data
.org 0xdfb40
	.byte 0xfd,0x43,0x03,0x00	@ 000dfb40 data
.org 0xdfb44
	.byte 0xc3,0x9e,0x26,0x00	@ 000dfb44 data
.org 0xdfb48
	ldrb r1, [r6, #10]	@ 000dfb48 b17a
.org 0xdfb4a
	movs r0, #239	@ 000dfb4a ef20
.org 0xdfb4c
	ands r0, r1	@ 000dfb4c 0840
.org 0xdfb4e
	strb r0, [r6, #10]	@ 000dfb4e b072
.org 0xdfb50
	movs r5, #1	@ 000dfb50 0125
.org 0xdfb52
	adds r1, r2, #0	@ 000dfb52 111c
.org 0xdfb54
	adds r4, r6, #0	@ 000dfb54 341c
.org 0xdfb56
	adds r4, #76	@ 000dfb56 4c34
.org 0xdfb58
	strb r1, [r4, #0]	@ 000dfb58 2170
.org 0xdfb5a
	adds r3, r6, #0	@ 000dfb5a 331c
.org 0xdfb5c
	adds r3, #74	@ 000dfb5c 4a33
.org 0xdfb5e
	lsls r1, r1, #4	@ 000dfb5e 0901
.org 0xdfb60
	ldrb r2, [r3, #0]	@ 000dfb60 1a78
.org 0xdfb62
	movs r0, #17	@ 000dfb62 1120
.org 0xdfb64
	negs r0, r0	@ 000dfb64 4042
.org 0xdfb66
	ands r0, r2	@ 000dfb66 1040
.org 0xdfb68
	orrs r0, r1	@ 000dfb68 0843
.org 0xdfb6a
	strb r0, [r3, #0]	@ 000dfb6a 1870
.org 0xdfb6c
	ldr r2, [pc, #36]	@ 000dfb6c 094a
.org 0xdfb6e
	ldr r1, [r2, #0]	@ 000dfb6e 1168
.org 0xdfb70
	ldr r0, [pc, #36]	@ 000dfb70 0948
.org 0xdfb72
	muls r0, r1	@ 000dfb72 4843
.org 0xdfb74
	ldr r1, [pc, #36]	@ 000dfb74 0949
.org 0xdfb76
	adds r0, r0, r1	@ 000dfb76 4018
.org 0xdfb78
	lsls r0, r0, #1	@ 000dfb78 4000
.org 0xdfb7a
	lsrs r1, r0, #1	@ 000dfb7a 4108
.org 0xdfb7c
	str r1, [r2, #0]	@ 000dfb7c 1160
.org 0xdfb7e
	lsrs r2, r0, #17	@ 000dfb7e 420c
.org 0xdfb80
	ands r2, r5	@ 000dfb80 2a40
.org 0xdfb82
	mov r9, r4	@ 000dfb82 a146
.org 0xdfb84
	adds r7, r3, #0	@ 000dfb84 1f1c
.org 0xdfb86
	cmp r2, #0	@ 000dfb86 002a
.org 0xdfb88
	beq.n 0xdfba0	@ 000dfb88 0ad0
.org 0xdfb8a
	ldrb r0, [r6, #10]	@ 000dfb8a b07a
.org 0xdfb8c
	movs r1, #32	@ 000dfb8c 2021
.org 0xdfb8e
	orrs r0, r1	@ 000dfb8e 0843
.org 0xdfb90
	b.n 0xdfba6	@ 000dfb90 09e0
.org 0xdfb92
	.byte 0x00	@ 000dfb92 data
.org 0xdfb93
	.byte 0x00	@ 000dfb93 data
.org 0xdfb94
	.byte 0x38,0xdc,0x02,0x02	@ 000dfb94 data
.org 0xdfb98
	.byte 0xfd,0x43,0x03,0x00	@ 000dfb98 data
.org 0xdfb9c
	.byte 0xc3,0x9e,0x26,0x00	@ 000dfb9c data
.org 0xdfba0
	ldrb r1, [r6, #10]	@ 000dfba0 b17a
.org 0xdfba2
	movs r0, #223	@ 000dfba2 df20
.org 0xdfba4
	ands r0, r1	@ 000dfba4 0840
.org 0xdfba6
	strb r0, [r6, #10]	@ 000dfba6 b072
.org 0xdfba8
	adds r1, r2, #0	@ 000dfba8 111c
.org 0xdfbaa
	adds r3, r6, #0	@ 000dfbaa 331c
.org 0xdfbac
	adds r3, #77	@ 000dfbac 4d33
.org 0xdfbae
	strb r1, [r3, #0]	@ 000dfbae 1970
.org 0xdfbb0
	lsls r1, r1, #5	@ 000dfbb0 4901
.org 0xdfbb2
	ldrb r2, [r7, #0]	@ 000dfbb2 3a78
.org 0xdfbb4
	movs r0, #33	@ 000dfbb4 2120
.org 0xdfbb6
	negs r0, r0	@ 000dfbb6 4042
.org 0xdfbb8
	ands r0, r2	@ 000dfbb8 1040
.org 0xdfbba
	orrs r0, r1	@ 000dfbba 0843
.org 0xdfbbc
	strb r0, [r7, #0]	@ 000dfbbc 3870
.org 0xdfbbe
	adds r4, r6, #0	@ 000dfbbe 341c
.org 0xdfbc0
	adds r4, #73	@ 000dfbc0 4934
.org 0xdfbc2
	movs r0, #3	@ 000dfbc2 0320
.org 0xdfbc4
	ldrb r1, [r6, #17]	@ 000dfbc4 717c
.org 0xdfbc6
	ands r1, r0	@ 000dfbc6 0140
.org 0xdfbc8
	lsls r1, r1, #2	@ 000dfbc8 8900
.org 0xdfbca
	ldrb r2, [r4, #0]	@ 000dfbca 2278
.org 0xdfbcc
	movs r0, #13	@ 000dfbcc 0d20
.org 0xdfbce
	negs r0, r0	@ 000dfbce 4042
.org 0xdfbd0
	ands r0, r2	@ 000dfbd0 1040
.org 0xdfbd2
	orrs r0, r1	@ 000dfbd2 0843
.org 0xdfbd4
	strb r0, [r4, #0]	@ 000dfbd4 2070
.org 0xdfbd6
	ldrb r0, [r6, #17]	@ 000dfbd6 707c
.org 0xdfbd8
	mov r8, r3	@ 000dfbd8 9846
.org 0xdfbda
	cmp r0, #1	@ 000dfbda 0128
.org 0xdfbdc
	bne.n 0xdfbe6	@ 000dfbdc 03d1
.org 0xdfbde
	adds r1, r6, #0	@ 000dfbde 311c
.org 0xdfbe0
	adds r1, #37	@ 000dfbe0 2531
.org 0xdfbe2
	movs r0, #30	@ 000dfbe2 1e20
.org 0xdfbe4
	strb r0, [r1, #0]	@ 000dfbe4 0870
.org 0xdfbe6
	movs r0, #10	@ 000dfbe6 0a20
.org 0xdfbe8
	strb r0, [r6, #18]	@ 000dfbe8 b074
.org 0xdfbea
	strb r0, [r6, #19]	@ 000dfbea f074
.org 0xdfbec
	ldr r1, [pc, #68]	@ 000dfbec 1149
.org 0xdfbee
	ldrb r0, [r6, #16]	@ 000dfbee 307c
.org 0xdfbf0
	lsls r0, r0, #2	@ 000dfbf0 8000
.org 0xdfbf2
	adds r0, r0, r1	@ 000dfbf2 4018
.org 0xdfbf4
	ldr r1, [r0, #0]	@ 000dfbf4 0168
.org 0xdfbf6
	adds r0, r6, #0	@ 000dfbf6 301c
.org 0xdfbf8
	bl 0x128f80	@ 000dfbf8 49f0c2f9
.org 0xdfbfc
	ldr r4, [pc, #56]	@ 000dfbfc 0e4c
.org 0xdfbfe
	ldr r0, [r4, #0]	@ 000dfbfe 2068
.org 0xdfc00
	ldr r3, [pc, #56]	@ 000dfc00 0e4b
.org 0xdfc02
	muls r0, r3	@ 000dfc02 5843
.org 0xdfc04
	ldr r2, [pc, #56]	@ 000dfc04 0e4a
.org 0xdfc06
	adds r0, r0, r2	@ 000dfc06 8018
.org 0xdfc08
	lsls r0, r0, #1	@ 000dfc08 4000
.org 0xdfc0a
	lsrs r1, r0, #1	@ 000dfc0a 4108
.org 0xdfc0c
	lsrs r0, r0, #17	@ 000dfc0c 400c
.org 0xdfc0e
	adds r5, r6, #0	@ 000dfc0e 351c
.org 0xdfc10
	adds r5, #118	@ 000dfc10 7635
.org 0xdfc12
	strb r0, [r5, #0]	@ 000dfc12 2870
.org 0xdfc14
	adds r0, r1, #0	@ 000dfc14 081c
.org 0xdfc16
	muls r0, r3	@ 000dfc16 5843
.org 0xdfc18
	adds r0, r0, r2	@ 000dfc18 8018
.org 0xdfc1a
	lsls r0, r0, #1	@ 000dfc1a 4000
.org 0xdfc1c
	lsrs r1, r0, #1	@ 000dfc1c 4108
.org 0xdfc1e
	str r1, [r4, #0]	@ 000dfc1e 2160
.org 0xdfc20
	lsrs r2, r0, #17	@ 000dfc20 420c
.org 0xdfc22
	movs r0, #1	@ 000dfc22 0120
.org 0xdfc24
	ands r2, r0	@ 000dfc24 0240
.org 0xdfc26
	cmp r2, #0	@ 000dfc26 002a
.org 0xdfc28
	beq.n 0xdfc44	@ 000dfc28 0cd0
.org 0xdfc2a
	ldrb r0, [r6, #10]	@ 000dfc2a b07a
.org 0xdfc2c
	movs r1, #16	@ 000dfc2c 1021
.org 0xdfc2e
	orrs r0, r1	@ 000dfc2e 0843
.org 0xdfc30
	b.n 0xdfc4a	@ 000dfc30 0be0
.org 0xdfc32
	.byte 0x00	@ 000dfc32 data
.org 0xdfc33
	.byte 0x00	@ 000dfc33 data
.org 0xdfc34
	.byte 0x74,0x88,0x86,0x08	@ 000dfc34 data
.org 0xdfc38
	.byte 0x38,0xdc,0x02,0x02	@ 000dfc38 data
.org 0xdfc3c
	.byte 0xfd,0x43,0x03,0x00	@ 000dfc3c data
.org 0xdfc40
	.byte 0xc3,0x9e,0x26,0x00	@ 000dfc40 data
.org 0xdfc44
	ldrb r1, [r6, #10]	@ 000dfc44 b17a
.org 0xdfc46
	movs r0, #239	@ 000dfc46 ef20
.org 0xdfc48
	ands r0, r1	@ 000dfc48 0840
.org 0xdfc4a
	strb r0, [r6, #10]	@ 000dfc4a b072
.org 0xdfc4c
	movs r3, #1	@ 000dfc4c 0123
.org 0xdfc4e
	adds r1, r2, #0	@ 000dfc4e 111c
.org 0xdfc50
	mov r0, r9	@ 000dfc50 4846
.org 0xdfc52
	strb r1, [r0, #0]	@ 000dfc52 0170
.org 0xdfc54
	lsls r1, r1, #4	@ 000dfc54 0901
.org 0xdfc56
	ldrb r2, [r7, #0]	@ 000dfc56 3a78
.org 0xdfc58
	movs r0, #17	@ 000dfc58 1120
.org 0xdfc5a
	negs r0, r0	@ 000dfc5a 4042
.org 0xdfc5c
	ands r0, r2	@ 000dfc5c 1040
.org 0xdfc5e
	orrs r0, r1	@ 000dfc5e 0843
.org 0xdfc60
	strb r0, [r7, #0]	@ 000dfc60 3870
.org 0xdfc62
	ldr r2, [pc, #32]	@ 000dfc62 084a
.org 0xdfc64
	ldr r1, [r2, #0]	@ 000dfc64 1168
.org 0xdfc66
	ldr r0, [pc, #32]	@ 000dfc66 0848
.org 0xdfc68
	muls r0, r1	@ 000dfc68 4843
.org 0xdfc6a
	ldr r1, [pc, #32]	@ 000dfc6a 0849
.org 0xdfc6c
	adds r0, r0, r1	@ 000dfc6c 4018
.org 0xdfc6e
	lsls r0, r0, #1	@ 000dfc6e 4000
.org 0xdfc70
	lsrs r1, r0, #1	@ 000dfc70 4108
.org 0xdfc72
	str r1, [r2, #0]	@ 000dfc72 1160
.org 0xdfc74
	lsrs r2, r0, #17	@ 000dfc74 420c
.org 0xdfc76
	ands r2, r3	@ 000dfc76 1a40
.org 0xdfc78
	cmp r2, #0	@ 000dfc78 002a
.org 0xdfc7a
	beq.n 0xdfc90	@ 000dfc7a 09d0
.org 0xdfc7c
	ldrb r0, [r6, #10]	@ 000dfc7c b07a
.org 0xdfc7e
	movs r1, #32	@ 000dfc7e 2021
.org 0xdfc80
	orrs r0, r1	@ 000dfc80 0843
.org 0xdfc82
	b.n 0xdfc96	@ 000dfc82 08e0
.org 0xdfc84
	.byte 0x38,0xdc,0x02,0x02	@ 000dfc84 data
.org 0xdfc88
	.byte 0xfd,0x43,0x03,0x00	@ 000dfc88 data
.org 0xdfc8c
	.byte 0xc3,0x9e,0x26,0x00	@ 000dfc8c data
.org 0xdfc90
	ldrb r1, [r6, #10]	@ 000dfc90 b17a
.org 0xdfc92
	movs r0, #223	@ 000dfc92 df20
.org 0xdfc94
	ands r0, r1	@ 000dfc94 0840
.org 0xdfc96
	strb r0, [r6, #10]	@ 000dfc96 b072
