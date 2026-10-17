@ FUN_080f3d44  entry 0x080f3d44  size 138
.thumb
.org 0xf3d44
FUN_080f3d44:
	push {lr}	@ 000f3d44 00b5
.org 0xf3d46
	adds r2, r0, #0	@ 000f3d46 021c
.org 0xf3d48
	ldrb r0, [r2, #13]	@ 000f3d48 507b
.org 0xf3d4a
	cmp r0, #1	@ 000f3d4a 0128
.org 0xf3d4c
	beq.n 0xf3d74	@ 000f3d4c 12d0
.org 0xf3d4e
	cmp r0, #1	@ 000f3d4e 0128
.org 0xf3d50
	bgt.n 0xf3d58	@ 000f3d50 02dc
.org 0xf3d52
	cmp r0, #0	@ 000f3d52 0028
.org 0xf3d54
	beq.n 0xf3d62	@ 000f3d54 05d0
.org 0xf3d56
	b.n 0xf3dce	@ 000f3d56 3ae0
.org 0xf3d58
	cmp r0, #2	@ 000f3d58 0228
.org 0xf3d5a
	beq.n 0xf3d86	@ 000f3d5a 14d0
.org 0xf3d5c
	cmp r0, #3	@ 000f3d5c 0328
.org 0xf3d5e
	beq.n 0xf3dbc	@ 000f3d5e 2dd0
.org 0xf3d60
	b.n 0xf3dce	@ 000f3d60 35e0
.org 0xf3d62
	adds r1, r2, #0	@ 000f3d62 111c
.org 0xf3d64
	adds r1, #180	@ 000f3d64 b431
.org 0xf3d66
	movs r0, #31	@ 000f3d66 1f20
.org 0xf3d68
	str r0, [r1, #0]	@ 000f3d68 0860
.org 0xf3d6a
	ldr r0, [r2, #88]	@ 000f3d6a 906d
.org 0xf3d6c
	str r0, [r2, #92]	@ 000f3d6c d065
.org 0xf3d6e
	ldrb r0, [r2, #13]	@ 000f3d6e 507b
.org 0xf3d70
	adds r0, #1	@ 000f3d70 0130
.org 0xf3d72
	strb r0, [r2, #13]	@ 000f3d72 5073
.org 0xf3d74
	adds r1, r2, #0	@ 000f3d74 111c
.org 0xf3d76
	adds r1, #180	@ 000f3d76 b431
.org 0xf3d78
	ldr r0, [r1, #0]	@ 000f3d78 0868
.org 0xf3d7a
	subs r0, #1	@ 000f3d7a 0138
.org 0xf3d7c
	str r0, [r1, #0]	@ 000f3d7c 0860
.org 0xf3d7e
	cmp r0, #0	@ 000f3d7e 0028
.org 0xf3d80
	bne.n 0xf3dce	@ 000f3d80 25d1
.org 0xf3d82
	str r0, [r2, #96]	@ 000f3d82 1066
.org 0xf3d84
	b.n 0xf3db0	@ 000f3d84 14e0
.org 0xf3d86
	ldr r1, [r2, #96]	@ 000f3d86 116e
.org 0xf3d88
	ldr r0, [pc, #44]	@ 000f3d88 0b48
.org 0xf3d8a
	cmp r1, r0	@ 000f3d8a 8142
.org 0xf3d8c
	bgt.n 0xf3d94	@ 000f3d8c 02dc
.org 0xf3d8e
	adds r0, r1, #0	@ 000f3d8e 081c
.org 0xf3d90
	adds r0, #16	@ 000f3d90 1030
.org 0xf3d92
	str r0, [r2, #96]	@ 000f3d92 1066
.org 0xf3d94
	ldr r0, [r2, #96]	@ 000f3d94 106e
.org 0xf3d96
	movs r1, #255	@ 000f3d96 ff21
.org 0xf3d98
	lsls r1, r1, #8	@ 000f3d98 0902
.org 0xf3d9a
	ands r0, r1	@ 000f3d9a 0840
.org 0xf3d9c
	ldr r1, [r2, #88]	@ 000f3d9c 916d
.org 0xf3d9e
	adds r1, r1, r0	@ 000f3d9e 0918
.org 0xf3da0
	str r1, [r2, #88]	@ 000f3da0 9165
.org 0xf3da2
	ldr r0, [r2, #92]	@ 000f3da2 d06d
.org 0xf3da4
	movs r3, #240	@ 000f3da4 f023
.org 0xf3da6
	lsls r3, r3, #9	@ 000f3da6 5b02
.org 0xf3da8
	adds r0, r0, r3	@ 000f3da8 c018
.org 0xf3daa
	cmp r1, r0	@ 000f3daa 8142
.org 0xf3dac
	ble.n 0xf3dce	@ 000f3dac 0fdd
.org 0xf3dae
	str r0, [r2, #88]	@ 000f3dae 9065
.org 0xf3db0
	ldrb r0, [r2, #13]	@ 000f3db0 507b
.org 0xf3db2
	adds r0, #1	@ 000f3db2 0130
.org 0xf3db4
	strb r0, [r2, #13]	@ 000f3db4 5073
.org 0xf3db6
	b.n 0xf3dce	@ 000f3db6 0ae0
.org 0xf3db8
	.byte 0xff,0x02,0x00,0x00	@ 000f3db8 data
.org 0xf3dbc
	ldr r1, [pc, #20]	@ 000f3dbc 0549
.org 0xf3dbe
	ldrb r0, [r2, #9]	@ 000f3dbe 507a
.org 0xf3dc0
	lsls r0, r0, #2	@ 000f3dc0 8000
.org 0xf3dc2
	adds r0, r0, r1	@ 000f3dc2 4018
.org 0xf3dc4
	movs r1, #2	@ 000f3dc4 0221
.org 0xf3dc6
	str r1, [r2, #12]	@ 000f3dc6 d160
.org 0xf3dc8
	ldr r0, [r0, #0]	@ 000f3dc8 0068
.org 0xf3dca
	ldr r0, [r0, #8]	@ 000f3dca 8068
.org 0xf3dcc
	str r0, [r2, #20]	@ 000f3dcc 5061
