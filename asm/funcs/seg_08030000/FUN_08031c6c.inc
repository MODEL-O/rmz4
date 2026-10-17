@ FUN_08031c6c  entry 0x08031c6c  size 218
.thumb
.org 0x31c6c
FUN_08031c6c:
	push {r4, r5, r6, r7, lr}	@ 00031c6c f0b5
.org 0x31c6e
	adds r4, r0, #0	@ 00031c6e 041c
.org 0x31c70
	movs r0, #186	@ 00031c70 ba20
.org 0x31c72
	lsls r0, r0, #1	@ 00031c72 4000
.org 0x31c74
	adds r6, r4, r0	@ 00031c74 2618
.org 0x31c76
	ldrb r1, [r6, #0]	@ 00031c76 3178
.org 0x31c78
	lsls r1, r1, #3	@ 00031c78 c900
.org 0x31c7a
	ldr r7, [pc, #152]	@ 00031c7a 264f
.org 0x31c7c
	adds r1, r1, r7	@ 00031c7c c919
.org 0x31c7e
	adds r0, r4, #0	@ 00031c7e 201c
.org 0x31c80
	movs r2, #0	@ 00031c80 0022
.org 0x31c82
	bl 0x2b7f0	@ 00031c82 f9f7b5fd
.org 0x31c86
	ldrb r1, [r6, #0]	@ 00031c86 3178
.org 0x31c88
	lsls r1, r1, #3	@ 00031c88 c900
.org 0x31c8a
	adds r1, r1, r7	@ 00031c8a c919
.org 0x31c8c
	adds r0, r4, #0	@ 00031c8c 201c
.org 0x31c8e
	movs r2, #1	@ 00031c8e 0122
.org 0x31c90
	bl 0x2b7f0	@ 00031c90 f9f7aefd
.org 0x31c94
	ldr r0, [r4, #88]	@ 00031c94 a06d
.org 0x31c96
	ldr r1, [r4, #96]	@ 00031c96 216e
.org 0x31c98
	adds r0, r0, r1	@ 00031c98 4018
.org 0x31c9a
	str r0, [r4, #88]	@ 00031c9a a065
.org 0x31c9c
	ldrb r1, [r6, #0]	@ 00031c9c 3178
.org 0x31c9e
	lsls r1, r1, #3	@ 00031c9e c900
.org 0x31ca0
	adds r1, r1, r7	@ 00031ca0 c919
.org 0x31ca2
	adds r0, r4, #0	@ 00031ca2 201c
.org 0x31ca4
	movs r2, #0	@ 00031ca4 0022
.org 0x31ca6
	bl 0x2bfe8	@ 00031ca6 faf79ff9
.org 0x31caa
	movs r1, #161	@ 00031caa a121
.org 0x31cac
	lsls r1, r1, #1	@ 00031cac 4900
.org 0x31cae
	adds r0, r4, r1	@ 00031cae 6018
.org 0x31cb0
	ldrb r1, [r0, #0]	@ 00031cb0 0178
.org 0x31cb2
	movs r0, #16	@ 00031cb2 1020
.org 0x31cb4
	ands r0, r1	@ 00031cb4 0840
.org 0x31cb6
	lsls r0, r0, #24	@ 00031cb6 0006
.org 0x31cb8
	lsrs r5, r0, #24	@ 00031cb8 050e
.org 0x31cba
	cmp r5, #0	@ 00031cba 002d
.org 0x31cbc
	bne.n 0x31d20	@ 00031cbc 30d1
.org 0x31cbe
	ldrb r1, [r6, #0]	@ 00031cbe 3178
.org 0x31cc0
	lsls r1, r1, #3	@ 00031cc0 c900
.org 0x31cc2
	adds r1, r1, r7	@ 00031cc2 c919
.org 0x31cc4
	adds r0, r4, #0	@ 00031cc4 201c
.org 0x31cc6
	movs r2, #1	@ 00031cc6 0122
.org 0x31cc8
	bl 0x2baf0	@ 00031cc8 f9f712ff
.org 0x31ccc
	lsls r0, r0, #16	@ 00031ccc 0004
.org 0x31cce
	cmp r0, #0	@ 00031cce 0028
.org 0x31cd0
	beq.n 0x31d20	@ 00031cd0 26d0
.org 0x31cd2
	ldrb r1, [r6, #0]	@ 00031cd2 3178
.org 0x31cd4
	lsls r1, r1, #3	@ 00031cd4 c900
.org 0x31cd6
	adds r1, r1, r7	@ 00031cd6 c919
.org 0x31cd8
	adds r0, r4, #0	@ 00031cd8 201c
.org 0x31cda
	movs r2, #0	@ 00031cda 0022
.org 0x31cdc
	bl 0x2c2d4	@ 00031cdc faf7fafa
.org 0x31ce0
	lsls r0, r0, #16	@ 00031ce0 0004
.org 0x31ce2
	cmp r0, #0	@ 00031ce2 0028
.org 0x31ce4
	beq.n 0x31d20	@ 00031ce4 1cd0
.org 0x31ce6
	strb r5, [r4, #13]	@ 00031ce6 6573
.org 0x31ce8
	strb r5, [r4, #14]	@ 00031ce8 a573
.org 0x31cea
	strb r5, [r4, #15]	@ 00031cea e573
.org 0x31cec
	ldr r0, [pc, #40]	@ 00031cec 0a48
.org 0x31cee
	adds r1, r4, r0	@ 00031cee 2118
.org 0x31cf0
	movs r0, #8	@ 00031cf0 0820
.org 0x31cf2
	strb r0, [r1, #0]	@ 00031cf2 0870
.org 0x31cf4
	movs r1, #129	@ 00031cf4 8121
.org 0x31cf6
	lsls r1, r1, #1	@ 00031cf6 4900
.org 0x31cf8
	adds r0, r4, r1	@ 00031cf8 6018
.org 0x31cfa
	strb r5, [r0, #0]	@ 00031cfa 0570
.org 0x31cfc
	str r5, [r4, #92]	@ 00031cfc e565
.org 0x31cfe
	ldr r0, [pc, #28]	@ 00031cfe 0748
.org 0x31d00
	adds r2, r4, r0	@ 00031d00 2218
.org 0x31d02
	ldrb r1, [r2, #0]	@ 00031d02 1178
.org 0x31d04
	movs r0, #9	@ 00031d04 0920
.org 0x31d06
	negs r0, r0	@ 00031d06 4042
.org 0x31d08
	ands r0, r1	@ 00031d08 0840
.org 0x31d0a
	strb r0, [r2, #0]	@ 00031d0a 1070
.org 0x31d0c
	movs r0, #7	@ 00031d0c 0720
.org 0x31d0e
	bl 0x2b10	@ 00031d0e d0f7fffe
.org 0x31d12
	b.n 0x31d4c	@ 00031d12 1be0
.org 0x31d14
	.byte 0x6c,0x33,0x85,0x08	@ 00031d14 data
.org 0x31d18
	.byte 0x01,0x01,0x00,0x00	@ 00031d18 data
.org 0x31d1c
	.byte 0x53,0x01,0x00,0x00	@ 00031d1c data
.org 0x31d20
	adds r0, r4, #0	@ 00031d20 201c
.org 0x31d22
	bl 0x3851c	@ 00031d22 06f0fbfb
.org 0x31d26
	lsls r0, r0, #16	@ 00031d26 0004
.org 0x31d28
	asrs r0, r0, #16	@ 00031d28 0014
.org 0x31d2a
	ldr r1, [r4, #96]	@ 00031d2a 216e
.org 0x31d2c
	adds r1, r1, r0	@ 00031d2c 0918
.org 0x31d2e
	str r1, [r4, #96]	@ 00031d2e 2166
.org 0x31d30
	adds r0, r4, #0	@ 00031d30 201c
.org 0x31d32
	bl 0x385dc	@ 00031d32 06f053fc
.org 0x31d36
	lsls r0, r0, #16	@ 00031d36 0004
.org 0x31d38
	asrs r0, r0, #16	@ 00031d38 0014
.org 0x31d3a
	ldr r1, [r4, #96]	@ 00031d3a 216e
.org 0x31d3c
	cmp r1, r0	@ 00031d3c 8142
.org 0x31d3e
	ble.n 0x31d4c	@ 00031d3e 05dd
.org 0x31d40
	adds r0, r4, #0	@ 00031d40 201c
.org 0x31d42
	bl 0x385dc	@ 00031d42 06f04bfc
