@ FUN_08117c0c  entry 0x08117c0c  size 232
.thumb
.org 0x117c0c
FUN_08117c0c:
	push {r4, r5, r6, lr}	@ 00117c0c 70b5
.org 0x117c0e
	mov r6, r9	@ 00117c0e 4e46
.org 0x117c10
	mov r5, r8	@ 00117c10 4546
.org 0x117c12
	push {r5, r6}	@ 00117c12 60b4
.org 0x117c14
	adds r4, r0, #0	@ 00117c14 041c
.org 0x117c16
	ldr r1, [pc, #220]	@ 00117c16 3749
.org 0x117c18
	adds r0, r4, r1	@ 00117c18 6018
.org 0x117c1a
	ldr r3, [r0, #0]	@ 00117c1a 0368
.org 0x117c1c
	movs r2, #0	@ 00117c1c 0022
.org 0x117c1e
	mov r8, r2	@ 00117c1e 9046
.org 0x117c20
	movs r6, #0	@ 00117c20 0026
.org 0x117c22
	strh r6, [r4, #4]	@ 00117c22 a680
.org 0x117c24
	ldr r5, [pc, #208]	@ 00117c24 344d
.org 0x117c26
	adds r5, r5, r4	@ 00117c26 2d19
.org 0x117c28
	mov r9, r5	@ 00117c28 a946
.org 0x117c2a
	adds r1, r3, #0	@ 00117c2a 191c
.org 0x117c2c
	adds r1, #180	@ 00117c2c b431
.org 0x117c2e
	ldrb r2, [r1, #12]	@ 00117c2e 0a7b
.org 0x117c30
	ldr r5, [pc, #200]	@ 00117c30 324d
.org 0x117c32
	adds r0, r4, r5	@ 00117c32 6019
.org 0x117c34
	strb r2, [r0, #0]	@ 00117c34 0270
.org 0x117c36
	ldrb r2, [r1, #13]	@ 00117c36 4a7b
.org 0x117c38
	adds r5, #1	@ 00117c38 0135
.org 0x117c3a
	adds r0, r4, r5	@ 00117c3a 6019
.org 0x117c3c
	strb r2, [r0, #0]	@ 00117c3c 0270
.org 0x117c3e
	ldrb r1, [r1, #14]	@ 00117c3e 897b
.org 0x117c40
	ldr r2, [pc, #188]	@ 00117c40 2f4a
.org 0x117c42
	adds r0, r4, r2	@ 00117c42 a018
.org 0x117c44
	strb r1, [r0, #0]	@ 00117c44 0170
.org 0x117c46
	adds r0, r3, #0	@ 00117c46 181c
.org 0x117c48
	adds r0, #241	@ 00117c48 f130
.org 0x117c4a
	adds r1, r3, #0	@ 00117c4a 191c
.org 0x117c4c
	adds r1, #242	@ 00117c4c f231
.org 0x117c4e
	ldrb r1, [r1, #0]	@ 00117c4e 0978
.org 0x117c50
	ldrb r0, [r0, #0]	@ 00117c50 0078
.org 0x117c52
	adds r1, r1, r0	@ 00117c52 0918
.org 0x117c54
	adds r0, r3, #0	@ 00117c54 181c
.org 0x117c56
	adds r0, #243	@ 00117c56 f330
.org 0x117c58
	ldrb r0, [r0, #0]	@ 00117c58 0078
.org 0x117c5a
	adds r0, r0, r1	@ 00117c5a 4018
.org 0x117c5c
	adds r5, #3	@ 00117c5c 0335
.org 0x117c5e
	adds r1, r4, r5	@ 00117c5e 6119
.org 0x117c60
	strb r0, [r1, #0]	@ 00117c60 0870
.org 0x117c62
	ldr r0, [pc, #160]	@ 00117c62 2848
.org 0x117c64
	ldrb r1, [r0, #16]	@ 00117c64 017c
.org 0x117c66
	adds r2, #18	@ 00117c66 1232
.org 0x117c68
	adds r0, r4, r2	@ 00117c68 a018
.org 0x117c6a
	strb r1, [r0, #0]	@ 00117c6a 0170
.org 0x117c6c
	adds r0, r3, #0	@ 00117c6c 181c
.org 0x117c6e
	adds r0, #223	@ 00117c6e df30
.org 0x117c70
	ldrb r1, [r0, #0]	@ 00117c70 0178
.org 0x117c72
	ldr r3, [pc, #148]	@ 00117c72 254b
.org 0x117c74
	adds r0, r4, r3	@ 00117c74 e018
.org 0x117c76
	strb r1, [r0, #0]	@ 00117c76 0170
.org 0x117c78
	ldr r0, [pc, #144]	@ 00117c78 2448
.org 0x117c7a
	adds r5, r4, r0	@ 00117c7a 2518
.org 0x117c7c
	mov r1, r8	@ 00117c7c 4146
.org 0x117c7e
	strb r1, [r5, #0]	@ 00117c7e 2970
.org 0x117c80
	adds r0, r4, #0	@ 00117c80 201c
.org 0x117c82
	bl 0x117f98	@ 00117c82 00f089f9
.org 0x117c86
	ldr r2, [pc, #136]	@ 00117c86 224a
.org 0x117c88
	ldrh r1, [r2, #0]	@ 00117c88 1188
.org 0x117c8a
	ldr r0, [pc, #136]	@ 00117c8a 2248
.org 0x117c8c
	ands r0, r1	@ 00117c8c 0840
.org 0x117c8e
	ldr r1, [pc, #136]	@ 00117c8e 2249
.org 0x117c90
	ands r0, r1	@ 00117c90 0840
.org 0x117c92
	movs r3, #152	@ 00117c92 9823
.org 0x117c94
	lsls r3, r3, #5	@ 00117c94 5b01
.org 0x117c96
	adds r1, r3, #0	@ 00117c96 191c
.org 0x117c98
	orrs r0, r1	@ 00117c98 0843
.org 0x117c9a
	strh r0, [r2, #0]	@ 00117c9a 1080
.org 0x117c9c
	ldr r1, [pc, #124]	@ 00117c9c 1f49
.org 0x117c9e
	adds r0, r1, #0	@ 00117c9e 081c
.org 0x117ca0
	strh r0, [r2, #6]	@ 00117ca0 d080
.org 0x117ca2
	str r6, [r2, #16]	@ 00117ca2 1661
.org 0x117ca4
	ldr r0, [pc, #120]	@ 00117ca4 1e48
.org 0x117ca6
	movs r1, #128	@ 00117ca6 8021
.org 0x117ca8
	lsls r1, r1, #7	@ 00117ca8 c901
.org 0x117caa
	bl 0x1d30	@ 00117caa eaf641f8
.org 0x117cae
	ldr r0, [pc, #116]	@ 00117cae 1d48
.org 0x117cb0
	movs r1, #0	@ 00117cb0 0021
.org 0x117cb2
	bl 0x2208	@ 00117cb2 eaf6a9fa
.org 0x117cb6
	ldr r1, [pc, #112]	@ 00117cb6 1c49
.org 0x117cb8
	ldrb r0, [r5, #0]	@ 00117cb8 2878
.org 0x117cba
	lsls r0, r0, #2	@ 00117cba 8000
.org 0x117cbc
	adds r0, r0, r1	@ 00117cbc 4018
.org 0x117cbe
	ldr r1, [r0, #0]	@ 00117cbe 0168
.org 0x117cc0
	adds r0, r4, #0	@ 00117cc0 201c
.org 0x117cc2
	bl 0x128f80	@ 00117cc2 11f05df9
.org 0x117cc6
	movs r5, #1	@ 00117cc6 0125
.org 0x117cc8
	strb r5, [r4, #2]	@ 00117cc8 a570
.org 0x117cca
	adds r0, r4, #0	@ 00117cca 201c
.org 0x117ccc
	movs r1, #0	@ 00117ccc 0021
.org 0x117cce
	movs r2, #0	@ 00117cce 0022
.org 0x117cd0
	bl 0x10abe4	@ 00117cd0 f2f788ff
.org 0x117cd4
	mov r2, r9	@ 00117cd4 4a46
.org 0x117cd6
	str r0, [r2, #32]	@ 00117cd6 1062
.org 0x117cd8
	movs r0, #18	@ 00117cd8 1220
.org 0x117cda
	movs r1, #0	@ 00117cda 0021
.org 0x117cdc
	bl 0x249c	@ 00117cdc eaf6defb
.org 0x117ce0
	strb r5, [r4, #1]	@ 00117ce0 6570
.org 0x117ce2
	adds r0, r4, #0	@ 00117ce2 201c
.org 0x117ce4
	bl 0x117d2c	@ 00117ce4 00f022f8
.org 0x117ce8
	pop {r3, r4}	@ 00117ce8 18bc
.org 0x117cea
	mov r8, r3	@ 00117cea 9846
.org 0x117cec
	mov r9, r4	@ 00117cec a146
.org 0x117cee
	pop {r4, r5, r6}	@ 00117cee 70bc
.org 0x117cf0
	pop {r0}	@ 00117cf0 01bc
.org 0x117cf2
	bx r0	@ 00117cf2 0047
