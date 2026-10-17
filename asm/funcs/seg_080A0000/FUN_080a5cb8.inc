@ FUN_080a5cb8  entry 0x080a5cb8  size 116
.thumb
.org 0xa5cb8
FUN_080a5cb8:
	push {r4, lr}	@ 000a5cb8 10b5
.org 0xa5cba
	adds r4, r0, #0	@ 000a5cba 041c
.org 0xa5cbc
	ldrb r0, [r4, #15]	@ 000a5cbc e07b
.org 0xa5cbe
	cmp r0, #0	@ 000a5cbe 0028
.org 0xa5cc0
	bne.n 0xa5ce2	@ 000a5cc0 0fd1
.org 0xa5cc2
	adds r0, r4, #0	@ 000a5cc2 201c
.org 0xa5cc4
	adds r0, #116	@ 000a5cc4 7430
.org 0xa5cc6
	ldr r1, [pc, #100]	@ 000a5cc6 1949
.org 0xa5cc8
	bl 0x5784	@ 000a5cc8 5ff75cfd
.org 0xa5ccc
	ldr r1, [pc, #96]	@ 000a5ccc 1849
.org 0xa5cce
	adds r0, r4, #0	@ 000a5cce 201c
.org 0xa5cd0
	bl 0x1cf00	@ 000a5cd0 77f716f9
.org 0xa5cd4
	adds r0, r4, #0	@ 000a5cd4 201c
.org 0xa5cd6
	movs r1, #6	@ 000a5cd6 0621
.org 0xa5cd8
	bl 0x1d3d0	@ 000a5cd8 77f77afb
.org 0xa5cdc
	ldrb r0, [r4, #15]	@ 000a5cdc e07b
.org 0xa5cde
	adds r0, #1	@ 000a5cde 0130
.org 0xa5ce0
	strb r0, [r4, #15]	@ 000a5ce0 e073
.org 0xa5ce2
	adds r0, r4, #0	@ 000a5ce2 201c
.org 0xa5ce4
	bl 0x1cff0	@ 000a5ce4 77f784f9
.org 0xa5ce8
	adds r0, r4, #0	@ 000a5ce8 201c
.org 0xa5cea
	adds r0, #115	@ 000a5cea 7330
.org 0xa5cec
	ldrb r3, [r0, #0]	@ 000a5cec 0378
.org 0xa5cee
	cmp r3, #3	@ 000a5cee 032b
.org 0xa5cf0
	bne.n 0xa5d26	@ 000a5cf0 19d1
.org 0xa5cf2
	ldrb r1, [r4, #10]	@ 000a5cf2 a17a
.org 0xa5cf4
	movs r0, #254	@ 000a5cf4 fe20
.org 0xa5cf6
	ands r0, r1	@ 000a5cf6 0840
.org 0xa5cf8
	movs r2, #0	@ 000a5cf8 0022
.org 0xa5cfa
	movs r1, #253	@ 000a5cfa fd21
.org 0xa5cfc
	ands r0, r1	@ 000a5cfc 0840
.org 0xa5cfe
	strb r0, [r4, #10]	@ 000a5cfe a072
.org 0xa5d00
	adds r0, r4, #0	@ 000a5d00 201c
.org 0xa5d02
	adds r0, #140	@ 000a5d02 8c30
.org 0xa5d04
	str r2, [r0, #0]	@ 000a5d04 0260
.org 0xa5d06
	adds r0, #4	@ 000a5d06 0430
.org 0xa5d08
	str r2, [r0, #0]	@ 000a5d08 0260
.org 0xa5d0a
	adds r0, #4	@ 000a5d0a 0430
.org 0xa5d0c
	strb r2, [r0, #0]	@ 000a5d0c 0270
.org 0xa5d0e
	ldrb r1, [r4, #10]	@ 000a5d0e a17a
.org 0xa5d10
	movs r0, #251	@ 000a5d10 fb20
.org 0xa5d12
	ands r0, r1	@ 000a5d12 0840
.org 0xa5d14
	strb r0, [r4, #10]	@ 000a5d14 a072
.org 0xa5d16
	ldr r1, [pc, #28]	@ 000a5d16 0749
.org 0xa5d18
	ldrb r0, [r4, #9]	@ 000a5d18 607a
.org 0xa5d1a
	lsls r0, r0, #2	@ 000a5d1a 8000
.org 0xa5d1c
	adds r0, r0, r1	@ 000a5d1c 4018
.org 0xa5d1e
	str r3, [r4, #12]	@ 000a5d1e e360
.org 0xa5d20
	ldr r0, [r0, #0]	@ 000a5d20 0068
.org 0xa5d22
	ldr r0, [r0, #12]	@ 000a5d22 c068
.org 0xa5d24
	str r0, [r4, #20]	@ 000a5d24 6061
.org 0xa5d26
	pop {r4}	@ 000a5d26 10bc
.org 0xa5d28
	pop {r0}	@ 000a5d28 01bc
.org 0xa5d2a
	bx r0	@ 000a5d2a 0047
