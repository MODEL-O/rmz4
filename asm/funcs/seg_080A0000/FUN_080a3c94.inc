@ FUN_080a3c94  entry 0x080a3c94  size 154
.thumb
.org 0xa3c94
FUN_080a3c94:
	push {r4, r5, lr}	@ 000a3c94 30b5
.org 0xa3c96
	sub sp, #8	@ 000a3c96 82b0
.org 0xa3c98
	adds r4, r0, #0	@ 000a3c98 041c
.org 0xa3c9a
	ldr r1, [r4, #40]	@ 000a3c9a a16a
.org 0xa3c9c
	ldrb r0, [r4, #14]	@ 000a3c9c a07b
.org 0xa3c9e
	cmp r0, #0	@ 000a3c9e 0028
.org 0xa3ca0
	bne.n 0xa3d1a	@ 000a3ca0 3bd1
.org 0xa3ca2
	adds r1, #218	@ 000a3ca2 da31
.org 0xa3ca4
	ldrb r0, [r1, #0]	@ 000a3ca4 0878
.org 0xa3ca6
	cmp r0, #0	@ 000a3ca6 0028
.org 0xa3ca8
	beq.n 0xa3cae	@ 000a3ca8 01d0
.org 0xa3caa
	subs r0, #1	@ 000a3caa 0138
.org 0xa3cac
	strb r0, [r1, #0]	@ 000a3cac 0870
.org 0xa3cae
	adds r0, r4, #0	@ 000a3cae 201c
.org 0xa3cb0
	adds r0, #189	@ 000a3cb0 bd30
.org 0xa3cb2
	ldrb r0, [r0, #0]	@ 000a3cb2 0078
.org 0xa3cb4
	cmp r0, #0	@ 000a3cb4 0028
.org 0xa3cb6
	beq.n 0xa3cc2	@ 000a3cb6 04d0
.org 0xa3cb8
	movs r0, #2	@ 000a3cb8 0220
.org 0xa3cba
	strb r0, [r4, #13]	@ 000a3cba 6073
.org 0xa3cbc
	adds r5, r4, #0	@ 000a3cbc 251c
.org 0xa3cbe
	adds r5, #140	@ 000a3cbe 8c35
.org 0xa3cc0
	b.n 0xa3cfe	@ 000a3cc0 1de0
.org 0xa3cc2
	adds r1, r4, #0	@ 000a3cc2 211c
.org 0xa3cc4
	adds r1, #140	@ 000a3cc4 8c31
.org 0xa3cc6
	ldr r2, [r1, #0]	@ 000a3cc6 0a68
.org 0xa3cc8
	movs r0, #128	@ 000a3cc8 8020
.org 0xa3cca
	lsls r0, r0, #9	@ 000a3cca 4002
.org 0xa3ccc
	ands r2, r0	@ 000a3ccc 0240
.org 0xa3cce
	adds r5, r1, #0	@ 000a3cce 0d1c
.org 0xa3cd0
	cmp r2, #0	@ 000a3cd0 002a
.org 0xa3cd2
	beq.n 0xa3cfc	@ 000a3cd2 13d0
.org 0xa3cd4
	ldr r0, [r4, #84]	@ 000a3cd4 606d
.org 0xa3cd6
	str r0, [sp, #0]	@ 000a3cd6 0090
.org 0xa3cd8
	ldr r0, [r4, #88]	@ 000a3cd8 a06d
.org 0xa3cda
	ldr r1, [pc, #28]	@ 000a3cda 0749
.org 0xa3cdc
	adds r0, r0, r1	@ 000a3cdc 4018
.org 0xa3cde
	str r0, [sp, #4]	@ 000a3cde 0190
.org 0xa3ce0
	movs r2, #128	@ 000a3ce0 8022
.org 0xa3ce2
	lsls r2, r2, #2	@ 000a3ce2 9200
.org 0xa3ce4
	adds r0, r4, #0	@ 000a3ce4 201c
.org 0xa3ce6
	adds r0, #188	@ 000a3ce6 bc30
.org 0xa3ce8
	ldrb r3, [r0, #0]	@ 000a3ce8 0378
.org 0xa3cea
	movs r0, #0	@ 000a3cea 0020
.org 0xa3cec
	mov r1, sp	@ 000a3cec 6946
.org 0xa3cee
	bl 0xd0dc4	@ 000a3cee 2df069f8
.org 0xa3cf2
	movs r0, #1	@ 000a3cf2 0120
.org 0xa3cf4
	strb r0, [r4, #13]	@ 000a3cf4 6073
.org 0xa3cf6
	b.n 0xa3cfe	@ 000a3cf6 02e0
.org 0xa3cf8
	.byte 0x00,0xec,0xff,0xff	@ 000a3cf8 data
.org 0xa3cfc
	strb r2, [r4, #13]	@ 000a3cfc 6273
.org 0xa3cfe
	movs r1, #0	@ 000a3cfe 0021
.org 0xa3d00
	str r1, [r5, #0]	@ 000a3d00 2960
.org 0xa3d02
	adds r0, r4, #0	@ 000a3d02 201c
.org 0xa3d04
	adds r0, #144	@ 000a3d04 9030
.org 0xa3d06
	str r1, [r0, #0]	@ 000a3d06 0160
.org 0xa3d08
	adds r0, #4	@ 000a3d08 0430
.org 0xa3d0a
	strb r1, [r0, #0]	@ 000a3d0a 0170
.org 0xa3d0c
	ldrb r1, [r4, #10]	@ 000a3d0c a17a
.org 0xa3d0e
	movs r0, #251	@ 000a3d0e fb20
.org 0xa3d10
	ands r0, r1	@ 000a3d10 0840
.org 0xa3d12
	strb r0, [r4, #10]	@ 000a3d12 a072
.org 0xa3d14
	ldrb r0, [r4, #14]	@ 000a3d14 a07b
.org 0xa3d16
	adds r0, #1	@ 000a3d16 0130
.org 0xa3d18
	strb r0, [r4, #14]	@ 000a3d18 a073
.org 0xa3d1a
	ldr r0, [pc, #24]	@ 000a3d1a 0648
.org 0xa3d1c
	ldrb r1, [r4, #13]	@ 000a3d1c 617b
.org 0xa3d1e
	lsls r1, r1, #2	@ 000a3d1e 8900
.org 0xa3d20
	adds r1, r1, r0	@ 000a3d20 0918
.org 0xa3d22
	ldr r1, [r1, #0]	@ 000a3d22 0968
.org 0xa3d24
	adds r0, r4, #0	@ 000a3d24 201c
.org 0xa3d26
	bl 0x128f80	@ 000a3d26 85f02bf9
.org 0xa3d2a
	add sp, #8	@ 000a3d2a 02b0
.org 0xa3d2c
	pop {r4, r5}	@ 000a3d2c 30bc
