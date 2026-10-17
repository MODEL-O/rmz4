@ FUN_08080af0  entry 0x08080af0  size 136
.thumb
.org 0x80af0
FUN_08080af0:
	push {r4, r5, lr}	@ 00080af0 30b5
.org 0x80af2
	adds r5, r0, #0	@ 00080af2 051c
.org 0x80af4
	ldrb r0, [r5, #15]	@ 00080af4 e87b
.org 0x80af6
	cmp r0, #0	@ 00080af6 0028
.org 0x80af8
	bne.n 0x80b0c	@ 00080af8 08d1
.org 0x80afa
	ldr r1, [pc, #124]	@ 00080afa 1f49
.org 0x80afc
	adds r0, r5, #0	@ 00080afc 281c
.org 0x80afe
	bl 0x1cf00	@ 00080afe 9cf7fff9
.org 0x80b02
	movs r0, #12	@ 00080b02 0c20
.org 0x80b04
	strb r0, [r5, #18]	@ 00080b04 a874
.org 0x80b06
	ldrb r0, [r5, #15]	@ 00080b06 e87b
.org 0x80b08
	adds r0, #1	@ 00080b08 0130
.org 0x80b0a
	strb r0, [r5, #15]	@ 00080b0a e873
.org 0x80b0c
	adds r0, r5, #0	@ 00080b0c 281c
.org 0x80b0e
	bl 0x1cff0	@ 00080b0e 9cf76ffa
.org 0x80b12
	adds r0, r5, #0	@ 00080b12 281c
.org 0x80b14
	adds r0, #116	@ 00080b14 7430
.org 0x80b16
	ldr r4, [pc, #100]	@ 00080b16 194c
.org 0x80b18
	adds r1, r5, #0	@ 00080b18 291c
.org 0x80b1a
	adds r1, #181	@ 00080b1a b531
.org 0x80b1c
	ldrb r3, [r1, #0]	@ 00080b1c 0b78
.org 0x80b1e
	lsls r3, r3, #2	@ 00080b1e 9b00
.org 0x80b20
	ldrb r1, [r5, #30]	@ 00080b20 a97f
.org 0x80b22
	lsls r1, r1, #8	@ 00080b22 0902
.org 0x80b24
	adds r2, r5, #0	@ 00080b24 2a1c
.org 0x80b26
	adds r2, #112	@ 00080b26 7032
.org 0x80b28
	ldrb r2, [r2, #0]	@ 00080b28 1278
.org 0x80b2a
	orrs r1, r2	@ 00080b2a 1143
.org 0x80b2c
	ldr r2, [pc, #80]	@ 00080b2c 144a
.org 0x80b2e
	adds r1, r1, r2	@ 00080b2e 8918
.org 0x80b30
	lsls r1, r1, #3	@ 00080b30 c900
.org 0x80b32
	adds r3, r3, r1	@ 00080b32 5b18
.org 0x80b34
	adds r3, r3, r4	@ 00080b34 1b19
.org 0x80b36
	adds r1, r5, #0	@ 00080b36 291c
.org 0x80b38
	adds r1, #113	@ 00080b38 7131
.org 0x80b3a
	ldrb r1, [r1, #0]	@ 00080b3a 0978
.org 0x80b3c
	lsls r1, r1, #24	@ 00080b3c 0906
.org 0x80b3e
	asrs r1, r1, #24	@ 00080b3e 0916
.org 0x80b40
	ldr r2, [r3, #0]	@ 00080b40 1a68
.org 0x80b42
	lsls r1, r1, #2	@ 00080b42 8900
.org 0x80b44
	adds r1, r1, r2	@ 00080b44 8918
.org 0x80b46
	ldr r1, [r1, #0]	@ 00080b46 0968
.org 0x80b48
	bl 0x5784	@ 00080b48 84f71cfe
.org 0x80b4c
	ldrb r0, [r5, #18]	@ 00080b4c a87c
.org 0x80b4e
	cmp r0, #0	@ 00080b4e 0028
.org 0x80b50
	beq.n 0x80b56	@ 00080b50 01d0
.org 0x80b52
	subs r0, #1	@ 00080b52 0138
.org 0x80b54
	strb r0, [r5, #18]	@ 00080b54 a874
.org 0x80b56
	adds r0, r5, #0	@ 00080b56 281c
.org 0x80b58
	adds r0, #115	@ 00080b58 7330
.org 0x80b5a
	ldrb r0, [r0, #0]	@ 00080b5a 0078
.org 0x80b5c
	cmp r0, #4	@ 00080b5c 0428
.org 0x80b5e
	bne.n 0x80b72	@ 00080b5e 08d1
.org 0x80b60
	ldr r0, [pc, #32]	@ 00080b60 0848
.org 0x80b62
	bl 0x2b10	@ 00080b62 81f7d5ff
.org 0x80b66
	ldrb r1, [r5, #18]	@ 00080b66 a97c
.org 0x80b68
	cmp r1, #0	@ 00080b68 0029
.org 0x80b6a
	bne.n 0x80b72	@ 00080b6a 02d1
.org 0x80b6c
	movs r0, #2	@ 00080b6c 0220
.org 0x80b6e
	strb r0, [r5, #14]	@ 00080b6e a873
.org 0x80b70
	strb r1, [r5, #15]	@ 00080b70 e973
.org 0x80b72
	pop {r4, r5}	@ 00080b72 30bc
.org 0x80b74
	pop {r0}	@ 00080b74 01bc
.org 0x80b76
	bx r0	@ 00080b76 0047
