@ FUN_08077cf0  entry 0x08077cf0  size 140
.thumb
.org 0x77cf0
FUN_08077cf0:
	push {r4, lr}	@ 00077cf0 10b5
.org 0x77cf2
	adds r4, r0, #0	@ 00077cf2 041c
.org 0x77cf4
	ldrb r0, [r4, #15]	@ 00077cf4 e07b
.org 0x77cf6
	cmp r0, #0	@ 00077cf6 0028
.org 0x77cf8
	bne.n 0x77d1a	@ 00077cf8 0fd1
.org 0x77cfa
	adds r2, r4, #0	@ 00077cfa 221c
.org 0x77cfc
	adds r2, #204	@ 00077cfc cc32
.org 0x77cfe
	ldr r0, [r2, #0]	@ 00077cfe 1068
.org 0x77d00
	adds r0, #182	@ 00077d00 b630
.org 0x77d02
	movs r1, #3	@ 00077d02 0321
.org 0x77d04
	strb r1, [r0, #0]	@ 00077d04 0170
.org 0x77d06
	ldr r0, [r2, #0]	@ 00077d06 1068
.org 0x77d08
	adds r0, #185	@ 00077d08 b930
.org 0x77d0a
	movs r1, #1	@ 00077d0a 0121
.org 0x77d0c
	strb r1, [r0, #0]	@ 00077d0c 0170
.org 0x77d0e
	adds r0, r4, #0	@ 00077d0e 201c
.org 0x77d10
	bl 0x78fdc	@ 00077d10 01f064f9
.org 0x77d14
	ldrb r0, [r4, #15]	@ 00077d14 e07b
.org 0x77d16
	adds r0, #1	@ 00077d16 0130
.org 0x77d18
	strb r0, [r4, #15]	@ 00077d18 e073
.org 0x77d1a
	adds r0, r4, #0	@ 00077d1a 201c
.org 0x77d1c
	bl 0x1cff0	@ 00077d1c a5f768f9
.org 0x77d20
	adds r0, r4, #0	@ 00077d20 201c
.org 0x77d22
	adds r0, #116	@ 00077d22 7430
.org 0x77d24
	ldr r3, [pc, #84]	@ 00077d24 154b
.org 0x77d26
	ldr r2, [pc, #88]	@ 00077d26 164a
.org 0x77d28
	adds r1, r4, #0	@ 00077d28 211c
.org 0x77d2a
	adds r1, #196	@ 00077d2a c431
.org 0x77d2c
	ldrb r1, [r1, #0]	@ 00077d2c 0978
.org 0x77d2e
	lsls r1, r1, #1	@ 00077d2e 4900
.org 0x77d30
	adds r1, r1, r2	@ 00077d30 8918
.org 0x77d32
	ldrh r2, [r1, #0]	@ 00077d32 0a88
.org 0x77d34
	lsls r2, r2, #2	@ 00077d34 9200
.org 0x77d36
	adds r2, r2, r3	@ 00077d36 d218
.org 0x77d38
	adds r1, r4, #0	@ 00077d38 211c
.org 0x77d3a
	adds r1, #113	@ 00077d3a 7131
.org 0x77d3c
	ldrb r1, [r1, #0]	@ 00077d3c 0978
.org 0x77d3e
	lsls r1, r1, #24	@ 00077d3e 0906
.org 0x77d40
	asrs r1, r1, #24	@ 00077d40 0916
.org 0x77d42
	ldr r2, [r2, #0]	@ 00077d42 1268
.org 0x77d44
	lsls r1, r1, #2	@ 00077d44 8900
.org 0x77d46
	adds r1, r1, r2	@ 00077d46 8918
.org 0x77d48
	ldr r1, [r1, #0]	@ 00077d48 0968
.org 0x77d4a
	bl 0x5784	@ 00077d4a 8df71bfd
.org 0x77d4e
	adds r0, r4, #0	@ 00077d4e 201c
.org 0x77d50
	bl 0x78f20	@ 00077d50 01f0e6f8
.org 0x77d54
	adds r0, r4, #0	@ 00077d54 201c
.org 0x77d56
	adds r0, #204	@ 00077d56 cc30
.org 0x77d58
	ldr r1, [r0, #0]	@ 00077d58 0168
.org 0x77d5a
	adds r0, r1, #0	@ 00077d5a 081c
.org 0x77d5c
	adds r0, #184	@ 00077d5c b830
.org 0x77d5e
	ldrb r0, [r0, #0]	@ 00077d5e 0078
.org 0x77d60
	cmp r0, #0	@ 00077d60 0028
.org 0x77d62
	beq.n 0x77d76	@ 00077d62 08d0
.org 0x77d64
	adds r0, r1, #0	@ 00077d64 081c
.org 0x77d66
	adds r0, #185	@ 00077d66 b930
.org 0x77d68
	ldrb r1, [r0, #0]	@ 00077d68 0178
.org 0x77d6a
	cmp r1, #0	@ 00077d6a 0029
.org 0x77d6c
	bne.n 0x77d76	@ 00077d6c 03d1
.org 0x77d6e
	ldrb r0, [r4, #14]	@ 00077d6e a07b
.org 0x77d70
	adds r0, #1	@ 00077d70 0130
.org 0x77d72
	strb r0, [r4, #14]	@ 00077d72 a073
.org 0x77d74
	strb r1, [r4, #15]	@ 00077d74 e173
.org 0x77d76
	pop {r4}	@ 00077d76 10bc
.org 0x77d78
	pop {r0}	@ 00077d78 01bc
.org 0x77d7a
	bx r0	@ 00077d7a 0047
