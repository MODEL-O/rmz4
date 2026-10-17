@ FUN_0804cb08  entry 0x0804cb08  size 88
.thumb
.org 0x4cb08
FUN_0804cb08:
	push {r4, lr}	@ 0004cb08 10b5
.org 0x4cb0a
	adds r4, r0, #0	@ 0004cb0a 041c
.org 0x4cb0c
	bl 0x1cff0	@ 0004cb0c d0f770fa
.org 0x4cb10
	ldr r0, [r4, #88]	@ 0004cb10 a06d
.org 0x4cb12
	adds r0, #64	@ 0004cb12 4030
.org 0x4cb14
	str r0, [r4, #88]	@ 0004cb14 a065
.org 0x4cb16
	ldrb r1, [r4, #18]	@ 0004cb16 a17c
.org 0x4cb18
	movs r0, #1	@ 0004cb18 0120
.org 0x4cb1a
	ands r0, r1	@ 0004cb1a 0840
.org 0x4cb1c
	cmp r0, #0	@ 0004cb1c 0028
.org 0x4cb1e
	beq.n 0x4cb28	@ 0004cb1e 03d0
.org 0x4cb20
	ldrb r1, [r4, #10]	@ 0004cb20 a17a
.org 0x4cb22
	movs r0, #1	@ 0004cb22 0120
.org 0x4cb24
	orrs r0, r1	@ 0004cb24 0843
.org 0x4cb26
	b.n 0x4cb2e	@ 0004cb26 02e0
.org 0x4cb28
	ldrb r1, [r4, #10]	@ 0004cb28 a17a
.org 0x4cb2a
	movs r0, #254	@ 0004cb2a fe20
.org 0x4cb2c
	ands r0, r1	@ 0004cb2c 0840
.org 0x4cb2e
	strb r0, [r4, #10]	@ 0004cb2e a072
.org 0x4cb30
	ldrb r0, [r4, #18]	@ 0004cb30 a07c
.org 0x4cb32
	subs r0, #1	@ 0004cb32 0138
.org 0x4cb34
	strb r0, [r4, #18]	@ 0004cb34 a074
.org 0x4cb36
	lsls r0, r0, #24	@ 0004cb36 0006
.org 0x4cb38
	lsrs r0, r0, #24	@ 0004cb38 000e
.org 0x4cb3a
	cmp r0, #255	@ 0004cb3a ff28
.org 0x4cb3c
	bne.n 0x4cb5a	@ 0004cb3c 0dd1
.org 0x4cb3e
	adds r1, r4, #0	@ 0004cb3e 211c
.org 0x4cb40
	adds r1, #189	@ 0004cb40 bd31
.org 0x4cb42
	ldrb r0, [r1, #0]	@ 0004cb42 0878
.org 0x4cb44
	subs r0, #1	@ 0004cb44 0138
.org 0x4cb46
	strb r0, [r1, #0]	@ 0004cb46 0870
.org 0x4cb48
	ldr r1, [pc, #20]	@ 0004cb48 0549
.org 0x4cb4a
	ldrb r0, [r4, #9]	@ 0004cb4a 607a
.org 0x4cb4c
	lsls r0, r0, #2	@ 0004cb4c 8000
.org 0x4cb4e
	adds r0, r0, r1	@ 0004cb4e 4018
.org 0x4cb50
	movs r1, #2	@ 0004cb50 0221
.org 0x4cb52
	str r1, [r4, #12]	@ 0004cb52 e160
.org 0x4cb54
	ldr r0, [r0, #0]	@ 0004cb54 0068
.org 0x4cb56
	ldr r0, [r0, #8]	@ 0004cb56 8068
.org 0x4cb58
	str r0, [r4, #20]	@ 0004cb58 6061
.org 0x4cb5a
	pop {r4}	@ 0004cb5a 10bc
.org 0x4cb5c
	pop {r0}	@ 0004cb5c 01bc
.org 0x4cb5e
	bx r0	@ 0004cb5e 0047
