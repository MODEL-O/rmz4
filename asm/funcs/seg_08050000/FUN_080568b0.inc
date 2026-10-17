@ FUN_080568b0  entry 0x080568b0  size 120
.thumb
.org 0x568b0
FUN_080568b0:
	push {r4, lr}	@ 000568b0 10b5
.org 0x568b2
	adds r4, r0, #0	@ 000568b2 041c
.org 0x568b4
	ldrb r0, [r4, #15]	@ 000568b4 e07b
.org 0x568b6
	cmp r0, #0	@ 000568b6 0028
.org 0x568b8
	bne.n 0x568cc	@ 000568b8 08d1
.org 0x568ba
	ldr r1, [pc, #108]	@ 000568ba 1b49
.org 0x568bc
	adds r0, r4, #0	@ 000568bc 201c
.org 0x568be
	bl 0x1cf00	@ 000568be c6f71ffb
.org 0x568c2
	movs r0, #16	@ 000568c2 1020
.org 0x568c4
	strb r0, [r4, #18]	@ 000568c4 a074
.org 0x568c6
	ldrb r0, [r4, #15]	@ 000568c6 e07b
.org 0x568c8
	adds r0, #1	@ 000568c8 0130
.org 0x568ca
	strb r0, [r4, #15]	@ 000568ca e073
.org 0x568cc
	adds r0, r4, #0	@ 000568cc 201c
.org 0x568ce
	bl 0x1cff0	@ 000568ce c6f78ffb
.org 0x568d2
	adds r0, r4, #0	@ 000568d2 201c
.org 0x568d4
	adds r0, #116	@ 000568d4 7430
.org 0x568d6
	ldr r3, [pc, #84]	@ 000568d6 154b
.org 0x568d8
	ldrb r1, [r4, #30]	@ 000568d8 a17f
.org 0x568da
	lsls r1, r1, #8	@ 000568da 0902
.org 0x568dc
	adds r2, r4, #0	@ 000568dc 221c
.org 0x568de
	adds r2, #112	@ 000568de 7032
.org 0x568e0
	ldrb r2, [r2, #0]	@ 000568e0 1278
.org 0x568e2
	orrs r1, r2	@ 000568e2 1143
.org 0x568e4
	ldr r2, [pc, #72]	@ 000568e4 124a
.org 0x568e6
	adds r1, r1, r2	@ 000568e6 8918
.org 0x568e8
	lsls r1, r1, #2	@ 000568e8 8900
.org 0x568ea
	adds r1, r1, r3	@ 000568ea c918
.org 0x568ec
	adds r2, r4, #0	@ 000568ec 221c
.org 0x568ee
	adds r2, #113	@ 000568ee 7132
.org 0x568f0
	ldrb r2, [r2, #0]	@ 000568f0 1278
.org 0x568f2
	lsls r2, r2, #24	@ 000568f2 1206
.org 0x568f4
	asrs r2, r2, #24	@ 000568f4 1216
.org 0x568f6
	ldr r1, [r1, #0]	@ 000568f6 0968
.org 0x568f8
	lsls r2, r2, #2	@ 000568f8 9200
.org 0x568fa
	adds r2, r2, r1	@ 000568fa 5218
.org 0x568fc
	ldr r1, [r2, #0]	@ 000568fc 1168
.org 0x568fe
	ldrb r2, [r1, #0]	@ 000568fe 0a78
.org 0x56900
	lsls r1, r2, #1	@ 00056900 5100
.org 0x56902
	adds r1, r1, r2	@ 00056902 8918
.org 0x56904
	lsls r1, r1, #3	@ 00056904 c900
.org 0x56906
	ldr r2, [pc, #44]	@ 00056906 0b4a
.org 0x56908
	adds r1, r1, r2	@ 00056908 8918
.org 0x5690a
	bl 0x5784	@ 0005690a aef73bff
.org 0x5690e
	ldrb r0, [r4, #18]	@ 0005690e a07c
.org 0x56910
	subs r0, #1	@ 00056910 0138
.org 0x56912
	strb r0, [r4, #18]	@ 00056912 a074
.org 0x56914
	lsls r0, r0, #24	@ 00056914 0006
.org 0x56916
	lsrs r1, r0, #24	@ 00056916 010e
.org 0x56918
	cmp r1, #0	@ 00056918 0029
.org 0x5691a
	bne.n 0x56922	@ 0005691a 02d1
.org 0x5691c
	movs r0, #2	@ 0005691c 0220
.org 0x5691e
	strb r0, [r4, #14]	@ 0005691e a073
.org 0x56920
	strb r1, [r4, #15]	@ 00056920 e173
.org 0x56922
	pop {r4}	@ 00056922 10bc
.org 0x56924
	pop {r0}	@ 00056924 01bc
.org 0x56926
	bx r0	@ 00056926 0047
