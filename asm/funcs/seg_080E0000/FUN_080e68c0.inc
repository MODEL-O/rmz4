@ FUN_080e68c0  entry 0x080e68c0  size 116
.thumb
.org 0xe68c0
FUN_080e68c0:
	push {r4, r5, lr}	@ 000e68c0 30b5
.org 0xe68c2
	adds r4, r0, #0	@ 000e68c2 041c
.org 0xe68c4
	ldr r1, [pc, #20]	@ 000e68c4 0549
.org 0xe68c6
	bl 0x1cf00	@ 000e68c6 36f71bfb
.org 0xe68ca
	movs r0, #80	@ 000e68ca 5020
.org 0xe68cc
	strb r0, [r4, #18]	@ 000e68cc a074
.org 0xe68ce
	ldrb r0, [r4, #17]	@ 000e68ce 607c
.org 0xe68d0
	cmp r0, #0	@ 000e68d0 0028
.org 0xe68d2
	bne.n 0xe68e0	@ 000e68d2 05d1
.org 0xe68d4
	str r0, [r4, #92]	@ 000e68d4 e065
.org 0xe68d6
	movs r0, #64	@ 000e68d6 4020
.org 0xe68d8
	b.n 0xe692e	@ 000e68d8 29e0
.org 0xe68da
	.byte 0x00	@ 000e68da data
.org 0xe68db
	.byte 0x00	@ 000e68db data
.org 0xe68dc
	.byte 0x01,0xc6,0x00,0x00	@ 000e68dc data
.org 0xe68e0
	ldrb r1, [r4, #17]	@ 000e68e0 617c
.org 0xe68e2
	subs r1, #1	@ 000e68e2 0139
.org 0xe68e4
	lsls r1, r1, #6	@ 000e68e4 8901
.org 0xe68e6
	ldr r3, [pc, #84]	@ 000e68e6 154b
.org 0xe68e8
	ldr r2, [r3, #0]	@ 000e68e8 1a68
.org 0xe68ea
	ldr r0, [pc, #84]	@ 000e68ea 1548
.org 0xe68ec
	muls r0, r2	@ 000e68ec 5043
.org 0xe68ee
	ldr r2, [pc, #84]	@ 000e68ee 154a
.org 0xe68f0
	adds r0, r0, r2	@ 000e68f0 8018
.org 0xe68f2
	lsls r0, r0, #1	@ 000e68f2 4000
.org 0xe68f4
	lsrs r2, r0, #1	@ 000e68f4 4208
.org 0xe68f6
	str r2, [r3, #0]	@ 000e68f6 1a60
.org 0xe68f8
	lsrs r0, r0, #17	@ 000e68f8 400c
.org 0xe68fa
	movs r2, #111	@ 000e68fa 6f22
.org 0xe68fc
	ands r0, r2	@ 000e68fc 1040
.org 0xe68fe
	adds r1, r1, r0	@ 000e68fe 0918
.org 0xe6900
	lsls r1, r1, #24	@ 000e6900 0906
.org 0xe6902
	ldr r3, [pc, #68]	@ 000e6902 114b
.org 0xe6904
	lsrs r2, r1, #24	@ 000e6904 0a0e
.org 0xe6906
	movs r5, #128	@ 000e6906 8025
.org 0xe6908
	lsls r5, r5, #23	@ 000e6908 ed05
.org 0xe690a
	adds r1, r1, r5	@ 000e690a 4919
.org 0xe690c
	lsrs r1, r1, #23	@ 000e690c c90d
.org 0xe690e
	adds r1, r1, r3	@ 000e690e c918
.org 0xe6910
	movs r5, #0	@ 000e6910 0025
.org 0xe6912
	ldrsh r0, [r1, r5]	@ 000e6912 485f
.org 0xe6914
	cmp r0, #0	@ 000e6914 0028
.org 0xe6916
	bge.n 0xe691a	@ 000e6916 00da
.org 0xe6918
	adds r0, #3	@ 000e6918 0330
.org 0xe691a
	asrs r0, r0, #2	@ 000e691a 8010
.org 0xe691c
	str r0, [r4, #92]	@ 000e691c e065
.org 0xe691e
	lsls r0, r2, #1	@ 000e691e 5000
.org 0xe6920
	adds r0, r0, r3	@ 000e6920 c018
.org 0xe6922
	movs r1, #0	@ 000e6922 0021
.org 0xe6924
	ldrsh r0, [r0, r1]	@ 000e6924 405e
.org 0xe6926
	cmp r0, #0	@ 000e6926 0028
.org 0xe6928
	bge.n 0xe692c	@ 000e6928 00da
.org 0xe692a
	adds r0, #3	@ 000e692a 0330
.org 0xe692c
	asrs r0, r0, #2	@ 000e692c 8010
.org 0xe692e
	str r0, [r4, #96]	@ 000e692e 2066
.org 0xe6930
	movs r0, #0	@ 000e6930 0020
.org 0xe6932
	strb r0, [r4, #13]	@ 000e6932 6073
