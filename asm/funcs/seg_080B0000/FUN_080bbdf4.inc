@ FUN_080bbdf4  entry 0x080bbdf4  size 180
.thumb
.org 0xbbdf4
FUN_080bbdf4:
	push {r4, r5, r6, r7, lr}	@ 000bbdf4 f0b5
.org 0xbbdf6
	adds r7, r0, #0	@ 000bbdf6 071c
.org 0xbbdf8
	movs r6, #0	@ 000bbdf8 0026
.org 0xbbdfa
	ldr r1, [pc, #172]	@ 000bbdfa 2b49
.org 0xbbdfc
	ldrb r0, [r7, #9]	@ 000bbdfc 787a
.org 0xbbdfe
	lsls r0, r0, #2	@ 000bbdfe 8000
.org 0xbbe00
	adds r0, r0, r1	@ 000bbe00 4018
.org 0xbbe02
	movs r5, #1	@ 000bbe02 0125
.org 0xbbe04
	str r5, [r7, #12]	@ 000bbe04 fd60
.org 0xbbe06
	ldr r0, [r0, #0]	@ 000bbe06 0068
.org 0xbbe08
	ldr r0, [r0, #4]	@ 000bbe08 4068
.org 0xbbe0a
	str r0, [r7, #20]	@ 000bbe0a 7861
.org 0xbbe0c
	strb r6, [r7, #13]	@ 000bbe0c 7e73
.org 0xbbe0e
	strb r6, [r7, #14]	@ 000bbe0e be73
.org 0xbbe10
	strb r6, [r7, #15]	@ 000bbe10 fe73
.org 0xbbe12
	ldrb r0, [r7, #10]	@ 000bbe12 b87a
.org 0xbbe14
	movs r1, #1	@ 000bbe14 0121
.org 0xbbe16
	orrs r0, r1	@ 000bbe16 0843
.org 0xbbe18
	movs r1, #2	@ 000bbe18 0221
.org 0xbbe1a
	orrs r0, r1	@ 000bbe1a 0843
.org 0xbbe1c
	strb r0, [r7, #10]	@ 000bbe1c b872
.org 0xbbe1e
	ldr r0, [pc, #140]	@ 000bbe1e 2348
.org 0xbbe20
	ldr r1, [pc, #140]	@ 000bbe20 2349
.org 0xbbe22
	movs r4, #182	@ 000bbe22 b624
.org 0xbbe24
	lsls r4, r4, #1	@ 000bbe24 6400
.org 0xbbe26
	adds r1, r1, r4	@ 000bbe26 0919
.org 0xbbe28
	ldrh r1, [r1, #0]	@ 000bbe28 0988
.org 0xbbe2a
	ldrh r2, [r0, #6]	@ 000bbe2a c288
.org 0xbbe2c
	lsrs r2, r2, #6	@ 000bbe2c 9209
.org 0xbbe2e
	subs r1, r1, r2	@ 000bbe2e 891a
.org 0xbbe30
	lsls r1, r1, #5	@ 000bbe30 4901
.org 0xbbe32
	movs r2, #128	@ 000bbe32 8022
.org 0xbbe34
	lsls r2, r2, #9	@ 000bbe34 5202
.org 0xbbe36
	adds r1, r1, r2	@ 000bbe36 8918
.org 0xbbe38
	bl 0x1d30	@ 000bbe38 45f77aff
.org 0xbbe3c
	ldr r0, [pc, #116]	@ 000bbe3c 1d48
.org 0xbbe3e
	ldr r1, [pc, #120]	@ 000bbe3e 1e49
.org 0xbbe40
	adds r1, r1, r4	@ 000bbe40 0919
.org 0xbbe42
	ldrh r1, [r1, #0]	@ 000bbe42 0988
.org 0xbbe44
	ldrb r2, [r0, #7]	@ 000bbe44 c279
.org 0xbbe46
	subs r1, r1, r2	@ 000bbe46 891a
.org 0xbbe48
	lsls r1, r1, #5	@ 000bbe48 4901
.org 0xbbe4a
	movs r2, #128	@ 000bbe4a 8022
.org 0xbbe4c
	lsls r2, r2, #2	@ 000bbe4c 9200
.org 0xbbe4e
	adds r1, r1, r2	@ 000bbe4e 8918
.org 0xbbe50
	bl 0x2208	@ 000bbe50 46f7daf9
.org 0xbbe54
	adds r0, r7, #0	@ 000bbe54 381c
.org 0xbbe56
	bl 0x1cc9c	@ 000bbe56 60f721ff
.org 0xbbe5a
	adds r0, r7, #0	@ 000bbe5a 381c
.org 0xbbe5c
	adds r0, #34	@ 000bbe5c 2230
.org 0xbbe5e
	strb r5, [r0, #0]	@ 000bbe5e 0570
.org 0xbbe60
	adds r0, #3	@ 000bbe60 0330
.org 0xbbe62
	strb r5, [r0, #0]	@ 000bbe62 0570
.org 0xbbe64
	ldrb r1, [r7, #10]	@ 000bbe64 b97a
.org 0xbbe66
	movs r0, #239	@ 000bbe66 ef20
.org 0xbbe68
	ands r0, r1	@ 000bbe68 0840
.org 0xbbe6a
	strb r0, [r7, #10]	@ 000bbe6a b872
.org 0xbbe6c
	adds r0, r7, #0	@ 000bbe6c 381c
.org 0xbbe6e
	adds r0, #76	@ 000bbe6e 4c30
.org 0xbbe70
	strb r6, [r0, #0]	@ 000bbe70 0670
.org 0xbbe72
	adds r2, r7, #0	@ 000bbe72 3a1c
.org 0xbbe74
	adds r2, #74	@ 000bbe74 4a32
.org 0xbbe76
	ldrb r1, [r2, #0]	@ 000bbe76 1178
.org 0xbbe78
	movs r0, #17	@ 000bbe78 1120
.org 0xbbe7a
	negs r0, r0	@ 000bbe7a 4042
.org 0xbbe7c
	ands r0, r1	@ 000bbe7c 0840
.org 0xbbe7e
	strb r0, [r2, #0]	@ 000bbe7e 1070
.org 0xbbe80
	ldrb r1, [r7, #10]	@ 000bbe80 b97a
.org 0xbbe82
	movs r0, #4	@ 000bbe82 0420
.org 0xbbe84
	orrs r0, r1	@ 000bbe84 0843
.org 0xbbe86
	strb r0, [r7, #10]	@ 000bbe86 b872
.org 0xbbe88
	adds r4, r7, #0	@ 000bbe88 3c1c
.org 0xbbe8a
	adds r4, #116	@ 000bbe8a 7434
.org 0xbbe8c
	ldr r1, [pc, #44]	@ 000bbe8c 0b49
.org 0xbbe8e
	adds r2, #10	@ 000bbe8e 0a32
.org 0xbbe90
	adds r0, r4, #0	@ 000bbe90 201c
.org 0xbbe92
	movs r3, #64	@ 000bbe92 4023
.org 0xbbe94
	bl 0x5760	@ 000bbe94 49f764fc
.org 0xbbe98
	str r7, [r4, #44]	@ 000bbe98 e762
.org 0xbbe9a
	str r6, [r4, #36]	@ 000bbe9a 6662
.org 0xbbe9c
	adds r0, r7, #0	@ 000bbe9c 381c
.org 0xbbe9e
	bl 0xbbec0	@ 000bbe9e 00f00ff8
.org 0xbbea2
	pop {r4, r5, r6, r7}	@ 000bbea2 f0bc
.org 0xbbea4
	pop {r0}	@ 000bbea4 01bc
.org 0xbbea6
	bx r0	@ 000bbea6 0047
