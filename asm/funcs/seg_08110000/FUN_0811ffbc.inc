@ FUN_0811ffbc  entry 0x0811ffbc  size 498
.thumb
.org 0x11ffbc
FUN_0811ffbc:
	push {r4, r5, r6, r7, lr}	@ 0011ffbc f0b5
.org 0x11ffbe
	sub sp, #4	@ 0011ffbe 81b0
.org 0x11ffc0
	adds r5, r0, #0	@ 0011ffc0 051c
.org 0x11ffc2
	ldrb r6, [r5, #3]	@ 0011ffc2 ee78
.org 0x11ffc4
	cmp r6, #0	@ 0011ffc4 002e
.org 0x11ffc6
	bne.n 0x11fffc	@ 0011ffc6 19d1
.org 0x11ffc8
	ldr r0, [pc, #92]	@ 0011ffc8 1748
.org 0x11ffca
	adds r4, r5, r0	@ 0011ffca 2c18
.org 0x11ffcc
	ldr r1, [pc, #92]	@ 0011ffcc 1749
.org 0x11ffce
	str r6, [sp, #0]	@ 0011ffce 0096
.org 0x11ffd0
	adds r0, r4, #0	@ 0011ffd0 201c
.org 0x11ffd2
	movs r2, #129	@ 0011ffd2 8122
.org 0x11ffd4
	movs r3, #0	@ 0011ffd4 0023
.org 0x11ffd6
	bl 0x27b8	@ 0011ffd6 e2f6effb
.org 0x11ffda
	ldr r0, [pc, #84]	@ 0011ffda 1548
.org 0x11ffdc
	ldrh r0, [r0, #0]	@ 0011ffdc 0088
.org 0x11ffde
	movs r1, #248	@ 0011ffde f821
.org 0x11ffe0
	lsls r1, r1, #5	@ 0011ffe0 4901
.org 0x11ffe2
	ands r1, r0	@ 0011ffe2 0140
.org 0x11ffe4
	lsls r1, r1, #3	@ 0011ffe4 c900
.org 0x11ffe6
	movs r2, #128	@ 0011ffe6 8022
.org 0x11ffe8
	lsls r2, r2, #5	@ 0011ffe8 5201
.org 0x11ffea
	adds r0, r4, #0	@ 0011ffea 201c
.org 0x11ffec
	bl 0x1f1c	@ 0011ffec e1f696ff
.org 0x11fff0
	ldr r1, [pc, #64]	@ 0011fff0 1049
.org 0x11fff2
	adds r0, r5, r1	@ 0011fff2 6818
.org 0x11fff4
	strb r6, [r0, #13]	@ 0011fff4 4673
.org 0x11fff6
	ldrb r0, [r5, #3]	@ 0011fff6 e878
.org 0x11fff8
	adds r0, #1	@ 0011fff8 0130
.org 0x11fffa
	strb r0, [r5, #3]	@ 0011fffa e870
.org 0x11fffc
	adds r0, r5, #0	@ 0011fffc 281c
.org 0x11fffe
	bl 0x120b58	@ 0011fffe 00f0abfd
.org 0x120002
	ldrb r1, [r5, #3]	@ 00120002 e978
.org 0x120004
	cmp r1, #1	@ 00120004 0129
.org 0x120006
	bne.n 0x1200cc	@ 00120006 61d1
.org 0x120008
	ldr r3, [pc, #44]	@ 00120008 0b4b
.org 0x12000a
	ldrh r2, [r3, #6]	@ 0012000a da88
.org 0x12000c
	movs r0, #32	@ 0012000c 2020
.org 0x12000e
	ands r0, r2	@ 0012000e 1040
.org 0x120010
	lsls r0, r0, #16	@ 00120010 0004
.org 0x120012
	lsrs r4, r0, #16	@ 00120012 040c
.org 0x120014
	cmp r4, #0	@ 00120014 002c
.org 0x120016
	beq.n 0x12003c	@ 00120016 11d0
.org 0x120018
	movs r0, #1	@ 00120018 0120
.org 0x12001a
	bl 0x2b10	@ 0012001a e2f679fd
.org 0x12001e
	movs r0, #0	@ 0012001e 0020
.org 0x120020
	strb r0, [r5, #2]	@ 00120020 a870
.org 0x120022
	strb r0, [r5, #3]	@ 00120022 e870
.org 0x120024
	b.n 0x1201f6	@ 00120024 e7e0
.org 0x120026
	.byte 0x00	@ 00120026 data
.org 0x120027
	.byte 0x00	@ 00120027 data
.org 0x120028
	.byte 0xd8,0x0e,0x00,0x00	@ 00120028 data
.org 0x12002c
	.byte 0x00,0xc0,0xb2,0x08	@ 0012002c data
.org 0x120030
	.byte 0x06,0x0a,0x00,0x02	@ 00120030 data
.org 0x120034
	.byte 0xcc,0x0d,0x00,0x00	@ 00120034 data
.org 0x120038
	.byte 0x60,0x07,0x00,0x02	@ 00120038 data
.org 0x12003c
	movs r0, #16	@ 0012003c 1020
.org 0x12003e
	ands r0, r2	@ 0012003e 1040
.org 0x120040
	lsls r0, r0, #16	@ 00120040 0004
.org 0x120042
	lsrs r6, r0, #16	@ 00120042 060c
.org 0x120044
	cmp r6, #0	@ 00120044 002e
.org 0x120046
	beq.n 0x120058	@ 00120046 07d0
.org 0x120048
	movs r0, #1	@ 00120048 0120
.org 0x12004a
	bl 0x2b10	@ 0012004a e2f661fd
.org 0x12004e
	movs r0, #2	@ 0012004e 0220
.org 0x120050
	strb r0, [r5, #2]	@ 00120050 a870
.org 0x120052
	strb r4, [r5, #3]	@ 00120052 ec70
.org 0x120054
	movs r0, #0	@ 00120054 0020
.org 0x120056
	b.n 0x1201f6	@ 00120056 cee0
.org 0x120058
	ldrh r2, [r3, #4]	@ 00120058 9a88
.org 0x12005a
	ands r1, r2	@ 0012005a 1140
.org 0x12005c
	cmp r1, #0	@ 0012005c 0029
.org 0x12005e
	bne.n 0x120068	@ 0012005e 03d1
.org 0x120060
	movs r0, #128	@ 00120060 8020
.org 0x120062
	ands r0, r2	@ 00120062 1040
.org 0x120064
	cmp r0, #0	@ 00120064 0028
.org 0x120066
	beq.n 0x1200b4	@ 00120066 25d0
.org 0x120068
	ldr r0, [pc, #56]	@ 00120068 0e48
.org 0x12006a
	adds r7, r5, r0	@ 0012006a 2f18
.org 0x12006c
	ldrb r0, [r7, #3]	@ 0012006c f878
.org 0x12006e
	cmp r0, #0	@ 0012006e 0028
.org 0x120070
	beq.n 0x120154	@ 00120070 70d0
.org 0x120072
	ldr r1, [pc, #52]	@ 00120072 0d49
.org 0x120074
	adds r4, r5, r1	@ 00120074 6c18
.org 0x120076
	ldr r1, [pc, #52]	@ 00120076 0d49
.org 0x120078
	str r6, [sp, #0]	@ 00120078 0096
.org 0x12007a
	adds r0, r4, #0	@ 0012007a 201c
.org 0x12007c
	movs r2, #175	@ 0012007c af22
.org 0x12007e
	movs r3, #0	@ 0012007e 0023
.org 0x120080
	bl 0x27b8	@ 00120080 e2f69afb
.org 0x120084
	ldr r0, [pc, #40]	@ 00120084 0a48
.org 0x120086
	ldrh r0, [r0, #0]	@ 00120086 0088
.org 0x120088
	movs r1, #248	@ 00120088 f821
.org 0x12008a
	lsls r1, r1, #5	@ 0012008a 4901
.org 0x12008c
	ands r1, r0	@ 0012008c 0140
.org 0x12008e
	lsls r1, r1, #3	@ 0012008e c900
.org 0x120090
	movs r2, #128	@ 00120090 8022
.org 0x120092
	lsls r2, r2, #5	@ 00120092 5201
.org 0x120094
	adds r0, r4, #0	@ 00120094 201c
.org 0x120096
	bl 0x1f1c	@ 00120096 e1f641ff
.org 0x12009a
	movs r0, #2	@ 0012009a 0220
.org 0x12009c
	bl 0x2b10	@ 0012009c e2f638fd
.org 0x1200a0
	strb r6, [r7, #2]	@ 001200a0 be70
.org 0x1200a2
	b.n 0x1201f0	@ 001200a2 a5e0
.org 0x1200a4
	.byte 0xcc,0x0d,0x00,0x00	@ 001200a4 data
.org 0x1200a8
	.byte 0xd8,0x0e,0x00,0x00	@ 001200a8 data
.org 0x1200ac
	.byte 0x00,0xc0,0xb2,0x08	@ 001200ac data
.org 0x1200b0
	.byte 0x06,0x0a,0x00,0x02	@ 001200b0 data
.org 0x1200b4
	movs r0, #2	@ 001200b4 0220
.org 0x1200b6
	ands r0, r2	@ 001200b6 1040
.org 0x1200b8
	cmp r0, #0	@ 001200b8 0028
.org 0x1200ba
	bne.n 0x1200be	@ 001200ba 00d1
.org 0x1200bc
	b.n 0x1201f4	@ 001200bc 9ae0
.org 0x1200be
	ldr r0, [pc, #8]	@ 001200be 0248
.org 0x1200c0
	adds r1, r5, r0	@ 001200c0 2918
.org 0x1200c2
	movs r0, #1	@ 001200c2 0120
.org 0x1200c4
	strb r0, [r1, #17]	@ 001200c4 4874
.org 0x1200c6
	b.n 0x1201f4	@ 001200c6 95e0
.org 0x1200c8
	.byte 0xcc,0x0d,0x00,0x00	@ 001200c8 data
.org 0x1200cc
	cmp r1, #2	@ 001200cc 0229
.org 0x1200ce
	beq.n 0x1200d2	@ 001200ce 00d0
.org 0x1200d0
	b.n 0x1201e0	@ 001200d0 86e0
.org 0x1200d2
	ldr r3, [pc, #64]	@ 001200d2 104b
.org 0x1200d4
	ldrh r2, [r3, #4]	@ 001200d4 9a88
.org 0x1200d6
	adds r6, r2, #0	@ 001200d6 161c
.org 0x1200d8
	ands r6, r1	@ 001200d8 0e40
.org 0x1200da
	cmp r6, #0	@ 001200da 002e
.org 0x1200dc
	beq.n 0x120124	@ 001200dc 22d0
.org 0x1200de
	ldr r1, [pc, #56]	@ 001200de 0e49
.org 0x1200e0
	adds r4, r5, r1	@ 001200e0 6c18
.org 0x1200e2
	ldr r1, [pc, #56]	@ 001200e2 0e49
.org 0x1200e4
	movs r0, #0	@ 001200e4 0020
.org 0x1200e6
	str r0, [sp, #0]	@ 001200e6 0090
.org 0x1200e8
	adds r0, r4, #0	@ 001200e8 201c
.org 0x1200ea
	movs r2, #129	@ 001200ea 8122
.org 0x1200ec
	movs r3, #0	@ 001200ec 0023
.org 0x1200ee
	bl 0x27b8	@ 001200ee e2f663fb
.org 0x1200f2
	ldr r0, [pc, #44]	@ 001200f2 0b48
.org 0x1200f4
	ldrh r0, [r0, #0]	@ 001200f4 0088
.org 0x1200f6
	movs r1, #248	@ 001200f6 f821
.org 0x1200f8
	lsls r1, r1, #5	@ 001200f8 4901
.org 0x1200fa
	ands r1, r0	@ 001200fa 0140
.org 0x1200fc
	lsls r1, r1, #3	@ 001200fc c900
.org 0x1200fe
	movs r2, #128	@ 001200fe 8022
.org 0x120100
	lsls r2, r2, #5	@ 00120100 5201
.org 0x120102
	adds r0, r4, #0	@ 00120102 201c
.org 0x120104
	bl 0x1f1c	@ 00120104 e1f60aff
.org 0x120108
	movs r0, #3	@ 00120108 0320
.org 0x12010a
	bl 0x2b10	@ 0012010a e2f601fd
.org 0x12010e
	movs r0, #1	@ 0012010e 0120
.org 0x120110
	b.n 0x1201f2	@ 00120110 6fe0
.org 0x120112
	.byte 0x00	@ 00120112 data
.org 0x120113
	.byte 0x00	@ 00120113 data
.org 0x120114
	.byte 0x60,0x07,0x00,0x02	@ 00120114 data
.org 0x120118
	.byte 0xd8,0x0e,0x00,0x00	@ 00120118 data
.org 0x12011c
	.byte 0x00,0xc0,0xb2,0x08	@ 0012011c data
.org 0x120120
	.byte 0x06,0x0a,0x00,0x02	@ 00120120 data
.org 0x120124
	movs r0, #1	@ 00120124 0120
.org 0x120126
	ands r0, r2	@ 00120126 1040
.org 0x120128
	cmp r0, #0	@ 00120128 0028
.org 0x12012a
	beq.n 0x12015c	@ 0012012a 17d0
.org 0x12012c
	ldr r0, [pc, #28]	@ 0012012c 0748
.org 0x12012e
	adds r4, r5, r0	@ 0012012e 2c18
.org 0x120130
	ldr r1, [pc, #28]	@ 00120130 0749
.org 0x120132
	adds r0, r5, r1	@ 00120132 6818
.org 0x120134
	ldrb r1, [r4, #2]	@ 00120134 a178
.org 0x120136
	adds r0, r0, r1	@ 00120136 4018
.org 0x120138
	ldrb r0, [r0, #0]	@ 00120138 0078
.org 0x12013a
	cmp r0, #255	@ 0012013a ff28
.org 0x12013c
	beq.n 0x120154	@ 0012013c 0ad0
.org 0x12013e
	movs r0, #2	@ 0012013e 0220
.org 0x120140
	bl 0x2b10	@ 00120140 e2f6e6fc
.org 0x120144
	movs r0, #3	@ 00120144 0320
.org 0x120146
	strb r0, [r5, #3]	@ 00120146 e870
.org 0x120148
	strb r6, [r4, #18]	@ 00120148 a674
.org 0x12014a
	b.n 0x1201f4	@ 0012014a 53e0
.org 0x12014c
	.byte 0xcc,0x0d,0x00,0x00	@ 0012014c data
.org 0x120150
	.byte 0xd2,0x0d,0x00,0x00	@ 00120150 data
.org 0x120154
	movs r0, #4	@ 00120154 0420
.org 0x120156
	bl 0x2b10	@ 00120156 e2f6dbfc
.org 0x12015a
	b.n 0x1201f4	@ 0012015a 4be0
.org 0x12015c
	ldrh r1, [r3, #6]	@ 0012015c d988
.org 0x12015e
	movs r0, #64	@ 0012015e 4020
.org 0x120160
	ands r0, r1	@ 00120160 0840
.org 0x120162
	cmp r0, #0	@ 00120162 0028
.org 0x120164
	beq.n 0x1201a2	@ 00120164 1dd0
.org 0x120166
	ldr r0, [pc, #24]	@ 00120166 0648
.org 0x120168
	adds r4, r5, r0	@ 00120168 2c18
.org 0x12016a
	ldrb r0, [r4, #2]	@ 0012016a a078
.org 0x12016c
	cmp r0, #0	@ 0012016c 0028
.org 0x12016e
	beq.n 0x120184	@ 0012016e 09d0
.org 0x120170
	movs r0, #1	@ 00120170 0120
.org 0x120172
	bl 0x2b10	@ 00120172 e2f6cdfc
.org 0x120176
	ldrb r0, [r4, #2]	@ 00120176 a078
.org 0x120178
	subs r0, #1	@ 00120178 0138
.org 0x12017a
	strb r0, [r4, #2]	@ 0012017a a070
.org 0x12017c
	b.n 0x1201f4	@ 0012017c 3ae0
.org 0x12017e
	.byte 0x00	@ 0012017e data
.org 0x12017f
	.byte 0x00	@ 0012017f data
.org 0x120180
	.byte 0xcc,0x0d,0x00,0x00	@ 00120180 data
.org 0x120184
	ldrb r0, [r4, #14]	@ 00120184 a07b
.org 0x120186
	cmp r0, #0	@ 00120186 0028
.org 0x120188
	beq.n 0x120198	@ 00120188 06d0
.org 0x12018a
	movs r0, #1	@ 0012018a 0120
.org 0x12018c
	bl 0x2b10	@ 0012018c e2f6c0fc
.org 0x120190
	ldrb r0, [r4, #13]	@ 00120190 607b
.org 0x120192
	subs r0, #1	@ 00120192 0138
.org 0x120194
	strb r0, [r4, #13]	@ 00120194 6073
.org 0x120196
	b.n 0x1201f4	@ 00120196 2de0
.org 0x120198
	movs r0, #3	@ 00120198 0320
.org 0x12019a
	bl 0x2b10	@ 0012019a e2f6b9fc
.org 0x12019e
	movs r0, #1	@ 0012019e 0120
.org 0x1201a0
	b.n 0x1201f2	@ 001201a0 27e0
.org 0x1201a2
	movs r0, #128	@ 001201a2 8020
.org 0x1201a4
	ands r0, r1	@ 001201a4 0840
.org 0x1201a6
	cmp r0, #0	@ 001201a6 0028
.org 0x1201a8
	beq.n 0x1201f4	@ 001201a8 24d0
.org 0x1201aa
	ldr r1, [pc, #28]	@ 001201aa 0749
.org 0x1201ac
	adds r4, r5, r1	@ 001201ac 6c18
