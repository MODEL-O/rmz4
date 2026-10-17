@ FUN_08080c04  entry 0x08080c04  size 120
.thumb
.org 0x80c04
FUN_08080c04:
	push {r4, r5, lr}	@ 00080c04 30b5
.org 0x80c06
	adds r5, r0, #0	@ 00080c06 051c
.org 0x80c08
	ldrb r0, [r5, #15]	@ 00080c08 e87b
.org 0x80c0a
	cmp r0, #0	@ 00080c0a 0028
.org 0x80c0c
	bne.n 0x80c22	@ 00080c0c 09d1
.org 0x80c0e
	movs r1, #192	@ 00080c0e c021
.org 0x80c10
	lsls r1, r1, #5	@ 00080c10 4901
.org 0x80c12
	adds r0, r5, #0	@ 00080c12 281c
.org 0x80c14
	bl 0x1cf00	@ 00080c14 9cf774f9
.org 0x80c18
	movs r0, #32	@ 00080c18 2020
.org 0x80c1a
	strb r0, [r5, #18]	@ 00080c1a a874
.org 0x80c1c
	ldrb r0, [r5, #15]	@ 00080c1c e87b
.org 0x80c1e
	adds r0, #1	@ 00080c1e 0130
.org 0x80c20
	strb r0, [r5, #15]	@ 00080c20 e873
.org 0x80c22
	adds r0, r5, #0	@ 00080c22 281c
.org 0x80c24
	bl 0x1cff0	@ 00080c24 9cf7e4f9
.org 0x80c28
	adds r0, r5, #0	@ 00080c28 281c
.org 0x80c2a
	adds r0, #116	@ 00080c2a 7430
.org 0x80c2c
	ldr r4, [pc, #76]	@ 00080c2c 134c
.org 0x80c2e
	adds r1, r5, #0	@ 00080c2e 291c
.org 0x80c30
	adds r1, #181	@ 00080c30 b531
.org 0x80c32
	ldrb r3, [r1, #0]	@ 00080c32 0b78
.org 0x80c34
	lsls r3, r3, #2	@ 00080c34 9b00
.org 0x80c36
	ldrb r1, [r5, #30]	@ 00080c36 a97f
.org 0x80c38
	lsls r1, r1, #8	@ 00080c38 0902
.org 0x80c3a
	adds r2, r5, #0	@ 00080c3a 2a1c
.org 0x80c3c
	adds r2, #112	@ 00080c3c 7032
.org 0x80c3e
	ldrb r2, [r2, #0]	@ 00080c3e 1278
.org 0x80c40
	orrs r1, r2	@ 00080c40 1143
.org 0x80c42
	ldr r2, [pc, #60]	@ 00080c42 0f4a
.org 0x80c44
	adds r1, r1, r2	@ 00080c44 8918
.org 0x80c46
	lsls r1, r1, #3	@ 00080c46 c900
.org 0x80c48
	adds r3, r3, r1	@ 00080c48 5b18
.org 0x80c4a
	adds r3, r3, r4	@ 00080c4a 1b19
.org 0x80c4c
	adds r1, r5, #0	@ 00080c4c 291c
.org 0x80c4e
	adds r1, #113	@ 00080c4e 7131
.org 0x80c50
	ldrb r1, [r1, #0]	@ 00080c50 0978
.org 0x80c52
	lsls r1, r1, #24	@ 00080c52 0906
.org 0x80c54
	asrs r1, r1, #24	@ 00080c54 0916
.org 0x80c56
	ldr r2, [r3, #0]	@ 00080c56 1a68
.org 0x80c58
	lsls r1, r1, #2	@ 00080c58 8900
.org 0x80c5a
	adds r1, r1, r2	@ 00080c5a 8918
.org 0x80c5c
	ldr r1, [r1, #0]	@ 00080c5c 0968
.org 0x80c5e
	bl 0x5784	@ 00080c5e 84f791fd
.org 0x80c62
	ldrb r0, [r5, #18]	@ 00080c62 a87c
.org 0x80c64
	subs r0, #1	@ 00080c64 0138
.org 0x80c66
	strb r0, [r5, #18]	@ 00080c66 a874
.org 0x80c68
	lsls r0, r0, #24	@ 00080c68 0006
.org 0x80c6a
	lsrs r0, r0, #24	@ 00080c6a 000e
.org 0x80c6c
	cmp r0, #0	@ 00080c6c 0028
.org 0x80c6e
	bne.n 0x80c76	@ 00080c6e 02d1
.org 0x80c70
	strb r0, [r5, #13]	@ 00080c70 6873
.org 0x80c72
	strb r0, [r5, #14]	@ 00080c72 a873
.org 0x80c74
	strb r0, [r5, #15]	@ 00080c74 e873
.org 0x80c76
	pop {r4, r5}	@ 00080c76 30bc
.org 0x80c78
	pop {r0}	@ 00080c78 01bc
.org 0x80c7a
	bx r0	@ 00080c7a 0047
