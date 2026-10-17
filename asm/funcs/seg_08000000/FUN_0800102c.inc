@ FUN_0800102c  entry 0x0800102c  size 80
.thumb
.org 0x102c
FUN_0800102c:
	push {r4, r5, lr}	@ 0000102c 30b5
.org 0x102e
	sub sp, #4	@ 0000102e 81b0
.org 0x1030
	mov r1, sp	@ 00001030 6946
.org 0x1032
	ldr r0, [pc, #72]	@ 00001032 1248
.org 0x1034
	ldrh r0, [r0, #0]	@ 00001034 0088
.org 0x1036
	strh r0, [r1, #0]	@ 00001036 0880
.org 0x1038
	mov r0, sp	@ 00001038 6846
.org 0x103a
	ldrh r0, [r0, #0]	@ 0000103a 0088
.org 0x103c
	cmp r0, #159	@ 0000103c 9f28
.org 0x103e
	bls.n 0x1048	@ 0000103e 03d9
.org 0x1040
	mov r0, sp	@ 00001040 6846
.org 0x1042
	ldrh r0, [r0, #0]	@ 00001042 0088
.org 0x1044
	cmp r0, #227	@ 00001044 e328
.org 0x1046
	bne.n 0x1074	@ 00001046 15d1
.org 0x1048
	ldr r4, [pc, #52]	@ 00001048 0d4c
.org 0x104a
	ldr r2, [r4, #12]	@ 0000104a e268
.org 0x104c
	ldr r3, [r4, #4]	@ 0000104c 6368
.org 0x104e
	ldrh r1, [r4, #32]	@ 0000104e 218c
.org 0x1050
	cmp r1, #0	@ 00001050 0029
.org 0x1052
	beq.n 0x1072	@ 00001052 0ed0
.org 0x1054
	ldrh r0, [r2, #0]	@ 00001054 1088
.org 0x1056
	strh r0, [r3, #0]	@ 00001056 1880
.org 0x1058
	movs r5, #30	@ 00001058 1e25
.org 0x105a
	ldrsh r0, [r4, r5]	@ 0000105a 605f
.org 0x105c
	lsls r0, r0, #1	@ 0000105c 4000
.org 0x105e
	adds r3, r3, r0	@ 0000105e 1b18
.org 0x1060
	movs r5, #28	@ 00001060 1c25
.org 0x1062
	ldrsh r0, [r4, r5]	@ 00001062 605f
.org 0x1064
	lsls r0, r0, #1	@ 00001064 4000
.org 0x1066
	adds r2, r2, r0	@ 00001066 1218
.org 0x1068
	subs r0, r1, #1	@ 00001068 481e
.org 0x106a
	lsls r0, r0, #16	@ 0000106a 0004
.org 0x106c
	lsrs r1, r0, #16	@ 0000106c 010c
.org 0x106e
	cmp r1, #0	@ 0000106e 0029
.org 0x1070
	bne.n 0x1054	@ 00001070 f0d1
.org 0x1072
	str r2, [r4, #12]	@ 00001072 e260
.org 0x1074
	add sp, #4	@ 00001074 01b0
.org 0x1076
	pop {r4, r5}	@ 00001076 30bc
.org 0x1078
	pop {r0}	@ 00001078 01bc
.org 0x107a
	bx r0	@ 0000107a 0047
