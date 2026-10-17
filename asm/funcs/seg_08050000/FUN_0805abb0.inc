@ FUN_0805abb0  entry 0x0805abb0  size 96
.thumb
.org 0x5abb0
FUN_0805abb0:
	push {r4, lr}	@ 0005abb0 10b5
.org 0x5abb2
	adds r4, r0, #0	@ 0005abb2 041c
.org 0x5abb4
	ldrb r0, [r4, #15]	@ 0005abb4 e07b
.org 0x5abb6
	cmp r0, #0	@ 0005abb6 0028
.org 0x5abb8
	bne.n 0x5abf2	@ 0005abb8 1bd1
.org 0x5abba
	adds r0, r4, #0	@ 0005abba 201c
.org 0x5abbc
	adds r0, #200	@ 0005abbc c830
.org 0x5abbe
	ldr r1, [r0, #0]	@ 0005abbe 0168
.org 0x5abc0
	cmp r1, #0	@ 0005abc0 0029
.org 0x5abc2
	beq.n 0x5abd2	@ 0005abc2 06d0
.org 0x5abc4
	subs r0, #9	@ 0005abc4 0938
.org 0x5abc6
	ldrb r0, [r0, #0]	@ 0005abc6 0078
.org 0x5abc8
	cmp r0, #2	@ 0005abc8 0228
.org 0x5abca
	bne.n 0x5abd2	@ 0005abca 02d1
.org 0x5abcc
	adds r1, #180	@ 0005abcc b431
.org 0x5abce
	movs r0, #1	@ 0005abce 0120
.org 0x5abd0
	strb r0, [r1, #0]	@ 0005abd0 0870
.org 0x5abd2
	adds r0, r4, #0	@ 0005abd2 201c
.org 0x5abd4
	adds r0, #116	@ 0005abd4 7430
.org 0x5abd6
	ldr r1, [pc, #56]	@ 0005abd6 0e49
.org 0x5abd8
	bl 0x5784	@ 0005abd8 aaf7d4fd
.org 0x5abdc
	ldr r1, [pc, #52]	@ 0005abdc 0d49
.org 0x5abde
	adds r0, r4, #0	@ 0005abde 201c
.org 0x5abe0
	bl 0x1cf00	@ 0005abe0 c2f78ef9
.org 0x5abe4
	adds r1, r4, #0	@ 0005abe4 211c
.org 0x5abe6
	adds r1, #189	@ 0005abe6 bd31
.org 0x5abe8
	movs r0, #1	@ 0005abe8 0120
.org 0x5abea
	strb r0, [r1, #0]	@ 0005abea 0870
.org 0x5abec
	ldrb r0, [r4, #15]	@ 0005abec e07b
.org 0x5abee
	adds r0, #1	@ 0005abee 0130
.org 0x5abf0
	strb r0, [r4, #15]	@ 0005abf0 e073
.org 0x5abf2
	adds r0, r4, #0	@ 0005abf2 201c
.org 0x5abf4
	bl 0x1cff0	@ 0005abf4 c2f7fcf9
.org 0x5abf8
	adds r0, r4, #0	@ 0005abf8 201c
.org 0x5abfa
	adds r0, #115	@ 0005abfa 7330
.org 0x5abfc
	ldrb r0, [r0, #0]	@ 0005abfc 0078
.org 0x5abfe
	cmp r0, #3	@ 0005abfe 0328
.org 0x5ac00
	bne.n 0x5ac0a	@ 0005ac00 03d1
.org 0x5ac02
	movs r1, #0	@ 0005ac02 0021
.org 0x5ac04
	movs r0, #2	@ 0005ac04 0220
.org 0x5ac06
	strb r0, [r4, #14]	@ 0005ac06 a073
.org 0x5ac08
	strb r1, [r4, #15]	@ 0005ac08 e173
.org 0x5ac0a
	pop {r4}	@ 0005ac0a 10bc
.org 0x5ac0c
	pop {r0}	@ 0005ac0c 01bc
.org 0x5ac0e
	bx r0	@ 0005ac0e 0047
