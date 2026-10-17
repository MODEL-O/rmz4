@ FUN_080a59fc  entry 0x080a59fc  size 108
.thumb
.org 0xa59fc
FUN_080a59fc:
	push {r4, lr}	@ 000a59fc 10b5
.org 0xa59fe
	adds r4, r0, #0	@ 000a59fe 041c
.org 0xa5a00
	ldr r0, [pc, #100]	@ 000a5a00 1948
.org 0xa5a02
	bl 0x2b10	@ 000a5a02 5df785f8
.org 0xa5a06
	ldr r1, [pc, #100]	@ 000a5a06 1949
.org 0xa5a08
	ldrb r0, [r4, #9]	@ 000a5a08 607a
.org 0xa5a0a
	lsls r0, r0, #2	@ 000a5a0a 8000
.org 0xa5a0c
	adds r0, r0, r1	@ 000a5a0c 4018
.org 0xa5a0e
	movs r1, #1	@ 000a5a0e 0121
.org 0xa5a10
	str r1, [r4, #12]	@ 000a5a10 e160
.org 0xa5a12
	ldr r0, [r0, #0]	@ 000a5a12 0068
.org 0xa5a14
	ldr r0, [r0, #4]	@ 000a5a14 4068
.org 0xa5a16
	str r0, [r4, #20]	@ 000a5a16 6061
.org 0xa5a18
	ldrb r1, [r4, #10]	@ 000a5a18 a17a
.org 0xa5a1a
	movs r0, #1	@ 000a5a1a 0120
.org 0xa5a1c
	orrs r0, r1	@ 000a5a1c 0843
.org 0xa5a1e
	movs r1, #2	@ 000a5a1e 0221
.org 0xa5a20
	orrs r0, r1	@ 000a5a20 0843
.org 0xa5a22
	strb r0, [r4, #10]	@ 000a5a22 a072
.org 0xa5a24
	movs r0, #3	@ 000a5a24 0320
.org 0xa5a26
	strb r0, [r4, #18]	@ 000a5a26 a074
.org 0xa5a28
	adds r0, r4, #0	@ 000a5a28 201c
.org 0xa5a2a
	bl 0x1cc9c	@ 000a5a2a 77f737f9
.org 0xa5a2e
	movs r2, #0	@ 000a5a2e 0022
.org 0xa5a30
	ldrb r1, [r4, #10]	@ 000a5a30 a17a
.org 0xa5a32
	movs r0, #239	@ 000a5a32 ef20
.org 0xa5a34
	ands r0, r1	@ 000a5a34 0840
.org 0xa5a36
	strb r0, [r4, #10]	@ 000a5a36 a072
.org 0xa5a38
	adds r0, r4, #0	@ 000a5a38 201c
.org 0xa5a3a
	adds r0, #76	@ 000a5a3a 4c30
.org 0xa5a3c
	strb r2, [r0, #0]	@ 000a5a3c 0270
.org 0xa5a3e
	adds r2, r4, #0	@ 000a5a3e 221c
.org 0xa5a40
	adds r2, #74	@ 000a5a40 4a32
.org 0xa5a42
	ldrb r1, [r2, #0]	@ 000a5a42 1178
.org 0xa5a44
	movs r0, #17	@ 000a5a44 1120
.org 0xa5a46
	negs r0, r0	@ 000a5a46 4042
.org 0xa5a48
	ands r0, r1	@ 000a5a48 0840
.org 0xa5a4a
	strb r0, [r2, #0]	@ 000a5a4a 1070
.org 0xa5a4c
	movs r1, #136	@ 000a5a4c 8821
.org 0xa5a4e
	lsls r1, r1, #8	@ 000a5a4e 0902
.org 0xa5a50
	adds r0, r4, #0	@ 000a5a50 201c
.org 0xa5a52
	bl 0x1cf00	@ 000a5a52 77f755fa
.org 0xa5a56
	adds r0, r4, #0	@ 000a5a56 201c
.org 0xa5a58
	bl 0x1d3fc	@ 000a5a58 77f7d0fc
.org 0xa5a5c
	adds r0, r4, #0	@ 000a5a5c 201c
.org 0xa5a5e
	bl 0xa5a70	@ 000a5a5e 00f007f8
.org 0xa5a62
	pop {r4}	@ 000a5a62 10bc
.org 0xa5a64
	pop {r0}	@ 000a5a64 01bc
.org 0xa5a66
	bx r0	@ 000a5a66 0047
