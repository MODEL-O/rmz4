@ FUN_0805468c  entry 0x0805468c  size 92
.thumb
.org 0x5468c
FUN_0805468c:
	push {r4, lr}	@ 0005468c 10b5
.org 0x5468e
	adds r4, r0, #0	@ 0005468e 041c
.org 0x54690
	ldrb r0, [r4, #15]	@ 00054690 e07b
.org 0x54692
	cmp r0, #0	@ 00054692 0028
.org 0x54694
	bne.n 0x546c4	@ 00054694 16d1
.org 0x54696
	movs r0, #87	@ 00054696 5720
.org 0x54698
	bl 0x2b10	@ 00054698 aef73afa
.org 0x5469c
	movs r2, #0	@ 0005469c 0022
.org 0x5469e
	adds r0, r4, #0	@ 0005469e 201c
.org 0x546a0
	adds r0, #192	@ 000546a0 c030
.org 0x546a2
	ldr r1, [r4, #84]	@ 000546a2 616d
.org 0x546a4
	ldr r0, [r0, #0]	@ 000546a4 0068
.org 0x546a6
	cmp r1, r0	@ 000546a6 8142
.org 0x546a8
	bge.n 0x546ac	@ 000546a8 00da
.org 0x546aa
	movs r2, #1	@ 000546aa 0122
.org 0x546ac
	adds r0, r4, #0	@ 000546ac 201c
.org 0x546ae
	movs r1, #4	@ 000546ae 0421
.org 0x546b0
	bl 0x5504c	@ 000546b0 00f0ccfc
.org 0x546b4
	movs r1, #176	@ 000546b4 b021
.org 0x546b6
	lsls r1, r1, #6	@ 000546b6 8901
.org 0x546b8
	adds r0, r4, #0	@ 000546b8 201c
.org 0x546ba
	bl 0x1cf00	@ 000546ba c8f721fc
.org 0x546be
	ldrb r0, [r4, #15]	@ 000546be e07b
.org 0x546c0
	adds r0, #1	@ 000546c0 0130
.org 0x546c2
	strb r0, [r4, #15]	@ 000546c2 e073
.org 0x546c4
	adds r0, r4, #0	@ 000546c4 201c
.org 0x546c6
	bl 0x1cff0	@ 000546c6 c8f793fc
.org 0x546ca
	adds r0, r4, #0	@ 000546ca 201c
.org 0x546cc
	adds r0, #192	@ 000546cc c030
.org 0x546ce
	ldr r1, [r0, #0]	@ 000546ce 0168
.org 0x546d0
	adds r0, r4, #0	@ 000546d0 201c
.org 0x546d2
	bl 0x55068	@ 000546d2 00f0c9fc
.org 0x546d6
	adds r1, r0, #0	@ 000546d6 011c
.org 0x546d8
	cmp r1, #0	@ 000546d8 0029
.org 0x546da
	bne.n 0x546e2	@ 000546da 02d1
.org 0x546dc
	movs r0, #3	@ 000546dc 0320
.org 0x546de
	strb r0, [r4, #14]	@ 000546de a073
.org 0x546e0
	strb r1, [r4, #15]	@ 000546e0 e173
.org 0x546e2
	pop {r4}	@ 000546e2 10bc
.org 0x546e4
	pop {r0}	@ 000546e4 01bc
.org 0x546e6
	bx r0	@ 000546e6 0047
