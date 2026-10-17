@ FUN_08057bb0  entry 0x08057bb0  size 118
.thumb
.org 0x57bb0
FUN_08057bb0:
	push {r4, lr}	@ 00057bb0 10b5
.org 0x57bb2
	adds r4, r0, #0	@ 00057bb2 041c
.org 0x57bb4
	ldrb r0, [r4, #15]	@ 00057bb4 e07b
.org 0x57bb6
	cmp r0, #0	@ 00057bb6 0028
.org 0x57bb8
	bne.n 0x57bce	@ 00057bb8 09d1
.org 0x57bba
	movs r0, #254	@ 00057bba fe20
.org 0x57bbc
	bl 0x2b10	@ 00057bbc aaf7a8ff
.org 0x57bc0
	ldr r1, [pc, #100]	@ 00057bc0 1949
.org 0x57bc2
	adds r0, r4, #0	@ 00057bc2 201c
.org 0x57bc4
	bl 0x1cf00	@ 00057bc4 c5f79cf9
.org 0x57bc8
	ldrb r0, [r4, #15]	@ 00057bc8 e07b
.org 0x57bca
	adds r0, #1	@ 00057bca 0130
.org 0x57bcc
	strb r0, [r4, #15]	@ 00057bcc e073
.org 0x57bce
	adds r0, r4, #0	@ 00057bce 201c
.org 0x57bd0
	bl 0x1cff0	@ 00057bd0 c5f70efa
.org 0x57bd4
	adds r0, r4, #0	@ 00057bd4 201c
.org 0x57bd6
	adds r0, #116	@ 00057bd6 7430
.org 0x57bd8
	ldr r3, [pc, #80]	@ 00057bd8 144b
.org 0x57bda
	ldrb r1, [r4, #30]	@ 00057bda a17f
.org 0x57bdc
	lsls r1, r1, #8	@ 00057bdc 0902
.org 0x57bde
	adds r2, r4, #0	@ 00057bde 221c
.org 0x57be0
	adds r2, #112	@ 00057be0 7032
.org 0x57be2
	ldrb r2, [r2, #0]	@ 00057be2 1278
.org 0x57be4
	orrs r1, r2	@ 00057be4 1143
.org 0x57be6
	ldr r2, [pc, #72]	@ 00057be6 124a
.org 0x57be8
	adds r1, r1, r2	@ 00057be8 8918
.org 0x57bea
	lsls r1, r1, #2	@ 00057bea 8900
.org 0x57bec
	adds r1, r1, r3	@ 00057bec c918
.org 0x57bee
	adds r2, r4, #0	@ 00057bee 221c
.org 0x57bf0
	adds r2, #113	@ 00057bf0 7132
.org 0x57bf2
	ldrb r2, [r2, #0]	@ 00057bf2 1278
.org 0x57bf4
	lsls r2, r2, #24	@ 00057bf4 1206
.org 0x57bf6
	asrs r2, r2, #24	@ 00057bf6 1216
.org 0x57bf8
	ldr r1, [r1, #0]	@ 00057bf8 0968
.org 0x57bfa
	lsls r2, r2, #2	@ 00057bfa 9200
.org 0x57bfc
	adds r2, r2, r1	@ 00057bfc 5218
.org 0x57bfe
	ldr r1, [r2, #0]	@ 00057bfe 1168
.org 0x57c00
	ldrb r2, [r1, #0]	@ 00057c00 0a78
.org 0x57c02
	lsls r1, r2, #1	@ 00057c02 5100
.org 0x57c04
	adds r1, r1, r2	@ 00057c04 8918
.org 0x57c06
	lsls r1, r1, #3	@ 00057c06 c900
.org 0x57c08
	ldr r2, [pc, #40]	@ 00057c08 0a4a
.org 0x57c0a
	adds r1, r1, r2	@ 00057c0a 8918
.org 0x57c0c
	bl 0x5784	@ 00057c0c adf7bafd
.org 0x57c10
	adds r0, r4, #0	@ 00057c10 201c
.org 0x57c12
	adds r0, #115	@ 00057c12 7330
.org 0x57c14
	ldrb r1, [r0, #0]	@ 00057c14 0178
.org 0x57c16
	cmp r1, #3	@ 00057c16 0329
.org 0x57c18
	bne.n 0x57c20	@ 00057c18 02d1
.org 0x57c1a
	movs r0, #0	@ 00057c1a 0020
.org 0x57c1c
	strb r1, [r4, #14]	@ 00057c1c a173
.org 0x57c1e
	strb r0, [r4, #15]	@ 00057c1e e073
.org 0x57c20
	pop {r4}	@ 00057c20 10bc
.org 0x57c22
	pop {r0}	@ 00057c22 01bc
.org 0x57c24
	bx r0	@ 00057c24 0047
