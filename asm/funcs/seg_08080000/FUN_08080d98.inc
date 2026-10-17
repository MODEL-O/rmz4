@ FUN_08080d98  entry 0x08080d98  size 182
.thumb
.org 0x80d98
FUN_08080d98:
	push {r4, r5, r6, lr}	@ 00080d98 70b5
.org 0x80d9a
	adds r5, r0, #0	@ 00080d9a 051c
.org 0x80d9c
	ldrb r6, [r5, #15]	@ 00080d9c ee7b
.org 0x80d9e
	cmp r6, #0	@ 00080d9e 002e
.org 0x80da0
	bne.n 0x80df6	@ 00080da0 29d1
.org 0x80da2
	ldr r0, [pc, #172]	@ 00080da2 2b48
.org 0x80da4
	ldr r3, [r0, #0]	@ 00080da4 0368
.org 0x80da6
	cmp r3, #0	@ 00080da6 002b
.org 0x80da8
	beq.n 0x80de8	@ 00080da8 1ed0
.org 0x80daa
	adds r2, r3, #0	@ 00080daa 1a1c
.org 0x80dac
	adds r2, #180	@ 00080dac b432
.org 0x80dae
	movs r0, #161	@ 00080dae a120
.org 0x80db0
	lsls r0, r0, #1	@ 00080db0 4000
.org 0x80db2
	adds r4, r3, r0	@ 00080db2 1c18
.org 0x80db4
	ldrb r0, [r4, #0]	@ 00080db4 2078
.org 0x80db6
	movs r1, #64	@ 00080db6 4021
.org 0x80db8
	orrs r0, r1	@ 00080db8 0843
.org 0x80dba
	strb r0, [r4, #0]	@ 00080dba 2070
.org 0x80dbc
	movs r0, #4	@ 00080dbc 0420
.org 0x80dbe
	strb r0, [r3, #13]	@ 00080dbe 5873
.org 0x80dc0
	strb r6, [r3, #14]	@ 00080dc0 9e73
.org 0x80dc2
	adds r0, r5, #0	@ 00080dc2 281c
.org 0x80dc4
	adds r0, #182	@ 00080dc4 b630
.org 0x80dc6
	ldrb r0, [r0, #0]	@ 00080dc6 0078
.org 0x80dc8
	lsls r0, r0, #10	@ 00080dc8 8002
.org 0x80dca
	ldr r1, [pc, #136]	@ 00080dca 2249
.org 0x80dcc
	adds r0, r0, r1	@ 00080dcc 4018
.org 0x80dce
	str r0, [r2, #116]	@ 00080dce 5067
.org 0x80dd0
	ldr r0, [pc, #132]	@ 00080dd0 2148
.org 0x80dd2
	str r0, [r2, #120]	@ 00080dd2 9067
.org 0x80dd4
	str r6, [r2, #124]	@ 00080dd4 d667
.org 0x80dd6
	movs r2, #154	@ 00080dd6 9a22
.org 0x80dd8
	lsls r2, r2, #1	@ 00080dd8 5200
.org 0x80dda
	adds r1, r3, r2	@ 00080dda 9918
.org 0x80ddc
	movs r0, #64	@ 00080ddc 4020
.org 0x80dde
	str r0, [r1, #0]	@ 00080dde 0860
.org 0x80de0
	adds r0, #248	@ 00080de0 f830
.org 0x80de2
	adds r1, r3, r0	@ 00080de2 1918
.org 0x80de4
	movs r0, #36	@ 00080de4 2420
.org 0x80de6
	strh r0, [r1, #0]	@ 00080de6 0880
.org 0x80de8
	ldr r1, [pc, #112]	@ 00080de8 1c49
.org 0x80dea
	adds r0, r5, #0	@ 00080dea 281c
.org 0x80dec
	bl 0x1cf00	@ 00080dec 9cf788f8
.org 0x80df0
	ldrb r0, [r5, #15]	@ 00080df0 e87b
.org 0x80df2
	adds r0, #1	@ 00080df2 0130
.org 0x80df4
	strb r0, [r5, #15]	@ 00080df4 e873
.org 0x80df6
	adds r0, r5, #0	@ 00080df6 281c
.org 0x80df8
	bl 0x1cff0	@ 00080df8 9cf7faf8
.org 0x80dfc
	adds r0, r5, #0	@ 00080dfc 281c
.org 0x80dfe
	adds r0, #116	@ 00080dfe 7430
.org 0x80e00
	ldr r4, [pc, #92]	@ 00080e00 174c
.org 0x80e02
	adds r1, r5, #0	@ 00080e02 291c
.org 0x80e04
	adds r1, #181	@ 00080e04 b531
.org 0x80e06
	ldrb r3, [r1, #0]	@ 00080e06 0b78
.org 0x80e08
	lsls r3, r3, #2	@ 00080e08 9b00
.org 0x80e0a
	ldrb r1, [r5, #30]	@ 00080e0a a97f
.org 0x80e0c
	lsls r1, r1, #8	@ 00080e0c 0902
.org 0x80e0e
	adds r2, r5, #0	@ 00080e0e 2a1c
.org 0x80e10
	adds r2, #112	@ 00080e10 7032
.org 0x80e12
	ldrb r2, [r2, #0]	@ 00080e12 1278
.org 0x80e14
	orrs r1, r2	@ 00080e14 1143
.org 0x80e16
	ldr r2, [pc, #76]	@ 00080e16 134a
.org 0x80e18
	adds r1, r1, r2	@ 00080e18 8918
.org 0x80e1a
	lsls r1, r1, #3	@ 00080e1a c900
.org 0x80e1c
	adds r3, r3, r1	@ 00080e1c 5b18
.org 0x80e1e
	adds r3, r3, r4	@ 00080e1e 1b19
.org 0x80e20
	adds r1, r5, #0	@ 00080e20 291c
.org 0x80e22
	adds r1, #113	@ 00080e22 7131
.org 0x80e24
	ldrb r1, [r1, #0]	@ 00080e24 0978
.org 0x80e26
	lsls r1, r1, #24	@ 00080e26 0906
.org 0x80e28
	asrs r1, r1, #24	@ 00080e28 0916
.org 0x80e2a
	ldr r2, [r3, #0]	@ 00080e2a 1a68
.org 0x80e2c
	lsls r1, r1, #2	@ 00080e2c 8900
.org 0x80e2e
	adds r1, r1, r2	@ 00080e2e 8918
.org 0x80e30
	ldr r1, [r1, #0]	@ 00080e30 0968
.org 0x80e32
	bl 0x5784	@ 00080e32 84f7a7fc
.org 0x80e36
	adds r0, r5, #0	@ 00080e36 281c
.org 0x80e38
	adds r0, #115	@ 00080e38 7330
.org 0x80e3a
	ldrb r0, [r0, #0]	@ 00080e3a 0078
.org 0x80e3c
	cmp r0, #3	@ 00080e3c 0328
.org 0x80e3e
	bne.n 0x80e48	@ 00080e3e 03d1
.org 0x80e40
	movs r1, #0	@ 00080e40 0021
.org 0x80e42
	movs r0, #7	@ 00080e42 0720
.org 0x80e44
	strb r0, [r5, #14]	@ 00080e44 a873
.org 0x80e46
	strb r1, [r5, #15]	@ 00080e46 e973
.org 0x80e48
	pop {r4, r5, r6}	@ 00080e48 70bc
.org 0x80e4a
	pop {r0}	@ 00080e4a 01bc
.org 0x80e4c
	bx r0	@ 00080e4c 0047
