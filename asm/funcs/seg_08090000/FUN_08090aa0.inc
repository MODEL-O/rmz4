@ FUN_08090aa0  entry 0x08090aa0  size 74
.thumb
.org 0x90aa0
FUN_08090aa0:
	push {r4, r5, lr}	@ 00090aa0 30b5
.org 0x90aa2
	adds r5, r0, #0	@ 00090aa2 051c
.org 0x90aa4
	ldr r0, [pc, #68]	@ 00090aa4 1148
.org 0x90aa6
	ldr r0, [r0, #0]	@ 00090aa6 0068
.org 0x90aa8
	bl 0x5500	@ 00090aa8 74f72afd
.org 0x90aac
	adds r4, r0, #0	@ 00090aac 041c
.org 0x90aae
	cmp r4, #0	@ 00090aae 002c
.org 0x90ab0
	beq.n 0x90ae2	@ 00090ab0 17d0
.org 0x90ab2
	adds r1, r4, #0	@ 00090ab2 211c
.org 0x90ab4
	adds r1, #37	@ 00090ab4 2531
.org 0x90ab6
	movs r3, #0	@ 00090ab6 0023
.org 0x90ab8
	movs r0, #24	@ 00090ab8 1820
.org 0x90aba
	strb r0, [r1, #0]	@ 00090aba 0870
.org 0x90abc
	ldr r1, [pc, #48]	@ 00090abc 0c49
.org 0x90abe
	movs r0, #21	@ 00090abe 1520
.org 0x90ac0
	strb r0, [r4, #9]	@ 00090ac0 6072
.org 0x90ac2
	ldr r0, [r1, #84]	@ 00090ac2 486d
.org 0x90ac4
	ldr r0, [r0, #0]	@ 00090ac4 0068
.org 0x90ac6
	str r0, [r4, #20]	@ 00090ac6 6061
.org 0x90ac8
	movs r2, #0	@ 00090ac8 0022
.org 0x90aca
	strh r3, [r4, #32]	@ 00090aca 2384
.org 0x90acc
	adds r0, r4, #0	@ 00090acc 201c
.org 0x90ace
	adds r0, #34	@ 00090ace 2230
.org 0x90ad0
	strb r2, [r0, #0]	@ 00090ad0 0270
.org 0x90ad2
	ldrb r1, [r4, #11]	@ 00090ad2 e17a
.org 0x90ad4
	movs r0, #16	@ 00090ad4 1020
.org 0x90ad6
	orrs r0, r1	@ 00090ad6 0843
.org 0x90ad8
	strb r0, [r4, #11]	@ 00090ad8 e072
.org 0x90ada
	ldrb r0, [r4, #28]	@ 00090ada 207f
.org 0x90adc
	strb r0, [r4, #29]	@ 00090adc 6077
.org 0x90ade
	str r5, [r4, #40]	@ 00090ade a562
.org 0x90ae0
	strb r2, [r4, #16]	@ 00090ae0 2274
.org 0x90ae2
	adds r0, r4, #0	@ 00090ae2 201c
.org 0x90ae4
	pop {r4, r5}	@ 00090ae4 30bc
.org 0x90ae6
	pop {r1}	@ 00090ae6 02bc
.org 0x90ae8
	bx r1	@ 00090ae8 0847
