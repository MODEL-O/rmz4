@ FUN_08078d30  entry 0x08078d30  size 140
.thumb
.org 0x78d30
FUN_08078d30:
	push {r4, lr}	@ 00078d30 10b5
.org 0x78d32
	adds r4, r0, #0	@ 00078d32 041c
.org 0x78d34
	ldrb r0, [r4, #15]	@ 00078d34 e07b
.org 0x78d36
	cmp r0, #0	@ 00078d36 0028
.org 0x78d38
	bne.n 0x78d5a	@ 00078d38 0fd1
.org 0x78d3a
	adds r2, r4, #0	@ 00078d3a 221c
.org 0x78d3c
	adds r2, #204	@ 00078d3c cc32
.org 0x78d3e
	ldr r0, [r2, #0]	@ 00078d3e 1068
.org 0x78d40
	adds r0, #182	@ 00078d40 b630
.org 0x78d42
	movs r1, #1	@ 00078d42 0121
.org 0x78d44
	strb r1, [r0, #0]	@ 00078d44 0170
.org 0x78d46
	ldr r0, [r2, #0]	@ 00078d46 1068
.org 0x78d48
	adds r0, #185	@ 00078d48 b930
.org 0x78d4a
	strb r1, [r0, #0]	@ 00078d4a 0170
.org 0x78d4c
	adds r0, r4, #0	@ 00078d4c 201c
.org 0x78d4e
	movs r1, #0	@ 00078d4e 0021
.org 0x78d50
	bl 0x78fdc	@ 00078d50 00f044f9
.org 0x78d54
	ldrb r0, [r4, #15]	@ 00078d54 e07b
.org 0x78d56
	adds r0, #1	@ 00078d56 0130
.org 0x78d58
	strb r0, [r4, #15]	@ 00078d58 e073
.org 0x78d5a
	adds r0, r4, #0	@ 00078d5a 201c
.org 0x78d5c
	bl 0x1cff0	@ 00078d5c a4f748f9
.org 0x78d60
	adds r0, r4, #0	@ 00078d60 201c
.org 0x78d62
	adds r0, #116	@ 00078d62 7430
.org 0x78d64
	ldr r3, [pc, #84]	@ 00078d64 154b
.org 0x78d66
	ldr r2, [pc, #88]	@ 00078d66 164a
.org 0x78d68
	adds r1, r4, #0	@ 00078d68 211c
.org 0x78d6a
	adds r1, #196	@ 00078d6a c431
.org 0x78d6c
	ldrb r1, [r1, #0]	@ 00078d6c 0978
.org 0x78d6e
	lsls r1, r1, #1	@ 00078d6e 4900
.org 0x78d70
	adds r1, r1, r2	@ 00078d70 8918
.org 0x78d72
	ldrh r2, [r1, #0]	@ 00078d72 0a88
.org 0x78d74
	lsls r2, r2, #2	@ 00078d74 9200
.org 0x78d76
	adds r2, r2, r3	@ 00078d76 d218
.org 0x78d78
	adds r1, r4, #0	@ 00078d78 211c
.org 0x78d7a
	adds r1, #113	@ 00078d7a 7131
.org 0x78d7c
	ldrb r1, [r1, #0]	@ 00078d7c 0978
.org 0x78d7e
	lsls r1, r1, #24	@ 00078d7e 0906
.org 0x78d80
	asrs r1, r1, #24	@ 00078d80 0916
.org 0x78d82
	ldr r2, [r2, #0]	@ 00078d82 1268
.org 0x78d84
	lsls r1, r1, #2	@ 00078d84 8900
.org 0x78d86
	adds r1, r1, r2	@ 00078d86 8918
.org 0x78d88
	ldr r1, [r1, #0]	@ 00078d88 0968
.org 0x78d8a
	bl 0x5784	@ 00078d8a 8cf7fbfc
.org 0x78d8e
	adds r0, r4, #0	@ 00078d8e 201c
.org 0x78d90
	bl 0x78f28	@ 00078d90 00f0caf8
.org 0x78d94
	adds r0, r4, #0	@ 00078d94 201c
.org 0x78d96
	adds r0, #204	@ 00078d96 cc30
.org 0x78d98
	ldr r1, [r0, #0]	@ 00078d98 0168
.org 0x78d9a
	adds r0, r1, #0	@ 00078d9a 081c
.org 0x78d9c
	adds r0, #184	@ 00078d9c b830
.org 0x78d9e
	ldrb r0, [r0, #0]	@ 00078d9e 0078
.org 0x78da0
	cmp r0, #0	@ 00078da0 0028
.org 0x78da2
	beq.n 0x78db6	@ 00078da2 08d0
.org 0x78da4
	adds r0, r1, #0	@ 00078da4 081c
.org 0x78da6
	adds r0, #185	@ 00078da6 b930
.org 0x78da8
	ldrb r1, [r0, #0]	@ 00078da8 0178
.org 0x78daa
	cmp r1, #0	@ 00078daa 0029
.org 0x78dac
	bne.n 0x78db6	@ 00078dac 03d1
.org 0x78dae
	ldrb r0, [r4, #14]	@ 00078dae a07b
.org 0x78db0
	adds r0, #1	@ 00078db0 0130
.org 0x78db2
	strb r0, [r4, #14]	@ 00078db2 a073
.org 0x78db4
	strb r1, [r4, #15]	@ 00078db4 e173
.org 0x78db6
	pop {r4}	@ 00078db6 10bc
.org 0x78db8
	pop {r0}	@ 00078db8 01bc
.org 0x78dba
	bx r0	@ 00078dba 0047
