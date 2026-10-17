@ FUN_0807d68c  entry 0x0807d68c  size 122
.thumb
.org 0x7d68c
FUN_0807d68c:
	push {r4, r5, r6, r7, lr}	@ 0007d68c f0b5
.org 0x7d68e
	sub sp, #8	@ 0007d68e 82b0
.org 0x7d690
	adds r4, r0, #0	@ 0007d690 041c
.org 0x7d692
	ldr r1, [pc, #116]	@ 0007d692 1d49
.org 0x7d694
	mov r0, sp	@ 0007d694 6846
.org 0x7d696
	movs r2, #2	@ 0007d696 0222
.org 0x7d698
	bl 0x129258	@ 0007d698 abf0defd
.org 0x7d69c
	add r6, sp, #4	@ 0007d69c 01ae
.org 0x7d69e
	ldr r1, [pc, #108]	@ 0007d69e 1b49
.org 0x7d6a0
	adds r0, r6, #0	@ 0007d6a0 301c
.org 0x7d6a2
	movs r2, #2	@ 0007d6a2 0222
.org 0x7d6a4
	bl 0x129258	@ 0007d6a4 abf0d8fd
.org 0x7d6a8
	movs r3, #0	@ 0007d6a8 0023
.org 0x7d6aa
	adds r0, r4, #0	@ 0007d6aa 201c
.org 0x7d6ac
	adds r0, #180	@ 0007d6ac b430
.org 0x7d6ae
	ldr r5, [r0, #0]	@ 0007d6ae 0568
.org 0x7d6b0
	movs r0, #240	@ 0007d6b0 f020
.org 0x7d6b2
	lsls r0, r0, #7	@ 0007d6b2 c001
.org 0x7d6b4
	mov ip, r0	@ 0007d6b4 8446
.org 0x7d6b6
	adds r1, r5, r0	@ 0007d6b6 2918
.org 0x7d6b8
	ldr r0, [pc, #84]	@ 0007d6b8 1548
.org 0x7d6ba
	ldr r0, [r0, #0]	@ 0007d6ba 0068
.org 0x7d6bc
	ldr r0, [r0, #84]	@ 0007d6bc 406d
.org 0x7d6be
	cmp r1, r0	@ 0007d6be 8142
.org 0x7d6c0
	bge.n 0x7d6c4	@ 0007d6c0 00da
.org 0x7d6c2
	movs r3, #1	@ 0007d6c2 0123
.org 0x7d6c4
	adds r2, r4, #0	@ 0007d6c4 221c
.org 0x7d6c6
	adds r2, #200	@ 0007d6c6 c832
.org 0x7d6c8
	ldr r1, [pc, #72]	@ 0007d6c8 1249
.org 0x7d6ca
	mov r7, sp	@ 0007d6ca 6f46
.org 0x7d6cc
	adds r0, r7, r3	@ 0007d6cc f818
.org 0x7d6ce
	ldrb r0, [r0, #0]	@ 0007d6ce 0078
.org 0x7d6d0
	lsls r0, r0, #2	@ 0007d6d0 8000
.org 0x7d6d2
	adds r0, r0, r1	@ 0007d6d2 4018
.org 0x7d6d4
	ldr r0, [r0, #0]	@ 0007d6d4 0068
.org 0x7d6d6
	add r0, ip	@ 0007d6d6 6044
.org 0x7d6d8
	adds r0, r5, r0	@ 0007d6d8 2818
.org 0x7d6da
	str r0, [r2, #0]	@ 0007d6da 1060
.org 0x7d6dc
	adds r0, r6, r3	@ 0007d6dc f018
.org 0x7d6de
	ldrb r0, [r0, #0]	@ 0007d6de 0078
.org 0x7d6e0
	subs r2, #10	@ 0007d6e0 0a3a
.org 0x7d6e2
	movs r1, #0	@ 0007d6e2 0021
.org 0x7d6e4
	strb r0, [r2, #0]	@ 0007d6e4 1070
.org 0x7d6e6
	ldrb r0, [r4, #14]	@ 0007d6e6 a07b
.org 0x7d6e8
	adds r0, #1	@ 0007d6e8 0130
.org 0x7d6ea
	strb r0, [r4, #14]	@ 0007d6ea a073
.org 0x7d6ec
	strb r1, [r4, #15]	@ 0007d6ec e173
.org 0x7d6ee
	ldr r1, [pc, #40]	@ 0007d6ee 0a49
.org 0x7d6f0
	ldrb r0, [r4, #13]	@ 0007d6f0 607b
.org 0x7d6f2
	lsls r0, r0, #2	@ 0007d6f2 8000
.org 0x7d6f4
	adds r0, r0, r1	@ 0007d6f4 4018
.org 0x7d6f6
	ldr r1, [r0, #0]	@ 0007d6f6 0168
.org 0x7d6f8
	adds r0, r4, #0	@ 0007d6f8 201c
.org 0x7d6fa
	bl 0x128f80	@ 0007d6fa abf041fc
.org 0x7d6fe
	add sp, #8	@ 0007d6fe 02b0
.org 0x7d700
	pop {r4, r5, r6, r7}	@ 0007d700 f0bc
.org 0x7d702
	pop {r0}	@ 0007d702 01bc
.org 0x7d704
	bx r0	@ 0007d704 0047
