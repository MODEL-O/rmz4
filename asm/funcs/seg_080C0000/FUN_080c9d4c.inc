@ FUN_080c9d4c  entry 0x080c9d4c  size 202
.thumb
.org 0xc9d4c
FUN_080c9d4c:
	push {r4, lr}	@ 000c9d4c 10b5
.org 0xc9d4e
	adds r4, r0, #0	@ 000c9d4e 041c
.org 0xc9d50
	adds r0, #193	@ 000c9d50 c130
.org 0xc9d52
	ldrb r0, [r0, #0]	@ 000c9d52 0078
.org 0xc9d54
	cmp r0, #255	@ 000c9d54 ff28
.org 0xc9d56
	bne.n 0xc9de4	@ 000c9d56 45d1
.org 0xc9d58
	ldr r1, [r4, #44]	@ 000c9d58 e16a
.org 0xc9d5a
	cmp r1, #0	@ 000c9d5a 0029
.org 0xc9d5c
	beq.n 0xc9d78	@ 000c9d5c 0cd0
.org 0xc9d5e
	adds r1, #193	@ 000c9d5e c131
.org 0xc9d60
	movs r0, #255	@ 000c9d60 ff20
.org 0xc9d62
	strb r0, [r1, #0]	@ 000c9d62 0870
.org 0xc9d64
	ldr r2, [r4, #44]	@ 000c9d64 e26a
.org 0xc9d66
	ldr r1, [pc, #44]	@ 000c9d66 0b49
.org 0xc9d68
	ldrb r0, [r2, #9]	@ 000c9d68 507a
.org 0xc9d6a
	lsls r0, r0, #2	@ 000c9d6a 8000
.org 0xc9d6c
	adds r0, r0, r1	@ 000c9d6c 4018
.org 0xc9d6e
	movs r1, #2	@ 000c9d6e 0221
.org 0xc9d70
	str r1, [r2, #12]	@ 000c9d70 d160
.org 0xc9d72
	ldr r0, [r0, #0]	@ 000c9d72 0068
.org 0xc9d74
	ldr r0, [r0, #8]	@ 000c9d74 8068
.org 0xc9d76
	str r0, [r2, #20]	@ 000c9d76 5061
.org 0xc9d78
	ldrb r0, [r4, #17]	@ 000c9d78 607c
.org 0xc9d7a
	cmp r0, #0	@ 000c9d7a 0028
.org 0xc9d7c
	bne.n 0xc9de4	@ 000c9d7c 32d1
.org 0xc9d7e
	adds r0, r4, #0	@ 000c9d7e 201c
.org 0xc9d80
	adds r0, #180	@ 000c9d80 b430
.org 0xc9d82
	ldrb r0, [r0, #0]	@ 000c9d82 0078
.org 0xc9d84
	cmp r0, #0	@ 000c9d84 0028
.org 0xc9d86
	bne.n 0xc9d9c	@ 000c9d86 09d1
.org 0xc9d88
	ldr r1, [pc, #12]	@ 000c9d88 0349
.org 0xc9d8a
	adds r0, r4, #0	@ 000c9d8a 201c
.org 0xc9d8c
	bl 0x1cf00	@ 000c9d8c 53f7b8f8
.org 0xc9d90
	b.n 0xc9ddc	@ 000c9d90 24e0
.org 0xc9d92
	.byte 0x00	@ 000c9d92 data
.org 0xc9d93
	.byte 0x00	@ 000c9d93 data
.org 0xc9d94
	.byte 0xf4,0x49,0x86,0x08	@ 000c9d94 data
.org 0xc9d98
	.byte 0x0f,0x75,0x00,0x00	@ 000c9d98 data
.org 0xc9d9c
	ldr r1, [pc, #24]	@ 000c9d9c 0649
.org 0xc9d9e
	adds r0, r4, #0	@ 000c9d9e 201c
.org 0xc9da0
	bl 0x1cf00	@ 000c9da0 53f7aef8
.org 0xc9da4
	ldrb r1, [r4, #10]	@ 000c9da4 a17a
.org 0xc9da6
	lsrs r0, r1, #5	@ 000c9da6 4809
.org 0xc9da8
	movs r2, #1	@ 000c9da8 0122
.org 0xc9daa
	bics r2, r0	@ 000c9daa 8243
.org 0xc9dac
	cmp r2, #0	@ 000c9dac 002a
.org 0xc9dae
	beq.n 0xc9dbc	@ 000c9dae 05d0
.org 0xc9db0
	movs r0, #32	@ 000c9db0 2020
.org 0xc9db2
	orrs r0, r1	@ 000c9db2 0843
.org 0xc9db4
	b.n 0xc9dc0	@ 000c9db4 04e0
.org 0xc9db6
	.byte 0x00	@ 000c9db6 data
.org 0xc9db7
	.byte 0x00	@ 000c9db7 data
.org 0xc9db8
	.byte 0x10,0x75,0x00,0x00	@ 000c9db8 data
.org 0xc9dbc
	movs r0, #223	@ 000c9dbc df20
.org 0xc9dbe
	ands r0, r1	@ 000c9dbe 0840
.org 0xc9dc0
	strb r0, [r4, #10]	@ 000c9dc0 a072
.org 0xc9dc2
	adds r0, r2, #0	@ 000c9dc2 101c
.org 0xc9dc4
	adds r1, r4, #0	@ 000c9dc4 211c
.org 0xc9dc6
	adds r1, #77	@ 000c9dc6 4d31
.org 0xc9dc8
	strb r0, [r1, #0]	@ 000c9dc8 0870
.org 0xc9dca
	adds r3, r4, #0	@ 000c9dca 231c
.org 0xc9dcc
	adds r3, #74	@ 000c9dcc 4a33
.org 0xc9dce
	lsls r0, r0, #5	@ 000c9dce 4001
.org 0xc9dd0
	ldrb r2, [r3, #0]	@ 000c9dd0 1a78
.org 0xc9dd2
	movs r1, #33	@ 000c9dd2 2121
.org 0xc9dd4
	negs r1, r1	@ 000c9dd4 4942
.org 0xc9dd6
	ands r1, r2	@ 000c9dd6 1140
.org 0xc9dd8
	orrs r1, r0	@ 000c9dd8 0143
.org 0xc9dda
	strb r1, [r3, #0]	@ 000c9dda 1970
.org 0xc9ddc
	adds r1, r4, #0	@ 000c9ddc 211c
.org 0xc9dde
	adds r1, #193	@ 000c9dde c131
.org 0xc9de0
	movs r0, #0	@ 000c9de0 0020
.org 0xc9de2
	strb r0, [r1, #0]	@ 000c9de2 0870
.org 0xc9de4
	ldr r0, [r4, #40]	@ 000c9de4 a06a
.org 0xc9de6
	cmp r0, #0	@ 000c9de6 0028
.org 0xc9de8
	beq.n 0xc9df0	@ 000c9de8 02d0
.org 0xc9dea
	adds r0, r4, #0	@ 000c9dea 201c
.org 0xc9dec
	bl 0xca468	@ 000c9dec 00f03cfb
.org 0xc9df0
	adds r0, r4, #0	@ 000c9df0 201c
.org 0xc9df2
	adds r0, #115	@ 000c9df2 7330
.org 0xc9df4
	ldrb r0, [r0, #0]	@ 000c9df4 0078
.org 0xc9df6
	adds r1, r4, #0	@ 000c9df6 211c
.org 0xc9df8
	adds r1, #193	@ 000c9df8 c131
.org 0xc9dfa
	cmp r0, #3	@ 000c9dfa 0328
.org 0xc9dfc
	bne.n 0xc9e02	@ 000c9dfc 01d1
.org 0xc9dfe
	movs r0, #1	@ 000c9dfe 0120
.org 0xc9e00
	strb r0, [r1, #0]	@ 000c9e00 0870
.org 0xc9e02
	ldrb r0, [r1, #0]	@ 000c9e02 0878
.org 0xc9e04
	cmp r0, #0	@ 000c9e04 0028
.org 0xc9e06
	beq.n 0xc9e1a	@ 000c9e06 08d0
.org 0xc9e08
	ldr r1, [pc, #28]	@ 000c9e08 0749
.org 0xc9e0a
	ldrb r0, [r4, #9]	@ 000c9e0a 607a
.org 0xc9e0c
	lsls r0, r0, #2	@ 000c9e0c 8000
.org 0xc9e0e
	adds r0, r0, r1	@ 000c9e0e 4018
.org 0xc9e10
	movs r1, #4	@ 000c9e10 0421
.org 0xc9e12
	str r1, [r4, #12]	@ 000c9e12 e160
.org 0xc9e14
	ldr r0, [r0, #0]	@ 000c9e14 0068
