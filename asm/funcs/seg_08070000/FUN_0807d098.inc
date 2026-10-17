@ FUN_0807d098  entry 0x0807d098  size 122
.thumb
.org 0x7d098
FUN_0807d098:
	push {r4, r5, r6, r7, lr}	@ 0007d098 f0b5
.org 0x7d09a
	sub sp, #8	@ 0007d09a 82b0
.org 0x7d09c
	adds r4, r0, #0	@ 0007d09c 041c
.org 0x7d09e
	ldr r1, [pc, #116]	@ 0007d09e 1d49
.org 0x7d0a0
	mov r0, sp	@ 0007d0a0 6846
.org 0x7d0a2
	movs r2, #2	@ 0007d0a2 0222
.org 0x7d0a4
	bl 0x129258	@ 0007d0a4 acf0d8f8
.org 0x7d0a8
	add r6, sp, #4	@ 0007d0a8 01ae
.org 0x7d0aa
	ldr r1, [pc, #108]	@ 0007d0aa 1b49
.org 0x7d0ac
	adds r0, r6, #0	@ 0007d0ac 301c
.org 0x7d0ae
	movs r2, #2	@ 0007d0ae 0222
.org 0x7d0b0
	bl 0x129258	@ 0007d0b0 acf0d2f8
.org 0x7d0b4
	movs r3, #0	@ 0007d0b4 0023
.org 0x7d0b6
	adds r0, r4, #0	@ 0007d0b6 201c
.org 0x7d0b8
	adds r0, #180	@ 0007d0b8 b430
.org 0x7d0ba
	ldr r5, [r0, #0]	@ 0007d0ba 0568
.org 0x7d0bc
	movs r0, #240	@ 0007d0bc f020
.org 0x7d0be
	lsls r0, r0, #7	@ 0007d0be c001
.org 0x7d0c0
	mov ip, r0	@ 0007d0c0 8446
.org 0x7d0c2
	adds r1, r5, r0	@ 0007d0c2 2918
.org 0x7d0c4
	ldr r0, [pc, #84]	@ 0007d0c4 1548
.org 0x7d0c6
	ldr r0, [r0, #0]	@ 0007d0c6 0068
.org 0x7d0c8
	ldr r0, [r0, #84]	@ 0007d0c8 406d
.org 0x7d0ca
	cmp r1, r0	@ 0007d0ca 8142
.org 0x7d0cc
	bge.n 0x7d0d0	@ 0007d0cc 00da
.org 0x7d0ce
	movs r3, #1	@ 0007d0ce 0123
.org 0x7d0d0
	adds r2, r4, #0	@ 0007d0d0 221c
.org 0x7d0d2
	adds r2, #200	@ 0007d0d2 c832
.org 0x7d0d4
	ldr r1, [pc, #72]	@ 0007d0d4 1249
.org 0x7d0d6
	mov r7, sp	@ 0007d0d6 6f46
.org 0x7d0d8
	adds r0, r7, r3	@ 0007d0d8 f818
.org 0x7d0da
	ldrb r0, [r0, #0]	@ 0007d0da 0078
.org 0x7d0dc
	lsls r0, r0, #2	@ 0007d0dc 8000
.org 0x7d0de
	adds r0, r0, r1	@ 0007d0de 4018
.org 0x7d0e0
	ldr r0, [r0, #0]	@ 0007d0e0 0068
.org 0x7d0e2
	add r0, ip	@ 0007d0e2 6044
.org 0x7d0e4
	adds r0, r5, r0	@ 0007d0e4 2818
.org 0x7d0e6
	str r0, [r2, #0]	@ 0007d0e6 1060
.org 0x7d0e8
	adds r0, r6, r3	@ 0007d0e8 f018
.org 0x7d0ea
	ldrb r0, [r0, #0]	@ 0007d0ea 0078
.org 0x7d0ec
	subs r2, #10	@ 0007d0ec 0a3a
.org 0x7d0ee
	movs r1, #0	@ 0007d0ee 0021
.org 0x7d0f0
	strb r0, [r2, #0]	@ 0007d0f0 1070
.org 0x7d0f2
	ldrb r0, [r4, #14]	@ 0007d0f2 a07b
.org 0x7d0f4
	adds r0, #1	@ 0007d0f4 0130
.org 0x7d0f6
	strb r0, [r4, #14]	@ 0007d0f6 a073
.org 0x7d0f8
	strb r1, [r4, #15]	@ 0007d0f8 e173
.org 0x7d0fa
	ldr r1, [pc, #40]	@ 0007d0fa 0a49
.org 0x7d0fc
	ldrb r0, [r4, #13]	@ 0007d0fc 607b
.org 0x7d0fe
	lsls r0, r0, #2	@ 0007d0fe 8000
.org 0x7d100
	adds r0, r0, r1	@ 0007d100 4018
.org 0x7d102
	ldr r1, [r0, #0]	@ 0007d102 0168
.org 0x7d104
	adds r0, r4, #0	@ 0007d104 201c
.org 0x7d106
	bl 0x128f80	@ 0007d106 abf03bff
.org 0x7d10a
	add sp, #8	@ 0007d10a 02b0
.org 0x7d10c
	pop {r4, r5, r6, r7}	@ 0007d10c f0bc
.org 0x7d10e
	pop {r0}	@ 0007d10e 01bc
.org 0x7d110
	bx r0	@ 0007d110 0047
