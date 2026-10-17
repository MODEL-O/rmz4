@ FUN_08080e68  entry 0x08080e68  size 108
.thumb
.org 0x80e68
FUN_08080e68:
	push {r4, r5, lr}	@ 00080e68 30b5
.org 0x80e6a
	adds r5, r0, #0	@ 00080e6a 051c
.org 0x80e6c
	ldrb r1, [r5, #15]	@ 00080e6c e97b
.org 0x80e6e
	cmp r1, #0	@ 00080e6e 0029
.org 0x80e70
	bne.n 0x80e7a	@ 00080e70 03d1
.org 0x80e72
	movs r0, #60	@ 00080e72 3c20
.org 0x80e74
	strb r0, [r5, #18]	@ 00080e74 a874
.org 0x80e76
	adds r0, r1, #1	@ 00080e76 481c
.org 0x80e78
	strb r0, [r5, #15]	@ 00080e78 e873
.org 0x80e7a
	adds r0, r5, #0	@ 00080e7a 281c
.org 0x80e7c
	bl 0x1cff0	@ 00080e7c 9cf7b8f8
.org 0x80e80
	adds r0, r5, #0	@ 00080e80 281c
.org 0x80e82
	adds r0, #116	@ 00080e82 7430
.org 0x80e84
	ldr r4, [pc, #76]	@ 00080e84 134c
.org 0x80e86
	adds r1, r5, #0	@ 00080e86 291c
.org 0x80e88
	adds r1, #181	@ 00080e88 b531
.org 0x80e8a
	ldrb r3, [r1, #0]	@ 00080e8a 0b78
.org 0x80e8c
	lsls r3, r3, #2	@ 00080e8c 9b00
.org 0x80e8e
	ldrb r1, [r5, #30]	@ 00080e8e a97f
.org 0x80e90
	lsls r1, r1, #8	@ 00080e90 0902
.org 0x80e92
	adds r2, r5, #0	@ 00080e92 2a1c
.org 0x80e94
	adds r2, #112	@ 00080e94 7032
.org 0x80e96
	ldrb r2, [r2, #0]	@ 00080e96 1278
.org 0x80e98
	orrs r1, r2	@ 00080e98 1143
.org 0x80e9a
	ldr r2, [pc, #60]	@ 00080e9a 0f4a
.org 0x80e9c
	adds r1, r1, r2	@ 00080e9c 8918
.org 0x80e9e
	lsls r1, r1, #3	@ 00080e9e c900
.org 0x80ea0
	adds r3, r3, r1	@ 00080ea0 5b18
.org 0x80ea2
	adds r3, r3, r4	@ 00080ea2 1b19
.org 0x80ea4
	adds r1, r5, #0	@ 00080ea4 291c
.org 0x80ea6
	adds r1, #113	@ 00080ea6 7131
.org 0x80ea8
	ldrb r1, [r1, #0]	@ 00080ea8 0978
.org 0x80eaa
	lsls r1, r1, #24	@ 00080eaa 0906
.org 0x80eac
	asrs r1, r1, #24	@ 00080eac 0916
.org 0x80eae
	ldr r2, [r3, #0]	@ 00080eae 1a68
.org 0x80eb0
	lsls r1, r1, #2	@ 00080eb0 8900
.org 0x80eb2
	adds r1, r1, r2	@ 00080eb2 8918
.org 0x80eb4
	ldr r1, [r1, #0]	@ 00080eb4 0968
.org 0x80eb6
	bl 0x5784	@ 00080eb6 84f765fc
.org 0x80eba
	ldrb r0, [r5, #18]	@ 00080eba a87c
.org 0x80ebc
	subs r0, #1	@ 00080ebc 0138
.org 0x80ebe
	strb r0, [r5, #18]	@ 00080ebe a874
.org 0x80ec0
	lsls r0, r0, #24	@ 00080ec0 0006
.org 0x80ec2
	lsrs r1, r0, #24	@ 00080ec2 010e
.org 0x80ec4
	cmp r1, #0	@ 00080ec4 0029
.org 0x80ec6
	bne.n 0x80ece	@ 00080ec6 02d1
.org 0x80ec8
	movs r0, #8	@ 00080ec8 0820
.org 0x80eca
	strb r0, [r5, #14]	@ 00080eca a873
.org 0x80ecc
	strb r1, [r5, #15]	@ 00080ecc e973
.org 0x80ece
	pop {r4, r5}	@ 00080ece 30bc
.org 0x80ed0
	pop {r0}	@ 00080ed0 01bc
.org 0x80ed2
	bx r0	@ 00080ed2 0047
