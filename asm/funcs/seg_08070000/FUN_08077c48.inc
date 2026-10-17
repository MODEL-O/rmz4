@ FUN_08077c48  entry 0x08077c48  size 160
.thumb
.org 0x77c48
FUN_08077c48:
	push {r4, lr}	@ 00077c48 10b5
.org 0x77c4a
	adds r4, r0, #0	@ 00077c4a 041c
.org 0x77c4c
	ldrb r0, [r4, #15]	@ 00077c4c e07b
.org 0x77c4e
	cmp r0, #0	@ 00077c4e 0028
.org 0x77c50
	bne.n 0x77c76	@ 00077c50 11d1
.org 0x77c52
	adds r2, r4, #0	@ 00077c52 221c
.org 0x77c54
	adds r2, #204	@ 00077c54 cc32
.org 0x77c56
	ldr r0, [r2, #0]	@ 00077c56 1068
.org 0x77c58
	adds r0, #182	@ 00077c58 b630
.org 0x77c5a
	movs r1, #2	@ 00077c5a 0221
.org 0x77c5c
	strb r1, [r0, #0]	@ 00077c5c 0170
.org 0x77c5e
	ldr r0, [r2, #0]	@ 00077c5e 1068
.org 0x77c60
	adds r0, #185	@ 00077c60 b930
.org 0x77c62
	movs r1, #1	@ 00077c62 0121
.org 0x77c64
	strb r1, [r0, #0]	@ 00077c64 0170
.org 0x77c66
	adds r0, r4, #0	@ 00077c66 201c
.org 0x77c68
	bl 0x78fdc	@ 00077c68 01f0b8f9
.org 0x77c6c
	movs r0, #128	@ 00077c6c 8020
.org 0x77c6e
	strb r0, [r4, #18]	@ 00077c6e a074
.org 0x77c70
	ldrb r0, [r4, #15]	@ 00077c70 e07b
.org 0x77c72
	adds r0, #1	@ 00077c72 0130
.org 0x77c74
	strb r0, [r4, #15]	@ 00077c74 e073
.org 0x77c76
	adds r0, r4, #0	@ 00077c76 201c
.org 0x77c78
	bl 0x1cff0	@ 00077c78 a5f7baf9
.org 0x77c7c
	adds r0, r4, #0	@ 00077c7c 201c
.org 0x77c7e
	adds r0, #116	@ 00077c7e 7430
.org 0x77c80
	ldr r3, [pc, #100]	@ 00077c80 194b
.org 0x77c82
	ldr r2, [pc, #104]	@ 00077c82 1a4a
.org 0x77c84
	adds r1, r4, #0	@ 00077c84 211c
.org 0x77c86
	adds r1, #196	@ 00077c86 c431
.org 0x77c88
	ldrb r1, [r1, #0]	@ 00077c88 0978
.org 0x77c8a
	lsls r1, r1, #1	@ 00077c8a 4900
.org 0x77c8c
	adds r1, r1, r2	@ 00077c8c 8918
.org 0x77c8e
	ldrh r2, [r1, #0]	@ 00077c8e 0a88
.org 0x77c90
	lsls r2, r2, #2	@ 00077c90 9200
.org 0x77c92
	adds r2, r2, r3	@ 00077c92 d218
.org 0x77c94
	adds r1, r4, #0	@ 00077c94 211c
.org 0x77c96
	adds r1, #113	@ 00077c96 7131
.org 0x77c98
	ldrb r1, [r1, #0]	@ 00077c98 0978
.org 0x77c9a
	lsls r1, r1, #24	@ 00077c9a 0906
.org 0x77c9c
	asrs r1, r1, #24	@ 00077c9c 0916
.org 0x77c9e
	ldr r2, [r2, #0]	@ 00077c9e 1268
.org 0x77ca0
	lsls r1, r1, #2	@ 00077ca0 8900
.org 0x77ca2
	adds r1, r1, r2	@ 00077ca2 8918
.org 0x77ca4
	ldr r1, [r1, #0]	@ 00077ca4 0968
.org 0x77ca6
	bl 0x5784	@ 00077ca6 8df76dfd
.org 0x77caa
	adds r0, r4, #0	@ 00077caa 201c
.org 0x77cac
	bl 0x78f20	@ 00077cac 01f038f9
.org 0x77cb0
	ldrb r0, [r4, #18]	@ 00077cb0 a07c
.org 0x77cb2
	cmp r0, #0	@ 00077cb2 0028
.org 0x77cb4
	beq.n 0x77cba	@ 00077cb4 01d0
.org 0x77cb6
	subs r0, #1	@ 00077cb6 0138
.org 0x77cb8
	strb r0, [r4, #18]	@ 00077cb8 a074
.org 0x77cba
	adds r0, r4, #0	@ 00077cba 201c
.org 0x77cbc
	adds r0, #204	@ 00077cbc cc30
.org 0x77cbe
	ldr r1, [r0, #0]	@ 00077cbe 0168
.org 0x77cc0
	adds r0, r1, #0	@ 00077cc0 081c
.org 0x77cc2
	adds r0, #184	@ 00077cc2 b830
.org 0x77cc4
	ldrb r0, [r0, #0]	@ 00077cc4 0078
.org 0x77cc6
	cmp r0, #0	@ 00077cc6 0028
.org 0x77cc8
	beq.n 0x77ce2	@ 00077cc8 0bd0
.org 0x77cca
	adds r0, r1, #0	@ 00077cca 081c
.org 0x77ccc
	adds r0, #185	@ 00077ccc b930
.org 0x77cce
	ldrb r0, [r0, #0]	@ 00077cce 0078
.org 0x77cd0
	cmp r0, #0	@ 00077cd0 0028
.org 0x77cd2
	bne.n 0x77ce2	@ 00077cd2 06d1
.org 0x77cd4
	ldrb r1, [r4, #18]	@ 00077cd4 a17c
.org 0x77cd6
	cmp r1, #0	@ 00077cd6 0029
.org 0x77cd8
	bne.n 0x77ce2	@ 00077cd8 03d1
.org 0x77cda
	ldrb r0, [r4, #14]	@ 00077cda a07b
.org 0x77cdc
	adds r0, #1	@ 00077cdc 0130
.org 0x77cde
	strb r0, [r4, #14]	@ 00077cde a073
.org 0x77ce0
	strb r1, [r4, #15]	@ 00077ce0 e173
.org 0x77ce2
	pop {r4}	@ 00077ce2 10bc
.org 0x77ce4
	pop {r0}	@ 00077ce4 01bc
.org 0x77ce6
	bx r0	@ 00077ce6 0047
