@ FUN_08111ca8  entry 0x08111ca8  size 132
.thumb
.org 0x111ca8
FUN_08111ca8:
	push {r4, r5, r6, lr}	@ 00111ca8 70b5
.org 0x111caa
	mov r6, r8	@ 00111caa 4646
.org 0x111cac
	push {r6}	@ 00111cac 40b4
.org 0x111cae
	mov r8, r0	@ 00111cae 8046
.org 0x111cb0
	ldr r5, [pc, #120]	@ 00111cb0 1e4d
.org 0x111cb2
	ldr r1, [pc, #124]	@ 00111cb2 1f49
.org 0x111cb4
	adds r0, r5, r1	@ 00111cb4 6818
.org 0x111cb6
	movs r4, #0	@ 00111cb6 0024
.org 0x111cb8
	movs r1, #32	@ 00111cb8 2021
.org 0x111cba
	strb r1, [r0, #0]	@ 00111cba 0170
.org 0x111cbc
	ldr r2, [pc, #116]	@ 00111cbc 1d4a
.org 0x111cbe
	adds r0, r5, r2	@ 00111cbe a818
.org 0x111cc0
	strb r1, [r0, #0]	@ 00111cc0 0170
.org 0x111cc2
	movs r3, #128	@ 00111cc2 8023
.org 0x111cc4
	lsls r3, r3, #3	@ 00111cc4 db00
.org 0x111cc6
	adds r0, r5, r3	@ 00111cc6 e818
.org 0x111cc8
	strb r1, [r0, #0]	@ 00111cc8 0170
.org 0x111cca
	movs r1, #129	@ 00111cca 8121
.org 0x111ccc
	lsls r1, r1, #3	@ 00111ccc c900
.org 0x111cce
	adds r0, r5, r1	@ 00111cce 6818
.org 0x111cd0
	str r4, [r0, #0]	@ 00111cd0 0460
.org 0x111cd2
	bl 0x2348	@ 00111cd2 f0f639fb
.org 0x111cd6
	ldr r0, [pc, #96]	@ 00111cd6 1848
.org 0x111cd8
	movs r6, #0	@ 00111cd8 0026
.org 0x111cda
	strh r4, [r0, #0]	@ 00111cda 0480
.org 0x111cdc
	ldr r1, [pc, #92]	@ 00111cdc 1749
.org 0x111cde
	strh r4, [r1, #0]	@ 00111cde 0c80
.org 0x111ce0
	movs r0, #255	@ 00111ce0 ff20
.org 0x111ce2
	strb r0, [r1, #14]	@ 00111ce2 8873
.org 0x111ce4
	ldr r0, [pc, #88]	@ 00111ce4 1648
.org 0x111ce6
	strh r4, [r0, #0]	@ 00111ce6 0480
.org 0x111ce8
	strh r4, [r5, #0]	@ 00111ce8 2c80
.org 0x111cea
	bl 0x10d4a8	@ 00111cea fbf7ddfb
.org 0x111cee
	ldr r2, [pc, #84]	@ 00111cee 154a
.org 0x111cf0
	ldrh r1, [r2, #0]	@ 00111cf0 1188
.org 0x111cf2
	ldr r0, [pc, #84]	@ 00111cf2 1548
.org 0x111cf4
	ands r0, r1	@ 00111cf4 0840
.org 0x111cf6
	ldr r1, [pc, #84]	@ 00111cf6 1549
.org 0x111cf8
	ands r0, r1	@ 00111cf8 0840
.org 0x111cfa
	movs r3, #128	@ 00111cfa 8023
.org 0x111cfc
	lsls r3, r3, #1	@ 00111cfc 5b00
.org 0x111cfe
	adds r1, r3, #0	@ 00111cfe 191c
.org 0x111d00
	orrs r0, r1	@ 00111d00 0843
.org 0x111d02
	strh r0, [r2, #0]	@ 00111d02 1080
.org 0x111d04
	movs r0, #149	@ 00111d04 9520
.org 0x111d06
	bl 0x2b10	@ 00111d06 f0f603ff
.org 0x111d0a
	ldr r0, [pc, #68]	@ 00111d0a 1148
.org 0x111d0c
	adds r0, #56	@ 00111d0c 3830
.org 0x111d0e
	strb r6, [r0, #0]	@ 00111d0e 0670
.org 0x111d10
	movs r0, #145	@ 00111d10 9120
.org 0x111d12
	lsls r0, r0, #2	@ 00111d12 8000
.org 0x111d14
	add r0, r8	@ 00111d14 4044
.org 0x111d16
	strb r6, [r0, #0]	@ 00111d16 0670
.org 0x111d18
	mov r0, r8	@ 00111d18 4046
.org 0x111d1a
	strb r6, [r0, #6]	@ 00111d1a 8671
.org 0x111d1c
	movs r0, #1	@ 00111d1c 0120
.org 0x111d1e
	mov r1, r8	@ 00111d1e 4146
.org 0x111d20
	strb r0, [r1, #5]	@ 00111d20 4871
.org 0x111d22
	pop {r3}	@ 00111d22 08bc
.org 0x111d24
	mov r8, r3	@ 00111d24 9846
.org 0x111d26
	pop {r4, r5, r6}	@ 00111d26 70bc
.org 0x111d28
	pop {r0}	@ 00111d28 01bc
.org 0x111d2a
	bx r0	@ 00111d2a 0047
