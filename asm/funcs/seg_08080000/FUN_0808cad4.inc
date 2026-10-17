@ FUN_0808cad4  entry 0x0808cad4  size 252
.thumb
.org 0x8cad4
FUN_0808cad4:
	push {r4, r5, r6, r7, lr}	@ 0008cad4 f0b5
.org 0x8cad6
	mov r7, r8	@ 0008cad6 4746
.org 0x8cad8
	push {r7}	@ 0008cad8 80b4
.org 0x8cada
	sub sp, #16	@ 0008cada 84b0
.org 0x8cadc
	adds r7, r0, #0	@ 0008cadc 071c
.org 0x8cade
	ldrb r0, [r7, #15]	@ 0008cade f87b
.org 0x8cae0
	cmp r0, #0	@ 0008cae0 0028
.org 0x8cae2
	bne.n 0x8cb70	@ 0008cae2 45d1
.org 0x8cae4
	ldr r0, [r7, #84]	@ 0008cae4 786d
.org 0x8cae6
	str r0, [sp, #0]	@ 0008cae6 0090
.org 0x8cae8
	ldr r0, [r7, #88]	@ 0008cae8 b86d
.org 0x8caea
	ldr r1, [pc, #228]	@ 0008caea 3949
.org 0x8caec
	adds r0, r0, r1	@ 0008caec 4018
.org 0x8caee
	str r0, [sp, #4]	@ 0008caee 0190
.org 0x8caf0
	movs r2, #128	@ 0008caf0 8022
.org 0x8caf2
	lsls r2, r2, #2	@ 0008caf2 9200
.org 0x8caf4
	adds r4, r7, #0	@ 0008caf4 3c1c
.org 0x8caf6
	adds r4, #185	@ 0008caf6 b934
.org 0x8caf8
	ldrb r3, [r4, #0]	@ 0008caf8 2378
.org 0x8cafa
	movs r0, #0	@ 0008cafa 0020
.org 0x8cafc
	mov r1, sp	@ 0008cafc 6946
.org 0x8cafe
	bl 0xd0dc4	@ 0008cafe 44f061f9
.org 0x8cb02
	ldrb r2, [r4, #0]	@ 0008cb02 2278
.org 0x8cb04
	adds r2, #1	@ 0008cb04 0132
.org 0x8cb06
	movs r0, #1	@ 0008cb06 0120
.org 0x8cb08
	ands r2, r0	@ 0008cb08 0240
.org 0x8cb0a
	ldr r0, [pc, #200]	@ 0008cb0a 3248
.org 0x8cb0c
	mov r8, r0	@ 0008cb0c 8046
.org 0x8cb0e
	ldr r0, [r0, #0]	@ 0008cb0e 0068
.org 0x8cb10
	ldr r5, [pc, #196]	@ 0008cb10 314d
.org 0x8cb12
	muls r0, r5	@ 0008cb12 6843
.org 0x8cb14
	ldr r3, [pc, #196]	@ 0008cb14 314b
.org 0x8cb16
	adds r0, r0, r3	@ 0008cb16 c018
.org 0x8cb18
	lsls r0, r0, #1	@ 0008cb18 4000
.org 0x8cb1a
	lsrs r6, r0, #1	@ 0008cb1a 4608
.org 0x8cb1c
	lsrs r0, r0, #17	@ 0008cb1c 400c
.org 0x8cb1e
	movs r4, #127	@ 0008cb1e 7f24
.org 0x8cb20
	ands r0, r4	@ 0008cb20 2040
.org 0x8cb22
	movs r1, #192	@ 0008cb22 c021
.org 0x8cb24
	lsls r1, r1, #1	@ 0008cb24 4900
.org 0x8cb26
	adds r0, r0, r1	@ 0008cb26 4018
.org 0x8cb28
	lsls r2, r2, #1	@ 0008cb28 5200
.org 0x8cb2a
	subs r2, #1	@ 0008cb2a 013a
.org 0x8cb2c
	muls r0, r2	@ 0008cb2c 5043
.org 0x8cb2e
	str r0, [sp, #8]	@ 0008cb2e 0290
.org 0x8cb30
	adds r0, r6, #0	@ 0008cb30 301c
.org 0x8cb32
	muls r0, r5	@ 0008cb32 6843
.org 0x8cb34
	adds r0, r0, r3	@ 0008cb34 c018
.org 0x8cb36
	lsls r0, r0, #1	@ 0008cb36 4000
.org 0x8cb38
	lsrs r1, r0, #1	@ 0008cb38 4108
.org 0x8cb3a
	mov r2, r8	@ 0008cb3a 4246
.org 0x8cb3c
	str r1, [r2, #0]	@ 0008cb3c 1160
.org 0x8cb3e
	lsrs r0, r0, #17	@ 0008cb3e 400c
.org 0x8cb40
	ands r0, r4	@ 0008cb40 2040
.org 0x8cb42
	movs r1, #224	@ 0008cb42 e021
.org 0x8cb44
	lsls r1, r1, #2	@ 0008cb44 8900
.org 0x8cb46
	adds r0, r0, r1	@ 0008cb46 4018
.org 0x8cb48
	negs r0, r0	@ 0008cb48 4042
.org 0x8cb4a
	add r1, sp, #8	@ 0008cb4a 02a9
.org 0x8cb4c
	str r0, [r1, #4]	@ 0008cb4c 4860
.org 0x8cb4e
	adds r0, r7, #0	@ 0008cb4e 381c
.org 0x8cb50
	adds r0, #84	@ 0008cb50 5430
.org 0x8cb52
	adds r2, r7, #0	@ 0008cb52 3a1c
.org 0x8cb54
	adds r2, #36	@ 0008cb54 2432
.org 0x8cb56
	ldrb r3, [r2, #0]	@ 0008cb56 1378
.org 0x8cb58
	movs r2, #0	@ 0008cb58 0022
.org 0x8cb5a
	bl 0xd9cc8	@ 0008cb5a 4df0b5f8
.org 0x8cb5e
	ldr r1, [pc, #128]	@ 0008cb5e 2049
.org 0x8cb60
	adds r0, r7, #0	@ 0008cb60 381c
.org 0x8cb62
	bl 0x1cf00	@ 0008cb62 90f7cdf9
.org 0x8cb66
	movs r0, #16	@ 0008cb66 1020
.org 0x8cb68
	strb r0, [r7, #18]	@ 0008cb68 b874
.org 0x8cb6a
	ldrb r0, [r7, #15]	@ 0008cb6a f87b
.org 0x8cb6c
	adds r0, #1	@ 0008cb6c 0130
.org 0x8cb6e
	strb r0, [r7, #15]	@ 0008cb6e f873
.org 0x8cb70
	adds r0, r7, #0	@ 0008cb70 381c
.org 0x8cb72
	bl 0x1cff0	@ 0008cb72 90f73dfa
.org 0x8cb76
	ldrb r0, [r7, #18]	@ 0008cb76 b87c
.org 0x8cb78
	subs r0, #1	@ 0008cb78 0138
.org 0x8cb7a
	strb r0, [r7, #18]	@ 0008cb7a b874
.org 0x8cb7c
	lsls r0, r0, #24	@ 0008cb7c 0006
.org 0x8cb7e
	cmp r0, #0	@ 0008cb7e 0028
.org 0x8cb80
	bne.n 0x8cbc4	@ 0008cb80 20d1
.org 0x8cb82
	movs r0, #42	@ 0008cb82 2a20
.org 0x8cb84
	bl 0x2b10	@ 0008cb84 75f7c4ff
.org 0x8cb88
	ldrb r1, [r7, #10]	@ 0008cb88 b97a
.org 0x8cb8a
	movs r0, #254	@ 0008cb8a fe20
.org 0x8cb8c
	ands r0, r1	@ 0008cb8c 0840
.org 0x8cb8e
	strb r0, [r7, #10]	@ 0008cb8e b872
.org 0x8cb90
	ldr r0, [r7, #84]	@ 0008cb90 786d
.org 0x8cb92
	str r0, [sp, #0]	@ 0008cb92 0090
.org 0x8cb94
	ldr r0, [r7, #88]	@ 0008cb94 b86d
.org 0x8cb96
	str r0, [sp, #4]	@ 0008cb96 0190
.org 0x8cb98
	movs r0, #1	@ 0008cb98 0120
.org 0x8cb9a
	mov r1, sp	@ 0008cb9a 6946
.org 0x8cb9c
	bl 0xd0c88	@ 0008cb9c 44f074f8
.org 0x8cba0
	adds r0, r7, #0	@ 0008cba0 381c
.org 0x8cba2
	bl 0x8cdcc	@ 0008cba2 00f013f9
.org 0x8cba6
	adds r2, r7, #0	@ 0008cba6 3a1c
.org 0x8cba8
	adds r2, #84	@ 0008cba8 5432
.org 0x8cbaa
	movs r0, #3	@ 0008cbaa 0320
.org 0x8cbac
	movs r1, #0	@ 0008cbac 0021
.org 0x8cbae
	bl 0x2ab88	@ 0008cbae 9df7ebff
.org 0x8cbb2
	ldr r1, [pc, #48]	@ 0008cbb2 0c49
.org 0x8cbb4
	ldrb r0, [r7, #9]	@ 0008cbb4 787a
.org 0x8cbb6
	lsls r0, r0, #2	@ 0008cbb6 8000
.org 0x8cbb8
	adds r0, r0, r1	@ 0008cbb8 4018
.org 0x8cbba
	movs r1, #4	@ 0008cbba 0421
.org 0x8cbbc
	str r1, [r7, #12]	@ 0008cbbc f960
.org 0x8cbbe
	ldr r0, [r0, #0]	@ 0008cbbe 0068
.org 0x8cbc0
	ldr r0, [r0, #16]	@ 0008cbc0 0069
.org 0x8cbc2
	str r0, [r7, #20]	@ 0008cbc2 7861
.org 0x8cbc4
	add sp, #16	@ 0008cbc4 04b0
.org 0x8cbc6
	pop {r3}	@ 0008cbc6 08bc
.org 0x8cbc8
	mov r8, r3	@ 0008cbc8 9846
.org 0x8cbca
	pop {r4, r5, r6, r7}	@ 0008cbca f0bc
.org 0x8cbcc
	pop {r0}	@ 0008cbcc 01bc
.org 0x8cbce
	bx r0	@ 0008cbce 0047
