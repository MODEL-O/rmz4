@ FUN_080a5784  entry 0x080a5784  size 140
.thumb
.org 0xa5784
FUN_080a5784:
	push {r4, lr}	@ 000a5784 10b5
.org 0xa5786
	adds r4, r0, #0	@ 000a5786 041c
.org 0xa5788
	ldrb r0, [r4, #15]	@ 000a5788 e07b
.org 0xa578a
	cmp r0, #0	@ 000a578a 0028
.org 0xa578c
	bne.n 0xa57b2	@ 000a578c 11d1
.org 0xa578e
	adds r0, r4, #0	@ 000a578e 201c
.org 0xa5790
	adds r0, #116	@ 000a5790 7430
.org 0xa5792
	ldr r1, [pc, #124]	@ 000a5792 1f49
.org 0xa5794
	bl 0x5784	@ 000a5794 5ff7f6ff
.org 0xa5798
	adds r0, r4, #0	@ 000a5798 201c
.org 0xa579a
	movs r1, #14	@ 000a579a 0e21
.org 0xa579c
	bl 0x1d3d0	@ 000a579c 77f718fe
.org 0xa57a0
	ldr r1, [pc, #112]	@ 000a57a0 1c49
.org 0xa57a2
	adds r0, r4, #0	@ 000a57a2 201c
.org 0xa57a4
	bl 0x1cf00	@ 000a57a4 77f7acfb
.org 0xa57a8
	movs r0, #64	@ 000a57a8 4020
.org 0xa57aa
	strb r0, [r4, #18]	@ 000a57aa a074
.org 0xa57ac
	ldrb r0, [r4, #15]	@ 000a57ac e07b
.org 0xa57ae
	adds r0, #1	@ 000a57ae 0130
.org 0xa57b0
	strb r0, [r4, #15]	@ 000a57b0 e073
.org 0xa57b2
	adds r0, r4, #0	@ 000a57b2 201c
.org 0xa57b4
	bl 0x1cff0	@ 000a57b4 77f71cfc
.org 0xa57b8
	adds r0, r4, #0	@ 000a57b8 201c
.org 0xa57ba
	adds r0, #140	@ 000a57ba 8c30
.org 0xa57bc
	ldr r0, [r0, #0]	@ 000a57bc 0068
.org 0xa57be
	movs r1, #128	@ 000a57be 8021
.org 0xa57c0
	lsls r1, r1, #2	@ 000a57c0 8900
.org 0xa57c2
	ands r0, r1	@ 000a57c2 0840
.org 0xa57c4
	cmp r0, #0	@ 000a57c4 0028
.org 0xa57c6
	bne.n 0xa57f2	@ 000a57c6 14d1
.org 0xa57c8
	ldr r0, [r4, #84]	@ 000a57c8 606d
.org 0xa57ca
	ldr r1, [r4, #88]	@ 000a57ca a16d
.org 0xa57cc
	bl 0x7c7c	@ 000a57cc 62f756fa
.org 0xa57d0
	lsls r0, r0, #16	@ 000a57d0 0004
.org 0xa57d2
	cmp r0, #0	@ 000a57d2 0028
.org 0xa57d4
	beq.n 0xa57f2	@ 000a57d4 0dd0
.org 0xa57d6
	ldr r0, [r4, #84]	@ 000a57d6 606d
.org 0xa57d8
	ldr r1, [r4, #88]	@ 000a57d8 a16d
.org 0xa57da
	bl 0x7c7c	@ 000a57da 62f74ffa
.org 0xa57de
	movs r1, #15	@ 000a57de 0f21
.org 0xa57e0
	ands r1, r0	@ 000a57e0 0140
.org 0xa57e2
	cmp r1, #15	@ 000a57e2 0f29
.org 0xa57e4
	beq.n 0xa57f2	@ 000a57e4 05d0
.org 0xa57e6
	ldrb r0, [r4, #18]	@ 000a57e6 a07c
.org 0xa57e8
	subs r0, #1	@ 000a57e8 0138
.org 0xa57ea
	strb r0, [r4, #18]	@ 000a57ea a074
.org 0xa57ec
	lsls r0, r0, #24	@ 000a57ec 0006
.org 0xa57ee
	cmp r0, #0	@ 000a57ee 0028
.org 0xa57f0
	bne.n 0xa580a	@ 000a57f0 0bd1
.org 0xa57f2
	ldr r1, [pc, #36]	@ 000a57f2 0949
.org 0xa57f4
	ldrb r0, [r4, #9]	@ 000a57f4 607a
.org 0xa57f6
	lsls r0, r0, #2	@ 000a57f6 8000
.org 0xa57f8
	adds r0, r0, r1	@ 000a57f8 4018
.org 0xa57fa
	movs r1, #2	@ 000a57fa 0221
.org 0xa57fc
	str r1, [r4, #12]	@ 000a57fc e160
.org 0xa57fe
	ldr r0, [r0, #0]	@ 000a57fe 0068
.org 0xa5800
	ldr r0, [r0, #8]	@ 000a5800 8068
.org 0xa5802
	str r0, [r4, #20]	@ 000a5802 6061
.org 0xa5804
	adds r0, r4, #0	@ 000a5804 201c
.org 0xa5806
	bl 0xa581c	@ 000a5806 00f009f8
.org 0xa580a
	pop {r4}	@ 000a580a 10bc
.org 0xa580c
	pop {r0}	@ 000a580c 01bc
.org 0xa580e
	bx r0	@ 000a580e 0047
