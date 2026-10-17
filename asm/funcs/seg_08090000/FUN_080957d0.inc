@ FUN_080957d0  entry 0x080957d0  size 76
.thumb
.org 0x957d0
FUN_080957d0:
	push {r4, lr}	@ 000957d0 10b5
.org 0x957d2
	sub sp, #4	@ 000957d2 81b0
.org 0x957d4
	adds r4, r0, #0	@ 000957d4 041c
.org 0x957d6
	ldr r1, [pc, #68]	@ 000957d6 1149
.org 0x957d8
	mov r0, sp	@ 000957d8 6846
.org 0x957da
	movs r2, #4	@ 000957da 0422
.org 0x957dc
	bl 0x129258	@ 000957dc 93f03cfd
.org 0x957e0
	ldrb r0, [r4, #17]	@ 000957e0 607c
.org 0x957e2
	ldrb r1, [r4, #15]	@ 000957e2 e17b
.org 0x957e4
	cmp r1, #0	@ 000957e4 0029
.org 0x957e6
	bne.n 0x957f2	@ 000957e6 04d1
.org 0x957e8
	add r0, sp	@ 000957e8 6844
.org 0x957ea
	ldrb r0, [r0, #0]	@ 000957ea 0078
.org 0x957ec
	strb r0, [r4, #18]	@ 000957ec a074
.org 0x957ee
	adds r0, r1, #1	@ 000957ee 481c
.org 0x957f0
	strb r0, [r4, #15]	@ 000957f0 e073
.org 0x957f2
	adds r0, r4, #0	@ 000957f2 201c
.org 0x957f4
	bl 0x1cff0	@ 000957f4 87f7fcfb
.org 0x957f8
	adds r0, r4, #0	@ 000957f8 201c
.org 0x957fa
	bl 0x95cd8	@ 000957fa 00f06dfa
.org 0x957fe
	ldrb r0, [r4, #18]	@ 000957fe a07c
.org 0x95800
	subs r0, #1	@ 00095800 0138
.org 0x95802
	strb r0, [r4, #18]	@ 00095802 a074
.org 0x95804
	lsls r0, r0, #24	@ 00095804 0006
.org 0x95806
	lsrs r1, r0, #24	@ 00095806 010e
.org 0x95808
	cmp r1, #0	@ 00095808 0029
.org 0x9580a
	bne.n 0x95814	@ 0009580a 03d1
.org 0x9580c
	movs r0, #2	@ 0009580c 0220
.org 0x9580e
	strb r0, [r4, #13]	@ 0009580e 6073
.org 0x95810
	strb r1, [r4, #14]	@ 00095810 a173
.org 0x95812
	strb r1, [r4, #15]	@ 00095812 e173
.org 0x95814
	add sp, #4	@ 00095814 01b0
.org 0x95816
	pop {r4}	@ 00095816 10bc
.org 0x95818
	pop {r0}	@ 00095818 01bc
.org 0x9581a
	bx r0	@ 0009581a 0047
