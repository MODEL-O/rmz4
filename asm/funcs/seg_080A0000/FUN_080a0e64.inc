@ FUN_080a0e64  entry 0x080a0e64  size 162
.thumb
.org 0xa0e64
FUN_080a0e64:
	push {r4, r5, r6, lr}	@ 000a0e64 70b5
.org 0xa0e66
	adds r4, r0, #0	@ 000a0e66 041c
.org 0xa0e68
	ldrb r5, [r4, #15]	@ 000a0e68 e57b
.org 0xa0e6a
	cmp r5, #0	@ 000a0e6a 002d
.org 0xa0e6c
	bne.n 0xa0e8a	@ 000a0e6c 0dd1
.org 0xa0e6e
	adds r0, #116	@ 000a0e6e 7430
.org 0xa0e70
	ldr r1, [pc, #80]	@ 000a0e70 1449
.org 0xa0e72
	bl 0x5784	@ 000a0e72 64f787fc
.org 0xa0e76
	ldr r1, [pc, #80]	@ 000a0e76 1449
.org 0xa0e78
	adds r0, r4, #0	@ 000a0e78 201c
.org 0xa0e7a
	bl 0x1cf00	@ 000a0e7a 7cf741f8
.org 0xa0e7e
	str r5, [r4, #96]	@ 000a0e7e 2566
.org 0xa0e80
	movs r0, #1	@ 000a0e80 0120
.org 0xa0e82
	strb r0, [r4, #18]	@ 000a0e82 a074
.org 0xa0e84
	ldrb r0, [r4, #15]	@ 000a0e84 e07b
.org 0xa0e86
	adds r0, #1	@ 000a0e86 0130
.org 0xa0e88
	strb r0, [r4, #15]	@ 000a0e88 e073
.org 0xa0e8a
	adds r0, r4, #0	@ 000a0e8a 201c
.org 0xa0e8c
	bl 0x1cff0	@ 000a0e8c 7cf7b0f8
.org 0xa0e90
	ldrb r0, [r4, #18]	@ 000a0e90 a07c
.org 0xa0e92
	cmp r0, #0	@ 000a0e92 0028
.org 0xa0e94
	beq.n 0xa0eda	@ 000a0e94 21d0
.org 0xa0e96
	ldr r0, [r4, #88]	@ 000a0e96 a06d
.org 0xa0e98
	ldr r1, [r4, #96]	@ 000a0e98 216e
.org 0xa0e9a
	adds r0, r0, r1	@ 000a0e9a 4018
.org 0xa0e9c
	str r0, [r4, #88]	@ 000a0e9c a065
.org 0xa0e9e
	ldr r5, [r4, #84]	@ 000a0e9e 656d
.org 0xa0ea0
	adds r6, r0, #1	@ 000a0ea0 461c
.org 0xa0ea2
	adds r0, r5, #0	@ 000a0ea2 281c
.org 0xa0ea4
	adds r1, r6, #0	@ 000a0ea4 311c
.org 0xa0ea6
	bl 0x7c7c	@ 000a0ea6 66f7e9fe
.org 0xa0eaa
	lsls r0, r0, #16	@ 000a0eaa 0004
.org 0xa0eac
	cmp r0, #0	@ 000a0eac 0028
.org 0xa0eae
	bne.n 0xa0ecc	@ 000a0eae 0dd1
.org 0xa0eb0
	ldr r0, [r4, #96]	@ 000a0eb0 206e
.org 0xa0eb2
	adds r0, #64	@ 000a0eb2 4030
.org 0xa0eb4
	str r0, [r4, #96]	@ 000a0eb4 2066
.org 0xa0eb6
	movs r1, #224	@ 000a0eb6 e021
.org 0xa0eb8
	lsls r1, r1, #3	@ 000a0eb8 c900
.org 0xa0eba
	cmp r0, r1	@ 000a0eba 8842
.org 0xa0ebc
	ble.n 0xa0f0a	@ 000a0ebc 25dd
.org 0xa0ebe
	str r1, [r4, #96]	@ 000a0ebe 2166
.org 0xa0ec0
	b.n 0xa0f0a	@ 000a0ec0 23e0
.org 0xa0ec2
	.byte 0x00	@ 000a0ec2 data
.org 0xa0ec3
	.byte 0x00	@ 000a0ec3 data
.org 0xa0ec4
	.byte 0x34,0x1a,0x86,0x08	@ 000a0ec4 data
.org 0xa0ec8
	.byte 0x09,0x82,0x00,0x00	@ 000a0ec8 data
.org 0xa0ecc
	adds r0, r5, #0	@ 000a0ecc 281c
.org 0xa0ece
	adds r1, r6, #0	@ 000a0ece 311c
.org 0xa0ed0
	bl 0x8534	@ 000a0ed0 67f730fb
.org 0xa0ed4
	str r0, [r4, #88]	@ 000a0ed4 a065
.org 0xa0ed6
	movs r0, #0	@ 000a0ed6 0020
.org 0xa0ed8
	strb r0, [r4, #18]	@ 000a0ed8 a074
.org 0xa0eda
	adds r1, r4, #0	@ 000a0eda 211c
.org 0xa0edc
	adds r1, #180	@ 000a0edc b431
.org 0xa0ede
	ldr r0, [r1, #0]	@ 000a0ede 0868
.org 0xa0ee0
	subs r0, #1	@ 000a0ee0 0138
.org 0xa0ee2
	str r0, [r1, #0]	@ 000a0ee2 0860
.org 0xa0ee4
	cmp r0, #0	@ 000a0ee4 0028
.org 0xa0ee6
	bgt.n 0xa0f0a	@ 000a0ee6 10dc
.org 0xa0ee8
	ldr r1, [pc, #36]	@ 000a0ee8 0949
.org 0xa0eea
	ldrb r0, [r4, #9]	@ 000a0eea 607a
.org 0xa0eec
	lsls r0, r0, #2	@ 000a0eec 8000
.org 0xa0eee
	adds r0, r0, r1	@ 000a0eee 4018
.org 0xa0ef0
	movs r1, #2	@ 000a0ef0 0221
.org 0xa0ef2
	str r1, [r4, #12]	@ 000a0ef2 e160
.org 0xa0ef4
	ldr r0, [r0, #0]	@ 000a0ef4 0068
.org 0xa0ef6
	ldr r0, [r0, #8]	@ 000a0ef6 8068
.org 0xa0ef8
	str r0, [r4, #20]	@ 000a0ef8 6061
.org 0xa0efa
	movs r1, #0	@ 000a0efa 0021
.org 0xa0efc
	movs r0, #1	@ 000a0efc 0120
.org 0xa0efe
	strb r0, [r4, #13]	@ 000a0efe 6073
.org 0xa0f00
	strb r1, [r4, #14]	@ 000a0f00 a173
.org 0xa0f02
	strb r1, [r4, #15]	@ 000a0f02 e173
.org 0xa0f04
	adds r0, r4, #0	@ 000a0f04 201c
