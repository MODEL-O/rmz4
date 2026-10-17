@ FUN_08119d60  entry 0x08119d60  size 110
.thumb
.org 0x119d60
FUN_08119d60:
	push {r4, lr}	@ 00119d60 10b5
.org 0x119d62
	adds r2, r0, #0	@ 00119d62 021c
.org 0x119d64
	ldr r1, [pc, #16]	@ 00119d64 0449
.org 0x119d66
	adds r0, r2, r1	@ 00119d66 5018
.org 0x119d68
	ldrb r0, [r0, #0]	@ 00119d68 0078
.org 0x119d6a
	cmp r0, #2	@ 00119d6a 0228
.org 0x119d6c
	bne.n 0x119d80	@ 00119d6c 08d1
.org 0x119d6e
	ldr r1, [pc, #12]	@ 00119d6e 0349
.org 0x119d70
	ldrh r0, [r1, #0]	@ 00119d70 0888
.org 0x119d72
	adds r0, #16	@ 00119d72 1030
.org 0x119d74
	b.n 0x119d86	@ 00119d74 07e0
.org 0x119d76
	.byte 0x00	@ 00119d76 data
.org 0x119d77
	.byte 0x00	@ 00119d77 data
.org 0x119d78
	.byte 0xf9,0x0d,0x00,0x00	@ 00119d78 data
.org 0x119d7c
	.byte 0x10,0x0a,0x00,0x02	@ 00119d7c data
.org 0x119d80
	ldr r1, [pc, #32]	@ 00119d80 0849
.org 0x119d82
	ldrh r0, [r1, #0]	@ 00119d82 0888
.org 0x119d84
	subs r0, #16	@ 00119d84 1038
.org 0x119d86
	strh r0, [r1, #0]	@ 00119d86 0880
.org 0x119d88
	adds r3, r1, #0	@ 00119d88 0b1c
.org 0x119d8a
	ldrh r1, [r3, #0]	@ 00119d8a 1988
.org 0x119d8c
	ldr r0, [pc, #24]	@ 00119d8c 0648
.org 0x119d8e
	ands r0, r1	@ 00119d8e 0840
.org 0x119d90
	strh r0, [r3, #0]	@ 00119d90 1880
.org 0x119d92
	ldr r1, [pc, #24]	@ 00119d92 0649
.org 0x119d94
	adds r0, r2, r1	@ 00119d94 5018
.org 0x119d96
	ldrb r1, [r0, #0]	@ 00119d96 0178
.org 0x119d98
	adds r4, r0, #0	@ 00119d98 041c
.org 0x119d9a
	cmp r1, #2	@ 00119d9a 0229
.org 0x119d9c
	bne.n 0x119db0	@ 00119d9c 08d1
.org 0x119d9e
	ldrh r0, [r3, #0]	@ 00119d9e 1888
.org 0x119da0
	adds r0, #32	@ 00119da0 2030
.org 0x119da2
	b.n 0x119db4	@ 00119da2 07e0
.org 0x119da4
	.byte 0x10,0x0a,0x00,0x02	@ 00119da4 data
.org 0x119da8
	.byte 0xff,0x01,0x00,0x00	@ 00119da8 data
.org 0x119dac
	.byte 0xf9,0x0d,0x00,0x00	@ 00119dac data
.org 0x119db0
	ldrh r0, [r3, #0]	@ 00119db0 1888
.org 0x119db2
	subs r0, #32	@ 00119db2 2038
.org 0x119db4
	movs r1, #255	@ 00119db4 ff21
.org 0x119db6
	ands r0, r1	@ 00119db6 0840
.org 0x119db8
	cmp r0, #0	@ 00119db8 0028
.org 0x119dba
	bne.n 0x119dc6	@ 00119dba 04d1
.org 0x119dbc
	movs r0, #221	@ 00119dbc dd20
.org 0x119dbe
	lsls r0, r0, #4	@ 00119dbe 0001
.org 0x119dc0
	adds r1, r2, r0	@ 00119dc0 1118
.org 0x119dc2
	movs r0, #1	@ 00119dc2 0120
.org 0x119dc4
	strb r0, [r1, #1]	@ 00119dc4 4870
.org 0x119dc6
	ldrb r0, [r3, #0]	@ 00119dc6 1878
.org 0x119dc8
	cmp r0, #0	@ 00119dc8 0028
.org 0x119dca
	bne.n 0x119dde	@ 00119dca 08d1
.org 0x119dcc
	ldrb r0, [r4, #0]	@ 00119dcc 2078
