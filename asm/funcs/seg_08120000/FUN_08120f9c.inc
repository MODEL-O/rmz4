@ FUN_08120f9c  entry 0x08120f9c  size 348
.thumb
.org 0x120f9c
FUN_08120f9c:
	push {r4, r5, r6, r7, lr}	@ 00120f9c f0b5
.org 0x120f9e
	mov r7, sl	@ 00120f9e 5746
.org 0x120fa0
	mov r6, r9	@ 00120fa0 4e46
.org 0x120fa2
	mov r5, r8	@ 00120fa2 4546
.org 0x120fa4
	push {r5, r6, r7}	@ 00120fa4 e0b4
.org 0x120fa6
	adds r5, r0, #0	@ 00120fa6 051c
.org 0x120fa8
	ldrb r0, [r5, #2]	@ 00120fa8 a878
.org 0x120faa
	cmp r0, #0	@ 00120faa 0028
.org 0x120fac
	beq.n 0x120fb4	@ 00120fac 02d0
.org 0x120fae
	cmp r0, #1	@ 00120fae 0128
.org 0x120fb0
	beq.n 0x121032	@ 00120fb0 3fd0
.org 0x120fb2
	b.n 0x121118	@ 00120fb2 b1e0
.org 0x120fb4
	strh r0, [r5, #4]	@ 00120fb4 a880
.org 0x120fb6
	strh r0, [r5, #6]	@ 00120fb6 e880
.org 0x120fb8
	movs r4, #0	@ 00120fb8 0024
.org 0x120fba
	ldr r0, [pc, #276]	@ 00120fba 4548
.org 0x120fbc
	adds r0, r0, r5	@ 00120fbc 4019
.org 0x120fbe
	mov sl, r0	@ 00120fbe 8246
.org 0x120fc0
	movs r1, #222	@ 00120fc0 de21
.org 0x120fc2
	lsls r1, r1, #4	@ 00120fc2 0901
.org 0x120fc4
	adds r1, r1, r5	@ 00120fc4 4919
.org 0x120fc6
	mov r9, r1	@ 00120fc6 8946
.org 0x120fc8
	ldr r2, [pc, #264]	@ 00120fc8 424a
.org 0x120fca
	adds r2, r2, r5	@ 00120fca 5219
.org 0x120fcc
	mov r8, r2	@ 00120fcc 9046
.org 0x120fce
	ldr r3, [pc, #264]	@ 00120fce 424b
.org 0x120fd0
	adds r7, r5, r3	@ 00120fd0 ef18
.org 0x120fd2
	ldr r0, [pc, #264]	@ 00120fd2 4248
.org 0x120fd4
	adds r6, r5, r0	@ 00120fd4 2e18
.org 0x120fd6
	ldr r1, [pc, #264]	@ 00120fd6 4249
.org 0x120fd8
	mov ip, r1	@ 00120fd8 8c46
.org 0x120fda
	mov r3, sl	@ 00120fda 5346
.org 0x120fdc
	adds r2, r3, r4	@ 00120fdc 1a19
.org 0x120fde
	lsls r1, r4, #1	@ 00120fde 6100
.org 0x120fe0
	adds r1, r1, r4	@ 00120fe0 0919
.org 0x120fe2
	lsls r1, r1, #2	@ 00120fe2 8900
.org 0x120fe4
	ldr r0, [pc, #252]	@ 00120fe4 3f48
.org 0x120fe6
	adds r1, r1, r0	@ 00120fe6 0918
.org 0x120fe8
	ldrb r0, [r1, #10]	@ 00120fe8 887a
.org 0x120fea
	strb r0, [r2, #0]	@ 00120fea 1070
.org 0x120fec
	lsls r2, r4, #2	@ 00120fec a200
.org 0x120fee
	mov r0, r9	@ 00120fee 4846
.org 0x120ff0
	adds r3, r0, r2	@ 00120ff0 8318
.org 0x120ff2
	ldr r0, [r1, #0]	@ 00120ff2 0868
.org 0x120ff4
	str r0, [r3, #0]	@ 00120ff4 1860
.org 0x120ff6
	add r2, r8	@ 00120ff6 4244
.org 0x120ff8
	ldr r0, [r1, #4]	@ 00120ff8 4868
.org 0x120ffa
	str r0, [r2, #0]	@ 00120ffa 1060
.org 0x120ffc
	adds r2, r7, r4	@ 00120ffc 3a19
.org 0x120ffe
	ldrb r0, [r1, #8]	@ 00120ffe 087a
.org 0x121000
	strb r0, [r2, #0]	@ 00121000 1070
.org 0x121002
	adds r2, r6, r4	@ 00121002 3219
.org 0x121004
	ldrb r0, [r1, #9]	@ 00121004 487a
.org 0x121006
	strb r0, [r2, #0]	@ 00121006 1070
.org 0x121008
	adds r0, r4, #1	@ 00121008 601c
.org 0x12100a
	lsls r0, r0, #24	@ 0012100a 0006
.org 0x12100c
	lsrs r4, r0, #24	@ 0012100c 040e
.org 0x12100e
	cmp r4, #4	@ 0012100e 042c
.org 0x121010
	bls.n 0x120fda	@ 00121010 e3d9
.org 0x121012
	ldrh r1, [r5, #4]	@ 00121012 a988
.org 0x121014
	ldr r0, [pc, #208]	@ 00121014 3448
.org 0x121016
	add r0, ip	@ 00121016 6044
.org 0x121018
	strb r1, [r0, #0]	@ 00121018 0170
.org 0x12101a
	movs r0, #255	@ 0012101a ff20
.org 0x12101c
	ands r0, r1	@ 0012101c 0840
.org 0x12101e
	ldr r1, [pc, #204]	@ 0012101e 3349
.org 0x121020
	add r1, ip	@ 00121020 6144
.org 0x121022
	strb r0, [r1, #0]	@ 00121022 0870
.org 0x121024
	movs r1, #128	@ 00121024 8021
.org 0x121026
	lsls r1, r1, #3	@ 00121026 c900
.org 0x121028
	add r1, ip	@ 00121028 6144
.org 0x12102a
	strb r0, [r1, #0]	@ 0012102a 0870
.org 0x12102c
	ldrb r0, [r5, #2]	@ 0012102c a878
.org 0x12102e
	adds r0, #1	@ 0012102e 0130
.org 0x121030
	strb r0, [r5, #2]	@ 00121030 a870
.org 0x121032
	movs r4, #0	@ 00121032 0024
.org 0x121034
	ldr r1, [pc, #184]	@ 00121034 2e49
.org 0x121036
	adds r0, r5, r1	@ 00121036 6818
.org 0x121038
	adds r1, r4, #0	@ 00121038 211c
.org 0x12103a
	adds r2, r4, #0	@ 0012103a 221c
.org 0x12103c
	bl 0x122964	@ 0012103c 01f092fc
.org 0x121040
	adds r0, r4, #1	@ 00121040 601c
.org 0x121042
	lsls r0, r0, #24	@ 00121042 0006
.org 0x121044
	lsrs r4, r0, #24	@ 00121044 040e
.org 0x121046
	cmp r4, #4	@ 00121046 042c
.org 0x121048
	bls.n 0x121034	@ 00121048 f4d9
.org 0x12104a
	ldr r0, [pc, #168]	@ 0012104a 2a48
.org 0x12104c
	movs r2, #210	@ 0012104c d222
.org 0x12104e
	lsls r2, r2, #3	@ 0012104e d200
.org 0x121050
	adds r0, r0, r2	@ 00121050 8018
.org 0x121052
	ldrh r0, [r0, #0]	@ 00121052 0088
.org 0x121054
	ldr r1, [pc, #160]	@ 00121054 2849
.org 0x121056
	adds r0, r0, r1	@ 00121056 4018
.org 0x121058
	movs r1, #1	@ 00121058 0121
.org 0x12105a
	movs r2, #18	@ 0012105a 1222
.org 0x12105c
	bl 0x10d85c	@ 0012105c ecf7fefb
.org 0x121060
	adds r0, r5, #0	@ 00121060 281c
.org 0x121062
	bl 0x1228c8	@ 00121062 01f031fc
.org 0x121066
	movs r0, #51	@ 00121066 3320
.org 0x121068
	bl 0x25d8	@ 00121068 e1f6b6fa
.org 0x12106c
	movs r0, #121	@ 0012106c 7920
.org 0x12106e
	bl 0x25d8	@ 0012106e e1f6b3fa
.org 0x121072
	ldrh r1, [r5, #4]	@ 00121072 a988
.org 0x121074
	movs r3, #4	@ 00121074 0423
.org 0x121076
	ldrsh r0, [r5, r3]	@ 00121076 e85e
.org 0x121078
	cmp r0, #31	@ 00121078 1f28
.org 0x12107a
	bgt.n 0x121080	@ 0012107a 01dc
.org 0x12107c
	adds r0, r1, #1	@ 0012107c 481c
.org 0x12107e
	strh r0, [r5, #4]	@ 0012107e a880
.org 0x121080
	movs r0, #2	@ 00121080 0220
.org 0x121082
	bl 0x2bb4	@ 00121082 e1f697fd
.org 0x121086
	cmp r0, #0	@ 00121086 0028
.org 0x121088
	bne.n 0x1210fc	@ 00121088 38d1
.org 0x12108a
	ldr r4, [pc, #100]	@ 0012108a 194c
.org 0x12108c
	adds r0, r5, r4	@ 0012108c 2819
.org 0x12108e
	ldrh r0, [r0, #4]	@ 0012108e 8088
.org 0x121090
	bl 0x2ad0	@ 00121090 e1f61efd
.org 0x121094
	adds r3, r0, #0	@ 00121094 031c
.org 0x121096
	cmp r3, #0	@ 00121096 002b
.org 0x121098
	bne.n 0x1210fc	@ 00121098 30d1
.org 0x12109a
	movs r1, #4	@ 0012109a 0421
.org 0x12109c
	ldrsh r0, [r5, r1]	@ 0012109c 685e
.org 0x12109e
	cmp r0, #31	@ 0012109e 1f28
.org 0x1210a0
	ble.n 0x1210fc	@ 001210a0 2cdd
.org 0x1210a2
	ldr r1, [pc, #60]	@ 001210a2 0f49
.org 0x1210a4
	ldr r2, [pc, #64]	@ 001210a4 104a
.org 0x1210a6
	adds r0, r1, r2	@ 001210a6 8818
.org 0x1210a8
	movs r2, #32	@ 001210a8 2022
.org 0x1210aa
	strb r2, [r0, #0]	@ 001210aa 0270
.org 0x1210ac
	ldr r4, [pc, #60]	@ 001210ac 0f4c
.org 0x1210ae
	adds r0, r1, r4	@ 001210ae 0819
.org 0x1210b0
	strb r2, [r0, #0]	@ 001210b0 0270
.org 0x1210b2
	movs r0, #128	@ 001210b2 8020
.org 0x1210b4
	lsls r0, r0, #3	@ 001210b4 c000
.org 0x1210b6
	adds r1, r1, r0	@ 001210b6 0918
.org 0x1210b8
	strb r2, [r1, #0]	@ 001210b8 0a70
.org 0x1210ba
	movs r1, #0	@ 001210ba 0021
.org 0x1210bc
	strh r3, [r5, #6]	@ 001210bc eb80
.org 0x1210be
	movs r0, #2	@ 001210be 0220
.org 0x1210c0
	strb r0, [r5, #1]	@ 001210c0 6870
.org 0x1210c2
	strb r1, [r5, #3]	@ 001210c2 e970
.org 0x1210c4
	strb r1, [r5, #2]	@ 001210c4 a970
.org 0x1210c6
	adds r0, r5, #0	@ 001210c6 281c
.org 0x1210c8
	bl 0x121134	@ 001210c8 00f034f8
.org 0x1210cc
	b.n 0x121118	@ 001210cc 24e0
.org 0x1210ce
	.byte 0x00	@ 001210ce data
.org 0x1210cf
	.byte 0x00	@ 001210cf data
.org 0x1210d0
	.byte 0xd9,0x0d,0x00,0x00	@ 001210d0 data
.org 0x1210d4
	.byte 0xf4,0x0d,0x00,0x00	@ 001210d4 data
.org 0x1210d8
	.byte 0x08,0x0e,0x00,0x00	@ 001210d8 data
.org 0x1210dc
	.byte 0x0d,0x0e,0x00,0x00	@ 001210dc data
.org 0x1210e0
	.byte 0xc0,0x2a,0x00,0x03	@ 001210e0 data
.org 0x1210e4
	.byte 0x84,0xc7,0x03,0x02	@ 001210e4 data
.org 0x1210e8
	.byte 0x02,0x04,0x00,0x00	@ 001210e8 data
.org 0x1210ec
	.byte 0x01,0x04,0x00,0x00	@ 001210ec data
.org 0x1210f0
	.byte 0xcc,0x0d,0x00,0x00	@ 001210f0 data
.org 0x1210f4
	.byte 0xf8,0xcf,0x86,0x08	@ 001210f4 data
