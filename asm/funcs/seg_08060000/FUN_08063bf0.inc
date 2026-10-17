@ FUN_08063bf0  entry 0x08063bf0  size 226
.thumb
.org 0x63bf0
FUN_08063bf0:
	push {r4, r5, r6, lr}	@ 00063bf0 70b5
.org 0x63bf2
	sub sp, #12	@ 00063bf2 83b0
.org 0x63bf4
	adds r6, r0, #0	@ 00063bf4 061c
.org 0x63bf6
	ldrb r0, [r6, #10]	@ 00063bf6 b07a
.org 0x63bf8
	lsrs r4, r0, #4	@ 00063bf8 0409
.org 0x63bfa
	movs r5, #1	@ 00063bfa 0125
.org 0x63bfc
	ands r4, r5	@ 00063bfc 2c40
.org 0x63bfe
	ldrb r0, [r6, #15]	@ 00063bfe f07b
.org 0x63c00
	cmp r0, #0	@ 00063c00 0028
.org 0x63c02
	bne.n 0x63c4a	@ 00063c02 22d1
.org 0x63c04
	adds r0, r6, #0	@ 00063c04 301c
.org 0x63c06
	movs r1, #12	@ 00063c06 0c21
.org 0x63c08
	bl 0x65a94	@ 00063c08 01f044ff
.org 0x63c0c
	adds r3, r4, #1	@ 00063c0c 631c
.org 0x63c0e
	movs r0, #1	@ 00063c0e 0120
.org 0x63c10
	ands r3, r0	@ 00063c10 0340
.org 0x63c12
	adds r1, r3, #0	@ 00063c12 191c
.org 0x63c14
	ands r1, r5	@ 00063c14 2940
.org 0x63c16
	adds r0, r6, #0	@ 00063c16 301c
.org 0x63c18
	adds r0, #76	@ 00063c18 4c30
.org 0x63c1a
	strb r1, [r0, #0]	@ 00063c1a 0170
.org 0x63c1c
	adds r4, r6, #0	@ 00063c1c 341c
.org 0x63c1e
	adds r4, #74	@ 00063c1e 4a34
.org 0x63c20
	lsls r1, r1, #4	@ 00063c20 0901
.org 0x63c22
	ldrb r2, [r4, #0]	@ 00063c22 2278
.org 0x63c24
	movs r0, #17	@ 00063c24 1120
.org 0x63c26
	negs r0, r0	@ 00063c26 4042
.org 0x63c28
	ands r0, r2	@ 00063c28 1040
.org 0x63c2a
	orrs r0, r1	@ 00063c2a 0843
.org 0x63c2c
	strb r0, [r4, #0]	@ 00063c2c 2070
.org 0x63c2e
	ands r3, r5	@ 00063c2e 2b40
.org 0x63c30
	cmp r3, #0	@ 00063c30 002b
.org 0x63c32
	beq.n 0x63c3c	@ 00063c32 03d0
.org 0x63c34
	ldrb r0, [r6, #10]	@ 00063c34 b07a
.org 0x63c36
	movs r1, #16	@ 00063c36 1021
.org 0x63c38
	orrs r0, r1	@ 00063c38 0843
.org 0x63c3a
	b.n 0x63c42	@ 00063c3a 02e0
.org 0x63c3c
	ldrb r1, [r6, #10]	@ 00063c3c b17a
.org 0x63c3e
	movs r0, #239	@ 00063c3e ef20
.org 0x63c40
	ands r0, r1	@ 00063c40 0840
.org 0x63c42
	strb r0, [r6, #10]	@ 00063c42 b072
.org 0x63c44
	ldrb r0, [r6, #15]	@ 00063c44 f07b
.org 0x63c46
	adds r0, #1	@ 00063c46 0130
.org 0x63c48
	strb r0, [r6, #15]	@ 00063c48 f073
.org 0x63c4a
	adds r0, r6, #0	@ 00063c4a 301c
.org 0x63c4c
	bl 0x1cff0	@ 00063c4c b9f7d0f9
.org 0x63c50
	adds r0, r6, #0	@ 00063c50 301c
.org 0x63c52
	adds r0, #116	@ 00063c52 7430
.org 0x63c54
	ldr r4, [pc, #124]	@ 00063c54 1f4c
.org 0x63c56
	ldr r3, [pc, #128]	@ 00063c56 204b
.org 0x63c58
	adds r1, r6, #0	@ 00063c58 311c
.org 0x63c5a
	adds r1, #180	@ 00063c5a b431
.org 0x63c5c
	ldrb r2, [r1, #0]	@ 00063c5c 0a78
.org 0x63c5e
	lsls r1, r2, #1	@ 00063c5e 5100
.org 0x63c60
	adds r1, r1, r3	@ 00063c60 c918
.org 0x63c62
	ldrh r1, [r1, #0]	@ 00063c62 0988
.org 0x63c64
	lsls r1, r1, #2	@ 00063c64 8900
.org 0x63c66
	adds r1, r1, r4	@ 00063c66 0919
.org 0x63c68
	adds r3, r6, #0	@ 00063c68 331c
.org 0x63c6a
	adds r3, #113	@ 00063c6a 7133
.org 0x63c6c
	movs r5, #0	@ 00063c6c 0025
.org 0x63c6e
	ldrsb r5, [r3, r5]	@ 00063c6e 5d57
.org 0x63c70
	ldr r1, [r1, #0]	@ 00063c70 0968
.org 0x63c72
	lsls r3, r5, #2	@ 00063c72 ab00
.org 0x63c74
	adds r3, r3, r1	@ 00063c74 5b18
.org 0x63c76
	ldr r4, [pc, #100]	@ 00063c76 194c
.org 0x63c78
	adds r1, r6, #0	@ 00063c78 311c
.org 0x63c7a
	adds r1, #181	@ 00063c7a b531
.org 0x63c7c
	ldrb r1, [r1, #0]	@ 00063c7c 0978
.org 0x63c7e
	lsls r1, r1, #2	@ 00063c7e 8900
.org 0x63c80
	adds r1, r1, r4	@ 00063c80 0919
.org 0x63c82
	ldr r1, [r1, #0]	@ 00063c82 0968
.org 0x63c84
	lsls r2, r2, #2	@ 00063c84 9200
.org 0x63c86
	adds r2, r2, r1	@ 00063c86 5218
.org 0x63c88
	ldr r1, [r2, #0]	@ 00063c88 1168
.org 0x63c8a
	adds r1, r1, r5	@ 00063c8a 4919
.org 0x63c8c
	ldrb r1, [r1, #0]	@ 00063c8c 0978
.org 0x63c8e
	lsls r2, r1, #1	@ 00063c8e 4a00
.org 0x63c90
	adds r2, r2, r1	@ 00063c90 5218
.org 0x63c92
	lsls r2, r2, #3	@ 00063c92 d200
.org 0x63c94
	ldr r1, [r3, #0]	@ 00063c94 1968
.org 0x63c96
	adds r1, r1, r2	@ 00063c96 8918
.org 0x63c98
	bl 0x5784	@ 00063c98 a1f774fd
.org 0x63c9c
	adds r0, r6, #0	@ 00063c9c 301c
.org 0x63c9e
	adds r0, #115	@ 00063c9e 7330
.org 0x63ca0
	ldrb r0, [r0, #0]	@ 00063ca0 0078
.org 0x63ca2
	cmp r0, #3	@ 00063ca2 0328
.org 0x63ca4
	bne.n 0x63cca	@ 00063ca4 11d1
.org 0x63ca6
	mov r1, sp	@ 00063ca6 6946
.org 0x63ca8
	ldr r0, [pc, #52]	@ 00063ca8 0d48
.org 0x63caa
	ldmia r0!, {r2, r3, r4}	@ 00063caa 1cc8
.org 0x63cac
	stmia r1!, {r2, r3, r4}	@ 00063cac 1cc1
.org 0x63cae
	adds r0, r6, #0	@ 00063cae 301c
.org 0x63cb0
	bl 0x66160	@ 00063cb0 02f056fa
.org 0x63cb4
	lsls r0, r0, #2	@ 00063cb4 8000
.org 0x63cb6
	add r0, sp	@ 00063cb6 6844
.org 0x63cb8
	ldr r1, [r0, #0]	@ 00063cb8 0168
.org 0x63cba
	adds r0, r6, #0	@ 00063cba 301c
.org 0x63cbc
	adds r0, #224	@ 00063cbc e030
.org 0x63cbe
	movs r2, #0	@ 00063cbe 0022
.org 0x63cc0
	strb r1, [r0, #0]	@ 00063cc0 0170
.org 0x63cc2
	movs r0, #13	@ 00063cc2 0d20
.org 0x63cc4
	strb r0, [r6, #13]	@ 00063cc4 7073
.org 0x63cc6
	strb r2, [r6, #14]	@ 00063cc6 b273
.org 0x63cc8
	strb r2, [r6, #15]	@ 00063cc8 f273
.org 0x63cca
	add sp, #12	@ 00063cca 03b0
.org 0x63ccc
	pop {r4, r5, r6}	@ 00063ccc 70bc
.org 0x63cce
	pop {r0}	@ 00063cce 01bc
.org 0x63cd0
	bx r0	@ 00063cd0 0047
