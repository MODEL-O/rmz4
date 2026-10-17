@ FUN_08077e58  entry 0x08077e58  size 118
.thumb
.org 0x77e58
FUN_08077e58:
	push {r4, lr}	@ 00077e58 10b5
.org 0x77e5a
	adds r4, r0, #0	@ 00077e5a 041c
.org 0x77e5c
	ldrb r0, [r4, #15]	@ 00077e5c e07b
.org 0x77e5e
	cmp r0, #0	@ 00077e5e 0028
.org 0x77e60
	bne.n 0x77e74	@ 00077e60 08d1
.org 0x77e62
	adds r0, r4, #0	@ 00077e62 201c
.org 0x77e64
	movs r1, #0	@ 00077e64 0021
.org 0x77e66
	bl 0x78fdc	@ 00077e66 01f0b9f8
.org 0x77e6a
	movs r0, #64	@ 00077e6a 4020
.org 0x77e6c
	strb r0, [r4, #18]	@ 00077e6c a074
.org 0x77e6e
	ldrb r0, [r4, #15]	@ 00077e6e e07b
.org 0x77e70
	adds r0, #1	@ 00077e70 0130
.org 0x77e72
	strb r0, [r4, #15]	@ 00077e72 e073
.org 0x77e74
	adds r0, r4, #0	@ 00077e74 201c
.org 0x77e76
	bl 0x1cff0	@ 00077e76 a5f7bbf8
.org 0x77e7a
	adds r0, r4, #0	@ 00077e7a 201c
.org 0x77e7c
	adds r0, #116	@ 00077e7c 7430
.org 0x77e7e
	ldr r3, [pc, #80]	@ 00077e7e 144b
.org 0x77e80
	ldr r2, [pc, #80]	@ 00077e80 144a
.org 0x77e82
	adds r1, r4, #0	@ 00077e82 211c
.org 0x77e84
	adds r1, #196	@ 00077e84 c431
.org 0x77e86
	ldrb r1, [r1, #0]	@ 00077e86 0978
.org 0x77e88
	lsls r1, r1, #1	@ 00077e88 4900
.org 0x77e8a
	adds r1, r1, r2	@ 00077e8a 8918
.org 0x77e8c
	ldrh r2, [r1, #0]	@ 00077e8c 0a88
.org 0x77e8e
	lsls r2, r2, #2	@ 00077e8e 9200
.org 0x77e90
	adds r2, r2, r3	@ 00077e90 d218
.org 0x77e92
	adds r1, r4, #0	@ 00077e92 211c
.org 0x77e94
	adds r1, #113	@ 00077e94 7131
.org 0x77e96
	ldrb r1, [r1, #0]	@ 00077e96 0978
.org 0x77e98
	lsls r1, r1, #24	@ 00077e98 0906
.org 0x77e9a
	asrs r1, r1, #24	@ 00077e9a 0916
.org 0x77e9c
	ldr r2, [r2, #0]	@ 00077e9c 1268
.org 0x77e9e
	lsls r1, r1, #2	@ 00077e9e 8900
.org 0x77ea0
	adds r1, r1, r2	@ 00077ea0 8918
.org 0x77ea2
	ldr r1, [r1, #0]	@ 00077ea2 0968
.org 0x77ea4
	bl 0x5784	@ 00077ea4 8df76efc
.org 0x77ea8
	adds r0, r4, #0	@ 00077ea8 201c
.org 0x77eaa
	bl 0x78f28	@ 00077eaa 01f03df8
.org 0x77eae
	ldrb r0, [r4, #18]	@ 00077eae a07c
.org 0x77eb0
	cmp r0, #0	@ 00077eb0 0028
.org 0x77eb2
	beq.n 0x77ebe	@ 00077eb2 04d0
.org 0x77eb4
	subs r0, #1	@ 00077eb4 0138
.org 0x77eb6
	strb r0, [r4, #18]	@ 00077eb6 a074
.org 0x77eb8
	lsls r0, r0, #24	@ 00077eb8 0006
.org 0x77eba
	cmp r0, #0	@ 00077eba 0028
.org 0x77ebc
	bne.n 0x77ec8	@ 00077ebc 04d1
.org 0x77ebe
	ldrb r0, [r4, #14]	@ 00077ebe a07b
.org 0x77ec0
	adds r0, #1	@ 00077ec0 0130
.org 0x77ec2
	movs r1, #0	@ 00077ec2 0021
.org 0x77ec4
	strb r0, [r4, #14]	@ 00077ec4 a073
.org 0x77ec6
	strb r1, [r4, #15]	@ 00077ec6 e173
.org 0x77ec8
	pop {r4}	@ 00077ec8 10bc
.org 0x77eca
	pop {r0}	@ 00077eca 01bc
.org 0x77ecc
	bx r0	@ 00077ecc 0047
