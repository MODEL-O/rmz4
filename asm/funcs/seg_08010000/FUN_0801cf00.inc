@ FUN_0801cf00  entry 0x0801cf00  size 174
.thumb
.org 0x1cf00
FUN_0801cf00:
	push {r4, r5, lr}	@ 0001cf00 30b5
.org 0x1cf02
	mov ip, r0	@ 0001cf02 8446
.org 0x1cf04
	lsls r1, r1, #16	@ 0001cf04 0904
.org 0x1cf06
	lsrs r5, r1, #16	@ 0001cf06 0d0c
.org 0x1cf08
	lsrs r2, r1, #24	@ 0001cf08 0a0e
.org 0x1cf0a
	ldrb r0, [r0, #30]	@ 0001cf0a 807f
.org 0x1cf0c
	cmp r2, r0	@ 0001cf0c 8242
.org 0x1cf0e
	beq.n 0x1cf48	@ 0001cf0e 1bd0
.org 0x1cf10
	mov r3, ip	@ 0001cf10 6346
.org 0x1cf12
	ldrb r1, [r3, #11]	@ 0001cf12 d97a
.org 0x1cf14
	movs r0, #4	@ 0001cf14 0420
.org 0x1cf16
	ands r0, r1	@ 0001cf16 0840
.org 0x1cf18
	cmp r0, #0	@ 0001cf18 0028
.org 0x1cf1a
	beq.n 0x1cf30	@ 0001cf1a 09d0
.org 0x1cf1c
	lsls r0, r2, #2	@ 0001cf1c 9000
.org 0x1cf1e
	ldr r1, [pc, #12]	@ 0001cf1e 0349
.org 0x1cf20
	adds r0, r0, r1	@ 0001cf20 4018
.org 0x1cf22
	ldr r0, [r0, #0]	@ 0001cf22 0068
.org 0x1cf24
	str r0, [r3, #108]	@ 0001cf24 d866
.org 0x1cf26
	movs r0, #255	@ 0001cf26 ff20
.org 0x1cf28
	strb r0, [r3, #31]	@ 0001cf28 d877
.org 0x1cf2a
	b.n 0x1cf44	@ 0001cf2a 0be0
.org 0x1cf2c
	.byte 0x00,0x70,0x8c,0x08	@ 0001cf2c data
.org 0x1cf30
	lsls r1, r2, #2	@ 0001cf30 9100
.org 0x1cf32
	ldr r0, [pc, #128]	@ 0001cf32 2048
.org 0x1cf34
	adds r0, r1, r0	@ 0001cf34 0818
.org 0x1cf36
	ldr r0, [r0, #0]	@ 0001cf36 0068
.org 0x1cf38
	mov r3, ip	@ 0001cf38 6346
.org 0x1cf3a
	str r0, [r3, #108]	@ 0001cf3a d866
.org 0x1cf3c
	ldr r0, [pc, #120]	@ 0001cf3c 1e48
.org 0x1cf3e
	adds r1, r1, r0	@ 0001cf3e 0918
.org 0x1cf40
	ldr r0, [r1, #0]	@ 0001cf40 0868
.org 0x1cf42
	str r0, [r3, #60]	@ 0001cf42 d863
.org 0x1cf44
	mov r0, ip	@ 0001cf44 6046
.org 0x1cf46
	strb r2, [r0, #30]	@ 0001cf46 8277
.org 0x1cf48
	mov r3, ip	@ 0001cf48 6346
.org 0x1cf4a
	ldrb r1, [r3, #11]	@ 0001cf4a d97a
.org 0x1cf4c
	movs r0, #4	@ 0001cf4c 0420
.org 0x1cf4e
	ands r0, r1	@ 0001cf4e 0840
.org 0x1cf50
	cmp r0, #0	@ 0001cf50 0028
.org 0x1cf52
	bne.n 0x1cfa0	@ 0001cf52 25d1
.org 0x1cf54
	mov r4, ip	@ 0001cf54 6446
.org 0x1cf56
	adds r4, #52	@ 0001cf56 3434
.org 0x1cf58
	ldr r0, [pc, #96]	@ 0001cf58 1848
.org 0x1cf5a
	lsls r2, r2, #1	@ 0001cf5a 5200
.org 0x1cf5c
	adds r0, r2, r0	@ 0001cf5c 1018
.org 0x1cf5e
	ldrh r1, [r0, #0]	@ 0001cf5e 0188
.org 0x1cf60
	ldrh r0, [r3, #32]	@ 0001cf60 188c
.org 0x1cf62
	adds r1, r1, r0	@ 0001cf62 0918
.org 0x1cf64
	adds r3, #34	@ 0001cf64 2233
.org 0x1cf66
	ldr r0, [pc, #88]	@ 0001cf66 1648
.org 0x1cf68
	adds r2, r2, r0	@ 0001cf68 1218
.org 0x1cf6a
	ldrh r0, [r2, #0]	@ 0001cf6a 1088
.org 0x1cf6c
	ldrb r3, [r3, #0]	@ 0001cf6c 1b78
.org 0x1cf6e
	adds r0, r0, r3	@ 0001cf6e c018
.org 0x1cf70
	lsls r0, r0, #16	@ 0001cf70 0004
.org 0x1cf72
	lsrs r3, r0, #16	@ 0001cf72 030c
.org 0x1cf74
	lsls r1, r1, #22	@ 0001cf74 8905
.org 0x1cf76
	lsrs r1, r1, #22	@ 0001cf76 890d
.org 0x1cf78
	ldrh r2, [r4, #20]	@ 0001cf78 a28a
.org 0x1cf7a
	ldr r0, [pc, #72]	@ 0001cf7a 1248
.org 0x1cf7c
	ands r0, r2	@ 0001cf7c 1040
.org 0x1cf7e
	orrs r0, r1	@ 0001cf7e 0843
.org 0x1cf80
	strh r0, [r4, #20]	@ 0001cf80 a082
.org 0x1cf82
	mov r0, ip	@ 0001cf82 6046
.org 0x1cf84
	ldrb r1, [r0, #11]	@ 0001cf84 c17a
.org 0x1cf86
	movs r0, #32	@ 0001cf86 2020
.org 0x1cf88
	ands r0, r1	@ 0001cf88 0840
.org 0x1cf8a
	cmp r0, #0	@ 0001cf8a 0028
.org 0x1cf8c
	bne.n 0x1cfa0	@ 0001cf8c 08d1
.org 0x1cf8e
	lsls r2, r3, #4	@ 0001cf8e 1a01
.org 0x1cf90
	ldrb r1, [r4, #21]	@ 0001cf90 617d
.org 0x1cf92
	movs r0, #15	@ 0001cf92 0f20
.org 0x1cf94
	ands r0, r1	@ 0001cf94 0840
.org 0x1cf96
	orrs r0, r2	@ 0001cf96 1043
.org 0x1cf98
	strb r0, [r4, #21]	@ 0001cf98 6075
.org 0x1cf9a
	mov r0, ip	@ 0001cf9a 6046
.org 0x1cf9c
	adds r0, #35	@ 0001cf9c 2330
.org 0x1cf9e
	strb r3, [r0, #0]	@ 0001cf9e 0370
.org 0x1cfa0
	mov r0, ip	@ 0001cfa0 6046
.org 0x1cfa2
	adds r0, #108	@ 0001cfa2 6c30
.org 0x1cfa4
	lsls r1, r5, #24	@ 0001cfa4 2906
.org 0x1cfa6
	lsrs r1, r1, #24	@ 0001cfa6 090e
.org 0x1cfa8
	bl 0x34b8	@ 0001cfa8 e6f786fa
.org 0x1cfac
	pop {r4, r5}	@ 0001cfac 30bc
