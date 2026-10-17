@ FUN_0807ea4c  entry 0x0807ea4c  size 68
.thumb
.org 0x7ea4c
FUN_0807ea4c:
	push {r4, lr}	@ 0007ea4c 10b5
.org 0x7ea4e
	adds r4, r0, #0	@ 0007ea4e 041c
.org 0x7ea50
	adds r4, #192	@ 0007ea50 c034
.org 0x7ea52
	bl 0x7ea9c	@ 0007ea52 00f023f8
.org 0x7ea56
	lsls r0, r0, #24	@ 0007ea56 0006
.org 0x7ea58
	movs r2, #0	@ 0007ea58 0022
.org 0x7ea5a
	ldr r1, [pc, #52]	@ 0007ea5a 0d49
.org 0x7ea5c
	lsrs r0, r0, #22	@ 0007ea5c 800d
.org 0x7ea5e
	adds r3, r0, r1	@ 0007ea5e 4318
.org 0x7ea60
	adds r0, r4, r2	@ 0007ea60 a018
.org 0x7ea62
	ldr r1, [r3, #0]	@ 0007ea62 1968
.org 0x7ea64
	adds r1, r1, r2	@ 0007ea64 8918
.org 0x7ea66
	ldrb r1, [r1, #0]	@ 0007ea66 0978
.org 0x7ea68
	strb r1, [r0, #0]	@ 0007ea68 0170
.org 0x7ea6a
	adds r2, #1	@ 0007ea6a 0132
.org 0x7ea6c
	cmp r2, #6	@ 0007ea6c 062a
.org 0x7ea6e
	ble.n 0x7ea60	@ 0007ea6e f7dd
.org 0x7ea70
	ldr r0, [pc, #32]	@ 0007ea70 0848
.org 0x7ea72
	ldr r0, [r0, #0]	@ 0007ea72 0068
.org 0x7ea74
	ldrb r0, [r0, #1]	@ 0007ea74 4078
.org 0x7ea76
	cmp r0, #4	@ 0007ea76 0428
.org 0x7ea78
	bls.n 0x7ea86	@ 0007ea78 05d9
.org 0x7ea7a
	ldr r0, [pc, #28]	@ 0007ea7a 0748
.org 0x7ea7c
	ldrb r1, [r0, #4]	@ 0007ea7c 0179
.org 0x7ea7e
	movs r0, #4	@ 0007ea7e 0420
.org 0x7ea80
	ands r0, r1	@ 0007ea80 0840
.org 0x7ea82
	cmp r0, #0	@ 0007ea82 0028
.org 0x7ea84
	beq.n 0x7ea8a	@ 0007ea84 01d0
.org 0x7ea86
	movs r0, #0	@ 0007ea86 0020
.org 0x7ea88
	strb r0, [r4, #6]	@ 0007ea88 a071
.org 0x7ea8a
	pop {r4}	@ 0007ea8a 10bc
.org 0x7ea8c
	pop {r0}	@ 0007ea8c 01bc
.org 0x7ea8e
	bx r0	@ 0007ea8e 0047
