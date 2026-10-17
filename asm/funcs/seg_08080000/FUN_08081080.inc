@ FUN_08081080  entry 0x08081080  size 170
.thumb
.org 0x81080
FUN_08081080:
	push {r4, r5, r6, r7, lr}	@ 00081080 f0b5
.org 0x81082
	sub sp, #8	@ 00081082 82b0
.org 0x81084
	adds r7, r0, #0	@ 00081084 071c
.org 0x81086
	ldrb r1, [r7, #10]	@ 00081086 b97a
.org 0x81088
	movs r0, #254	@ 00081088 fe20
.org 0x8108a
	ands r0, r1	@ 0008108a 0840
.org 0x8108c
	movs r1, #0	@ 0008108c 0021
.org 0x8108e
	strb r0, [r7, #10]	@ 0008108e b872
.org 0x81090
	adds r0, r7, #0	@ 00081090 381c
.org 0x81092
	adds r0, #140	@ 00081092 8c30
.org 0x81094
	str r1, [r0, #0]	@ 00081094 0160
.org 0x81096
	adds r0, #4	@ 00081096 0430
.org 0x81098
	str r1, [r0, #0]	@ 00081098 0160
.org 0x8109a
	adds r0, #4	@ 0008109a 0430
.org 0x8109c
	strb r1, [r0, #0]	@ 0008109c 0170
.org 0x8109e
	ldrb r1, [r7, #10]	@ 0008109e b97a
.org 0x810a0
	movs r0, #251	@ 000810a0 fb20
.org 0x810a2
	ands r0, r1	@ 000810a2 0840
.org 0x810a4
	strb r0, [r7, #10]	@ 000810a4 b872
.org 0x810a6
	ldr r2, [r7, #84]	@ 000810a6 7a6d
.org 0x810a8
	ldr r6, [pc, #128]	@ 000810a8 204e
.org 0x810aa
	ldr r0, [r6, #0]	@ 000810aa 3068
.org 0x810ac
	ldr r4, [pc, #128]	@ 000810ac 204c
.org 0x810ae
	muls r0, r4	@ 000810ae 6043
.org 0x810b0
	ldr r1, [pc, #128]	@ 000810b0 2049
.org 0x810b2
	adds r0, r0, r1	@ 000810b2 4018
.org 0x810b4
	lsls r0, r0, #1	@ 000810b4 4000
.org 0x810b6
	lsrs r5, r0, #1	@ 000810b6 4508
.org 0x810b8
	lsrs r0, r0, #17	@ 000810b8 400c
.org 0x810ba
	movs r3, #15	@ 000810ba 0f23
.org 0x810bc
	ands r0, r3	@ 000810bc 1840
.org 0x810be
	subs r0, #7	@ 000810be 0738
.org 0x810c0
	lsls r0, r0, #8	@ 000810c0 0002
.org 0x810c2
	adds r0, r0, r2	@ 000810c2 8018
.org 0x810c4
	str r0, [sp, #0]	@ 000810c4 0090
.org 0x810c6
	ldr r2, [r7, #88]	@ 000810c6 ba6d
.org 0x810c8
	ldr r0, [pc, #108]	@ 000810c8 1b48
.org 0x810ca
	adds r2, r2, r0	@ 000810ca 1218
.org 0x810cc
	adds r0, r5, #0	@ 000810cc 281c
.org 0x810ce
	muls r0, r4	@ 000810ce 6043
.org 0x810d0
	adds r0, r0, r1	@ 000810d0 4018
.org 0x810d2
	lsls r0, r0, #1	@ 000810d2 4000
.org 0x810d4
	lsrs r1, r0, #1	@ 000810d4 4108
.org 0x810d6
	str r1, [r6, #0]	@ 000810d6 3160
.org 0x810d8
	lsrs r0, r0, #17	@ 000810d8 400c
.org 0x810da
	ands r0, r3	@ 000810da 1840
.org 0x810dc
	subs r0, #7	@ 000810dc 0738
.org 0x810de
	lsls r0, r0, #8	@ 000810de 0002
.org 0x810e0
	adds r0, r0, r2	@ 000810e0 8018
.org 0x810e2
	str r0, [sp, #4]	@ 000810e2 0190
.org 0x810e4
	movs r0, #1	@ 000810e4 0120
.org 0x810e6
	mov r1, sp	@ 000810e6 6946
.org 0x810e8
	bl 0xd0c88	@ 000810e8 4ff0cefd
.org 0x810ec
	adds r4, r7, #0	@ 000810ec 3c1c
.org 0x810ee
	adds r4, #84	@ 000810ee 5434
.org 0x810f0
	movs r0, #4	@ 000810f0 0420
.org 0x810f2
	movs r1, #34	@ 000810f2 2221
.org 0x810f4
	adds r2, r4, #0	@ 000810f4 221c
.org 0x810f6
	bl 0x2ab88	@ 000810f6 a9f747fd
.org 0x810fa
	ldr r2, [pc, #64]	@ 000810fa 104a
.org 0x810fc
	ldrh r1, [r2, #12]	@ 000810fc 9189
.org 0x810fe
	ldr r0, [pc, #64]	@ 000810fe 1048
.org 0x81100
	cmp r1, r0	@ 00081100 8142
.org 0x81102
	bhi.n 0x81108	@ 00081102 01d8
.org 0x81104
	adds r0, r1, #1	@ 00081104 481c
.org 0x81106
	strh r0, [r2, #12]	@ 00081106 9081
.org 0x81108
	adds r0, r7, #0	@ 00081108 381c
.org 0x8110a
	adds r1, r4, #0	@ 0008110a 211c
.org 0x8110c
	bl 0x2abe0	@ 0008110c a9f768fd
.org 0x81110
	ldr r1, [pc, #48]	@ 00081110 0c49
.org 0x81112
	ldrb r0, [r7, #9]	@ 00081112 787a
.org 0x81114
	lsls r0, r0, #2	@ 00081114 8000
.org 0x81116
	adds r0, r0, r1	@ 00081116 4018
.org 0x81118
	movs r1, #4	@ 00081118 0421
.org 0x8111a
	str r1, [r7, #12]	@ 0008111a f960
.org 0x8111c
	ldr r0, [r0, #0]	@ 0008111c 0068
.org 0x8111e
	ldr r0, [r0, #16]	@ 0008111e 0069
.org 0x81120
	str r0, [r7, #20]	@ 00081120 7861
.org 0x81122
	add sp, #8	@ 00081122 02b0
.org 0x81124
	pop {r4, r5, r6, r7}	@ 00081124 f0bc
.org 0x81126
	pop {r0}	@ 00081126 01bc
.org 0x81128
	bx r0	@ 00081128 0047
