@ FUN_080a5a88  entry 0x080a5a88  size 72
.thumb
.org 0xa5a88
FUN_080a5a88:
	push {lr}	@ 000a5a88 00b5
.org 0xa5a8a
	adds r2, r0, #0	@ 000a5a8a 021c
.org 0xa5a8c
	adds r0, #140	@ 000a5a8c 8c30
.org 0xa5a8e
	ldr r0, [r0, #0]	@ 000a5a8e 0068
.org 0xa5a90
	movs r1, #128	@ 000a5a90 8021
.org 0xa5a92
	lsls r1, r1, #2	@ 000a5a92 8900
.org 0xa5a94
	ands r0, r1	@ 000a5a94 0840
.org 0xa5a96
	cmp r0, #0	@ 000a5a96 0028
.org 0xa5a98
	beq.n 0xa5ac0	@ 000a5a98 12d0
.org 0xa5a9a
	ldr r1, [pc, #32]	@ 000a5a9a 0849
.org 0xa5a9c
	ldrb r0, [r2, #9]	@ 000a5a9c 507a
.org 0xa5a9e
	lsls r0, r0, #2	@ 000a5a9e 8000
.org 0xa5aa0
	adds r0, r0, r1	@ 000a5aa0 4018
.org 0xa5aa2
	movs r1, #2	@ 000a5aa2 0221
.org 0xa5aa4
	str r1, [r2, #12]	@ 000a5aa4 d160
.org 0xa5aa6
	ldr r0, [r0, #0]	@ 000a5aa6 0068
.org 0xa5aa8
	ldr r0, [r0, #8]	@ 000a5aa8 8068
.org 0xa5aaa
	str r0, [r2, #20]	@ 000a5aaa 5061
.org 0xa5aac
	movs r0, #0	@ 000a5aac 0020
.org 0xa5aae
	strb r0, [r2, #13]	@ 000a5aae 5073
.org 0xa5ab0
	strb r0, [r2, #14]	@ 000a5ab0 9073
.org 0xa5ab2
	strb r0, [r2, #15]	@ 000a5ab2 d073
.org 0xa5ab4
	adds r0, r2, #0	@ 000a5ab4 101c
.org 0xa5ab6
	bl 0xa5f30	@ 000a5ab6 00f03bfa
.org 0xa5aba
	b.n 0xa5ad0	@ 000a5aba 09e0
.org 0xa5abc
	.byte 0x40,0xdb,0x85,0x08	@ 000a5abc data
.org 0xa5ac0
	ldr r0, [pc, #16]	@ 000a5ac0 0448
.org 0xa5ac2
	ldrb r1, [r2, #13]	@ 000a5ac2 517b
.org 0xa5ac4
	lsls r1, r1, #2	@ 000a5ac4 8900
.org 0xa5ac6
	adds r1, r1, r0	@ 000a5ac6 0918
.org 0xa5ac8
	ldr r1, [r1, #0]	@ 000a5ac8 0968
.org 0xa5aca
	adds r0, r2, #0	@ 000a5aca 101c
.org 0xa5acc
	bl 0x128f80	@ 000a5acc 83f058fa
