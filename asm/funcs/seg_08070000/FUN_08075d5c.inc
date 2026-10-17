@ FUN_08075d5c  entry 0x08075d5c  size 138
.thumb
.org 0x75d5c
FUN_08075d5c:
	push {r4, r5, lr}	@ 00075d5c 30b5
.org 0x75d5e
	adds r4, r0, #0	@ 00075d5e 041c
.org 0x75d60
	ldrb r5, [r4, #14]	@ 00075d60 a57b
.org 0x75d62
	cmp r5, #0	@ 00075d62 002d
.org 0x75d64
	bne.n 0x75d88	@ 00075d64 10d1
.org 0x75d66
	ldr r1, [pc, #80]	@ 00075d66 1449
.org 0x75d68
	bl 0x1cf00	@ 00075d68 a7f7caf8
.org 0x75d6c
	movs r0, #217	@ 00075d6c d920
.org 0x75d6e
	bl 0x2b10	@ 00075d6e 8cf7cffe
.org 0x75d72
	adds r0, r4, #0	@ 00075d72 201c
.org 0x75d74
	adds r0, #116	@ 00075d74 7430
.org 0x75d76
	ldr r1, [pc, #68]	@ 00075d76 1149
.org 0x75d78
	bl 0x5784	@ 00075d78 8ff704fd
.org 0x75d7c
	movs r0, #12	@ 00075d7c 0c20
.org 0x75d7e
	strb r0, [r4, #18]	@ 00075d7e a074
.org 0x75d80
	strb r5, [r4, #15]	@ 00075d80 e573
.org 0x75d82
	ldrb r0, [r4, #14]	@ 00075d82 a07b
.org 0x75d84
	adds r0, #1	@ 00075d84 0130
.org 0x75d86
	strb r0, [r4, #14]	@ 00075d86 a073
.org 0x75d88
	adds r0, r4, #0	@ 00075d88 201c
.org 0x75d8a
	bl 0x1cff0	@ 00075d8a a7f731f9
.org 0x75d8e
	ldrb r1, [r4, #15]	@ 00075d8e e17b
.org 0x75d90
	adds r0, r1, #0	@ 00075d90 081c
.org 0x75d92
	cmp r0, #0	@ 00075d92 0028
.org 0x75d94
	bne.n 0x75dc4	@ 00075d94 16d1
.org 0x75d96
	adds r0, r4, #0	@ 00075d96 201c
.org 0x75d98
	adds r0, #113	@ 00075d98 7130
.org 0x75d9a
	ldrb r0, [r0, #0]	@ 00075d9a 0078
.org 0x75d9c
	lsls r0, r0, #24	@ 00075d9c 0006
.org 0x75d9e
	asrs r0, r0, #24	@ 00075d9e 0016
.org 0x75da0
	cmp r0, #3	@ 00075da0 0328
.org 0x75da2
	ble.n 0x75dee	@ 00075da2 24dd
.org 0x75da4
	adds r0, r4, #0	@ 00075da4 201c
.org 0x75da6
	adds r0, #116	@ 00075da6 7430
.org 0x75da8
	ldr r1, [pc, #20]	@ 00075da8 0549
.org 0x75daa
	bl 0x5784	@ 00075daa 8ff7ebfc
.org 0x75dae
	ldrb r0, [r4, #15]	@ 00075dae e07b
.org 0x75db0
	adds r0, #1	@ 00075db0 0130
.org 0x75db2
	strb r0, [r4, #15]	@ 00075db2 e073
.org 0x75db4
	b.n 0x75dee	@ 00075db4 1be0
.org 0x75db6
	.byte 0x00	@ 00075db6 data
.org 0x75db7
	.byte 0x00	@ 00075db7 data
.org 0x75db8
	.byte 0x07,0xaf,0x00,0x00	@ 00075db8 data
.org 0x75dbc
	.byte 0xac,0xce,0x85,0x08	@ 00075dbc data
.org 0x75dc0
	.byte 0xdc,0xce,0x85,0x08	@ 00075dc0 data
.org 0x75dc4
	cmp r0, #1	@ 00075dc4 0128
.org 0x75dc6
	bne.n 0x75dd8	@ 00075dc6 07d1
.org 0x75dc8
	adds r0, r4, #0	@ 00075dc8 201c
.org 0x75dca
	adds r0, #115	@ 00075dca 7330
.org 0x75dcc
	ldrb r0, [r0, #0]	@ 00075dcc 0078
.org 0x75dce
	cmp r0, #4	@ 00075dce 0428
.org 0x75dd0
	bne.n 0x75dee	@ 00075dd0 0dd1
.org 0x75dd2
	adds r0, r1, #1	@ 00075dd2 481c
.org 0x75dd4
	strb r0, [r4, #15]	@ 00075dd4 e073
.org 0x75dd6
	b.n 0x75dee	@ 00075dd6 0ae0
.org 0x75dd8
	ldrb r0, [r4, #18]	@ 00075dd8 a07c
.org 0x75dda
	subs r0, #1	@ 00075dda 0138
.org 0x75ddc
	strb r0, [r4, #18]	@ 00075ddc a074
.org 0x75dde
	lsls r0, r0, #24	@ 00075dde 0006
.org 0x75de0
	lsrs r0, r0, #24	@ 00075de0 000e
.org 0x75de2
	cmp r0, #255	@ 00075de2 ff28
.org 0x75de4
	bne.n 0x75dee	@ 00075de4 03d1
