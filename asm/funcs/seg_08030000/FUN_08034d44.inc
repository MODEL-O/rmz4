@ FUN_08034d44  entry 0x08034d44  size 170
.thumb
.org 0x34d44
FUN_08034d44:
	push {r4, lr}	@ 00034d44 10b5
.org 0x34d46
	adds r4, r0, #0	@ 00034d46 041c
.org 0x34d48
	ldrb r0, [r4, #30]	@ 00034d48 a07f
.org 0x34d4a
	lsls r0, r0, #8	@ 00034d4a 0002
.org 0x34d4c
	adds r1, r4, #0	@ 00034d4c 211c
.org 0x34d4e
	adds r1, #112	@ 00034d4e 7031
.org 0x34d50
	ldrb r2, [r1, #0]	@ 00034d50 0a78
.org 0x34d52
	orrs r2, r0	@ 00034d52 0243
.org 0x34d54
	ldr r1, [pc, #40]	@ 00034d54 0a49
.org 0x34d56
	cmp r2, r1	@ 00034d56 8a42
.org 0x34d58
	beq.n 0x34d92	@ 00034d58 1bd0
.org 0x34d5a
	ldr r0, [pc, #40]	@ 00034d5a 0a48
.org 0x34d5c
	cmp r2, r0	@ 00034d5c 8242
.org 0x34d5e
	bne.n 0x34d88	@ 00034d5e 13d1
.org 0x34d60
	adds r0, r4, #0	@ 00034d60 201c
.org 0x34d62
	adds r0, #113	@ 00034d62 7130
.org 0x34d64
	movs r2, #0	@ 00034d64 0022
.org 0x34d66
	ldrsb r2, [r0, r2]	@ 00034d66 8256
.org 0x34d68
	lsls r2, r2, #16	@ 00034d68 1204
.org 0x34d6a
	lsrs r2, r2, #16	@ 00034d6a 120c
.org 0x34d6c
	adds r0, #1	@ 00034d6c 0130
.org 0x34d6e
	movs r3, #0	@ 00034d6e 0023
.org 0x34d70
	ldrsb r3, [r0, r3]	@ 00034d70 c356
.org 0x34d72
	lsls r3, r3, #16	@ 00034d72 1b04
.org 0x34d74
	lsrs r3, r3, #16	@ 00034d74 1b0c
.org 0x34d76
	adds r0, r4, #0	@ 00034d76 201c
.org 0x34d78
	bl 0x1cfc8	@ 00034d78 e8f726f9
.org 0x34d7c
	b.n 0x34d92	@ 00034d7c 09e0
.org 0x34d7e
	.byte 0x00	@ 00034d7e data
.org 0x34d7f
	.byte 0x00	@ 00034d7f data
.org 0x34d80
	.byte 0x02,0x09,0x00,0x00	@ 00034d80 data
.org 0x34d84
	.byte 0x01,0x09,0x00,0x00	@ 00034d84 data
.org 0x34d88
	adds r0, r4, #0	@ 00034d88 201c
.org 0x34d8a
	movs r2, #0	@ 00034d8a 0022
.org 0x34d8c
	movs r3, #1	@ 00034d8c 0123
.org 0x34d8e
	bl 0x1cfc8	@ 00034d8e e8f71bf9
.org 0x34d92
	movs r1, #170	@ 00034d92 aa21
.org 0x34d94
	lsls r1, r1, #1	@ 00034d94 4900
.org 0x34d96
	adds r0, r4, r1	@ 00034d96 6018
.org 0x34d98
	ldrb r0, [r0, #0]	@ 00034d98 0078
.org 0x34d9a
	cmp r0, #4	@ 00034d9a 0428
.org 0x34d9c
	bne.n 0x34dc8	@ 00034d9c 14d1
.org 0x34d9e
	movs r0, #128	@ 00034d9e 8020
.org 0x34da0
	lsls r0, r0, #1	@ 00034da0 4000
.org 0x34da2
	adds r1, r4, r0	@ 00034da2 2118
.org 0x34da4
	movs r0, #0	@ 00034da4 0020
.org 0x34da6
	strb r0, [r1, #0]	@ 00034da6 0870
.org 0x34da8
	movs r1, #128	@ 00034da8 8021
.org 0x34daa
	lsls r1, r1, #2	@ 00034daa 8900
.org 0x34dac
	adds r0, r4, #0	@ 00034dac 201c
.org 0x34dae
	adds r0, #113	@ 00034dae 7130
.org 0x34db0
	movs r2, #0	@ 00034db0 0022
.org 0x34db2
	ldrsb r2, [r0, r2]	@ 00034db2 8256
.org 0x34db4
	lsls r2, r2, #16	@ 00034db4 1204
.org 0x34db6
	lsrs r2, r2, #16	@ 00034db6 120c
.org 0x34db8
	adds r0, #1	@ 00034db8 0130
.org 0x34dba
	movs r3, #0	@ 00034dba 0023
.org 0x34dbc
	ldrsb r3, [r0, r3]	@ 00034dbc c356
.org 0x34dbe
	lsls r3, r3, #16	@ 00034dbe 1b04
.org 0x34dc0
	lsrs r3, r3, #16	@ 00034dc0 1b0c
.org 0x34dc2
	adds r0, r4, #0	@ 00034dc2 201c
.org 0x34dc4
	bl 0x1cfc8	@ 00034dc4 e8f700f9
.org 0x34dc8
	movs r0, #162	@ 00034dc8 a220
.org 0x34dca
	lsls r0, r0, #1	@ 00034dca 4000
.org 0x34dcc
	adds r1, r4, r0	@ 00034dcc 2118
.org 0x34dce
	adds r0, r4, #0	@ 00034dce 201c
.org 0x34dd0
	bl 0x39fd8	@ 00034dd0 05f002f9
.org 0x34dd4
	lsls r0, r0, #24	@ 00034dd4 0006
.org 0x34dd6
	cmp r0, #0	@ 00034dd6 0028
.org 0x34dd8
	beq.n 0x34df2	@ 00034dd8 0bd0
.org 0x34dda
	movs r1, #128	@ 00034dda 8021
.org 0x34ddc
	lsls r1, r1, #1	@ 00034ddc 4900
.org 0x34dde
	adds r0, r4, r1	@ 00034dde 6018
.org 0x34de0
	movs r2, #0	@ 00034de0 0022
.org 0x34de2
	movs r1, #3	@ 00034de2 0321
.org 0x34de4
	strb r1, [r0, #0]	@ 00034de4 0170
.org 0x34de6
	adds r1, #254	@ 00034de6 fe31
.org 0x34de8
	adds r0, r4, r1	@ 00034de8 6018
.org 0x34dea
	strb r2, [r0, #0]	@ 00034dea 0270
.org 0x34dec
	adds r0, r4, #0	@ 00034dec 201c
