@ FUN_08035fec  entry 0x08035fec  size 192
.thumb
.org 0x35fec
FUN_08035fec:
	push {r4, r5, r6, lr}	@ 00035fec 70b5
.org 0x35fee
	adds r4, r0, #0	@ 00035fee 041c
.org 0x35ff0
	movs r6, #0	@ 00035ff0 0026
.org 0x35ff2
	movs r0, #129	@ 00035ff2 8120
.org 0x35ff4
	lsls r0, r0, #1	@ 00035ff4 4000
.org 0x35ff6
	adds r5, r4, r0	@ 00035ff6 2518
.org 0x35ff8
	ldrb r0, [r5, #0]	@ 00035ff8 2878
.org 0x35ffa
	cmp r0, #0	@ 00035ffa 0028
.org 0x35ffc
	bne.n 0x3601c	@ 00035ffc 0ed1
.org 0x35ffe
	ldr r1, [pc, #24]	@ 00035ffe 0649
.org 0x36000
	adds r0, r4, #0	@ 00036000 201c
.org 0x36002
	bl 0x1cf00	@ 00036002 e6f77dff
.org 0x36006
	adds r0, r4, #0	@ 00036006 201c
.org 0x36008
	movs r1, #9	@ 00036008 0921
.org 0x3600a
	bl 0x3c464	@ 0003600a 06f02bfa
.org 0x3600e
	ldrb r0, [r5, #0]	@ 0003600e 2878
.org 0x36010
	adds r0, #1	@ 00036010 0130
.org 0x36012
	strb r0, [r5, #0]	@ 00036012 2870
.org 0x36014
	b.n 0x3605c	@ 00036014 22e0
.org 0x36016
	.byte 0x00	@ 00036016 data
.org 0x36017
	.byte 0x00	@ 00036017 data
.org 0x36018
	.byte 0x02,0x19,0x00,0x00	@ 00036018 data
.org 0x3601c
	ldr r1, [pc, #40]	@ 0003601c 0a49
.org 0x3601e
	adds r0, r4, r1	@ 0003601e 6018
.org 0x36020
	ldrb r1, [r0, #0]	@ 00036020 0178
.org 0x36022
	movs r0, #1	@ 00036022 0120
.org 0x36024
	ands r0, r1	@ 00036024 0840
.org 0x36026
	cmp r0, #0	@ 00036026 0028
.org 0x36028
	beq.n 0x36054	@ 00036028 14d0
.org 0x3602a
	movs r3, #183	@ 0003602a b723
.org 0x3602c
	lsls r3, r3, #1	@ 0003602c 5b00
.org 0x3602e
	adds r2, r4, r3	@ 0003602e e218
.org 0x36030
	ldrb r0, [r2, #0]	@ 00036030 1078
.org 0x36032
	cmp r0, #7	@ 00036032 0728
.org 0x36034
	bhi.n 0x36050	@ 00036034 0cd8
.org 0x36036
	ldr r1, [pc, #20]	@ 00036036 0549
.org 0x36038
	adds r2, r0, #0	@ 00036038 021c
.org 0x3603a
	adds r3, #1	@ 0003603a 0133
.org 0x3603c
	adds r0, r4, r3	@ 0003603c e018
.org 0x3603e
	ldrb r3, [r0, #0]	@ 0003603e 0378
.org 0x36040
	adds r0, r4, #0	@ 00036040 201c
.org 0x36042
	bl 0x1cfc8	@ 00036042 e6f7c1ff
.org 0x36046
	b.n 0x3605c	@ 00036046 09e0
.org 0x36048
	.byte 0x53,0x01,0x00,0x00	@ 00036048 data
.org 0x3604c
	.byte 0x02,0x19,0x00,0x00	@ 0003604c data
.org 0x36050
	movs r6, #1	@ 00036050 0126
.org 0x36052
	b.n 0x3605c	@ 00036052 03e0
.org 0x36054
	ldr r1, [pc, #60]	@ 00036054 0f49
.org 0x36056
	adds r0, r4, #0	@ 00036056 201c
.org 0x36058
	bl 0x3a3b0	@ 00036058 04f0aaf9
.org 0x3605c
	adds r0, r4, #0	@ 0003605c 201c
.org 0x3605e
	adds r0, #115	@ 0003605e 7330
.org 0x36060
	ldrb r0, [r0, #0]	@ 00036060 0078
.org 0x36062
	cmp r0, #3	@ 00036062 0328
.org 0x36064
	beq.n 0x3606a	@ 00036064 01d0
.org 0x36066
	cmp r6, #0	@ 00036066 002e
.org 0x36068
	beq.n 0x360b8	@ 00036068 26d0
.org 0x3606a
	movs r1, #150	@ 0003606a 9621
.org 0x3606c
	lsls r1, r1, #2	@ 0003606c 8900
.org 0x3606e
	adds r0, r4, r1	@ 0003606e 6018
.org 0x36070
	ldr r1, [r0, #0]	@ 00036070 0168
.org 0x36072
	movs r0, #128	@ 00036072 8020
.org 0x36074
	ands r1, r0	@ 00036074 0140
.org 0x36076
	cmp r1, #0	@ 00036076 0029
.org 0x36078
	beq.n 0x3609c	@ 00036078 10d0
.org 0x3607a
	ldr r3, [pc, #28]	@ 0003607a 074b
.org 0x3607c
	adds r2, r4, r3	@ 0003607c e218
.org 0x3607e
	movs r1, #0	@ 0003607e 0021
.org 0x36080
	movs r0, #2	@ 00036080 0220
.org 0x36082
	strb r0, [r2, #0]	@ 00036082 1070
.org 0x36084
	movs r2, #129	@ 00036084 8122
.org 0x36086
	lsls r2, r2, #1	@ 00036086 5200
.org 0x36088
	adds r0, r4, r2	@ 00036088 a018
.org 0x3608a
	strb r1, [r0, #0]	@ 0003608a 0170
.org 0x3608c
	adds r0, r4, #0	@ 0003608c 201c
.org 0x3608e
	bl 0x35f28	@ 0003608e fff74bff
.org 0x36092
	b.n 0x360c0	@ 00036092 15e0
.org 0x36094
	.byte 0x02,0x19,0x00,0x00	@ 00036094 data
.org 0x36098
	.byte 0x01,0x01,0x00,0x00	@ 00036098 data
.org 0x3609c
	ldr r3, [pc, #20]	@ 0003609c 054b
.org 0x3609e
	adds r2, r4, r3	@ 0003609e e218
.org 0x360a0
	movs r0, #3	@ 000360a0 0320
.org 0x360a2
	strb r0, [r2, #0]	@ 000360a2 1070
.org 0x360a4
	movs r2, #129	@ 000360a4 8122
.org 0x360a6
	lsls r2, r2, #1	@ 000360a6 5200
.org 0x360a8
	adds r0, r4, r2	@ 000360a8 a018
.org 0x360aa
	strb r1, [r0, #0]	@ 000360aa 0170
