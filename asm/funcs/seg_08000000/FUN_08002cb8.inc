@ FUN_08002cb8  entry 0x08002cb8  size 100
.thumb
.org 0x2cb8
FUN_08002cb8:
	push {r4, r5, r6, lr}	@ 00002cb8 70b5
.org 0x2cba
	mov r6, r9	@ 00002cba 4e46
.org 0x2cbc
	mov r5, r8	@ 00002cbc 4546
.org 0x2cbe
	push {r5, r6}	@ 00002cbe 60b4
.org 0x2cc0
	sub sp, #8	@ 00002cc0 82b0
.org 0x2cc2
	adds r4, r0, #0	@ 00002cc2 041c
.org 0x2cc4
	mov r8, r1	@ 00002cc4 8846
.org 0x2cc6
	mov r9, r2	@ 00002cc6 9146
.org 0x2cc8
	movs r5, #0	@ 00002cc8 0025
.org 0x2cca
	adds r6, r4, #0	@ 00002cca 261c
.org 0x2ccc
	adds r6, #8	@ 00002ccc 0836
.org 0x2cce
	str r5, [sp, #0]	@ 00002cce 0095
.org 0x2cd0
	movs r2, #128	@ 00002cd0 8022
.org 0x2cd2
	lsls r2, r2, #17	@ 00002cd2 5204
.org 0x2cd4
	mov r0, sp	@ 00002cd4 6846
.org 0x2cd6
	adds r1, r6, #0	@ 00002cd6 311c
.org 0x2cd8
	bl 0x128be0	@ 00002cd8 25f182ff
.org 0x2cdc
	str r5, [sp, #4]	@ 00002cdc 0195
.org 0x2cde
	add r0, sp, #4	@ 00002cde 01a8
.org 0x2ce0
	ldr r2, [pc, #56]	@ 00002ce0 0e4a
.org 0x2ce2
	adds r1, r6, #0	@ 00002ce2 311c
.org 0x2ce4
	bl 0x128be4	@ 00002ce4 25f17eff
.org 0x2ce8
	ldr r1, [pc, #52]	@ 00002ce8 0d49
.org 0x2cea
	adds r0, r4, #0	@ 00002cea 201c
.org 0x2cec
	bl 0x2c94	@ 00002cec fff7d2ff
.org 0x2cf0
	ldrb r0, [r4, #17]	@ 00002cf0 607c
.org 0x2cf2
	movs r1, #16	@ 00002cf2 1021
.org 0x2cf4
	orrs r0, r1	@ 00002cf4 0843
.org 0x2cf6
	strb r0, [r4, #17]	@ 00002cf6 6074
.org 0x2cf8
	ldrb r1, [r4, #21]	@ 00002cf8 617d
.org 0x2cfa
	movs r0, #13	@ 00002cfa 0d20
.org 0x2cfc
	negs r0, r0	@ 00002cfc 4042
.org 0x2cfe
	ands r0, r1	@ 00002cfe 0840
.org 0x2d00
	movs r1, #8	@ 00002d00 0821
.org 0x2d02
	orrs r0, r1	@ 00002d02 0843
.org 0x2d04
	strb r0, [r4, #21]	@ 00002d04 6075
.org 0x2d06
	mov r0, r8	@ 00002d06 4046
.org 0x2d08
	str r0, [r4, #8]	@ 00002d08 a060
.org 0x2d0a
	mov r0, r9	@ 00002d0a 4846
.org 0x2d0c
	str r0, [r4, #12]	@ 00002d0c e060
.org 0x2d0e
	add sp, #8	@ 00002d0e 02b0
.org 0x2d10
	pop {r3, r4}	@ 00002d10 18bc
.org 0x2d12
	mov r8, r3	@ 00002d12 9846
.org 0x2d14
	mov r9, r4	@ 00002d14 a146
.org 0x2d16
	pop {r4, r5, r6}	@ 00002d16 70bc
.org 0x2d18
	pop {r0}	@ 00002d18 01bc
.org 0x2d1a
	bx r0	@ 00002d1a 0047
