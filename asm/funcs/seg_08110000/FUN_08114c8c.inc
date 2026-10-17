@ FUN_08114c8c  entry 0x08114c8c  size 76
.thumb
.org 0x114c8c
FUN_08114c8c:
	push {r4, r5, lr}	@ 00114c8c 30b5
.org 0x114c8e
	adds r4, r0, #0	@ 00114c8e 041c
.org 0x114c90
	movs r1, #10	@ 00114c90 0a21
.org 0x114c92
	ldrsh r0, [r4, r1]	@ 00114c92 605e
.org 0x114c94
	movs r1, #128	@ 00114c94 8021
.org 0x114c96
	lsls r1, r1, #8	@ 00114c96 0902
.org 0x114c98
	ands r0, r1	@ 00114c98 0840
.org 0x114c9a
	cmp r0, #0	@ 00114c9a 0028
.org 0x114c9c
	beq.n 0x114cd2	@ 00114c9c 19d0
.org 0x114c9e
	ldr r0, [pc, #56]	@ 00114c9e 0e48
.org 0x114ca0
	ldrh r1, [r0, #0]	@ 00114ca0 0188
.org 0x114ca2
	ldr r0, [pc, #56]	@ 00114ca2 0e48
.org 0x114ca4
	adds r5, r1, r0	@ 00114ca4 0d18
.org 0x114ca6
	movs r2, #0	@ 00114ca6 0022
.org 0x114ca8
	ldr r0, [pc, #52]	@ 00114ca8 0d48
.org 0x114caa
	ldrb r1, [r0, #6]	@ 00114caa 8179
.org 0x114cac
	adds r3, r0, #0	@ 00114cac 031c
.org 0x114cae
	cmp r1, #0	@ 00114cae 0029
.org 0x114cb0
	bne.n 0x114cb8	@ 00114cb0 02d1
.org 0x114cb2
	ldrb r0, [r3, #4]	@ 00114cb2 1879
.org 0x114cb4
	cmp r0, #1	@ 00114cb4 0128
.org 0x114cb6
	bne.n 0x114cba	@ 00114cb6 00d1
.org 0x114cb8
	movs r2, #1	@ 00114cb8 0122
.org 0x114cba
	lsls r0, r2, #3	@ 00114cba d000
.org 0x114cbc
	subs r0, r0, r2	@ 00114cbc 801a
.org 0x114cbe
	movs r1, #8	@ 00114cbe 0821
.org 0x114cc0
	subs r1, r1, r0	@ 00114cc0 091a
.org 0x114cc2
	ldrb r2, [r4, #10]	@ 00114cc2 a27a
.org 0x114cc4
	lsls r2, r2, #1	@ 00114cc4 5200
.org 0x114cc6
	adds r2, #2	@ 00114cc6 0232
.org 0x114cc8
	ldrb r3, [r3, #5]	@ 00114cc8 5b79
.org 0x114cca
	adds r2, r2, r3	@ 00114cca d218
.org 0x114ccc
	adds r0, r5, #0	@ 00114ccc 281c
.org 0x114cce
	bl 0x10d85c	@ 00114cce f8f7c5fd
.org 0x114cd2
	pop {r4, r5}	@ 00114cd2 30bc
.org 0x114cd4
	pop {r0}	@ 00114cd4 01bc
.org 0x114cd6
	bx r0	@ 00114cd6 0047
