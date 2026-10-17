@ FUN_08058d20  entry 0x08058d20  size 308
.thumb
.org 0x58d20
FUN_08058d20:
	push {r4, r5, r6, r7, lr}	@ 00058d20 f0b5
.org 0x58d22
	adds r5, r0, #0	@ 00058d22 051c
.org 0x58d24
	ldrb r0, [r5, #15]	@ 00058d24 e87b
.org 0x58d26
	cmp r0, #0	@ 00058d26 0028
.org 0x58d28
	bne.n 0x58d94	@ 00058d28 34d1
.org 0x58d2a
	ldr r1, [pc, #40]	@ 00058d2a 0a49
.org 0x58d2c
	adds r0, r5, #0	@ 00058d2c 281c
.org 0x58d2e
	bl 0x1cf00	@ 00058d2e c4f7e7f8
.org 0x58d32
	adds r0, r5, #0	@ 00058d32 281c
.org 0x58d34
	adds r0, #188	@ 00058d34 bc30
.org 0x58d36
	adds r1, r5, #0	@ 00058d36 291c
.org 0x58d38
	adds r1, #184	@ 00058d38 b831
.org 0x58d3a
	ldr r2, [r0, #0]	@ 00058d3a 0268
.org 0x58d3c
	ldr r0, [r1, #0]	@ 00058d3c 0868
.org 0x58d3e
	cmp r2, r0	@ 00058d3e 8242
.org 0x58d40
	bge.n 0x58d5c	@ 00058d40 0cda
.org 0x58d42
	ldr r0, [pc, #20]	@ 00058d42 0548
.org 0x58d44
	ldr r0, [r0, #0]	@ 00058d44 0068
.org 0x58d46
	ldr r1, [r5, #84]	@ 00058d46 696d
.org 0x58d48
	ldr r0, [r0, #84]	@ 00058d48 406d
.org 0x58d4a
	movs r6, #48	@ 00058d4a 3026
.org 0x58d4c
	cmp r1, r0	@ 00058d4c 8142
.org 0x58d4e
	bge.n 0x58d6c	@ 00058d4e 0dda
.org 0x58d50
	movs r6, #80	@ 00058d50 5026
.org 0x58d52
	b.n 0x58d6c	@ 00058d52 0be0
.org 0x58d54
	.byte 0x06,0xa0,0x00,0x00	@ 00058d54 data
.org 0x58d58
	.byte 0xf0,0xdb,0x02,0x02	@ 00058d58 data
.org 0x58d5c
	ldr r0, [pc, #140]	@ 00058d5c 2348
.org 0x58d5e
	ldr r0, [r0, #0]	@ 00058d5e 0068
.org 0x58d60
	ldr r1, [r5, #84]	@ 00058d60 696d
.org 0x58d62
	ldr r0, [r0, #84]	@ 00058d62 406d
.org 0x58d64
	movs r6, #208	@ 00058d64 d026
.org 0x58d66
	cmp r1, r0	@ 00058d66 8142
.org 0x58d68
	bge.n 0x58d6c	@ 00058d68 00da
.org 0x58d6a
	movs r6, #176	@ 00058d6a b026
.org 0x58d6c
	ldr r1, [pc, #128]	@ 00058d6c 2049
.org 0x58d6e
	adds r0, r6, #0	@ 00058d6e 301c
.org 0x58d70
	adds r0, #64	@ 00058d70 4030
.org 0x58d72
	lsls r0, r0, #24	@ 00058d72 0006
.org 0x58d74
	lsrs r0, r0, #23	@ 00058d74 c00d
.org 0x58d76
	adds r0, r0, r1	@ 00058d76 4018
.org 0x58d78
	movs r2, #0	@ 00058d78 0022
.org 0x58d7a
	ldrsh r0, [r0, r2]	@ 00058d7a 805e
.org 0x58d7c
	lsls r0, r0, #1	@ 00058d7c 4000
.org 0x58d7e
	str r0, [r5, #92]	@ 00058d7e e865
.org 0x58d80
	lsls r0, r6, #24	@ 00058d80 3006
.org 0x58d82
	lsrs r0, r0, #23	@ 00058d82 c00d
.org 0x58d84
	adds r0, r0, r1	@ 00058d84 4018
.org 0x58d86
	movs r7, #0	@ 00058d86 0027
.org 0x58d88
	ldrsh r0, [r0, r7]	@ 00058d88 c05f
.org 0x58d8a
	lsls r0, r0, #1	@ 00058d8a 4000
.org 0x58d8c
	str r0, [r5, #96]	@ 00058d8c 2866
.org 0x58d8e
	ldrb r0, [r5, #15]	@ 00058d8e e87b
.org 0x58d90
	adds r0, #1	@ 00058d90 0130
.org 0x58d92
	strb r0, [r5, #15]	@ 00058d92 e873
.org 0x58d94
	adds r0, r5, #0	@ 00058d94 281c
.org 0x58d96
	bl 0x1cff0	@ 00058d96 c4f72bf9
.org 0x58d9a
	adds r0, r5, #0	@ 00058d9a 281c
.org 0x58d9c
	adds r0, #116	@ 00058d9c 7430
.org 0x58d9e
	ldr r3, [pc, #84]	@ 00058d9e 154b
.org 0x58da0
	ldrb r1, [r5, #30]	@ 00058da0 a97f
.org 0x58da2
	lsls r1, r1, #8	@ 00058da2 0902
.org 0x58da4
	adds r2, r5, #0	@ 00058da4 2a1c
.org 0x58da6
	adds r2, #112	@ 00058da6 7032
.org 0x58da8
	ldrb r2, [r2, #0]	@ 00058da8 1278
.org 0x58daa
	orrs r1, r2	@ 00058daa 1143
.org 0x58dac
	ldr r2, [pc, #72]	@ 00058dac 124a
.org 0x58dae
	adds r1, r1, r2	@ 00058dae 8918
.org 0x58db0
	lsls r1, r1, #2	@ 00058db0 8900
.org 0x58db2
	adds r1, r1, r3	@ 00058db2 c918
.org 0x58db4
	adds r2, r5, #0	@ 00058db4 2a1c
.org 0x58db6
	adds r2, #113	@ 00058db6 7132
.org 0x58db8
	ldrb r2, [r2, #0]	@ 00058db8 1278
.org 0x58dba
	lsls r2, r2, #24	@ 00058dba 1206
.org 0x58dbc
	asrs r2, r2, #24	@ 00058dbc 1216
.org 0x58dbe
	ldr r1, [r1, #0]	@ 00058dbe 0968
.org 0x58dc0
	lsls r2, r2, #2	@ 00058dc0 9200
.org 0x58dc2
	adds r2, r2, r1	@ 00058dc2 5218
.org 0x58dc4
	ldr r1, [r2, #0]	@ 00058dc4 1168
.org 0x58dc6
	ldrb r2, [r1, #0]	@ 00058dc6 0a78
.org 0x58dc8
	lsls r1, r2, #1	@ 00058dc8 5100
.org 0x58dca
	adds r1, r1, r2	@ 00058dca 8918
.org 0x58dcc
	lsls r1, r1, #3	@ 00058dcc c900
.org 0x58dce
	ldr r2, [pc, #44]	@ 00058dce 0b4a
.org 0x58dd0
	adds r1, r1, r2	@ 00058dd0 8918
.org 0x58dd2
	bl 0x5784	@ 00058dd2 acf7d7fc
.org 0x58dd6
	adds r0, r5, #0	@ 00058dd6 281c
.org 0x58dd8
	bl 0x597ac	@ 00058dd8 00f0e8fc
.org 0x58ddc
	cmp r0, #0	@ 00058ddc 0028
.org 0x58dde
	beq.n 0x58e00	@ 00058dde 0fd0
.org 0x58de0
	movs r1, #0	@ 00058de0 0021
.org 0x58de2
	movs r0, #4	@ 00058de2 0420
.org 0x58de4
	strb r0, [r5, #13]	@ 00058de4 6873
.org 0x58de6
	strb r1, [r5, #14]	@ 00058de6 a973
.org 0x58de8
	strb r1, [r5, #15]	@ 00058de8 e973
.org 0x58dea
	b.n 0x58e6a	@ 00058dea 3ee0
.org 0x58dec
	.byte 0xf0,0xdb,0x02,0x02	@ 00058dec data
.org 0x58df0
	.byte 0x0c,0x93,0x12,0x08	@ 00058df0 data
.org 0x58df4
	.byte 0x1c,0x87,0x85,0x08	@ 00058df4 data
.org 0x58df8
	.byte 0x00,0x60,0xff,0xff	@ 00058df8 data
.org 0x58dfc
	.byte 0xcc,0x84,0x85,0x08	@ 00058dfc data
.org 0x58e00
	ldr r6, [r5, #84]	@ 00058e00 6e6d
.org 0x58e02
	ldr r0, [r5, #92]	@ 00058e02 e86d
.org 0x58e04
	adds r6, r6, r0	@ 00058e04 3618
.org 0x58e06
	str r6, [r5, #84]	@ 00058e06 6e65
.org 0x58e08
	adds r1, r5, #0	@ 00058e08 291c
.org 0x58e0a
	adds r1, #188	@ 00058e0a bc31
.org 0x58e0c
	ldr r6, [r1, #0]	@ 00058e0c 0e68
.org 0x58e0e
	ldr r0, [r5, #96]	@ 00058e0e 286e
.org 0x58e10
	adds r6, r6, r0	@ 00058e10 3618
.org 0x58e12
	str r6, [r1, #0]	@ 00058e12 0e60
.org 0x58e14
	adds r4, r5, #0	@ 00058e14 2c1c
.org 0x58e16
	adds r4, #84	@ 00058e16 5434
.org 0x58e18
	ldr r2, [pc, #84]	@ 00058e18 154a
.org 0x58e1a
	adds r3, r5, #0	@ 00058e1a 2b1c
.org 0x58e1c
	adds r3, #181	@ 00058e1c b533
.org 0x58e1e
	ldrb r0, [r3, #0]	@ 00058e1e 1878
.org 0x58e20
	lsls r0, r0, #1	@ 00058e20 4000
.org 0x58e22
	adds r0, r0, r2	@ 00058e22 8018
.org 0x58e24
	movs r7, #0	@ 00058e24 0027
.org 0x58e26
	ldrsh r0, [r0, r7]	@ 00058e26 c05f
.org 0x58e28
	lsls r0, r0, #1	@ 00058e28 4000
.org 0x58e2a
	adds r0, r6, r0	@ 00058e2a 3018
.org 0x58e2c
	str r0, [r4, #4]	@ 00058e2c 6060
.org 0x58e2e
	ldr r7, [r5, #96]	@ 00058e2e 2f6e
.org 0x58e30
	mov ip, r1	@ 00058e30 8c46
.org 0x58e32
	cmp r7, #0	@ 00058e32 002f
.org 0x58e34
	bge.n 0x58e40	@ 00058e34 04da
.org 0x58e36
	adds r0, r5, #0	@ 00058e36 281c
.org 0x58e38
	adds r0, #184	@ 00058e38 b830
.org 0x58e3a
	ldr r1, [r0, #0]	@ 00058e3a 0168
.org 0x58e3c
	cmp r6, r1	@ 00058e3c 8e42
.org 0x58e3e
	ble.n 0x58e4e	@ 00058e3e 06dd
.org 0x58e40
	cmp r7, #0	@ 00058e40 002f
.org 0x58e42
	ble.n 0x58e6a	@ 00058e42 12dd
.org 0x58e44
	adds r0, r5, #0	@ 00058e44 281c
.org 0x58e46
	adds r0, #184	@ 00058e46 b830
.org 0x58e48
	ldr r1, [r0, #0]	@ 00058e48 0168
.org 0x58e4a
	cmp r6, r1	@ 00058e4a 8e42
.org 0x58e4c
	blt.n 0x58e6a	@ 00058e4c 0ddb
.org 0x58e4e
	ldr r0, [r0, #0]	@ 00058e4e 0068
.org 0x58e50
	mov r1, ip	@ 00058e50 6146
.org 0x58e52
	str r0, [r1, #0]	@ 00058e52 0860
