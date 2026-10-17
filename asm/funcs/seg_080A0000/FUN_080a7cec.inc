@ FUN_080a7cec  entry 0x080a7cec  size 214
.thumb
.org 0xa7cec
FUN_080a7cec:
	push {r4, lr}	@ 000a7cec 10b5
.org 0xa7cee
	adds r4, r0, #0	@ 000a7cee 041c
.org 0xa7cf0
	ldrb r1, [r4, #14]	@ 000a7cf0 a17b
.org 0xa7cf2
	cmp r1, #0	@ 000a7cf2 0029
.org 0xa7cf4
	bne.n 0xa7d14	@ 000a7cf4 0ed1
.org 0xa7cf6
	strb r1, [r4, #18]	@ 000a7cf6 a174
.org 0xa7cf8
	str r1, [r4, #96]	@ 000a7cf8 2166
.org 0xa7cfa
	adds r0, #140	@ 000a7cfa 8c30
.org 0xa7cfc
	str r1, [r0, #0]	@ 000a7cfc 0160
.org 0xa7cfe
	adds r0, #4	@ 000a7cfe 0430
.org 0xa7d00
	str r1, [r0, #0]	@ 000a7d00 0160
.org 0xa7d02
	adds r0, #4	@ 000a7d02 0430
.org 0xa7d04
	strb r1, [r0, #0]	@ 000a7d04 0170
.org 0xa7d06
	ldrb r1, [r4, #10]	@ 000a7d06 a17a
.org 0xa7d08
	movs r0, #251	@ 000a7d08 fb20
.org 0xa7d0a
	ands r0, r1	@ 000a7d0a 0840
.org 0xa7d0c
	strb r0, [r4, #10]	@ 000a7d0c a072
.org 0xa7d0e
	ldrb r0, [r4, #14]	@ 000a7d0e a07b
.org 0xa7d10
	adds r0, #1	@ 000a7d10 0130
.org 0xa7d12
	strb r0, [r4, #14]	@ 000a7d12 a073
.org 0xa7d14
	adds r0, r4, #0	@ 000a7d14 201c
.org 0xa7d16
	bl 0x1cff0	@ 000a7d16 75f76bf9
.org 0xa7d1a
	ldrb r0, [r4, #15]	@ 000a7d1a e07b
.org 0xa7d1c
	cmp r0, #0	@ 000a7d1c 0028
.org 0xa7d1e
	bne.n 0xa7d84	@ 000a7d1e 31d1
.org 0xa7d20
	ldrb r1, [r4, #18]	@ 000a7d20 a17c
.org 0xa7d22
	movs r0, #3	@ 000a7d22 0320
.org 0xa7d24
	ands r0, r1	@ 000a7d24 0840
.org 0xa7d26
	cmp r0, #0	@ 000a7d26 0028
.org 0xa7d28
	bne.n 0xa7d5a	@ 000a7d28 17d1
.org 0xa7d2a
	adds r0, r4, #0	@ 000a7d2a 201c
.org 0xa7d2c
	adds r0, #84	@ 000a7d2c 5430
.org 0xa7d2e
	ldr r3, [pc, #72]	@ 000a7d2e 124b
.org 0xa7d30
	ldr r2, [r3, #0]	@ 000a7d30 1a68
.org 0xa7d32
	ldr r1, [pc, #72]	@ 000a7d32 1249
.org 0xa7d34
	muls r1, r2	@ 000a7d34 5143
.org 0xa7d36
	ldr r2, [pc, #72]	@ 000a7d36 124a
.org 0xa7d38
	adds r1, r1, r2	@ 000a7d38 8918
.org 0xa7d3a
	lsls r1, r1, #1	@ 000a7d3a 4900
.org 0xa7d3c
	lsrs r2, r1, #1	@ 000a7d3c 4a08
.org 0xa7d3e
	str r2, [r3, #0]	@ 000a7d3e 1a60
.org 0xa7d40
	lsrs r1, r1, #17	@ 000a7d40 490c
.org 0xa7d42
	lsls r1, r1, #24	@ 000a7d42 0906
.org 0xa7d44
	lsrs r1, r1, #24	@ 000a7d44 090e
.org 0xa7d46
	movs r2, #176	@ 000a7d46 b022
.org 0xa7d48
	lsls r2, r2, #2	@ 000a7d48 9200
.org 0xa7d4a
	adds r3, r4, #0	@ 000a7d4a 231c
.org 0xa7d4c
	adds r3, #37	@ 000a7d4c 2533
.org 0xa7d4e
	ldrb r3, [r3, #0]	@ 000a7d4e 1b78
.org 0xa7d50
	adds r3, #1	@ 000a7d50 0133
.org 0xa7d52
	lsls r3, r3, #24	@ 000a7d52 1b06
.org 0xa7d54
	lsrs r3, r3, #24	@ 000a7d54 1b0e
.org 0xa7d56
	bl 0xe1b98	@ 000a7d56 39f01fff
.org 0xa7d5a
	ldrb r0, [r4, #18]	@ 000a7d5a a07c
.org 0xa7d5c
	adds r1, r0, #1	@ 000a7d5c 411c
.org 0xa7d5e
	strb r1, [r4, #18]	@ 000a7d5e a174
.org 0xa7d60
	lsls r0, r0, #24	@ 000a7d60 0006
.org 0xa7d62
	lsrs r0, r0, #24	@ 000a7d62 000e
.org 0xa7d64
	cmp r0, #32	@ 000a7d64 2028
.org 0xa7d66
	bls.n 0xa7dca	@ 000a7d66 30d9
.org 0xa7d68
	movs r0, #166	@ 000a7d68 a620
.org 0xa7d6a
	bl 0x2b10	@ 000a7d6a 5af7d1fe
.org 0xa7d6e
	ldrb r0, [r4, #15]	@ 000a7d6e e07b
.org 0xa7d70
	adds r0, #1	@ 000a7d70 0130
.org 0xa7d72
	strb r0, [r4, #15]	@ 000a7d72 e073
.org 0xa7d74
	b.n 0xa7dca	@ 000a7d74 29e0
.org 0xa7d76
	.byte 0x00	@ 000a7d76 data
.org 0xa7d77
	.byte 0x00	@ 000a7d77 data
.org 0xa7d78
	.byte 0x38,0xdc,0x02,0x02	@ 000a7d78 data
.org 0xa7d7c
	.byte 0xfd,0x43,0x03,0x00	@ 000a7d7c data
.org 0xa7d80
	.byte 0xc3,0x9e,0x26,0x00	@ 000a7d80 data
.org 0xa7d84
	ldr r0, [r4, #88]	@ 000a7d84 a06d
.org 0xa7d86
	ldr r1, [r4, #96]	@ 000a7d86 216e
.org 0xa7d88
	adds r0, r0, r1	@ 000a7d88 4018
.org 0xa7d8a
	str r0, [r4, #88]	@ 000a7d8a a065
.org 0xa7d8c
	adds r1, #64	@ 000a7d8c 4031
.org 0xa7d8e
	str r1, [r4, #96]	@ 000a7d8e 2166
.org 0xa7d90
	ldrb r1, [r4, #18]	@ 000a7d90 a17c
.org 0xa7d92
	movs r0, #1	@ 000a7d92 0120
.org 0xa7d94
	ands r0, r1	@ 000a7d94 0840
.org 0xa7d96
	adds r2, r1, #0	@ 000a7d96 0a1c
.org 0xa7d98
	cmp r0, #0	@ 000a7d98 0028
.org 0xa7d9a
	beq.n 0xa7da4	@ 000a7d9a 03d0
.org 0xa7d9c
	ldrb r1, [r4, #10]	@ 000a7d9c a17a
.org 0xa7d9e
	movs r0, #1	@ 000a7d9e 0120
.org 0xa7da0
	orrs r0, r1	@ 000a7da0 0843
.org 0xa7da2
	b.n 0xa7daa	@ 000a7da2 02e0
.org 0xa7da4
	ldrb r1, [r4, #10]	@ 000a7da4 a17a
.org 0xa7da6
	movs r0, #254	@ 000a7da6 fe20
.org 0xa7da8
	ands r0, r1	@ 000a7da8 0840
.org 0xa7daa
	strb r0, [r4, #10]	@ 000a7daa a072
.org 0xa7dac
	adds r0, r2, #1	@ 000a7dac 501c
.org 0xa7dae
	strb r0, [r4, #18]	@ 000a7dae a074
.org 0xa7db0
	lsls r0, r2, #24	@ 000a7db0 1006
.org 0xa7db2
	lsrs r0, r0, #24	@ 000a7db2 000e
.org 0xa7db4
	cmp r0, #120	@ 000a7db4 7828
.org 0xa7db6
	bls.n 0xa7dca	@ 000a7db6 08d9
.org 0xa7db8
	ldr r1, [pc, #20]	@ 000a7db8 0549
.org 0xa7dba
	ldrb r0, [r4, #9]	@ 000a7dba 607a
.org 0xa7dbc
	lsls r0, r0, #2	@ 000a7dbc 8000
.org 0xa7dbe
	adds r0, r0, r1	@ 000a7dbe 4018
.org 0xa7dc0
	movs r1, #4	@ 000a7dc0 0421
