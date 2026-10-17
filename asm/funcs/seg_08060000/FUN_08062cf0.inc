@ FUN_08062cf0  entry 0x08062cf0  size 162
.thumb
.org 0x62cf0
FUN_08062cf0:
	push {r4, r5, r6, lr}	@ 00062cf0 70b5
.org 0x62cf2
	sub sp, #12	@ 00062cf2 83b0
.org 0x62cf4
	adds r6, r0, #0	@ 00062cf4 061c
.org 0x62cf6
	ldrb r0, [r6, #15]	@ 00062cf6 f07b
.org 0x62cf8
	cmp r0, #0	@ 00062cf8 0028
.org 0x62cfa
	bne.n 0x62d0a	@ 00062cfa 06d1
.org 0x62cfc
	adds r0, r6, #0	@ 00062cfc 301c
.org 0x62cfe
	movs r1, #7	@ 00062cfe 0721
.org 0x62d00
	bl 0x65a94	@ 00062d00 02f0c8fe
.org 0x62d04
	ldrb r0, [r6, #15]	@ 00062d04 f07b
.org 0x62d06
	adds r0, #1	@ 00062d06 0130
.org 0x62d08
	strb r0, [r6, #15]	@ 00062d08 f073
.org 0x62d0a
	adds r0, r6, #0	@ 00062d0a 301c
.org 0x62d0c
	bl 0x1cff0	@ 00062d0c baf770f9
.org 0x62d10
	adds r0, r6, #0	@ 00062d10 301c
.org 0x62d12
	adds r0, #116	@ 00062d12 7430
.org 0x62d14
	ldr r4, [pc, #124]	@ 00062d14 1f4c
.org 0x62d16
	ldr r3, [pc, #128]	@ 00062d16 204b
.org 0x62d18
	adds r1, r6, #0	@ 00062d18 311c
.org 0x62d1a
	adds r1, #180	@ 00062d1a b431
.org 0x62d1c
	ldrb r2, [r1, #0]	@ 00062d1c 0a78
.org 0x62d1e
	lsls r1, r2, #1	@ 00062d1e 5100
.org 0x62d20
	adds r1, r1, r3	@ 00062d20 c918
.org 0x62d22
	ldrh r1, [r1, #0]	@ 00062d22 0988
.org 0x62d24
	lsls r1, r1, #2	@ 00062d24 8900
.org 0x62d26
	adds r1, r1, r4	@ 00062d26 0919
.org 0x62d28
	adds r3, r6, #0	@ 00062d28 331c
.org 0x62d2a
	adds r3, #113	@ 00062d2a 7133
.org 0x62d2c
	movs r5, #0	@ 00062d2c 0025
.org 0x62d2e
	ldrsb r5, [r3, r5]	@ 00062d2e 5d57
.org 0x62d30
	ldr r1, [r1, #0]	@ 00062d30 0968
.org 0x62d32
	lsls r3, r5, #2	@ 00062d32 ab00
.org 0x62d34
	adds r3, r3, r1	@ 00062d34 5b18
.org 0x62d36
	ldr r4, [pc, #100]	@ 00062d36 194c
.org 0x62d38
	adds r1, r6, #0	@ 00062d38 311c
.org 0x62d3a
	adds r1, #181	@ 00062d3a b531
.org 0x62d3c
	ldrb r1, [r1, #0]	@ 00062d3c 0978
.org 0x62d3e
	lsls r1, r1, #2	@ 00062d3e 8900
.org 0x62d40
	adds r1, r1, r4	@ 00062d40 0919
.org 0x62d42
	ldr r1, [r1, #0]	@ 00062d42 0968
.org 0x62d44
	lsls r2, r2, #2	@ 00062d44 9200
.org 0x62d46
	adds r2, r2, r1	@ 00062d46 5218
.org 0x62d48
	ldr r1, [r2, #0]	@ 00062d48 1168
.org 0x62d4a
	adds r1, r1, r5	@ 00062d4a 4919
.org 0x62d4c
	ldrb r1, [r1, #0]	@ 00062d4c 0978
.org 0x62d4e
	lsls r2, r1, #1	@ 00062d4e 4a00
.org 0x62d50
	adds r2, r2, r1	@ 00062d50 5218
.org 0x62d52
	lsls r2, r2, #3	@ 00062d52 d200
.org 0x62d54
	ldr r1, [r3, #0]	@ 00062d54 1968
.org 0x62d56
	adds r1, r1, r2	@ 00062d56 8918
.org 0x62d58
	bl 0x5784	@ 00062d58 a2f714fd
.org 0x62d5c
	adds r0, r6, #0	@ 00062d5c 301c
.org 0x62d5e
	adds r0, #115	@ 00062d5e 7330
.org 0x62d60
	ldrb r0, [r0, #0]	@ 00062d60 0078
.org 0x62d62
	cmp r0, #3	@ 00062d62 0328
.org 0x62d64
	bne.n 0x62d8a	@ 00062d64 11d1
.org 0x62d66
	mov r1, sp	@ 00062d66 6946
.org 0x62d68
	ldr r0, [pc, #52]	@ 00062d68 0d48
.org 0x62d6a
	ldmia r0!, {r2, r3, r4}	@ 00062d6a 1cc8
.org 0x62d6c
	stmia r1!, {r2, r3, r4}	@ 00062d6c 1cc1
.org 0x62d6e
	adds r0, r6, #0	@ 00062d6e 301c
.org 0x62d70
	bl 0x66160	@ 00062d70 03f0f6f9
.org 0x62d74
	lsls r0, r0, #2	@ 00062d74 8000
.org 0x62d76
	add r0, sp	@ 00062d76 6844
.org 0x62d78
	ldr r1, [r0, #0]	@ 00062d78 0168
.org 0x62d7a
	adds r0, r6, #0	@ 00062d7a 301c
.org 0x62d7c
	adds r0, #224	@ 00062d7c e030
.org 0x62d7e
	movs r2, #0	@ 00062d7e 0022
.org 0x62d80
	strb r1, [r0, #0]	@ 00062d80 0170
.org 0x62d82
	movs r0, #13	@ 00062d82 0d20
.org 0x62d84
	strb r0, [r6, #13]	@ 00062d84 7073
.org 0x62d86
	strb r2, [r6, #14]	@ 00062d86 b273
.org 0x62d88
	strb r2, [r6, #15]	@ 00062d88 f273
.org 0x62d8a
	add sp, #12	@ 00062d8a 03b0
.org 0x62d8c
	pop {r4, r5, r6}	@ 00062d8c 70bc
.org 0x62d8e
	pop {r0}	@ 00062d8e 01bc
.org 0x62d90
	bx r0	@ 00062d90 0047
