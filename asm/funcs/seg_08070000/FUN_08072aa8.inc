@ FUN_08072aa8  entry 0x08072aa8  size 96
.thumb
.org 0x72aa8
FUN_08072aa8:
	push {r4, r5, lr}	@ 00072aa8 30b5
.org 0x72aaa
	adds r4, r0, #0	@ 00072aaa 041c
.org 0x72aac
	ldrb r0, [r4, #10]	@ 00072aac a07a
.org 0x72aae
	lsrs r5, r0, #4	@ 00072aae 0509
.org 0x72ab0
	movs r1, #1	@ 00072ab0 0121
.org 0x72ab2
	ands r5, r1	@ 00072ab2 0d40
.org 0x72ab4
	adds r0, r4, #0	@ 00072ab4 201c
.org 0x72ab6
	adds r0, #180	@ 00072ab6 b430
.org 0x72ab8
	ldr r0, [r0, #0]	@ 00072ab8 0068
.org 0x72aba
	adds r0, #180	@ 00072aba b430
.org 0x72abc
	strb r1, [r0, #0]	@ 00072abc 0170
.org 0x72abe
	adds r0, r4, #0	@ 00072abe 201c
.org 0x72ac0
	bl 0x73e00	@ 00072ac0 01f09ef9
.org 0x72ac4
	adds r1, r4, #0	@ 00072ac4 211c
.org 0x72ac6
	adds r1, #195	@ 00072ac6 c331
.org 0x72ac8
	strb r0, [r1, #0]	@ 00072ac8 0870
.org 0x72aca
	movs r2, #0	@ 00072aca 0022
.org 0x72acc
	adds r0, r4, #0	@ 00072acc 201c
.org 0x72ace
	adds r0, #204	@ 00072ace cc30
.org 0x72ad0
	ldr r0, [r0, #0]	@ 00072ad0 0068
.org 0x72ad2
	movs r1, #208	@ 00072ad2 d021
.org 0x72ad4
	lsls r1, r1, #7	@ 00072ad4 c901
.org 0x72ad6
	adds r0, r0, r1	@ 00072ad6 4018
.org 0x72ad8
	ldr r1, [r4, #84]	@ 00072ad8 616d
.org 0x72ada
	cmp r1, r0	@ 00072ada 8142
.org 0x72adc
	bge.n 0x72ae0	@ 00072adc 00da
.org 0x72ade
	movs r2, #1	@ 00072ade 0122
.org 0x72ae0
	cmp r2, r5	@ 00072ae0 aa42
.org 0x72ae2
	beq.n 0x72aea	@ 00072ae2 02d0
.org 0x72ae4
	ldrb r0, [r4, #14]	@ 00072ae4 a07b
.org 0x72ae6
	adds r0, #1	@ 00072ae6 0130
.org 0x72ae8
	b.n 0x72aec	@ 00072ae8 00e0
.org 0x72aea
	movs r0, #3	@ 00072aea 0320
.org 0x72aec
	strb r0, [r4, #14]	@ 00072aec a073
.org 0x72aee
	movs r0, #0	@ 00072aee 0020
.org 0x72af0
	strb r0, [r4, #15]	@ 00072af0 e073
.org 0x72af2
	ldr r1, [pc, #20]	@ 00072af2 0549
.org 0x72af4
	ldrb r0, [r4, #13]	@ 00072af4 607b
.org 0x72af6
	lsls r0, r0, #2	@ 00072af6 8000
.org 0x72af8
	adds r0, r0, r1	@ 00072af8 4018
.org 0x72afa
	ldr r1, [r0, #0]	@ 00072afa 0168
.org 0x72afc
	adds r0, r4, #0	@ 00072afc 201c
.org 0x72afe
	bl 0x128f80	@ 00072afe b6f03ffa
.org 0x72b02
	pop {r4, r5}	@ 00072b02 30bc
.org 0x72b04
	pop {r0}	@ 00072b04 01bc
.org 0x72b06
	bx r0	@ 00072b06 0047
