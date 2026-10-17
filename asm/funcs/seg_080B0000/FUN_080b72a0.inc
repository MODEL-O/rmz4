@ FUN_080b72a0  entry 0x080b72a0  size 96
.thumb
.org 0xb72a0
FUN_080b72a0:
	push {r4, r5, r6, r7, lr}	@ 000b72a0 f0b5
.org 0xb72a2
	mov r7, r9	@ 000b72a2 4f46
.org 0xb72a4
	mov r6, r8	@ 000b72a4 4646
.org 0xb72a6
	push {r6, r7}	@ 000b72a6 c0b4
.org 0xb72a8
	sub sp, #40	@ 000b72a8 8ab0
.org 0xb72aa
	adds r7, r0, #0	@ 000b72aa 071c
.org 0xb72ac
	mov r1, sp	@ 000b72ac 6946
.org 0xb72ae
	ldr r0, [pc, #152]	@ 000b72ae 2648
.org 0xb72b0
	ldmia r0!, {r2, r3, r4}	@ 000b72b0 1cc8
.org 0xb72b2
	stmia r1!, {r2, r3, r4}	@ 000b72b2 1cc1
.org 0xb72b4
	ldmia r0!, {r2, r3, r4}	@ 000b72b4 1cc8
.org 0xb72b6
	stmia r1!, {r2, r3, r4}	@ 000b72b6 1cc1
.org 0xb72b8
	ldmia r0!, {r2, r3}	@ 000b72b8 0cc8
.org 0xb72ba
	stmia r1!, {r2, r3}	@ 000b72ba 0cc1
.org 0xb72bc
	ldr r0, [r7, #40]	@ 000b72bc b86a
.org 0xb72be
	ldr r0, [r0, #40]	@ 000b72be 806a
.org 0xb72c0
	mov ip, r0	@ 000b72c0 8446
.org 0xb72c2
	adds r1, r7, #0	@ 000b72c2 391c
.org 0xb72c4
	adds r1, #184	@ 000b72c4 b831
.org 0xb72c6
	ldr r0, [r1, #0]	@ 000b72c6 0868
.org 0xb72c8
	adds r2, r0, #1	@ 000b72c8 421c
.org 0xb72ca
	str r2, [r1, #0]	@ 000b72ca 0a60
.org 0xb72cc
	movs r0, #31	@ 000b72cc 1f20
.org 0xb72ce
	ands r0, r2	@ 000b72ce 1040
.org 0xb72d0
	cmp r0, #0	@ 000b72d0 0028
.org 0xb72d2
	beq.n 0xb733a	@ 000b72d2 32d0
.org 0xb72d4
	asrs r2, r2, #5	@ 000b72d4 5211
.org 0xb72d6
	movs r0, #3	@ 000b72d6 0320
.org 0xb72d8
	ands r2, r0	@ 000b72d8 0240
.org 0xb72da
	lsls r2, r2, #3	@ 000b72da d200
.org 0xb72dc
	mov r4, sp	@ 000b72dc 6c46
.org 0xb72de
	adds r0, r4, r2	@ 000b72de a018
.org 0xb72e0
	ldr r1, [r7, #84]	@ 000b72e0 796d
.org 0xb72e2
	ldr r0, [r0, #0]	@ 000b72e2 0068
.org 0xb72e4
	adds r1, r1, r0	@ 000b72e4 0918
.org 0xb72e6
	ldr r0, [pc, #100]	@ 000b72e6 1948
.org 0xb72e8
	mov r9, r0	@ 000b72e8 8146
.org 0xb72ea
	ldr r0, [r0, #0]	@ 000b72ea 0068
.org 0xb72ec
	ldr r6, [pc, #96]	@ 000b72ec 184e
.org 0xb72ee
	muls r0, r6	@ 000b72ee 7043
.org 0xb72f0
	ldr r4, [pc, #96]	@ 000b72f0 184c
.org 0xb72f2
	adds r0, r0, r4	@ 000b72f2 0019
.org 0xb72f4
	lsls r0, r0, #1	@ 000b72f4 4000
.org 0xb72f6
	lsrs r3, r0, #1	@ 000b72f6 4308
.org 0xb72f8
	mov r8, r3	@ 000b72f8 9846
.org 0xb72fa
	lsrs r0, r0, #17	@ 000b72fa 400c
.org 0xb72fc
	movs r5, #7	@ 000b72fc 0725
.org 0xb72fe
	ands r0, r5	@ 000b72fe 2840
