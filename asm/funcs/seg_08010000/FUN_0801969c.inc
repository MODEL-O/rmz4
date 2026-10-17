@ FUN_0801969c  entry 0x0801969c  size 134
.thumb
.org 0x1969c
FUN_0801969c:
	push {r4, r5, lr}	@ 0001969c 30b5
.org 0x1969e
	adds r4, r0, #0	@ 0001969e 041c
.org 0x196a0
	ldr r0, [r4, #104]	@ 000196a0 a06e
.org 0x196a2
	cmp r0, #0	@ 000196a2 0028
.org 0x196a4
	beq.n 0x196ae	@ 000196a4 03d0
.org 0x196a6
	bl 0xe954c	@ 000196a6 cff051ff
.org 0x196aa
	movs r0, #0	@ 000196aa 0020
.org 0x196ac
	str r0, [r4, #104]	@ 000196ac a066
.org 0x196ae
	ldr r0, [r4, #108]	@ 000196ae e06e
.org 0x196b0
	cmp r0, #0	@ 000196b0 0028
.org 0x196b2
	beq.n 0x196bc	@ 000196b2 03d0
.org 0x196b4
	bl 0xe954c	@ 000196b4 cff04aff
.org 0x196b8
	movs r0, #0	@ 000196b8 0020
.org 0x196ba
	str r0, [r4, #108]	@ 000196ba e066
.org 0x196bc
	ldr r0, [r4, #112]	@ 000196bc 206f
.org 0x196be
	cmp r0, #0	@ 000196be 0028
.org 0x196c0
	beq.n 0x196ca	@ 000196c0 03d0
.org 0x196c2
	bl 0xe954c	@ 000196c2 cff043ff
.org 0x196c6
	movs r0, #0	@ 000196c6 0020
.org 0x196c8
	str r0, [r4, #112]	@ 000196c8 2067
.org 0x196ca
	ldr r0, [r4, #116]	@ 000196ca 606f
.org 0x196cc
	cmp r0, #0	@ 000196cc 0028
.org 0x196ce
	beq.n 0x196d8	@ 000196ce 03d0
.org 0x196d0
	bl 0xe954c	@ 000196d0 cff03cff
.org 0x196d4
	movs r0, #0	@ 000196d4 0020
.org 0x196d6
	str r0, [r4, #116]	@ 000196d6 6067
.org 0x196d8
	ldr r0, [r4, #120]	@ 000196d8 a06f
.org 0x196da
	cmp r0, #0	@ 000196da 0028
.org 0x196dc
	beq.n 0x196e6	@ 000196dc 03d0
.org 0x196de
	bl 0xe954c	@ 000196de cff035ff
.org 0x196e2
	movs r0, #0	@ 000196e2 0020
.org 0x196e4
	str r0, [r4, #120]	@ 000196e4 a067
.org 0x196e6
	ldr r0, [r4, #124]	@ 000196e6 e06f
.org 0x196e8
	cmp r0, #0	@ 000196e8 0028
.org 0x196ea
	beq.n 0x196f4	@ 000196ea 03d0
.org 0x196ec
	bl 0xe954c	@ 000196ec cff02eff
.org 0x196f0
	movs r0, #0	@ 000196f0 0020
.org 0x196f2
	str r0, [r4, #124]	@ 000196f2 e067
.org 0x196f4
	adds r5, r4, #0	@ 000196f4 251c
.org 0x196f6
	adds r5, #128	@ 000196f6 8035
.org 0x196f8
	ldr r0, [r5, #0]	@ 000196f8 2868
.org 0x196fa
	cmp r0, #0	@ 000196fa 0028
.org 0x196fc
	beq.n 0x19706	@ 000196fc 03d0
.org 0x196fe
	bl 0xe954c	@ 000196fe cff025ff
.org 0x19702
	movs r0, #0	@ 00019702 0020
.org 0x19704
	str r0, [r5, #0]	@ 00019704 2860
.org 0x19706
	adds r4, #132	@ 00019706 8434
.org 0x19708
	ldr r0, [r4, #0]	@ 00019708 2068
.org 0x1970a
	cmp r0, #0	@ 0001970a 0028
.org 0x1970c
	beq.n 0x19716	@ 0001970c 03d0
.org 0x1970e
	bl 0xe954c	@ 0001970e cff01dff
.org 0x19712
	movs r0, #0	@ 00019712 0020
.org 0x19714
	str r0, [r4, #0]	@ 00019714 2060
.org 0x19716
	movs r0, #116	@ 00019716 7420
.org 0x19718
	bl 0x2b5c	@ 00019718 e9f720fa
.org 0x1971c
	pop {r4, r5}	@ 0001971c 30bc
.org 0x1971e
	pop {r0}	@ 0001971e 01bc
.org 0x19720
	bx r0	@ 00019720 0047
