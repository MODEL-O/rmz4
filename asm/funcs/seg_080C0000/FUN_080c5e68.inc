@ FUN_080c5e68  entry 0x080c5e68  size 88
.thumb
.org 0xc5e68
FUN_080c5e68:
	push {r4, r5, r6, lr}	@ 000c5e68 70b5
.org 0xc5e6a
	adds r4, r0, #0	@ 000c5e6a 041c
.org 0xc5e6c
	ldrb r6, [r4, #15]	@ 000c5e6c e67b
.org 0xc5e6e
	cmp r6, #0	@ 000c5e6e 002e
.org 0xc5e70
	bne.n 0xc5e86	@ 000c5e70 09d1
.org 0xc5e72
	adds r5, r4, #0	@ 000c5e72 251c
.org 0xc5e74
	adds r5, #184	@ 000c5e74 b835
.org 0xc5e76
	ldrb r0, [r5, #0]	@ 000c5e76 2878
.org 0xc5e78
	cmp r0, #0	@ 000c5e78 0028
.org 0xc5e7a
	beq.n 0xc5e86	@ 000c5e7a 04d0
.org 0xc5e7c
	movs r0, #197	@ 000c5e7c c520
.org 0xc5e7e
	lsls r0, r0, #1	@ 000c5e7e 4000
.org 0xc5e80
	bl 0x2b5c	@ 000c5e80 3cf76cfe
.org 0xc5e84
	strb r6, [r5, #0]	@ 000c5e84 2e70
.org 0xc5e86
	adds r0, r4, #0	@ 000c5e86 201c
.org 0xc5e88
	adds r0, #180	@ 000c5e88 b430
.org 0xc5e8a
	ldrh r1, [r0, #0]	@ 000c5e8a 0188
.org 0xc5e8c
	cmp r1, #0	@ 000c5e8c 0029
.org 0xc5e8e
	bne.n 0xc5eba	@ 000c5e8e 14d1
.org 0xc5e90
	subs r0, #40	@ 000c5e90 2838
.org 0xc5e92
	str r1, [r0, #0]	@ 000c5e92 0160
.org 0xc5e94
	adds r0, #4	@ 000c5e94 0430
.org 0xc5e96
	str r1, [r0, #0]	@ 000c5e96 0160
.org 0xc5e98
	adds r0, #4	@ 000c5e98 0430
.org 0xc5e9a
	strb r1, [r0, #0]	@ 000c5e9a 0170
.org 0xc5e9c
	ldrb r1, [r4, #10]	@ 000c5e9c a17a
.org 0xc5e9e
	movs r0, #251	@ 000c5e9e fb20
.org 0xc5ea0
	ands r0, r1	@ 000c5ea0 0840
.org 0xc5ea2
	movs r1, #254	@ 000c5ea2 fe21
.org 0xc5ea4
	ands r0, r1	@ 000c5ea4 0840
.org 0xc5ea6
	strb r0, [r4, #10]	@ 000c5ea6 a072
.org 0xc5ea8
	ldr r1, [pc, #20]	@ 000c5ea8 0549
.org 0xc5eaa
	ldrb r0, [r4, #9]	@ 000c5eaa 607a
.org 0xc5eac
	lsls r0, r0, #2	@ 000c5eac 8000
.org 0xc5eae
	adds r0, r0, r1	@ 000c5eae 4018
.org 0xc5eb0
	movs r1, #4	@ 000c5eb0 0421
.org 0xc5eb2
	str r1, [r4, #12]	@ 000c5eb2 e160
.org 0xc5eb4
	ldr r0, [r0, #0]	@ 000c5eb4 0068
.org 0xc5eb6
	ldr r0, [r0, #16]	@ 000c5eb6 0069
.org 0xc5eb8
	str r0, [r4, #20]	@ 000c5eb8 6061
.org 0xc5eba
	pop {r4, r5, r6}	@ 000c5eba 70bc
.org 0xc5ebc
	pop {r0}	@ 000c5ebc 01bc
.org 0xc5ebe
	bx r0	@ 000c5ebe 0047
