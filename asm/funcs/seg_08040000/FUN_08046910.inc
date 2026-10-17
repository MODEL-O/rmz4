@ FUN_08046910  entry 0x08046910  size 140
.thumb
.org 0x46910
FUN_08046910:
	push {r4, r5, r6, lr}	@ 00046910 70b5
.org 0x46912
	adds r4, r0, #0	@ 00046912 041c
.org 0x46914
	adds r5, r1, #0	@ 00046914 0d1c
.org 0x46916
	lsls r2, r2, #24	@ 00046916 1206
.org 0x46918
	lsrs r6, r2, #24	@ 00046918 160e
.org 0x4691a
	ldr r0, [pc, #64]	@ 0004691a 1048
.org 0x4691c
	ldr r0, [r0, #0]	@ 0004691c 0068
.org 0x4691e
	bl 0x5500	@ 0004691e bef7effd
.org 0x46922
	adds r2, r0, #0	@ 00046922 021c
.org 0x46924
	cmp r2, #0	@ 00046924 002a
.org 0x46926
	beq.n 0x469a8	@ 00046926 3fd0
.org 0x46928
	adds r0, r4, #0	@ 00046928 201c
.org 0x4692a
	adds r0, #248	@ 0004692a f830
.org 0x4692c
	ldrb r0, [r0, #0]	@ 0004692c 0078
.org 0x4692e
	cmp r0, #2	@ 0004692e 0228
.org 0x46930
	bne.n 0x4696c	@ 00046930 1cd1
.org 0x46932
	ldr r1, [pc, #44]	@ 00046932 0b49
.org 0x46934
	movs r0, #25	@ 00046934 1920
.org 0x46936
	strb r0, [r2, #9]	@ 00046936 5072
.org 0x46938
	ldr r0, [r1, #100]	@ 00046938 486e
.org 0x4693a
	ldr r0, [r0, #0]	@ 0004693a 0068
.org 0x4693c
	str r0, [r2, #20]	@ 0004693c 5061
.org 0x4693e
	ldrb r1, [r2, #11]	@ 0004693e d17a
.org 0x46940
	movs r0, #191	@ 00046940 bf20
.org 0x46942
	ands r0, r1	@ 00046942 0840
.org 0x46944
	strb r0, [r2, #11]	@ 00046944 d072
.org 0x46946
	adds r1, r2, #0	@ 00046946 111c
.org 0x46948
	adds r1, #37	@ 00046948 2531
.org 0x4694a
	movs r0, #16	@ 0004694a 1020
.org 0x4694c
	strb r0, [r1, #0]	@ 0004694c 0870
.org 0x4694e
	ldr r0, [pc, #20]	@ 0004694e 0548
.org 0x46950
	ldrh r0, [r0, #0]	@ 00046950 0088
.org 0x46952
	strh r0, [r2, #32]	@ 00046952 1084
.org 0x46954
	ldr r0, [pc, #16]	@ 00046954 0448
.org 0x46956
	ldrb r0, [r0, #0]	@ 00046956 0078
.org 0x46958
	b.n 0x46992	@ 00046958 1be0
.org 0x4695a
	.byte 0x00	@ 0004695a data
.org 0x4695b
	.byte 0x00	@ 0004695b data
.org 0x4695c
	.byte 0x88,0xed,0x02,0x02	@ 0004695c data
.org 0x46960
	.byte 0xf8,0x39,0x85,0x08	@ 00046960 data
.org 0x46964
	.byte 0xfc,0x36,0x85,0x08	@ 00046964 data
.org 0x46968
	.byte 0x04,0x37,0x85,0x08	@ 00046968 data
.org 0x4696c
	ldr r1, [pc, #64]	@ 0004696c 1049
.org 0x4696e
	movs r0, #25	@ 0004696e 1920
.org 0x46970
	strb r0, [r2, #9]	@ 00046970 5072
.org 0x46972
	ldr r0, [r1, #100]	@ 00046972 486e
.org 0x46974
	ldr r0, [r0, #0]	@ 00046974 0068
.org 0x46976
	str r0, [r2, #20]	@ 00046976 5061
.org 0x46978
	ldrb r1, [r2, #11]	@ 00046978 d17a
.org 0x4697a
	movs r0, #191	@ 0004697a bf20
.org 0x4697c
	ands r0, r1	@ 0004697c 0840
.org 0x4697e
	strb r0, [r2, #11]	@ 0004697e d072
.org 0x46980
	adds r1, r2, #0	@ 00046980 111c
.org 0x46982
	adds r1, #37	@ 00046982 2531
.org 0x46984
	movs r0, #16	@ 00046984 1020
.org 0x46986
	strb r0, [r1, #0]	@ 00046986 0870
.org 0x46988
	ldr r0, [pc, #40]	@ 00046988 0a48
.org 0x4698a
	ldrh r0, [r0, #2]	@ 0004698a 4088
.org 0x4698c
	strh r0, [r2, #32]	@ 0004698c 1084
.org 0x4698e
	ldr r0, [pc, #40]	@ 0004698e 0a48
.org 0x46990
	ldrb r0, [r0, #1]	@ 00046990 4078
.org 0x46992
	subs r1, #3	@ 00046992 0339
.org 0x46994
	strb r0, [r1, #0]	@ 00046994 0870
.org 0x46996
	str r4, [r2, #40]	@ 00046996 9462
.org 0x46998
	str r5, [r2, #44]	@ 00046998 d562
.org 0x4699a
	ldr r0, [r5, #84]	@ 0004699a 686d
