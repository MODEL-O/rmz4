@ FUN_08080d00  entry 0x08080d00  size 136
.thumb
.org 0x80d00
FUN_08080d00:
	push {r4, r5, lr}	@ 00080d00 30b5
.org 0x80d02
	adds r5, r0, #0	@ 00080d02 051c
.org 0x80d04
	ldrb r0, [r5, #15]	@ 00080d04 e87b
.org 0x80d06
	cmp r0, #0	@ 00080d06 0028
.org 0x80d08
	bne.n 0x80d1c	@ 00080d08 08d1
.org 0x80d0a
	ldr r1, [pc, #124]	@ 00080d0a 1f49
.org 0x80d0c
	adds r0, r5, #0	@ 00080d0c 281c
.org 0x80d0e
	bl 0x1cf00	@ 00080d0e 9cf7f7f8
.org 0x80d12
	movs r0, #24	@ 00080d12 1820
.org 0x80d14
	strb r0, [r5, #18]	@ 00080d14 a874
.org 0x80d16
	ldrb r0, [r5, #15]	@ 00080d16 e87b
.org 0x80d18
	adds r0, #1	@ 00080d18 0130
.org 0x80d1a
	strb r0, [r5, #15]	@ 00080d1a e873
.org 0x80d1c
	adds r0, r5, #0	@ 00080d1c 281c
.org 0x80d1e
	bl 0x1cff0	@ 00080d1e 9cf767f9
.org 0x80d22
	adds r0, r5, #0	@ 00080d22 281c
.org 0x80d24
	adds r0, #116	@ 00080d24 7430
.org 0x80d26
	ldr r4, [pc, #100]	@ 00080d26 194c
.org 0x80d28
	adds r1, r5, #0	@ 00080d28 291c
.org 0x80d2a
	adds r1, #181	@ 00080d2a b531
.org 0x80d2c
	ldrb r3, [r1, #0]	@ 00080d2c 0b78
.org 0x80d2e
	lsls r3, r3, #2	@ 00080d2e 9b00
.org 0x80d30
	ldrb r1, [r5, #30]	@ 00080d30 a97f
.org 0x80d32
	lsls r1, r1, #8	@ 00080d32 0902
.org 0x80d34
	adds r2, r5, #0	@ 00080d34 2a1c
.org 0x80d36
	adds r2, #112	@ 00080d36 7032
.org 0x80d38
	ldrb r2, [r2, #0]	@ 00080d38 1278
.org 0x80d3a
	orrs r1, r2	@ 00080d3a 1143
.org 0x80d3c
	ldr r2, [pc, #80]	@ 00080d3c 144a
.org 0x80d3e
	adds r1, r1, r2	@ 00080d3e 8918
.org 0x80d40
	lsls r1, r1, #3	@ 00080d40 c900
.org 0x80d42
	adds r3, r3, r1	@ 00080d42 5b18
.org 0x80d44
	adds r3, r3, r4	@ 00080d44 1b19
.org 0x80d46
	adds r1, r5, #0	@ 00080d46 291c
.org 0x80d48
	adds r1, #113	@ 00080d48 7131
.org 0x80d4a
	ldrb r1, [r1, #0]	@ 00080d4a 0978
.org 0x80d4c
	lsls r1, r1, #24	@ 00080d4c 0906
.org 0x80d4e
	asrs r1, r1, #24	@ 00080d4e 0916
.org 0x80d50
	ldr r2, [r3, #0]	@ 00080d50 1a68
.org 0x80d52
	lsls r1, r1, #2	@ 00080d52 8900
.org 0x80d54
	adds r1, r1, r2	@ 00080d54 8918
.org 0x80d56
	ldr r1, [r1, #0]	@ 00080d56 0968
.org 0x80d58
	bl 0x5784	@ 00080d58 84f714fd
.org 0x80d5c
	ldrb r0, [r5, #18]	@ 00080d5c a87c
.org 0x80d5e
	cmp r0, #0	@ 00080d5e 0028
.org 0x80d60
	beq.n 0x80d66	@ 00080d60 01d0
.org 0x80d62
	subs r0, #1	@ 00080d62 0138
.org 0x80d64
	strb r0, [r5, #18]	@ 00080d64 a874
.org 0x80d66
	adds r0, r5, #0	@ 00080d66 281c
.org 0x80d68
	adds r0, #115	@ 00080d68 7330
.org 0x80d6a
	ldrb r0, [r0, #0]	@ 00080d6a 0078
.org 0x80d6c
	cmp r0, #4	@ 00080d6c 0428
.org 0x80d6e
	bne.n 0x80d82	@ 00080d6e 08d1
.org 0x80d70
	ldr r0, [pc, #32]	@ 00080d70 0848
.org 0x80d72
	bl 0x2b10	@ 00080d72 81f7cdfe
.org 0x80d76
	ldrb r1, [r5, #18]	@ 00080d76 a97c
.org 0x80d78
	cmp r1, #0	@ 00080d78 0029
.org 0x80d7a
	bne.n 0x80d82	@ 00080d7a 02d1
.org 0x80d7c
	movs r0, #6	@ 00080d7c 0620
.org 0x80d7e
	strb r0, [r5, #14]	@ 00080d7e a873
.org 0x80d80
	strb r1, [r5, #15]	@ 00080d80 e973
.org 0x80d82
	pop {r4, r5}	@ 00080d82 30bc
.org 0x80d84
	pop {r0}	@ 00080d84 01bc
.org 0x80d86
	bx r0	@ 00080d86 0047
