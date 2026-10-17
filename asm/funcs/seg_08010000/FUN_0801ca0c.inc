@ FUN_0801ca0c  entry 0x0801ca0c  size 280
.thumb
.org 0x1ca0c
FUN_0801ca0c:
	push {r4, r5, r6, r7, lr}	@ 0001ca0c f0b5
.org 0x1ca0e
	mov r7, r9	@ 0001ca0e 4f46
.org 0x1ca10
	mov r6, r8	@ 0001ca10 4646
.org 0x1ca12
	push {r6, r7}	@ 0001ca12 c0b4
.org 0x1ca14
	adds r6, r0, #0	@ 0001ca14 061c
.org 0x1ca16
	mov r9, r1	@ 0001ca16 8946
.org 0x1ca18
	bl 0x54b4	@ 0001ca18 e8f74cfd
.org 0x1ca1c
	ldr r0, [r6, #12]	@ 0001ca1c f068
.org 0x1ca1e
	ldr r0, [r0, #4]	@ 0001ca1e 4068
.org 0x1ca20
	str r0, [r6, #12]	@ 0001ca20 f060
.org 0x1ca22
	adds r5, r0, #0	@ 0001ca22 051c
.org 0x1ca24
	adds r0, r6, #0	@ 0001ca24 301c
.org 0x1ca26
	adds r0, #20	@ 0001ca26 1430
.org 0x1ca28
	cmp r5, r0	@ 0001ca28 8542
.org 0x1ca2a
	beq.n 0x1cb24	@ 0001ca2a 7bd0
.org 0x1ca2c
	movs r0, #1	@ 0001ca2c 0120
.org 0x1ca2e
	mov r8, r0	@ 0001ca2e 8046
.org 0x1ca30
	ldrb r1, [r5, #10]	@ 0001ca30 a97a
.org 0x1ca32
	mov r0, r8	@ 0001ca32 4046
.org 0x1ca34
	ands r0, r1	@ 0001ca34 0840
.org 0x1ca36
	cmp r0, #0	@ 0001ca36 0028
.org 0x1ca38
	beq.n 0x1cb14	@ 0001ca38 6cd0
.org 0x1ca3a
	adds r4, r5, #0	@ 0001ca3a 2c1c
.org 0x1ca3c
	adds r4, #52	@ 0001ca3c 3434
.org 0x1ca3e
	movs r0, #8	@ 0001ca3e 0820
.org 0x1ca40
	ands r0, r1	@ 0001ca40 0840
.org 0x1ca42
	cmp r0, #0	@ 0001ca42 0028
.org 0x1ca44
	beq.n 0x1cb04	@ 0001ca44 5ed0
.org 0x1ca46
	ldr r0, [pc, #36]	@ 0001ca46 0948
.org 0x1ca48
	ldrb r1, [r5, #29]	@ 0001ca48 697f
.org 0x1ca4a
	lsrs r2, r1, #5	@ 0001ca4a 4a09
.org 0x1ca4c
	lsls r2, r2, #2	@ 0001ca4c 9200
.org 0x1ca4e
	adds r2, r2, r0	@ 0001ca4e 1218
.org 0x1ca50
	movs r0, #31	@ 0001ca50 1f20
.org 0x1ca52
	ands r0, r1	@ 0001ca52 0840
.org 0x1ca54
	mov r1, r8	@ 0001ca54 4146
.org 0x1ca56
	lsls r1, r0	@ 0001ca56 8140
.org 0x1ca58
	ldr r0, [r2, #0]	@ 0001ca58 1068
.org 0x1ca5a
	ands r0, r1	@ 0001ca5a 0840
.org 0x1ca5c
	cmp r0, #0	@ 0001ca5c 0028
.org 0x1ca5e
	beq.n 0x1ca70	@ 0001ca5e 07d0
.org 0x1ca60
	ldrb r0, [r4, #21]	@ 0001ca60 607d
.org 0x1ca62
	movs r1, #15	@ 0001ca62 0f21
.org 0x1ca64
	ands r1, r0	@ 0001ca64 0140
.org 0x1ca66
	movs r0, #208	@ 0001ca66 d020
.org 0x1ca68
	b.n 0x1ca7e	@ 0001ca68 09e0
.org 0x1ca6a
	.byte 0x00	@ 0001ca6a data
.org 0x1ca6b
	.byte 0x00	@ 0001ca6b data
.org 0x1ca6c
	.byte 0x10,0xdc,0x02,0x02	@ 0001ca6c data
.org 0x1ca70
	adds r0, r5, #0	@ 0001ca70 281c
.org 0x1ca72
	adds r0, #35	@ 0001ca72 2330
.org 0x1ca74
	ldrb r0, [r0, #0]	@ 0001ca74 0078
.org 0x1ca76
	lsls r0, r0, #4	@ 0001ca76 0001
.org 0x1ca78
	ldrb r2, [r4, #21]	@ 0001ca78 627d
.org 0x1ca7a
	movs r1, #15	@ 0001ca7a 0f21
.org 0x1ca7c
	ands r1, r2	@ 0001ca7c 1140
.org 0x1ca7e
	orrs r1, r0	@ 0001ca7e 0143
.org 0x1ca80
	strb r1, [r4, #21]	@ 0001ca80 6175
.org 0x1ca82
	ldrb r1, [r5, #10]	@ 0001ca82 a97a
.org 0x1ca84
	movs r0, #64	@ 0001ca84 4020
.org 0x1ca86
	ands r0, r1	@ 0001ca86 0840
.org 0x1ca88
	cmp r0, #0	@ 0001ca88 0028
.org 0x1ca8a
	beq.n 0x1caee	@ 0001ca8a 30d0
.org 0x1ca8c
	ldr r3, [pc, #64]	@ 0001ca8c 104b
.org 0x1ca8e
	ldrb r2, [r3, #0]	@ 0001ca8e 1a78
.org 0x1ca90
	movs r0, #31	@ 0001ca90 1f20
.org 0x1ca92
	ands r2, r0	@ 0001ca92 0240
.org 0x1ca94
	lsls r2, r2, #1	@ 0001ca94 5200
.org 0x1ca96
	ldrb r0, [r4, #19]	@ 0001ca96 e07c
.org 0x1ca98
	movs r7, #63	@ 0001ca98 3f27
.org 0x1ca9a
	negs r7, r7	@ 0001ca9a 7f42
.org 0x1ca9c
	adds r1, r7, #0	@ 0001ca9c 391c
.org 0x1ca9e
	ands r0, r1	@ 0001ca9e 0840
.org 0x1caa0
	orrs r0, r2	@ 0001caa0 1043
.org 0x1caa2
	strb r0, [r4, #19]	@ 0001caa2 e074
.org 0x1caa4
	ldrb r0, [r3, #0]	@ 0001caa4 1878
.org 0x1caa6
	cmp r0, #30	@ 0001caa6 1e28
.org 0x1caa8
	bhi.n 0x1caae	@ 0001caa8 01d8
.org 0x1caaa
	adds r0, #1	@ 0001caaa 0130
.org 0x1caac
	strb r0, [r3, #0]	@ 0001caac 1870
.org 0x1caae
	ldrb r1, [r5, #11]	@ 0001caae e97a
.org 0x1cab0
	mov r0, r8	@ 0001cab0 4046
.org 0x1cab2
	ands r0, r1	@ 0001cab2 0840
.org 0x1cab4
	cmp r0, #0	@ 0001cab4 0028
.org 0x1cab6
	beq.n 0x1cae2	@ 0001cab6 14d0
.org 0x1cab8
	movs r0, #2	@ 0001cab8 0220
.org 0x1caba
	ands r0, r1	@ 0001caba 0840
.org 0x1cabc
	cmp r0, #0	@ 0001cabc 0028
.org 0x1cabe
	beq.n 0x1cad4	@ 0001cabe 09d0
.org 0x1cac0
	adds r0, r5, #0	@ 0001cac0 281c
.org 0x1cac2
	adds r0, #36	@ 0001cac2 2430
.org 0x1cac4
	ldrb r1, [r0, #0]	@ 0001cac4 0178
.org 0x1cac6
	adds r0, r4, #0	@ 0001cac6 201c
.org 0x1cac8
	bl 0x590	@ 0001cac8 e3f762fd
.org 0x1cacc
	b.n 0x1caee	@ 0001cacc 0fe0
.org 0x1cace
	.byte 0x00	@ 0001cace data
.org 0x1cacf
	.byte 0x00	@ 0001cacf data
.org 0x1cad0
	.byte 0x04,0xdc,0x02,0x02	@ 0001cad0 data
.org 0x1cad4
	adds r0, r5, #0	@ 0001cad4 281c
.org 0x1cad6
	adds r0, #36	@ 0001cad6 2430
.org 0x1cad8
	ldrb r1, [r0, #0]	@ 0001cad8 0178
.org 0x1cada
	adds r0, r4, #0	@ 0001cada 201c
.org 0x1cadc
	bl 0x590	@ 0001cadc e3f758fd
.org 0x1cae0
	b.n 0x1caee	@ 0001cae0 05e0
.org 0x1cae2
	adds r0, r5, #0	@ 0001cae2 281c
.org 0x1cae4
	adds r0, #36	@ 0001cae4 2430
.org 0x1cae6
	ldrb r1, [r0, #0]	@ 0001cae6 0178
.org 0x1cae8
	adds r0, r4, #0	@ 0001cae8 201c
.org 0x1caea
	bl 0x53c	@ 0001caea e3f727fd
.org 0x1caee
	ldrb r2, [r4, #21]	@ 0001caee 627d
.org 0x1caf0
	lsls r2, r2, #28	@ 0001caf0 1207
.org 0x1caf2
	lsrs r2, r2, #30	@ 0001caf2 920f
.org 0x1caf4
	adds r0, r5, #0	@ 0001caf4 281c
.org 0x1caf6
	adds r0, #37	@ 0001caf6 2530
.org 0x1caf8
	ldrb r3, [r0, #0]	@ 0001caf8 0378
.org 0x1cafa
	mov r0, r9	@ 0001cafa 4846
.org 0x1cafc
	adds r1, r4, #0	@ 0001cafc 211c
.org 0x1cafe
	bl 0x33fc	@ 0001cafe e6f77dfc
.org 0x1cb02
	b.n 0x1cb14	@ 0001cb02 07e0
.org 0x1cb04
	adds r0, r5, #0	@ 0001cb04 281c
.org 0x1cb06
	adds r0, #37	@ 0001cb06 2530
.org 0x1cb08
	ldrb r3, [r0, #0]	@ 0001cb08 0378
.org 0x1cb0a
	mov r0, r9	@ 0001cb0a 4846
.org 0x1cb0c
	adds r1, r4, #0	@ 0001cb0c 211c
.org 0x1cb0e
	movs r2, #0	@ 0001cb0e 0022
.org 0x1cb10
	bl 0x33fc	@ 0001cb10 e6f774fc
.org 0x1cb14
	ldr r0, [r6, #12]	@ 0001cb14 f068
.org 0x1cb16
	ldr r0, [r0, #4]	@ 0001cb16 4068
.org 0x1cb18
	str r0, [r6, #12]	@ 0001cb18 f060
.org 0x1cb1a
	adds r5, r0, #0	@ 0001cb1a 051c
.org 0x1cb1c
	adds r0, r6, #0	@ 0001cb1c 301c
.org 0x1cb1e
	adds r0, #20	@ 0001cb1e 1430
.org 0x1cb20
	cmp r5, r0	@ 0001cb20 8542
.org 0x1cb22
	bne.n 0x1ca30	@ 0001cb22 85d1
