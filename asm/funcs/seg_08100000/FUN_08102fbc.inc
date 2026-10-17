@ FUN_08102fbc  entry 0x08102fbc  size 272
.thumb
.org 0x102fbc
FUN_08102fbc:
	push {r4, r5, lr}	@ 00102fbc 30b5
.org 0x102fbe
	sub sp, #8	@ 00102fbe 82b0
.org 0x102fc0
	adds r5, r0, #0	@ 00102fc0 051c
.org 0x102fc2
	ldr r1, [pc, #64]	@ 00102fc2 1049
.org 0x102fc4
	mov r0, sp	@ 00102fc4 6846
.org 0x102fc6
	movs r2, #6	@ 00102fc6 0622
.org 0x102fc8
	bl 0x129258	@ 00102fc8 26f046f9
.org 0x102fcc
	movs r4, #1	@ 00102fcc 0124
.org 0x102fce
	movs r0, #86	@ 00102fce 5620
.org 0x102fd0
	bl 0x6984	@ 00102fd0 03f7d8fc
.org 0x102fd4
	ldr r2, [pc, #48]	@ 00102fd4 0c4a
.org 0x102fd6
	ldrb r1, [r2, #7]	@ 00102fd6 d179
.org 0x102fd8
	adds r0, r4, #0	@ 00102fd8 201c
.org 0x102fda
	ands r0, r1	@ 00102fda 0840
.org 0x102fdc
	cmp r0, #0	@ 00102fdc 0028
.org 0x102fde
	beq.n 0x10300c	@ 00102fde 15d0
.org 0x102fe0
	movs r4, #17	@ 00102fe0 1124
.org 0x102fe2
	movs r0, #2	@ 00102fe2 0220
.org 0x102fe4
	ands r0, r1	@ 00102fe4 0840
.org 0x102fe6
	cmp r0, #0	@ 00102fe6 0028
.org 0x102fe8
	beq.n 0x10305e	@ 00102fe8 39d0
.org 0x102fea
	movs r4, #19	@ 00102fea 1324
.org 0x102fec
	movs r0, #4	@ 00102fec 0420
.org 0x102fee
	ands r0, r1	@ 00102fee 0840
.org 0x102ff0
	cmp r0, #0	@ 00102ff0 0028
.org 0x102ff2
	beq.n 0x10305e	@ 00102ff2 34d0
.org 0x102ff4
	movs r4, #21	@ 00102ff4 1524
.org 0x102ff6
	movs r0, #8	@ 00102ff6 0820
.org 0x102ff8
	ands r0, r1	@ 00102ff8 0840
.org 0x102ffa
	cmp r0, #0	@ 00102ffa 0028
.org 0x102ffc
	beq.n 0x10305e	@ 00102ffc 2fd0
.org 0x102ffe
	movs r4, #23	@ 00102ffe 1724
.org 0x103000
	b.n 0x10305e	@ 00103000 2de0
.org 0x103002
	.byte 0x00	@ 00103002 data
.org 0x103003
	.byte 0x00	@ 00103003 data
.org 0x103004
	.byte 0xec,0xa4,0x12,0x08	@ 00103004 data
.org 0x103008
	.byte 0xb0,0xe8,0x02,0x02	@ 00103008 data
.org 0x10300c
	ldrb r1, [r2, #6]	@ 0010300c 9179
.org 0x10300e
	movs r0, #16	@ 0010300e 1020
.org 0x103010
	ands r0, r1	@ 00103010 0840
.org 0x103012
	cmp r0, #0	@ 00103012 0028
.org 0x103014
	beq.n 0x103038	@ 00103014 10d0
.org 0x103016
	movs r4, #9	@ 00103016 0924
.org 0x103018
	movs r0, #32	@ 00103018 2020
.org 0x10301a
	ands r0, r1	@ 0010301a 0840
.org 0x10301c
	cmp r0, #0	@ 0010301c 0028
.org 0x10301e
	beq.n 0x10305e	@ 0010301e 1ed0
.org 0x103020
	movs r4, #11	@ 00103020 0b24
.org 0x103022
	movs r0, #64	@ 00103022 4020
.org 0x103024
	ands r0, r1	@ 00103024 0840
.org 0x103026
	cmp r0, #0	@ 00103026 0028
.org 0x103028
	beq.n 0x10305e	@ 00103028 19d0
.org 0x10302a
	movs r4, #13	@ 0010302a 0d24
.org 0x10302c
	movs r0, #128	@ 0010302c 8020
.org 0x10302e
	ands r0, r1	@ 0010302e 0840
.org 0x103030
	cmp r0, #0	@ 00103030 0028
.org 0x103032
	beq.n 0x10305e	@ 00103032 14d0
.org 0x103034
	movs r4, #15	@ 00103034 0f24
.org 0x103036
	b.n 0x10305e	@ 00103036 12e0
.org 0x103038
	adds r0, r4, #0	@ 00103038 201c
.org 0x10303a
	ands r0, r1	@ 0010303a 0840
.org 0x10303c
	cmp r0, #0	@ 0010303c 0028
.org 0x10303e
	beq.n 0x10305e	@ 0010303e 0ed0
.org 0x103040
	movs r0, #2	@ 00103040 0220
.org 0x103042
	ands r0, r1	@ 00103042 0840
.org 0x103044
	cmp r0, #0	@ 00103044 0028
.org 0x103046
	beq.n 0x10305e	@ 00103046 0ad0
.org 0x103048
	movs r4, #3	@ 00103048 0324
.org 0x10304a
	movs r0, #4	@ 0010304a 0420
.org 0x10304c
	ands r0, r1	@ 0010304c 0840
.org 0x10304e
	cmp r0, #0	@ 0010304e 0028
.org 0x103050
	beq.n 0x10305e	@ 00103050 05d0
.org 0x103052
	movs r4, #5	@ 00103052 0524
.org 0x103054
	movs r0, #8	@ 00103054 0820
.org 0x103056
	ands r0, r1	@ 00103056 0840
.org 0x103058
	cmp r0, #0	@ 00103058 0028
.org 0x10305a
	beq.n 0x10305e	@ 0010305a 00d0
.org 0x10305c
	movs r4, #7	@ 0010305c 0724
.org 0x10305e
	ldr r1, [pc, #88]	@ 0010305e 1649
.org 0x103060
	ldrb r2, [r5, #16]	@ 00103060 2a7c
.org 0x103062
	adds r0, r1, r2	@ 00103062 8818
.org 0x103064
	ldrb r0, [r0, #25]	@ 00103064 407e
.org 0x103066
	adds r3, r1, #0	@ 00103066 0b1c
.org 0x103068
	cmp r0, r4	@ 00103068 a042
.org 0x10306a
	beq.n 0x1030ae	@ 0010306a 20d0
.org 0x10306c
	subs r0, r2, #6	@ 0010306c 901f
.org 0x10306e
	lsls r0, r0, #1	@ 0010306e 4000
.org 0x103070
	add r0, sp	@ 00103070 6844
.org 0x103072
	ldrh r0, [r0, #0]	@ 00103072 0088
.org 0x103074
	adds r0, r4, r0	@ 00103074 2018
.org 0x103076
	ldr r1, [pc, #68]	@ 00103076 1149
.org 0x103078
	cmp r0, r1	@ 00103078 8842
.org 0x10307a
	bne.n 0x10308a	@ 0010307a 06d1
.org 0x10307c
	ldr r0, [pc, #64]	@ 0010307c 1048
.org 0x10307e
	ldr r0, [r0, #0]	@ 0010307e 0068
.org 0x103080
	ldrb r1, [r0, #2]	@ 00103080 8178
.org 0x103082
	movs r0, #1	@ 00103082 0120
.org 0x103084
	ands r0, r1	@ 00103084 0840
.org 0x103086
	cmp r0, #0	@ 00103086 0028
.org 0x103088
	bne.n 0x1030ae	@ 00103088 11d1
.org 0x10308a
	subs r0, r2, #6	@ 0010308a 901f
.org 0x10308c
	lsls r0, r0, #1	@ 0010308c 4000
.org 0x10308e
	add r0, sp	@ 0010308e 6844
.org 0x103090
	ldrh r0, [r0, #0]	@ 00103090 0088
.org 0x103092
	adds r0, r4, r0	@ 00103092 2018
.org 0x103094
	ldr r1, [pc, #44]	@ 00103094 0b49
.org 0x103096
	cmp r0, r1	@ 00103096 8842
.org 0x103098
	bne.n 0x1030c8	@ 00103098 16d1
.org 0x10309a
	ldr r0, [pc, #36]	@ 0010309a 0948
.org 0x10309c
	ldr r0, [r0, #0]	@ 0010309c 0068
.org 0x10309e
	ldrb r1, [r0, #0]	@ 0010309e 0178
.org 0x1030a0
	movs r0, #15	@ 001030a0 0f20
.org 0x1030a2
	ands r0, r1	@ 001030a2 0840
.org 0x1030a4
	lsrs r0, r0, #1	@ 001030a4 4008
.org 0x1030a6
	movs r1, #1	@ 001030a6 0121
.org 0x1030a8
	ands r0, r1	@ 001030a8 0840
.org 0x1030aa
	cmp r0, #0	@ 001030aa 0028
.org 0x1030ac
	beq.n 0x1030c8	@ 001030ac 0cd0
.org 0x1030ae
	adds r0, r4, #1	@ 001030ae 601c
.org 0x1030b0
	lsls r0, r0, #24	@ 001030b0 0006
.org 0x1030b2
	lsrs r4, r0, #24	@ 001030b2 040e
.org 0x1030b4
	b.n 0x1030ce	@ 001030b4 0be0
.org 0x1030b6
	.byte 0x00	@ 001030b6 data
.org 0x1030b7
	.byte 0x00	@ 001030b7 data
.org 0x1030b8
	.byte 0xb0,0xe8,0x02,0x02	@ 001030b8 data
.org 0x1030bc
	.byte 0xd3,0x15,0x00,0x00	@ 001030bc data
.org 0x1030c0
	.byte 0xac,0xed,0x02,0x02	@ 001030c0 data
.org 0x1030c4
	.byte 0xef,0x15,0x00,0x00	@ 001030c4 data
.org 0x1030c8
	ldrb r0, [r5, #16]	@ 001030c8 287c
.org 0x1030ca
	adds r0, r3, r0	@ 001030ca 1818
