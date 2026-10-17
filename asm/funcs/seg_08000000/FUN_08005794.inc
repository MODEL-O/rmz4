@ FUN_08005794  entry 0x08005794  size 102
.thumb
.org 0x5794
FUN_08005794:
	push {r4, r5, lr}	@ 00005794 30b5
.org 0x5796
	mov ip, r0	@ 00005796 8446
.org 0x5798
	ldr r0, [sp, #12]	@ 00005798 0398
.org 0x579a
	ldr r4, [sp, #16]	@ 0000579a 049c
.org 0x579c
	lsls r2, r2, #16	@ 0000579c 1204
.org 0x579e
	lsrs r2, r2, #16	@ 0000579e 120c
.org 0x57a0
	lsls r3, r3, #16	@ 000057a0 1b04
.org 0x57a2
	lsrs r3, r3, #16	@ 000057a2 1b0c
.org 0x57a4
	lsls r0, r0, #16	@ 000057a4 0004
.org 0x57a6
	lsrs r0, r0, #16	@ 000057a6 000c
.org 0x57a8
	adds r5, r0, #0	@ 000057a8 051c
.org 0x57aa
	lsls r4, r4, #16	@ 000057aa 2404
.org 0x57ac
	lsrs r4, r4, #16	@ 000057ac 240c
.org 0x57ae
	mov r0, ip	@ 000057ae 6046
.org 0x57b0
	str r1, [r0, #0]	@ 000057b0 0160
.org 0x57b2
	adds r0, #55	@ 000057b2 3730
.org 0x57b4
	movs r1, #0	@ 000057b4 0021
.org 0x57b6
	strb r2, [r0, #0]	@ 000057b6 0270
.org 0x57b8
	adds r0, #1	@ 000057b8 0130
.org 0x57ba
	strb r3, [r0, #0]	@ 000057ba 0370
.org 0x57bc
	adds r0, #1	@ 000057bc 0130
.org 0x57be
	strb r5, [r0, #0]	@ 000057be 0570
.org 0x57c0
	adds r0, #1	@ 000057c0 0130
.org 0x57c2
	strb r4, [r0, #0]	@ 000057c2 0470
.org 0x57c4
	adds r0, #1	@ 000057c4 0130
.org 0x57c6
	strb r1, [r0, #0]	@ 000057c6 0170
.org 0x57c8
	lsls r2, r2, #16	@ 000057c8 1204
.org 0x57ca
	asrs r2, r2, #16	@ 000057ca 1214
.org 0x57cc
	mvns r2, r2	@ 000057cc d243
.org 0x57ce
	lsrs r2, r2, #31	@ 000057ce d20f
.org 0x57d0
	lsls r3, r3, #16	@ 000057d0 1b04
.org 0x57d2
	cmp r3, #0	@ 000057d2 002b
.org 0x57d4
	blt.n 0x57da	@ 000057d4 01db
.org 0x57d6
	movs r0, #2	@ 000057d6 0220
.org 0x57d8
	orrs r2, r0	@ 000057d8 0243
.org 0x57da
	lsls r0, r5, #16	@ 000057da 2804
.org 0x57dc
	cmp r0, #0	@ 000057dc 0028
.org 0x57de
	blt.n 0x57e4	@ 000057de 01db
.org 0x57e0
	movs r0, #4	@ 000057e0 0420
.org 0x57e2
	orrs r2, r0	@ 000057e2 0243
.org 0x57e4
	lsls r0, r4, #16	@ 000057e4 2004
.org 0x57e6
	cmp r0, #0	@ 000057e6 0028
.org 0x57e8
	blt.n 0x57ee	@ 000057e8 01db
.org 0x57ea
	movs r0, #8	@ 000057ea 0820
.org 0x57ec
	orrs r2, r0	@ 000057ec 0243
.org 0x57ee
	mov r0, ip	@ 000057ee 6046
.org 0x57f0
	adds r0, #54	@ 000057f0 3630
.org 0x57f2
	strb r2, [r0, #0]	@ 000057f2 0270
.org 0x57f4
	pop {r4, r5}	@ 000057f4 30bc
.org 0x57f6
	pop {r0}	@ 000057f6 01bc
.org 0x57f8
	bx r0	@ 000057f8 0047
