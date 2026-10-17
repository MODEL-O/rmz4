@ FUN_08062af0  entry 0x08062af0  size 142
.thumb
.org 0x62af0
FUN_08062af0:
	push {r4, r5, r6, lr}	@ 00062af0 70b5
.org 0x62af2
	adds r6, r0, #0	@ 00062af2 061c
.org 0x62af4
	ldrb r0, [r6, #15]	@ 00062af4 f07b
.org 0x62af6
	cmp r0, #0	@ 00062af6 0028
.org 0x62af8
	bne.n 0x62b12	@ 00062af8 0bd1
.org 0x62afa
	ldr r0, [pc, #132]	@ 00062afa 2148
.org 0x62afc
	bl 0x2b10	@ 00062afc a0f708f8
.org 0x62b00
	adds r0, r6, #0	@ 00062b00 301c
.org 0x62b02
	movs r1, #5	@ 00062b02 0521
.org 0x62b04
	bl 0x65a94	@ 00062b04 02f0c6ff
.org 0x62b08
	movs r0, #64	@ 00062b08 4020
.org 0x62b0a
	strb r0, [r6, #18]	@ 00062b0a b074
.org 0x62b0c
	ldrb r0, [r6, #15]	@ 00062b0c f07b
.org 0x62b0e
	adds r0, #1	@ 00062b0e 0130
.org 0x62b10
	strb r0, [r6, #15]	@ 00062b10 f073
.org 0x62b12
	adds r0, r6, #0	@ 00062b12 301c
.org 0x62b14
	bl 0x1cff0	@ 00062b14 baf76cfa
.org 0x62b18
	adds r0, r6, #0	@ 00062b18 301c
.org 0x62b1a
	adds r0, #116	@ 00062b1a 7430
.org 0x62b1c
	ldr r4, [pc, #100]	@ 00062b1c 194c
.org 0x62b1e
	ldr r3, [pc, #104]	@ 00062b1e 1a4b
.org 0x62b20
	adds r1, r6, #0	@ 00062b20 311c
.org 0x62b22
	adds r1, #180	@ 00062b22 b431
.org 0x62b24
	ldrb r2, [r1, #0]	@ 00062b24 0a78
.org 0x62b26
	lsls r1, r2, #1	@ 00062b26 5100
.org 0x62b28
	adds r1, r1, r3	@ 00062b28 c918
.org 0x62b2a
	ldrh r1, [r1, #0]	@ 00062b2a 0988
.org 0x62b2c
	lsls r1, r1, #2	@ 00062b2c 8900
.org 0x62b2e
	adds r1, r1, r4	@ 00062b2e 0919
.org 0x62b30
	adds r3, r6, #0	@ 00062b30 331c
.org 0x62b32
	adds r3, #113	@ 00062b32 7133
.org 0x62b34
	movs r5, #0	@ 00062b34 0025
.org 0x62b36
	ldrsb r5, [r3, r5]	@ 00062b36 5d57
.org 0x62b38
	ldr r1, [r1, #0]	@ 00062b38 0968
.org 0x62b3a
	lsls r3, r5, #2	@ 00062b3a ab00
.org 0x62b3c
	adds r3, r3, r1	@ 00062b3c 5b18
.org 0x62b3e
	ldr r4, [pc, #76]	@ 00062b3e 134c
.org 0x62b40
	adds r1, r6, #0	@ 00062b40 311c
.org 0x62b42
	adds r1, #181	@ 00062b42 b531
.org 0x62b44
	ldrb r1, [r1, #0]	@ 00062b44 0978
.org 0x62b46
	lsls r1, r1, #2	@ 00062b46 8900
.org 0x62b48
	adds r1, r1, r4	@ 00062b48 0919
.org 0x62b4a
	ldr r1, [r1, #0]	@ 00062b4a 0968
.org 0x62b4c
	lsls r2, r2, #2	@ 00062b4c 9200
.org 0x62b4e
	adds r2, r2, r1	@ 00062b4e 5218
.org 0x62b50
	ldr r1, [r2, #0]	@ 00062b50 1168
.org 0x62b52
	adds r1, r1, r5	@ 00062b52 4919
.org 0x62b54
	ldrb r1, [r1, #0]	@ 00062b54 0978
.org 0x62b56
	lsls r2, r1, #1	@ 00062b56 4a00
.org 0x62b58
	adds r2, r2, r1	@ 00062b58 5218
.org 0x62b5a
	lsls r2, r2, #3	@ 00062b5a d200
.org 0x62b5c
	ldr r1, [r3, #0]	@ 00062b5c 1968
.org 0x62b5e
	adds r1, r1, r2	@ 00062b5e 8918
.org 0x62b60
	bl 0x5784	@ 00062b60 a2f710fe
.org 0x62b64
	ldrb r0, [r6, #18]	@ 00062b64 b07c
.org 0x62b66
	subs r0, #1	@ 00062b66 0138
.org 0x62b68
	strb r0, [r6, #18]	@ 00062b68 b074
.org 0x62b6a
	lsls r0, r0, #24	@ 00062b6a 0006
.org 0x62b6c
	lsrs r1, r0, #24	@ 00062b6c 010e
.org 0x62b6e
	cmp r1, #0	@ 00062b6e 0029
.org 0x62b70
	bne.n 0x62b78	@ 00062b70 02d1
.org 0x62b72
	movs r0, #1	@ 00062b72 0120
.org 0x62b74
	strb r0, [r6, #14]	@ 00062b74 b073
.org 0x62b76
	strb r1, [r6, #15]	@ 00062b76 f173
.org 0x62b78
	pop {r4, r5, r6}	@ 00062b78 70bc
.org 0x62b7a
	pop {r0}	@ 00062b7a 01bc
.org 0x62b7c
	bx r0	@ 00062b7c 0047
