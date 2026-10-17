@ FUN_080849f4  entry 0x080849f4  size 122
.thumb
.org 0x849f4
FUN_080849f4:
	push {r4, r5, r6, r7, lr}	@ 000849f4 f0b5
.org 0x849f6
	mov r7, r8	@ 000849f6 4746
.org 0x849f8
	push {r7}	@ 000849f8 80b4
.org 0x849fa
	sub sp, #4	@ 000849fa 81b0
.org 0x849fc
	adds r7, r0, #0	@ 000849fc 071c
.org 0x849fe
	adds r6, r1, #0	@ 000849fe 0e1c
.org 0x84a00
	movs r5, #0	@ 00084a00 0025
.org 0x84a02
	movs r3, #0	@ 00084a02 0023
.org 0x84a04
	ldr r4, [pc, #104]	@ 00084a04 1a4c
.org 0x84a06
	ldr r0, [pc, #108]	@ 00084a06 1b48
.org 0x84a08
	ldr r0, [r0, #0]	@ 00084a08 0068
.org 0x84a0a
	str r3, [sp, #0]	@ 00084a0a 0093
.org 0x84a0c
	bl 0x54cc	@ 00084a0c 80f75efd
.org 0x84a10
	adds r2, r0, #0	@ 00084a10 021c
.org 0x84a12
	ldr r3, [sp, #0]	@ 00084a12 009b
.org 0x84a14
	cmp r2, #0	@ 00084a14 002a
.org 0x84a16
	beq.n 0x84a5a	@ 00084a16 20d0
.org 0x84a18
	adds r1, r2, #0	@ 00084a18 111c
.org 0x84a1a
	adds r1, #37	@ 00084a1a 2531
.org 0x84a1c
	movs r0, #24	@ 00084a1c 1820
.org 0x84a1e
	strb r0, [r1, #0]	@ 00084a1e 0870
.org 0x84a20
	ldr r1, [pc, #84]	@ 00084a20 1549
.org 0x84a22
	movs r0, #5	@ 00084a22 0520
.org 0x84a24
	strb r0, [r2, #9]	@ 00084a24 5072
.org 0x84a26
	ldr r0, [r1, #20]	@ 00084a26 4869
.org 0x84a28
	ldr r0, [r0, #0]	@ 00084a28 0068
.org 0x84a2a
	str r0, [r2, #20]	@ 00084a2a 5061
.org 0x84a2c
	strh r3, [r2, #32]	@ 00084a2c 1384
.org 0x84a2e
	adds r0, r2, #0	@ 00084a2e 101c
.org 0x84a30
	adds r0, #34	@ 00084a30 2230
.org 0x84a32
	strb r3, [r0, #0]	@ 00084a32 0370
.org 0x84a34
	ldrb r0, [r2, #11]	@ 00084a34 d07a
.org 0x84a36
	movs r1, #16	@ 00084a36 1021
.org 0x84a38
	orrs r0, r1	@ 00084a38 0843
.org 0x84a3a
	strb r0, [r2, #11]	@ 00084a3a d072
.org 0x84a3c
	ldrb r0, [r2, #28]	@ 00084a3c 107f
.org 0x84a3e
	strb r0, [r2, #29]	@ 00084a3e 5077
.org 0x84a40
	movs r0, #3	@ 00084a40 0320
.org 0x84a42
	strb r0, [r2, #16]	@ 00084a42 1074
.org 0x84a44
	strb r5, [r2, #17]	@ 00084a44 5574
.org 0x84a46
	str r7, [r2, #84]	@ 00084a46 5765
.org 0x84a48
	movs r1, #0	@ 00084a48 0021
.org 0x84a4a
	ldrsh r0, [r4, r1]	@ 00084a4a 605e
.org 0x84a4c
	adds r0, r7, r0	@ 00084a4c 3818
.org 0x84a4e
	str r0, [r2, #84]	@ 00084a4e 5065
.org 0x84a50
	str r6, [r2, #88]	@ 00084a50 9665
.org 0x84a52
	movs r1, #2	@ 00084a52 0221
.org 0x84a54
	ldrsh r0, [r4, r1]	@ 00084a54 605e
.org 0x84a56
	adds r0, r6, r0	@ 00084a56 3018
.org 0x84a58
	str r0, [r2, #88]	@ 00084a58 9065
.org 0x84a5a
	adds r4, #4	@ 00084a5a 0434
.org 0x84a5c
	adds r5, #1	@ 00084a5c 0135
.org 0x84a5e
	cmp r5, #3	@ 00084a5e 032d
.org 0x84a60
	ble.n 0x84a06	@ 00084a60 d1dd
.org 0x84a62
	add sp, #4	@ 00084a62 01b0
.org 0x84a64
	pop {r3}	@ 00084a64 08bc
.org 0x84a66
	mov r8, r3	@ 00084a66 9846
.org 0x84a68
	pop {r4, r5, r6, r7}	@ 00084a68 f0bc
.org 0x84a6a
	pop {r0}	@ 00084a6a 01bc
.org 0x84a6c
	bx r0	@ 00084a6c 0047
