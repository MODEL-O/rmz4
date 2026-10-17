@ FUN_080c19c4  entry 0x080c19c4  size 74
.thumb
.org 0xc19c4
FUN_080c19c4:
	push {r4, r5, r6, r7, lr}	@ 000c19c4 f0b5
.org 0xc19c6
	mov r7, r8	@ 000c19c6 4746
.org 0xc19c8
	push {r7}	@ 000c19c8 80b4
.org 0xc19ca
	sub sp, #8	@ 000c19ca 82b0
.org 0xc19cc
	adds r4, r0, #0	@ 000c19cc 041c
.org 0xc19ce
	ldrb r0, [r4, #10]	@ 000c19ce a07a
.org 0xc19d0
	lsrs r0, r0, #4	@ 000c19d0 0009
.org 0xc19d2
	movs r1, #1	@ 000c19d2 0121
.org 0xc19d4
	ands r0, r1	@ 000c19d4 0840
.org 0xc19d6
	mov r8, sp	@ 000c19d6 e846
.org 0xc19d8
	lsls r1, r0, #4	@ 000c19d8 0101
.org 0xc19da
	orrs r0, r1	@ 000c19da 0843
.org 0xc19dc
	lsls r7, r0, #24	@ 000c19dc 0706
.org 0xc19de
	movs r6, #0	@ 000c19de 0026
.org 0xc19e0
	movs r5, #2	@ 000c19e0 0225
.org 0xc19e2
	ldr r0, [r4, #84]	@ 000c19e2 606d
.org 0xc19e4
	str r0, [sp, #0]	@ 000c19e4 0090
.org 0xc19e6
	ldr r0, [r4, #88]	@ 000c19e6 a06d
.org 0xc19e8
	mov r1, r8	@ 000c19e8 4146
.org 0xc19ea
	str r0, [r1, #4]	@ 000c19ea 4860
.org 0xc19ec
	ldr r1, [pc, #32]	@ 000c19ec 0849
.org 0xc19ee
	adds r1, r6, r1	@ 000c19ee 7118
.org 0xc19f0
	mov r0, sp	@ 000c19f0 6846
.org 0xc19f2
	movs r2, #0	@ 000c19f2 0022
.org 0xc19f4
	lsrs r3, r7, #24	@ 000c19f4 3b0e
.org 0xc19f6
	bl 0xd4c8c	@ 000c19f6 13f049f9
.org 0xc19fa
	adds r6, #28	@ 000c19fa 1c36
.org 0xc19fc
	subs r5, #1	@ 000c19fc 013d
.org 0xc19fe
	cmp r5, #0	@ 000c19fe 002d
.org 0xc1a00
	bge.n 0xc19e2	@ 000c1a00 efda
.org 0xc1a02
	add sp, #8	@ 000c1a02 02b0
.org 0xc1a04
	pop {r3}	@ 000c1a04 08bc
.org 0xc1a06
	mov r8, r3	@ 000c1a06 9846
.org 0xc1a08
	pop {r4, r5, r6, r7}	@ 000c1a08 f0bc
.org 0xc1a0a
	pop {r0}	@ 000c1a0a 01bc
.org 0xc1a0c
	bx r0	@ 000c1a0c 0047
