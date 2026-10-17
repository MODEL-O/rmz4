@ FUN_08000d84  entry 0x08000d84  size 136
.thumb
.org 0xd84
FUN_08000d84:
	push {lr}	@ 00000d84 00b5
.org 0xd86
	sub sp, #4	@ 00000d86 81b0
.org 0xd88
	mov r1, sp	@ 00000d88 6946
.org 0xd8a
	ldr r0, [pc, #104]	@ 00000d8a 1a48
.org 0xd8c
	ldrh r0, [r0, #0]	@ 00000d8c 0088
.org 0xd8e
	strh r0, [r1, #0]	@ 00000d8e 0880
.org 0xd90
	ldr r2, [pc, #100]	@ 00000d90 194a
.org 0xd92
	ldr r0, [pc, #104]	@ 00000d92 1a48
.org 0xd94
	adds r3, r2, r0	@ 00000d94 1318
.org 0xd96
	ldrb r1, [r3, #0]	@ 00000d96 1978
.org 0xd98
	movs r0, #2	@ 00000d98 0220
.org 0xd9a
	ands r0, r1	@ 00000d9a 0840
.org 0xd9c
	cmp r0, #0	@ 00000d9c 0028
.org 0xd9e
	bne.n 0xe16	@ 00000d9e 3ad1
.org 0xda0
	movs r0, #2	@ 00000da0 0220
.org 0xda2
	orrs r0, r1	@ 00000da2 0843
.org 0xda4
	strb r0, [r3, #0]	@ 00000da4 1870
.org 0xda6
	mov r0, sp	@ 00000da6 6846
.org 0xda8
	ldrh r0, [r0, #0]	@ 00000da8 0088
.org 0xdaa
	cmp r0, #0	@ 00000daa 0028
.org 0xdac
	bne.n 0xdba	@ 00000dac 05d1
.org 0xdae
	movs r3, #176	@ 00000dae b023
.org 0xdb0
	lsls r3, r3, #1	@ 00000db0 5b00
.org 0xdb2
	adds r1, r2, r3	@ 00000db2 d118
.org 0xdb4
	ldr r0, [r1, #0]	@ 00000db4 0868
.org 0xdb6
	adds r0, #1	@ 00000db6 0130
.org 0xdb8
	str r0, [r1, #0]	@ 00000db8 0860
.org 0xdba
	mov r0, sp	@ 00000dba 6846
.org 0xdbc
	movs r3, #179	@ 00000dbc b323
.org 0xdbe
	lsls r3, r3, #1	@ 00000dbe 5b00
.org 0xdc0
	adds r1, r2, r3	@ 00000dc0 d118
.org 0xdc2
	ldrh r0, [r0, #0]	@ 00000dc2 0088
.org 0xdc4
	ldrb r1, [r1, #0]	@ 00000dc4 0978
.org 0xdc6
	cmp r0, r1	@ 00000dc6 8842
.org 0xdc8
	bne.n 0xdda	@ 00000dc8 07d1
.org 0xdca
	movs r1, #174	@ 00000dca ae21
.org 0xdcc
	lsls r1, r1, #1	@ 00000dcc 4900
.org 0xdce
	adds r0, r2, r1	@ 00000dce 5018
.org 0xdd0
	ldr r0, [r0, #0]	@ 00000dd0 0068
.org 0xdd2
	cmp r0, #0	@ 00000dd2 0028
.org 0xdd4
	beq.n 0xdda	@ 00000dd4 01d0
.org 0xdd6
	bl 0x128f7c	@ 00000dd6 28f1d1f8
.org 0xdda
	mov r0, sp	@ 00000dda 6846
.org 0xddc
	ldr r1, [pc, #24]	@ 00000ddc 0649
.org 0xdde
	movs r3, #179	@ 00000dde b323
.org 0xde0
	lsls r3, r3, #1	@ 00000de0 5b00
.org 0xde2
	adds r2, r1, r3	@ 00000de2 ca18
.org 0xde4
	ldrb r2, [r2, #0]	@ 00000de4 1278
.org 0xde6
	ldrh r0, [r0, #0]	@ 00000de6 0088
.org 0xde8
	adds r3, r1, #0	@ 00000de8 0b1c
.org 0xdea
	cmp r0, r2	@ 00000dea 9042
.org 0xdec
	bcs.n 0xe04	@ 00000dec 0ad2
.org 0xdee
	ldr r0, [pc, #16]	@ 00000dee 0448
.org 0xdf0
	strb r2, [r0, #0]	@ 00000df0 0270
.org 0xdf2
	b.n 0xe0a	@ 00000df2 0ae0
.org 0xdf4
	.byte 0x06,0x00,0x00,0x04	@ 00000df4 data
.org 0xdf8
	.byte 0x90,0x15,0x00,0x03	@ 00000df8 data
.org 0xdfc
	.byte 0x67,0x01,0x00,0x00	@ 00000dfc data
.org 0xe00
	.byte 0x05,0x00,0x00,0x04	@ 00000e00 data
.org 0xe04
	ldr r1, [pc, #20]	@ 00000e04 0549
.org 0xe06
	movs r0, #0	@ 00000e06 0020
.org 0xe08
	strb r0, [r1, #0]	@ 00000e08 0870
.org 0xe0a
	ldr r0, [pc, #20]	@ 00000e0a 0548
