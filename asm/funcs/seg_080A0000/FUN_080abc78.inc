@ FUN_080abc78  entry 0x080abc78  size 86
.thumb
.org 0xabc78
FUN_080abc78:
	push {r4, lr}	@ 000abc78 10b5
.org 0xabc7a
	adds r3, r0, #0	@ 000abc7a 031c
.org 0xabc7c
	ldrb r0, [r3, #15]	@ 000abc7c d87b
.org 0xabc7e
	ldr r4, [pc, #80]	@ 000abc7e 144c
.org 0xabc80
	cmp r0, #0	@ 000abc80 0028
.org 0xabc82
	bne.n 0xabc9c	@ 000abc82 0bd1
.org 0xabc84
	ldr r0, [pc, #76]	@ 000abc84 1348
.org 0xabc86
	strh r0, [r4, #0]	@ 000abc86 2080
.org 0xabc88
	adds r1, r3, #0	@ 000abc88 191c
.org 0xabc8a
	adds r1, #188	@ 000abc8a bc31
.org 0xabc8c
	ldrb r0, [r1, #0]	@ 000abc8c 0878
.org 0xabc8e
	adds r0, #1	@ 000abc8e 0130
.org 0xabc90
	strb r0, [r1, #0]	@ 000abc90 0870
.org 0xabc92
	movs r0, #16	@ 000abc92 1020
.org 0xabc94
	strb r0, [r3, #18]	@ 000abc94 9874
.org 0xabc96
	ldrb r0, [r3, #15]	@ 000abc96 d87b
.org 0xabc98
	adds r0, #1	@ 000abc98 0130
.org 0xabc9a
	strb r0, [r3, #15]	@ 000abc9a d873
.org 0xabc9c
	ldrb r1, [r3, #18]	@ 000abc9c 997c
.org 0xabc9e
	subs r1, #1	@ 000abc9e 0139
.org 0xabca0
	strb r1, [r3, #18]	@ 000abca0 9974
.org 0xabca2
	movs r0, #16	@ 000abca2 1020
.org 0xabca4
	subs r0, r0, r1	@ 000abca4 401a
.org 0xabca6
	ldr r2, [pc, #48]	@ 000abca6 0c4a
.org 0xabca8
	lsls r0, r0, #26	@ 000abca8 8006
.org 0xabcaa
	lsrs r0, r0, #23	@ 000abcaa c00d
.org 0xabcac
	adds r0, r0, r2	@ 000abcac 8018
.org 0xabcae
	movs r2, #0	@ 000abcae 0022
.org 0xabcb0
	ldrsh r0, [r0, r2]	@ 000abcb0 805e
.org 0xabcb2
	asrs r0, r0, #4	@ 000abcb2 0011
.org 0xabcb4
	movs r2, #0	@ 000abcb4 0022
.org 0xabcb6
	strh r0, [r4, #4]	@ 000abcb6 a080
.org 0xabcb8
	lsls r1, r1, #24	@ 000abcb8 0906
.org 0xabcba
	cmp r1, #0	@ 000abcba 0029
.org 0xabcbc
	bne.n 0xabcc8	@ 000abcbc 04d1
.org 0xabcbe
	ldrb r0, [r3, #13]	@ 000abcbe 587b
.org 0xabcc0
	adds r0, #1	@ 000abcc0 0130
.org 0xabcc2
	strb r0, [r3, #13]	@ 000abcc2 5873
.org 0xabcc4
	strb r2, [r3, #14]	@ 000abcc4 9a73
.org 0xabcc6
	strb r2, [r3, #15]	@ 000abcc6 da73
.org 0xabcc8
	pop {r4}	@ 000abcc8 10bc
.org 0xabcca
	pop {r0}	@ 000abcca 01bc
.org 0xabccc
	bx r0	@ 000abccc 0047
