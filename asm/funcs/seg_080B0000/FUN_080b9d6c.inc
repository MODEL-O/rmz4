@ FUN_080b9d6c  entry 0x080b9d6c  size 92
.thumb
.org 0xb9d6c
FUN_080b9d6c:
	push {r4, lr}	@ 000b9d6c 10b5
.org 0xb9d6e
	adds r4, r0, #0	@ 000b9d6e 041c
.org 0xb9d70
	bl 0xb9e30	@ 000b9d70 00f05ef8
.org 0xb9d74
	lsls r0, r0, #24	@ 000b9d74 0006
.org 0xb9d76
	lsrs r0, r0, #24	@ 000b9d76 000e
.org 0xb9d78
	adds r2, r0, #0	@ 000b9d78 021c
.org 0xb9d7a
	ldr r3, [pc, #76]	@ 000b9d7a 134b
.org 0xb9d7c
	adds r0, #64	@ 000b9d7c 4030
.org 0xb9d7e
	lsls r0, r0, #24	@ 000b9d7e 0006
.org 0xb9d80
	lsrs r0, r0, #23	@ 000b9d80 c00d
.org 0xb9d82
	adds r0, r0, r3	@ 000b9d82 c018
.org 0xb9d84
	movs r1, #0	@ 000b9d84 0021
.org 0xb9d86
	ldrsh r0, [r0, r1]	@ 000b9d86 405e
.org 0xb9d88
	lsls r0, r0, #9	@ 000b9d88 4002
.org 0xb9d8a
	negs r0, r0	@ 000b9d8a 4042
.org 0xb9d8c
	cmp r0, #0	@ 000b9d8c 0028
.org 0xb9d8e
	bge.n 0xb9d92	@ 000b9d8e 00da
.org 0xb9d90
	adds r0, #255	@ 000b9d90 ff30
.org 0xb9d92
	asrs r1, r0, #8	@ 000b9d92 0112
.org 0xb9d94
	ldr r0, [r4, #84]	@ 000b9d94 606d
.org 0xb9d96
	adds r0, r0, r1	@ 000b9d96 4018
.org 0xb9d98
	str r0, [r4, #84]	@ 000b9d98 6065
.org 0xb9d9a
	lsls r0, r2, #1	@ 000b9d9a 5000
.org 0xb9d9c
	adds r0, r0, r3	@ 000b9d9c c018
.org 0xb9d9e
	movs r1, #0	@ 000b9d9e 0021
.org 0xb9da0
	ldrsh r0, [r0, r1]	@ 000b9da0 405e
.org 0xb9da2
	lsls r0, r0, #9	@ 000b9da2 4002
.org 0xb9da4
	negs r0, r0	@ 000b9da4 4042
.org 0xb9da6
	cmp r0, #0	@ 000b9da6 0028
.org 0xb9da8
	bge.n 0xb9dac	@ 000b9da8 00da
.org 0xb9daa
	adds r0, #255	@ 000b9daa ff30
.org 0xb9dac
	asrs r1, r0, #8	@ 000b9dac 0112
.org 0xb9dae
	ldr r0, [r4, #88]	@ 000b9dae a06d
.org 0xb9db0
	adds r0, r0, r1	@ 000b9db0 4018
.org 0xb9db2
	str r0, [r4, #88]	@ 000b9db2 a065
.org 0xb9db4
	adds r0, r4, #0	@ 000b9db4 201c
.org 0xb9db6
	adds r0, #182	@ 000b9db6 b630
.org 0xb9db8
	movs r1, #0	@ 000b9db8 0021
.org 0xb9dba
	strb r1, [r0, #0]	@ 000b9dba 0170
.org 0xb9dbc
	movs r0, #2	@ 000b9dbc 0220
.org 0xb9dbe
	strb r0, [r4, #13]	@ 000b9dbe 6073
.org 0xb9dc0
	strb r1, [r4, #14]	@ 000b9dc0 a173
.org 0xb9dc2
	pop {r4}	@ 000b9dc2 10bc
.org 0xb9dc4
	pop {r0}	@ 000b9dc4 01bc
.org 0xb9dc6
	bx r0	@ 000b9dc6 0047
