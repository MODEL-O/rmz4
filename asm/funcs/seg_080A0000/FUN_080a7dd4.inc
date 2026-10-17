@ FUN_080a7dd4  entry 0x080a7dd4  size 254
.thumb
.org 0xa7dd4
FUN_080a7dd4:
	push {r4, r5, r6, lr}	@ 000a7dd4 70b5
.org 0xa7dd6
	adds r4, r0, #0	@ 000a7dd6 041c
.org 0xa7dd8
	ldr r6, [r4, #40]	@ 000a7dd8 a66a
.org 0xa7dda
	ldrb r5, [r4, #14]	@ 000a7dda a57b
.org 0xa7ddc
	cmp r5, #0	@ 000a7ddc 002d
.org 0xa7dde
	bne.n 0xa7e08	@ 000a7dde 13d1
.org 0xa7de0
	ldr r1, [pc, #80]	@ 000a7de0 1449
.org 0xa7de2
	bl 0x1cf00	@ 000a7de2 75f78df8
.org 0xa7de6
	adds r0, r4, #0	@ 000a7de6 201c
.org 0xa7de8
	adds r0, #116	@ 000a7de8 7430
.org 0xa7dea
	ldr r1, [pc, #76]	@ 000a7dea 1349
.org 0xa7dec
	bl 0x5784	@ 000a7dec 5df7cafc
.org 0xa7df0
	adds r0, r4, #0	@ 000a7df0 201c
.org 0xa7df2
	adds r0, #180	@ 000a7df2 b430
.org 0xa7df4
	ldr r0, [r0, #0]	@ 000a7df4 0068
.org 0xa7df6
	str r0, [r4, #84]	@ 000a7df6 6065
.org 0xa7df8
	adds r0, r4, #0	@ 000a7df8 201c
.org 0xa7dfa
	adds r0, #184	@ 000a7dfa b830
.org 0xa7dfc
	ldr r0, [r0, #0]	@ 000a7dfc 0068
.org 0xa7dfe
	str r0, [r4, #88]	@ 000a7dfe a065
.org 0xa7e00
	strb r5, [r4, #18]	@ 000a7e00 a574
.org 0xa7e02
	ldrb r0, [r4, #14]	@ 000a7e02 a07b
.org 0xa7e04
	adds r0, #1	@ 000a7e04 0130
.org 0xa7e06
	strb r0, [r4, #14]	@ 000a7e06 a073
.org 0xa7e08
	adds r0, r4, #0	@ 000a7e08 201c
.org 0xa7e0a
	bl 0x1cff0	@ 000a7e0a 75f7f1f8
.org 0xa7e0e
	ldrb r0, [r4, #18]	@ 000a7e0e a07c
.org 0xa7e10
	adds r0, #2	@ 000a7e10 0230
.org 0xa7e12
	strb r0, [r4, #18]	@ 000a7e12 a074
.org 0xa7e14
	ldrb r0, [r4, #17]	@ 000a7e14 607c
.org 0xa7e16
	cmp r0, #0	@ 000a7e16 0028
.org 0xa7e18
	beq.n 0xa7e40	@ 000a7e18 12d0
.org 0xa7e1a
	adds r3, r4, #0	@ 000a7e1a 231c
.org 0xa7e1c
	adds r3, #180	@ 000a7e1c b433
.org 0xa7e1e
	ldr r2, [pc, #28]	@ 000a7e1e 074a
.org 0xa7e20
	ldrb r0, [r4, #18]	@ 000a7e20 a07c
.org 0xa7e22
	lsls r0, r0, #1	@ 000a7e22 4000
.org 0xa7e24
	adds r0, r0, r2	@ 000a7e24 8018
.org 0xa7e26
	movs r5, #0	@ 000a7e26 0025
.org 0xa7e28
	ldrsh r1, [r0, r5]	@ 000a7e28 415f
.org 0xa7e2a
	lsls r1, r1, #3	@ 000a7e2a c900
.org 0xa7e2c
	ldr r0, [r3, #0]	@ 000a7e2c 1868
.org 0xa7e2e
	subs r0, r0, r1	@ 000a7e2e 401a
.org 0xa7e30
	b.n 0xa7e56	@ 000a7e30 11e0
.org 0xa7e32
	.byte 0x00	@ 000a7e32 data
.org 0xa7e33
	.byte 0x00	@ 000a7e33 data
.org 0xa7e34
	.byte 0x05,0x8d,0x00,0x00	@ 000a7e34 data
.org 0xa7e38
	.byte 0x54,0x27,0x86,0x08	@ 000a7e38 data
.org 0xa7e3c
	.byte 0x0c,0x93,0x12,0x08	@ 000a7e3c data
.org 0xa7e40
	adds r3, r4, #0	@ 000a7e40 231c
.org 0xa7e42
	adds r3, #180	@ 000a7e42 b433
.org 0xa7e44
	ldr r2, [pc, #80]	@ 000a7e44 144a
.org 0xa7e46
	ldrb r0, [r4, #18]	@ 000a7e46 a07c
.org 0xa7e48
	lsls r0, r0, #1	@ 000a7e48 4000
.org 0xa7e4a
	adds r0, r0, r2	@ 000a7e4a 8018
.org 0xa7e4c
	movs r5, #0	@ 000a7e4c 0025
.org 0xa7e4e
	ldrsh r1, [r0, r5]	@ 000a7e4e 415f
.org 0xa7e50
	lsls r1, r1, #3	@ 000a7e50 c900
.org 0xa7e52
	ldr r0, [r3, #0]	@ 000a7e52 1868
.org 0xa7e54
	adds r0, r0, r1	@ 000a7e54 4018
.org 0xa7e56
	str r0, [r4, #84]	@ 000a7e56 6065
.org 0xa7e58
	adds r3, r2, #0	@ 000a7e58 131c
.org 0xa7e5a
	ldrb r0, [r4, #18]	@ 000a7e5a a07c
.org 0xa7e5c
	adds r2, r4, #0	@ 000a7e5c 221c
.org 0xa7e5e
	adds r2, #184	@ 000a7e5e b832
.org 0xa7e60
	lsls r0, r0, #1	@ 000a7e60 4000
.org 0xa7e62
	adds r0, r0, r3	@ 000a7e62 c018
.org 0xa7e64
	movs r5, #0	@ 000a7e64 0025
.org 0xa7e66
	ldrsh r1, [r0, r5]	@ 000a7e66 415f
.org 0xa7e68
	lsls r1, r1, #2	@ 000a7e68 8900
.org 0xa7e6a
	ldr r0, [r2, #0]	@ 000a7e6a 1068
.org 0xa7e6c
	adds r0, r0, r1	@ 000a7e6c 4018
.org 0xa7e6e
	str r0, [r4, #88]	@ 000a7e6e a065
.org 0xa7e70
	ldrb r0, [r4, #18]	@ 000a7e70 a07c
.org 0xa7e72
	lsls r0, r0, #1	@ 000a7e72 4000
.org 0xa7e74
	adds r0, r0, r3	@ 000a7e74 c018
.org 0xa7e76
	movs r1, #0	@ 000a7e76 0021
.org 0xa7e78
	ldrsh r0, [r0, r1]	@ 000a7e78 405e
.org 0xa7e7a
	lsls r0, r0, #2	@ 000a7e7a 8000
.org 0xa7e7c
	movs r2, #128	@ 000a7e7c 8022
.org 0xa7e7e
	lsls r2, r2, #4	@ 000a7e7e 1201
.org 0xa7e80
	adds r1, r2, #0	@ 000a7e80 111c
.org 0xa7e82
	subs r1, r1, r0	@ 000a7e82 091a
.org 0xa7e84
	adds r0, r4, #0	@ 000a7e84 201c
.org 0xa7e86
	adds r0, #188	@ 000a7e86 bc30
.org 0xa7e88
	movs r2, #0	@ 000a7e88 0022
.org 0xa7e8a
	strh r1, [r0, #0]	@ 000a7e8a 0180
.org 0xa7e8c
	adds r0, #2	@ 000a7e8c 0230
.org 0xa7e8e
	ldrb r0, [r0, #0]	@ 000a7e8e 0078
.org 0xa7e90
	cmp r0, #0	@ 000a7e90 0028
.org 0xa7e92
	beq.n 0xa7e9c	@ 000a7e92 03d0
.org 0xa7e94
	movs r0, #1	@ 000a7e94 0120
.org 0xa7e96
	b.n 0xa7eb6	@ 000a7e96 0ee0
.org 0xa7e98
	.byte 0x0c,0x93,0x12,0x08	@ 000a7e98 data
.org 0xa7e9c
	adds r0, r4, #0	@ 000a7e9c 201c
.org 0xa7e9e
	adds r0, #191	@ 000a7e9e bf30
.org 0xa7ea0
	ldrb r0, [r0, #0]	@ 000a7ea0 0078
.org 0xa7ea2
	cmp r0, #0	@ 000a7ea2 0028
.org 0xa7ea4
	beq.n 0xa7eaa	@ 000a7ea4 01d0
.org 0xa7ea6
	movs r0, #2	@ 000a7ea6 0220
.org 0xa7ea8
	b.n 0xa7eb6	@ 000a7ea8 05e0
.org 0xa7eaa
	adds r0, r4, #0	@ 000a7eaa 201c
.org 0xa7eac
	adds r0, #192	@ 000a7eac c030
.org 0xa7eae
	ldrb r0, [r0, #0]	@ 000a7eae 0078
.org 0xa7eb0
	cmp r0, #0	@ 000a7eb0 0028
.org 0xa7eb2
	beq.n 0xa7ebc	@ 000a7eb2 03d0
.org 0xa7eb4
	movs r0, #3	@ 000a7eb4 0320
.org 0xa7eb6
	strb r0, [r4, #13]	@ 000a7eb6 6073
.org 0xa7eb8
	strb r2, [r4, #14]	@ 000a7eb8 a273
.org 0xa7eba
	b.n 0xa7ede	@ 000a7eba 10e0
.org 0xa7ebc
	ldrb r0, [r6, #13]	@ 000a7ebc 707b
.org 0xa7ebe
	cmp r0, #4	@ 000a7ebe 0428
.org 0xa7ec0
	bne.n 0xa7ede	@ 000a7ec0 0dd1
.org 0xa7ec2
	adds r2, r6, #0	@ 000a7ec2 321c
.org 0xa7ec4
	adds r2, #180	@ 000a7ec4 b432
.org 0xa7ec6
	ldr r1, [r6, #84]	@ 000a7ec6 716d
.org 0xa7ec8
	ldr r0, [r2, #0]	@ 000a7ec8 1068
.org 0xa7eca
	subs r1, r1, r0	@ 000a7eca 091a
.org 0xa7ecc
	ldr r0, [r4, #84]	@ 000a7ecc 606d
.org 0xa7ece
	adds r0, r0, r1	@ 000a7ece 4018
.org 0xa7ed0
	str r0, [r4, #84]	@ 000a7ed0 6065
