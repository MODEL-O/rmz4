@ __divsi3  entry 0x08128fb8  size 146
.thumb
.org 0x128fb8
__divsi3:
	cmp r1, #0	@ 00128fb8 0029
.org 0x128fba
	beq.n 0x129040	@ 00128fba 41d0
.org 0x128fbc
	push {r4}	@ 00128fbc 10b4
.org 0x128fbe
	adds r4, r0, #0	@ 00128fbe 041c
.org 0x128fc0
	eors r4, r1	@ 00128fc0 4c40
.org 0x128fc2
	mov ip, r4	@ 00128fc2 a446
.org 0x128fc4
	movs r3, #1	@ 00128fc4 0123
.org 0x128fc6
	movs r2, #0	@ 00128fc6 0022
.org 0x128fc8
	cmp r1, #0	@ 00128fc8 0029
.org 0x128fca
	bpl.n 0x128fce	@ 00128fca 00d5
.org 0x128fcc
	negs r1, r1	@ 00128fcc 4942
.org 0x128fce
	cmp r0, #0	@ 00128fce 0028
.org 0x128fd0
	bpl.n 0x128fd4	@ 00128fd0 00d5
.org 0x128fd2
	negs r0, r0	@ 00128fd2 4042
.org 0x128fd4
	cmp r0, r1	@ 00128fd4 8842
.org 0x128fd6
	bcc.n 0x129032	@ 00128fd6 2cd3
.org 0x128fd8
	movs r4, #1	@ 00128fd8 0124
.org 0x128fda
	lsls r4, r4, #28	@ 00128fda 2407
.org 0x128fdc
	cmp r1, r4	@ 00128fdc a142
.org 0x128fde
	bcs.n 0x128fea	@ 00128fde 04d2
.org 0x128fe0
	cmp r1, r0	@ 00128fe0 8142
.org 0x128fe2
	bcs.n 0x128fea	@ 00128fe2 02d2
.org 0x128fe4
	lsls r1, r1, #4	@ 00128fe4 0901
.org 0x128fe6
	lsls r3, r3, #4	@ 00128fe6 1b01
.org 0x128fe8
	b.n 0x128fdc	@ 00128fe8 f8e7
.org 0x128fea
	lsls r4, r4, #3	@ 00128fea e400
.org 0x128fec
	cmp r1, r4	@ 00128fec a142
.org 0x128fee
	bcs.n 0x128ffa	@ 00128fee 04d2
.org 0x128ff0
	cmp r1, r0	@ 00128ff0 8142
.org 0x128ff2
	bcs.n 0x128ffa	@ 00128ff2 02d2
.org 0x128ff4
	lsls r1, r1, #1	@ 00128ff4 4900
.org 0x128ff6
	lsls r3, r3, #1	@ 00128ff6 5b00
.org 0x128ff8
	b.n 0x128fec	@ 00128ff8 f8e7
.org 0x128ffa
	cmp r0, r1	@ 00128ffa 8842
.org 0x128ffc
	bcc.n 0x129002	@ 00128ffc 01d3
.org 0x128ffe
	subs r0, r0, r1	@ 00128ffe 401a
.org 0x129000
	orrs r2, r3	@ 00129000 1a43
.org 0x129002
	lsrs r4, r1, #1	@ 00129002 4c08
.org 0x129004
	cmp r0, r4	@ 00129004 a042
.org 0x129006
	bcc.n 0x12900e	@ 00129006 02d3
.org 0x129008
	subs r0, r0, r4	@ 00129008 001b
.org 0x12900a
	lsrs r4, r3, #1	@ 0012900a 5c08
.org 0x12900c
	orrs r2, r4	@ 0012900c 2243
.org 0x12900e
	lsrs r4, r1, #2	@ 0012900e 8c08
.org 0x129010
	cmp r0, r4	@ 00129010 a042
.org 0x129012
	bcc.n 0x12901a	@ 00129012 02d3
.org 0x129014
	subs r0, r0, r4	@ 00129014 001b
.org 0x129016
	lsrs r4, r3, #2	@ 00129016 9c08
.org 0x129018
	orrs r2, r4	@ 00129018 2243
.org 0x12901a
	lsrs r4, r1, #3	@ 0012901a cc08
.org 0x12901c
	cmp r0, r4	@ 0012901c a042
.org 0x12901e
	bcc.n 0x129026	@ 0012901e 02d3
.org 0x129020
	subs r0, r0, r4	@ 00129020 001b
.org 0x129022
	lsrs r4, r3, #3	@ 00129022 dc08
.org 0x129024
	orrs r2, r4	@ 00129024 2243
.org 0x129026
	cmp r0, #0	@ 00129026 0028
.org 0x129028
	beq.n 0x129032	@ 00129028 03d0
.org 0x12902a
	lsrs r3, r3, #4	@ 0012902a 1b09
.org 0x12902c
	beq.n 0x129032	@ 0012902c 01d0
.org 0x12902e
	lsrs r1, r1, #4	@ 0012902e 0909
.org 0x129030
	b.n 0x128ffa	@ 00129030 e3e7
.org 0x129032
	adds r0, r2, #0	@ 00129032 101c
.org 0x129034
	mov r4, ip	@ 00129034 6446
.org 0x129036
	cmp r4, #0	@ 00129036 002c
.org 0x129038
	bpl.n 0x12903c	@ 00129038 00d5
.org 0x12903a
	negs r0, r0	@ 0012903a 4042
.org 0x12903c
	pop {r4}	@ 0012903c 10bc
.org 0x12903e
	mov pc, lr	@ 0012903e f746
.org 0x129040
	push {lr}	@ 00129040 00b5
.org 0x129042
	bl 0x12904c	@ 00129042 00f003f8
.org 0x129046
	movs r0, #0	@ 00129046 0020
.org 0x129048
	pop {pc}	@ 00129048 00bd
