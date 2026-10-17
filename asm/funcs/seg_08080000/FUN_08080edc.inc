@ FUN_08080edc  entry 0x08080edc  size 120
.thumb
.org 0x80edc
FUN_08080edc:
	push {r4, r5, lr}	@ 00080edc 30b5
.org 0x80ede
	adds r5, r0, #0	@ 00080ede 051c
.org 0x80ee0
	ldrb r0, [r5, #15]	@ 00080ee0 e87b
.org 0x80ee2
	cmp r0, #0	@ 00080ee2 0028
.org 0x80ee4
	bne.n 0x80efa	@ 00080ee4 09d1
.org 0x80ee6
	movs r1, #192	@ 00080ee6 c021
.org 0x80ee8
	lsls r1, r1, #5	@ 00080ee8 4901
.org 0x80eea
	adds r0, r5, #0	@ 00080eea 281c
.org 0x80eec
	bl 0x1cf00	@ 00080eec 9cf708f8
.org 0x80ef0
	movs r0, #33	@ 00080ef0 2120
.org 0x80ef2
	strb r0, [r5, #18]	@ 00080ef2 a874
.org 0x80ef4
	ldrb r0, [r5, #15]	@ 00080ef4 e87b
.org 0x80ef6
	adds r0, #1	@ 00080ef6 0130
.org 0x80ef8
	strb r0, [r5, #15]	@ 00080ef8 e873
.org 0x80efa
	adds r0, r5, #0	@ 00080efa 281c
.org 0x80efc
	bl 0x1cff0	@ 00080efc 9cf778f8
.org 0x80f00
	adds r0, r5, #0	@ 00080f00 281c
.org 0x80f02
	adds r0, #116	@ 00080f02 7430
.org 0x80f04
	ldr r4, [pc, #76]	@ 00080f04 134c
.org 0x80f06
	adds r1, r5, #0	@ 00080f06 291c
.org 0x80f08
	adds r1, #181	@ 00080f08 b531
.org 0x80f0a
	ldrb r3, [r1, #0]	@ 00080f0a 0b78
.org 0x80f0c
	lsls r3, r3, #2	@ 00080f0c 9b00
.org 0x80f0e
	ldrb r1, [r5, #30]	@ 00080f0e a97f
.org 0x80f10
	lsls r1, r1, #8	@ 00080f10 0902
.org 0x80f12
	adds r2, r5, #0	@ 00080f12 2a1c
.org 0x80f14
	adds r2, #112	@ 00080f14 7032
.org 0x80f16
	ldrb r2, [r2, #0]	@ 00080f16 1278
.org 0x80f18
	orrs r1, r2	@ 00080f18 1143
.org 0x80f1a
	ldr r2, [pc, #60]	@ 00080f1a 0f4a
.org 0x80f1c
	adds r1, r1, r2	@ 00080f1c 8918
.org 0x80f1e
	lsls r1, r1, #3	@ 00080f1e c900
.org 0x80f20
	adds r3, r3, r1	@ 00080f20 5b18
.org 0x80f22
	adds r3, r3, r4	@ 00080f22 1b19
.org 0x80f24
	adds r1, r5, #0	@ 00080f24 291c
.org 0x80f26
	adds r1, #113	@ 00080f26 7131
.org 0x80f28
	ldrb r1, [r1, #0]	@ 00080f28 0978
.org 0x80f2a
	lsls r1, r1, #24	@ 00080f2a 0906
.org 0x80f2c
	asrs r1, r1, #24	@ 00080f2c 0916
.org 0x80f2e
	ldr r2, [r3, #0]	@ 00080f2e 1a68
.org 0x80f30
	lsls r1, r1, #2	@ 00080f30 8900
.org 0x80f32
	adds r1, r1, r2	@ 00080f32 8918
.org 0x80f34
	ldr r1, [r1, #0]	@ 00080f34 0968
.org 0x80f36
	bl 0x5784	@ 00080f36 84f725fc
.org 0x80f3a
	ldrb r0, [r5, #18]	@ 00080f3a a87c
.org 0x80f3c
	subs r0, #1	@ 00080f3c 0138
.org 0x80f3e
	strb r0, [r5, #18]	@ 00080f3e a874
.org 0x80f40
	lsls r0, r0, #24	@ 00080f40 0006
.org 0x80f42
	lsrs r0, r0, #24	@ 00080f42 000e
.org 0x80f44
	cmp r0, #0	@ 00080f44 0028
.org 0x80f46
	bne.n 0x80f4e	@ 00080f46 02d1
.org 0x80f48
	strb r0, [r5, #13]	@ 00080f48 6873
.org 0x80f4a
	strb r0, [r5, #14]	@ 00080f4a a873
.org 0x80f4c
	strb r0, [r5, #15]	@ 00080f4c e873
.org 0x80f4e
	pop {r4, r5}	@ 00080f4e 30bc
.org 0x80f50
	pop {r0}	@ 00080f50 01bc
.org 0x80f52
	bx r0	@ 00080f52 0047
