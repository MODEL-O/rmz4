@ FUN_08091d1c  entry 0x08091d1c  size 172
.thumb
.org 0x91d1c
FUN_08091d1c:
	push {r4, lr}	@ 00091d1c 10b5
.org 0x91d1e
	adds r4, r0, #0	@ 00091d1e 041c
.org 0x91d20
	ldrb r1, [r4, #14]	@ 00091d20 a17b
.org 0x91d22
	cmp r1, #0	@ 00091d22 0029
.org 0x91d24
	bne.n 0x91d48	@ 00091d24 10d1
.org 0x91d26
	adds r0, #140	@ 00091d26 8c30
.org 0x91d28
	str r1, [r0, #0]	@ 00091d28 0160
.org 0x91d2a
	adds r0, #4	@ 00091d2a 0430
.org 0x91d2c
	str r1, [r0, #0]	@ 00091d2c 0160
.org 0x91d2e
	adds r0, #4	@ 00091d2e 0430
.org 0x91d30
	strb r1, [r0, #0]	@ 00091d30 0170
.org 0x91d32
	ldrb r1, [r4, #10]	@ 00091d32 a17a
.org 0x91d34
	movs r0, #251	@ 00091d34 fb20
.org 0x91d36
	ands r0, r1	@ 00091d36 0840
.org 0x91d38
	strb r0, [r4, #10]	@ 00091d38 a072
.org 0x91d3a
	movs r0, #128	@ 00091d3a 8020
.org 0x91d3c
	strb r0, [r4, #18]	@ 00091d3c a074
.org 0x91d3e
	ldr r0, [pc, #44]	@ 00091d3e 0b48
.org 0x91d40
	str r0, [r4, #96]	@ 00091d40 2066
.org 0x91d42
	ldrb r0, [r4, #14]	@ 00091d42 a07b
.org 0x91d44
	adds r0, #1	@ 00091d44 0130
.org 0x91d46
	strb r0, [r4, #14]	@ 00091d46 a073
.org 0x91d48
	adds r0, r4, #0	@ 00091d48 201c
.org 0x91d4a
	bl 0x1cff0	@ 00091d4a 8bf751f9
.org 0x91d4e
	ldr r0, [r4, #88]	@ 00091d4e a06d
.org 0x91d50
	ldr r1, [r4, #96]	@ 00091d50 216e
.org 0x91d52
	adds r0, r0, r1	@ 00091d52 4018
.org 0x91d54
	str r0, [r4, #88]	@ 00091d54 a065
.org 0x91d56
	adds r1, #64	@ 00091d56 4031
.org 0x91d58
	str r1, [r4, #96]	@ 00091d58 2166
.org 0x91d5a
	ldrb r1, [r4, #18]	@ 00091d5a a17c
.org 0x91d5c
	movs r0, #1	@ 00091d5c 0120
.org 0x91d5e
	ands r0, r1	@ 00091d5e 0840
.org 0x91d60
	cmp r0, #0	@ 00091d60 0028
.org 0x91d62
	beq.n 0x91d70	@ 00091d62 05d0
.org 0x91d64
	ldrb r1, [r4, #10]	@ 00091d64 a17a
.org 0x91d66
	movs r0, #1	@ 00091d66 0120
.org 0x91d68
	orrs r0, r1	@ 00091d68 0843
.org 0x91d6a
	b.n 0x91d76	@ 00091d6a 04e0
.org 0x91d6c
	.byte 0x00,0xfd,0xff,0xff	@ 00091d6c data
.org 0x91d70
	ldrb r1, [r4, #10]	@ 00091d70 a17a
.org 0x91d72
	movs r0, #254	@ 00091d72 fe20
.org 0x91d74
	ands r0, r1	@ 00091d74 0840
.org 0x91d76
	strb r0, [r4, #10]	@ 00091d76 a072
.org 0x91d78
	ldrb r0, [r4, #18]	@ 00091d78 a07c
.org 0x91d7a
	subs r0, #1	@ 00091d7a 0138
.org 0x91d7c
	movs r2, #0	@ 00091d7c 0022
.org 0x91d7e
	strb r0, [r4, #18]	@ 00091d7e a074
.org 0x91d80
	lsls r0, r0, #24	@ 00091d80 0006
.org 0x91d82
	lsrs r0, r0, #24	@ 00091d82 000e
.org 0x91d84
	cmp r0, #255	@ 00091d84 ff28
.org 0x91d86
	bne.n 0x91dc6	@ 00091d86 1ed1
.org 0x91d88
	ldr r1, [r4, #40]	@ 00091d88 a16a
.org 0x91d8a
	adds r1, #213	@ 00091d8a d531
.org 0x91d8c
	ldrb r0, [r1, #0]	@ 00091d8c 0878
.org 0x91d8e
	subs r0, #1	@ 00091d8e 0138
.org 0x91d90
	strb r0, [r1, #0]	@ 00091d90 0870
.org 0x91d92
	ldrb r1, [r4, #10]	@ 00091d92 a17a
.org 0x91d94
	movs r0, #254	@ 00091d94 fe20
.org 0x91d96
	ands r0, r1	@ 00091d96 0840
.org 0x91d98
	movs r1, #253	@ 00091d98 fd21
.org 0x91d9a
	ands r0, r1	@ 00091d9a 0840
.org 0x91d9c
	strb r0, [r4, #10]	@ 00091d9c a072
.org 0x91d9e
	adds r0, r4, #0	@ 00091d9e 201c
.org 0x91da0
	adds r0, #140	@ 00091da0 8c30
.org 0x91da2
	str r2, [r0, #0]	@ 00091da2 0260
.org 0x91da4
	adds r0, #4	@ 00091da4 0430
.org 0x91da6
	str r2, [r0, #0]	@ 00091da6 0260
.org 0x91da8
	adds r0, #4	@ 00091da8 0430
.org 0x91daa
	strb r2, [r0, #0]	@ 00091daa 0270
.org 0x91dac
	ldrb r1, [r4, #10]	@ 00091dac a17a
.org 0x91dae
	movs r0, #251	@ 00091dae fb20
.org 0x91db0
	ands r0, r1	@ 00091db0 0840
.org 0x91db2
	strb r0, [r4, #10]	@ 00091db2 a072
.org 0x91db4
	ldr r1, [pc, #20]	@ 00091db4 0549
.org 0x91db6
	ldrb r0, [r4, #9]	@ 00091db6 607a
.org 0x91db8
	lsls r0, r0, #2	@ 00091db8 8000
.org 0x91dba
	adds r0, r0, r1	@ 00091dba 4018
.org 0x91dbc
	movs r1, #3	@ 00091dbc 0321
.org 0x91dbe
	str r1, [r4, #12]	@ 00091dbe e160
.org 0x91dc0
	ldr r0, [r0, #0]	@ 00091dc0 0068
.org 0x91dc2
	ldr r0, [r0, #12]	@ 00091dc2 c068
.org 0x91dc4
	str r0, [r4, #20]	@ 00091dc4 6061
.org 0x91dc6
	pop {r4}	@ 00091dc6 10bc
