@ FUN_0806ae7c  entry 0x0806ae7c  size 182
.thumb
.org 0x6ae7c
FUN_0806ae7c:
	push {r4, r5, r6, lr}	@ 0006ae7c 70b5
.org 0x6ae7e
	adds r4, r0, #0	@ 0006ae7e 041c
.org 0x6ae80
	bl 0x1cc9c	@ 0006ae80 b1f70cff
.org 0x6ae84
	ldrb r1, [r4, #10]	@ 0006ae84 a17a
.org 0x6ae86
	movs r0, #1	@ 0006ae86 0120
.org 0x6ae88
	movs r6, #0	@ 0006ae88 0026
.org 0x6ae8a
	orrs r0, r1	@ 0006ae8a 0843
.org 0x6ae8c
	movs r1, #2	@ 0006ae8c 0221
.org 0x6ae8e
	orrs r0, r1	@ 0006ae8e 0843
.org 0x6ae90
	strb r0, [r4, #10]	@ 0006ae90 a072
.org 0x6ae92
	adds r0, r4, #0	@ 0006ae92 201c
.org 0x6ae94
	bl 0x1ceec	@ 0006ae94 b2f72af8
.org 0x6ae98
	ldr r1, [pc, #152]	@ 0006ae98 2649
.org 0x6ae9a
	adds r0, r4, #0	@ 0006ae9a 201c
.org 0x6ae9c
	bl 0x1cf00	@ 0006ae9c b2f730f8
.org 0x6aea0
	adds r0, r4, #0	@ 0006aea0 201c
.org 0x6aea2
	bl 0x1cff0	@ 0006aea2 b2f7a5f8
.org 0x6aea6
	adds r0, r4, #0	@ 0006aea6 201c
.org 0x6aea8
	adds r0, #76	@ 0006aea8 4c30
.org 0x6aeaa
	strb r6, [r0, #0]	@ 0006aeaa 0670
.org 0x6aeac
	adds r2, r4, #0	@ 0006aeac 221c
.org 0x6aeae
	adds r2, #74	@ 0006aeae 4a32
.org 0x6aeb0
	ldrb r1, [r2, #0]	@ 0006aeb0 1178
.org 0x6aeb2
	movs r0, #17	@ 0006aeb2 1120
.org 0x6aeb4
	negs r0, r0	@ 0006aeb4 4042
.org 0x6aeb6
	ands r0, r1	@ 0006aeb6 0840
.org 0x6aeb8
	strb r0, [r2, #0]	@ 0006aeb8 1070
.org 0x6aeba
	ldrb r1, [r4, #10]	@ 0006aeba a17a
.org 0x6aebc
	movs r0, #239	@ 0006aebc ef20
.org 0x6aebe
	ands r0, r1	@ 0006aebe 0840
.org 0x6aec0
	strb r0, [r4, #10]	@ 0006aec0 a072
.org 0x6aec2
	ldr r1, [pc, #116]	@ 0006aec2 1d49
.org 0x6aec4
	adds r0, r4, #0	@ 0006aec4 201c
.org 0x6aec6
	movs r2, #64	@ 0006aec6 4022
.org 0x6aec8
	bl 0x503cc	@ 0006aec8 e5f780fa
.org 0x6aecc
	ldr r1, [pc, #108]	@ 0006aecc 1b49
.org 0x6aece
	adds r0, r4, #0	@ 0006aece 201c
.org 0x6aed0
	adds r0, #116	@ 0006aed0 7430
.org 0x6aed2
	str r1, [r0, #36]	@ 0006aed2 4162
.org 0x6aed4
	ldr r0, [r4, #84]	@ 0006aed4 606d
.org 0x6aed6
	ldr r1, [r4, #88]	@ 0006aed6 a16d
.org 0x6aed8
	bl 0x8534	@ 0006aed8 9df72cfb
.org 0x6aedc
	str r0, [r4, #88]	@ 0006aedc a065
.org 0x6aede
	adds r5, r4, #0	@ 0006aede 251c
.org 0x6aee0
	adds r5, #180	@ 0006aee0 b435
.org 0x6aee2
	ldr r0, [r4, #84]	@ 0006aee2 606d
.org 0x6aee4
	str r0, [r5, #0]	@ 0006aee4 2860
.org 0x6aee6
	ldr r0, [r4, #88]	@ 0006aee6 a06d
.org 0x6aee8
	str r0, [r5, #4]	@ 0006aee8 6860
.org 0x6aeea
	str r6, [r5, #8]	@ 0006aeea ae60
.org 0x6aeec
	str r6, [r5, #12]	@ 0006aeec ee60
.org 0x6aeee
	ldr r0, [r4, #84]	@ 0006aeee 606d
.org 0x6aef0
	ldr r1, [r4, #88]	@ 0006aef0 a16d
.org 0x6aef2
	bl 0x8988	@ 0006aef2 9df749fd
.org 0x6aef6
	str r0, [r5, #20]	@ 0006aef6 6861
.org 0x6aef8
	ldr r0, [r4, #84]	@ 0006aef8 606d
.org 0x6aefa
	ldr r1, [r4, #88]	@ 0006aefa a16d
.org 0x6aefc
	bl 0x8868	@ 0006aefc 9df7b4fc
.org 0x6af00
	str r0, [r5, #24]	@ 0006af00 a861
.org 0x6af02
	ldr r1, [r5, #20]	@ 0006af02 6969
.org 0x6af04
	subs r0, r0, r1	@ 0006af04 401a
.org 0x6af06
	asrs r0, r0, #1	@ 0006af06 4010
.org 0x6af08
	adds r1, r1, r0	@ 0006af08 0918
.org 0x6af0a
	str r1, [r5, #16]	@ 0006af0a 2961
.org 0x6af0c
	adds r0, r4, #0	@ 0006af0c 201c
.org 0x6af0e
	adds r0, #222	@ 0006af0e de30
.org 0x6af10
	strb r6, [r0, #0]	@ 0006af10 0670
.org 0x6af12
	ldr r1, [pc, #44]	@ 0006af12 0b49
.org 0x6af14
	ldrb r0, [r4, #9]	@ 0006af14 607a
.org 0x6af16
	lsls r0, r0, #2	@ 0006af16 8000
.org 0x6af18
	adds r0, r0, r1	@ 0006af18 4018
.org 0x6af1a
	movs r1, #1	@ 0006af1a 0121
.org 0x6af1c
	str r1, [r4, #12]	@ 0006af1c e160
.org 0x6af1e
	ldr r0, [r0, #0]	@ 0006af1e 0068
.org 0x6af20
	ldr r0, [r0, #4]	@ 0006af20 4068
.org 0x6af22
	str r0, [r4, #20]	@ 0006af22 6061
.org 0x6af24
	strb r6, [r4, #13]	@ 0006af24 6673
.org 0x6af26
	adds r0, r4, #0	@ 0006af26 201c
.org 0x6af28
	bl 0x6af44	@ 0006af28 00f00cf8
.org 0x6af2c
	pop {r4, r5, r6}	@ 0006af2c 70bc
.org 0x6af2e
	pop {r0}	@ 0006af2e 01bc
.org 0x6af30
	bx r0	@ 0006af30 0047
