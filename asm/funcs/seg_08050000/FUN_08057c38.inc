@ FUN_08057c38  entry 0x08057c38  size 188
.thumb
.org 0x57c38
FUN_08057c38:
	push {r4, lr}	@ 00057c38 10b5
.org 0x57c3a
	adds r4, r0, #0	@ 00057c3a 041c
.org 0x57c3c
	ldrb r0, [r4, #15]	@ 00057c3c e07b
.org 0x57c3e
	cmp r0, #0	@ 00057c3e 0028
.org 0x57c40
	bne.n 0x57c8c	@ 00057c40 24d1
.org 0x57c42
	ldr r0, [pc, #176]	@ 00057c42 2c48
.org 0x57c44
	ldr r1, [pc, #176]	@ 00057c44 2c49
.org 0x57c46
	adds r1, #118	@ 00057c46 7631
.org 0x57c48
	ldrh r1, [r1, #0]	@ 00057c48 0988
.org 0x57c4a
	ldrh r2, [r0, #6]	@ 00057c4a c288
.org 0x57c4c
	lsrs r2, r2, #6	@ 00057c4c 9209
.org 0x57c4e
	subs r1, r1, r2	@ 00057c4e 891a
.org 0x57c50
	lsls r1, r1, #5	@ 00057c50 4901
.org 0x57c52
	movs r2, #128	@ 00057c52 8022
.org 0x57c54
	lsls r2, r2, #9	@ 00057c54 5202
.org 0x57c56
	adds r1, r1, r2	@ 00057c56 8918
.org 0x57c58
	bl 0x1d30	@ 00057c58 aaf76af8
.org 0x57c5c
	ldr r0, [pc, #156]	@ 00057c5c 2748
.org 0x57c5e
	ldr r1, [pc, #160]	@ 00057c5e 2849
.org 0x57c60
	adds r1, #118	@ 00057c60 7631
.org 0x57c62
	ldrh r1, [r1, #0]	@ 00057c62 0988
.org 0x57c64
	ldrb r2, [r0, #7]	@ 00057c64 c279
.org 0x57c66
	subs r1, r1, r2	@ 00057c66 891a
.org 0x57c68
	lsls r1, r1, #5	@ 00057c68 4901
.org 0x57c6a
	movs r2, #128	@ 00057c6a 8022
.org 0x57c6c
	lsls r2, r2, #2	@ 00057c6c 9200
.org 0x57c6e
	adds r1, r1, r2	@ 00057c6e 8918
.org 0x57c70
	bl 0x2208	@ 00057c70 aaf7cafa
.org 0x57c74
	adds r0, r4, #0	@ 00057c74 201c
.org 0x57c76
	bl 0x90aa0	@ 00057c76 38f013ff
.org 0x57c7a
	ldr r1, [pc, #136]	@ 00057c7a 2249
.org 0x57c7c
	adds r0, r4, #0	@ 00057c7c 201c
.org 0x57c7e
	bl 0x1cf00	@ 00057c7e c5f73ff9
.org 0x57c82
	movs r0, #80	@ 00057c82 5020
.org 0x57c84
	strb r0, [r4, #18]	@ 00057c84 a074
.org 0x57c86
	ldrb r0, [r4, #15]	@ 00057c86 e07b
.org 0x57c88
	adds r0, #1	@ 00057c88 0130
.org 0x57c8a
	strb r0, [r4, #15]	@ 00057c8a e073
.org 0x57c8c
	adds r0, r4, #0	@ 00057c8c 201c
.org 0x57c8e
	bl 0x1cff0	@ 00057c8e c5f7aff9
.org 0x57c92
	adds r0, r4, #0	@ 00057c92 201c
.org 0x57c94
	adds r0, #116	@ 00057c94 7430
.org 0x57c96
	ldr r3, [pc, #112]	@ 00057c96 1c4b
.org 0x57c98
	ldrb r1, [r4, #30]	@ 00057c98 a17f
.org 0x57c9a
	lsls r1, r1, #8	@ 00057c9a 0902
.org 0x57c9c
	adds r2, r4, #0	@ 00057c9c 221c
.org 0x57c9e
	adds r2, #112	@ 00057c9e 7032
.org 0x57ca0
	ldrb r2, [r2, #0]	@ 00057ca0 1278
.org 0x57ca2
	orrs r1, r2	@ 00057ca2 1143
.org 0x57ca4
	ldr r2, [pc, #100]	@ 00057ca4 194a
.org 0x57ca6
	adds r1, r1, r2	@ 00057ca6 8918
.org 0x57ca8
	lsls r1, r1, #2	@ 00057ca8 8900
.org 0x57caa
	adds r1, r1, r3	@ 00057caa c918
.org 0x57cac
	adds r2, r4, #0	@ 00057cac 221c
.org 0x57cae
	adds r2, #113	@ 00057cae 7132
.org 0x57cb0
	ldrb r2, [r2, #0]	@ 00057cb0 1278
.org 0x57cb2
	lsls r2, r2, #24	@ 00057cb2 1206
.org 0x57cb4
	asrs r2, r2, #24	@ 00057cb4 1216
.org 0x57cb6
	ldr r1, [r1, #0]	@ 00057cb6 0968
.org 0x57cb8
	lsls r2, r2, #2	@ 00057cb8 9200
.org 0x57cba
	adds r2, r2, r1	@ 00057cba 5218
.org 0x57cbc
	ldr r1, [r2, #0]	@ 00057cbc 1168
.org 0x57cbe
	ldrb r2, [r1, #0]	@ 00057cbe 0a78
.org 0x57cc0
	lsls r1, r2, #1	@ 00057cc0 5100
.org 0x57cc2
	adds r1, r1, r2	@ 00057cc2 8918
.org 0x57cc4
	lsls r1, r1, #3	@ 00057cc4 c900
.org 0x57cc6
	ldr r2, [pc, #72]	@ 00057cc6 124a
.org 0x57cc8
	adds r1, r1, r2	@ 00057cc8 8918
.org 0x57cca
	bl 0x5784	@ 00057cca adf75bfd
.org 0x57cce
	ldrb r0, [r4, #18]	@ 00057cce a07c
.org 0x57cd0
	cmp r0, #0	@ 00057cd0 0028
.org 0x57cd2
	beq.n 0x57cde	@ 00057cd2 04d0
.org 0x57cd4
	subs r0, #1	@ 00057cd4 0138
.org 0x57cd6
	strb r0, [r4, #18]	@ 00057cd6 a074
.org 0x57cd8
	lsls r0, r0, #24	@ 00057cd8 0006
.org 0x57cda
	cmp r0, #0	@ 00057cda 0028
.org 0x57cdc
	bne.n 0x57cee	@ 00057cdc 07d1
.org 0x57cde
	adds r0, r4, #0	@ 00057cde 201c
.org 0x57ce0
	adds r0, #115	@ 00057ce0 7330
.org 0x57ce2
	ldrb r1, [r0, #0]	@ 00057ce2 0178
.org 0x57ce4
	cmp r1, #4	@ 00057ce4 0429
.org 0x57ce6
	bne.n 0x57cee	@ 00057ce6 02d1
.org 0x57ce8
	movs r0, #0	@ 00057ce8 0020
.org 0x57cea
	strb r1, [r4, #14]	@ 00057cea a173
.org 0x57cec
	strb r0, [r4, #15]	@ 00057cec e073
.org 0x57cee
	pop {r4}	@ 00057cee 10bc
.org 0x57cf0
	pop {r0}	@ 00057cf0 01bc
.org 0x57cf2
	bx r0	@ 00057cf2 0047
