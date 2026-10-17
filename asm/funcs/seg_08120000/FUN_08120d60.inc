@ FUN_08120d60  entry 0x08120d60  size 282
.thumb
.org 0x120d60
FUN_08120d60:
	push {r4, r5, r6, r7, lr}	@ 00120d60 f0b5
.org 0x120d62
	sub sp, #12	@ 00120d62 83b0
.org 0x120d64
	adds r6, r0, #0	@ 00120d64 061c
.org 0x120d66
	ldr r0, [pc, #28]	@ 00120d66 0748
.org 0x120d68
	adds r4, r6, r0	@ 00120d68 3418
.org 0x120d6a
	ldr r1, [pc, #28]	@ 00120d6a 0749
.org 0x120d6c
	adds r0, r6, r1	@ 00120d6c 7018
.org 0x120d6e
	ldrb r2, [r4, #2]	@ 00120d6e a278
.org 0x120d70
	adds r0, r0, r2	@ 00120d70 8018
.org 0x120d72
	ldrb r7, [r0, #0]	@ 00120d72 0778
.org 0x120d74
	ldrb r0, [r4, #18]	@ 00120d74 a07c
.org 0x120d76
	cmp r0, #1	@ 00120d76 0128
.org 0x120d78
	beq.n 0x120da6	@ 00120d78 15d0
.org 0x120d7a
	cmp r0, #1	@ 00120d7a 0128
.org 0x120d7c
	bgt.n 0x120d8c	@ 00120d7c 06dc
.org 0x120d7e
	cmp r0, #0	@ 00120d7e 0028
.org 0x120d80
	beq.n 0x120d96	@ 00120d80 09d0
.org 0x120d82
	b.n 0x120e8c	@ 00120d82 83e0
.org 0x120d84
	.byte 0xcc,0x0d,0x00,0x00	@ 00120d84 data
.org 0x120d88
	.byte 0xd2,0x0d,0x00,0x00	@ 00120d88 data
.org 0x120d8c
	cmp r0, #2	@ 00120d8c 0228
.org 0x120d8e
	beq.n 0x120e24	@ 00120d8e 49d0
.org 0x120d90
	cmp r0, #3	@ 00120d90 0328
.org 0x120d92
	beq.n 0x120e44	@ 00120d92 57d0
.org 0x120d94
	b.n 0x120e8c	@ 00120d94 7ae0
.org 0x120d96
	strb r0, [r4, #19]	@ 00120d96 e074
.org 0x120d98
	strb r0, [r4, #20]	@ 00120d98 2075
.org 0x120d9a
	movs r0, #2	@ 00120d9a 0220
.org 0x120d9c
	bl 0x2b10	@ 00120d9c e1f6b8fe
.org 0x120da0
	ldrb r0, [r4, #18]	@ 00120da0 a07c
.org 0x120da2
	adds r0, #1	@ 00120da2 0130
.org 0x120da4
	strb r0, [r4, #18]	@ 00120da4 a074
.org 0x120da6
	ldr r0, [pc, #64]	@ 00120da6 1048
.org 0x120da8
	adds r5, r6, r0	@ 00120da8 3518
.org 0x120daa
	ldr r0, [pc, #64]	@ 00120daa 1048
.org 0x120dac
	lsls r1, r7, #3	@ 00120dac f900
.org 0x120dae
	adds r4, r1, r0	@ 00120dae 0c18
.org 0x120db0
	ldrb r0, [r4, #5]	@ 00120db0 6079
.org 0x120db2
	lsls r0, r0, #24	@ 00120db2 0006
.org 0x120db4
	lsrs r1, r0, #25	@ 00120db4 410e
.org 0x120db6
	ldrb r2, [r5, #19]	@ 00120db6 ea7c
.org 0x120db8
	cmp r2, r1	@ 00120db8 8a42
.org 0x120dba
	bcs.n 0x120df0	@ 00120dba 19d2
.org 0x120dbc
	lsrs r0, r0, #28	@ 00120dbc 000f
.org 0x120dbe
	adds r0, r2, r0	@ 00120dbe 1018
.org 0x120dc0
	strb r0, [r5, #19]	@ 00120dc0 e874
.org 0x120dc2
	ldrb r1, [r4, #6]	@ 00120dc2 a179
.org 0x120dc4
	lsrs r1, r1, #4	@ 00120dc4 0909
.org 0x120dc6
	ldrb r2, [r5, #20]	@ 00120dc6 2a7d
.org 0x120dc8
	adds r1, r1, r2	@ 00120dc8 8918
.org 0x120dca
	strb r1, [r5, #20]	@ 00120dca 2975
.org 0x120dcc
	ldrb r1, [r4, #5]	@ 00120dcc 6179
.org 0x120dce
	lsrs r1, r1, #1	@ 00120dce 4908
.org 0x120dd0
	lsls r0, r0, #24	@ 00120dd0 0006
.org 0x120dd2
	lsrs r0, r0, #24	@ 00120dd2 000e
.org 0x120dd4
	cmp r0, r1	@ 00120dd4 8842
.org 0x120dd6
	bls.n 0x120dda	@ 00120dd6 00d9
.org 0x120dd8
	strb r1, [r5, #19]	@ 00120dd8 e974
.org 0x120dda
	ldrb r0, [r4, #6]	@ 00120dda a079
.org 0x120ddc
	lsrs r1, r0, #1	@ 00120ddc 4108
.org 0x120dde
	ldrb r0, [r5, #20]	@ 00120dde 287d
.org 0x120de0
	cmp r0, r1	@ 00120de0 8842
.org 0x120de2
	bls.n 0x120e8c	@ 00120de2 53d9
.org 0x120de4
	strb r1, [r5, #20]	@ 00120de4 2975
.org 0x120de6
	b.n 0x120e8c	@ 00120de6 51e0
.org 0x120de8
	.byte 0xcc,0x0d,0x00,0x00	@ 00120de8 data
.org 0x120dec
	.byte 0xf8,0x1f,0x88,0x08	@ 00120dec data
.org 0x120df0
	strb r1, [r5, #19]	@ 00120df0 e974
.org 0x120df2
	ldrb r0, [r4, #6]	@ 00120df2 a079
.org 0x120df4
	lsrs r0, r0, #1	@ 00120df4 4008
.org 0x120df6
	strb r0, [r5, #20]	@ 00120df6 2875
.org 0x120df8
	ldrb r2, [r4, #4]	@ 00120df8 2279
.org 0x120dfa
	ldrh r3, [r4, #0]	@ 00120dfa 2388
.org 0x120dfc
	movs r0, #2	@ 00120dfc 0220
.org 0x120dfe
	ldrsb r0, [r4, r0]	@ 00120dfe 2056
.org 0x120e00
	adds r0, #64	@ 00120e00 4030
.org 0x120e02
	lsls r0, r0, #8	@ 00120e02 0002
.org 0x120e04
	str r0, [sp, #0]	@ 00120e04 0090
.org 0x120e06
	movs r0, #3	@ 00120e06 0320
.org 0x120e08
	ldrsb r0, [r4, r0]	@ 00120e08 2056
.org 0x120e0a
	adds r0, #80	@ 00120e0a 5030
.org 0x120e0c
	lsls r0, r0, #8	@ 00120e0c 0002
.org 0x120e0e
	str r0, [sp, #4]	@ 00120e0e 0190
.org 0x120e10
	ldrb r0, [r4, #7]	@ 00120e10 e079
.org 0x120e12
	str r0, [sp, #8]	@ 00120e12 0290
.org 0x120e14
	adds r0, r6, #0	@ 00120e14 301c
.org 0x120e16
	adds r1, r7, #0	@ 00120e16 391c
.org 0x120e18
	bl 0x10cbd4	@ 00120e18 ebf7dcfe
.org 0x120e1c
	ldrb r0, [r5, #18]	@ 00120e1c a87c
.org 0x120e1e
	adds r0, #1	@ 00120e1e 0130
.org 0x120e20
	strb r0, [r5, #18]	@ 00120e20 a874
.org 0x120e22
	b.n 0x120e8c	@ 00120e22 33e0
.org 0x120e24
	ldr r0, [pc, #24]	@ 00120e24 0648
.org 0x120e26
	ldrh r1, [r0, #4]	@ 00120e26 8188
.org 0x120e28
	movs r0, #3	@ 00120e28 0320
.org 0x120e2a
	ands r0, r1	@ 00120e2a 0840
.org 0x120e2c
	cmp r0, #0	@ 00120e2c 0028
.org 0x120e2e
	beq.n 0x120e8c	@ 00120e2e 2dd0
.org 0x120e30
	movs r0, #3	@ 00120e30 0320
.org 0x120e32
	bl 0x2b10	@ 00120e32 e1f66dfe
.org 0x120e36
	ldrb r0, [r4, #18]	@ 00120e36 a07c
.org 0x120e38
	adds r0, #1	@ 00120e38 0130
.org 0x120e3a
	strb r0, [r4, #18]	@ 00120e3a a074
.org 0x120e3c
	b.n 0x120e8c	@ 00120e3c 26e0
.org 0x120e3e
	.byte 0x00	@ 00120e3e data
.org 0x120e3f
	.byte 0x00	@ 00120e3f data
.org 0x120e40
	.byte 0x60,0x07,0x00,0x02	@ 00120e40 data
.org 0x120e44
	ldrb r0, [r4, #19]	@ 00120e44 e07c
.org 0x120e46
	cmp r0, #0	@ 00120e46 0028
.org 0x120e48
	beq.n 0x120e82	@ 00120e48 1bd0
.org 0x120e4a
	adds r3, r0, #0	@ 00120e4a 031c
.org 0x120e4c
	ldr r1, [pc, #32]	@ 00120e4c 0849
.org 0x120e4e
	lsls r0, r7, #3	@ 00120e4e f800
.org 0x120e50
	adds r1, r0, r1	@ 00120e50 4118
.org 0x120e52
	ldrb r0, [r1, #5]	@ 00120e52 4879
.org 0x120e54
	lsrs r2, r0, #4	@ 00120e54 0209
.org 0x120e56
	subs r0, r3, r2	@ 00120e56 981a
.org 0x120e58
	cmp r0, #0	@ 00120e58 0028
.org 0x120e5a
	ble.n 0x120e7a	@ 00120e5a 0edd
.org 0x120e5c
	strb r0, [r4, #19]	@ 00120e5c e074
.org 0x120e5e
	ldrb r2, [r4, #20]	@ 00120e5e 227d
.org 0x120e60
	ldrb r0, [r1, #6]	@ 00120e60 8879
.org 0x120e62
	lsrs r1, r0, #4	@ 00120e62 0109
.org 0x120e64
	subs r0, r2, r1	@ 00120e64 501a
.org 0x120e66
	cmp r0, #0	@ 00120e66 0028
.org 0x120e68
	ble.n 0x120e74	@ 00120e68 04dd
.org 0x120e6a
	strb r0, [r4, #20]	@ 00120e6a 2075
.org 0x120e6c
	b.n 0x120e8c	@ 00120e6c 0ee0
.org 0x120e6e
	.byte 0x00	@ 00120e6e data
.org 0x120e6f
	.byte 0x00	@ 00120e6f data
.org 0x120e70
	.byte 0xf8,0x1f,0x88,0x08	@ 00120e70 data
.org 0x120e74
	movs r0, #0	@ 00120e74 0020
.org 0x120e76
	strb r0, [r4, #20]	@ 00120e76 2075
.org 0x120e78
	b.n 0x120e8c	@ 00120e78 08e0
