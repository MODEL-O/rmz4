@ FUN_08084910  entry 0x08084910  size 82
.thumb
.org 0x84910
FUN_08084910:
	push {r4, r5, r6, lr}	@ 00084910 70b5
.org 0x84912
	adds r5, r0, #0	@ 00084912 051c
.org 0x84914
	adds r6, r1, #0	@ 00084914 0e1c
.org 0x84916
	lsls r2, r2, #24	@ 00084916 1206
.org 0x84918
	lsrs r4, r2, #24	@ 00084918 140e
.org 0x8491a
	ldr r0, [pc, #72]	@ 0008491a 1248
.org 0x8491c
	ldr r0, [r0, #0]	@ 0008491c 0068
.org 0x8491e
	bl 0x54cc	@ 0008491e 80f7d5fd
.org 0x84922
	adds r3, r0, #0	@ 00084922 031c
.org 0x84924
	cmp r3, #0	@ 00084924 002b
.org 0x84926
	beq.n 0x8495a	@ 00084926 18d0
.org 0x84928
	adds r1, r3, #0	@ 00084928 191c
.org 0x8492a
	adds r1, #37	@ 0008492a 2531
.org 0x8492c
	movs r2, #0	@ 0008492c 0022
.org 0x8492e
	movs r0, #24	@ 0008492e 1820
.org 0x84930
	strb r0, [r1, #0]	@ 00084930 0870
.org 0x84932
	ldr r1, [pc, #52]	@ 00084932 0d49
.org 0x84934
	movs r0, #5	@ 00084934 0520
.org 0x84936
	strb r0, [r3, #9]	@ 00084936 5872
.org 0x84938
	ldr r0, [r1, #20]	@ 00084938 4869
.org 0x8493a
	ldr r0, [r0, #0]	@ 0008493a 0068
.org 0x8493c
	str r0, [r3, #20]	@ 0008493c 5861
.org 0x8493e
	movs r0, #0	@ 0008493e 0020
.org 0x84940
	strh r2, [r3, #32]	@ 00084940 1a84
.org 0x84942
	adds r1, r3, #0	@ 00084942 191c
.org 0x84944
	adds r1, #34	@ 00084944 2231
.org 0x84946
	strb r0, [r1, #0]	@ 00084946 0870
.org 0x84948
	ldrb r1, [r3, #11]	@ 00084948 d97a
.org 0x8494a
	movs r0, #16	@ 0008494a 1020
.org 0x8494c
	orrs r0, r1	@ 0008494c 0843
.org 0x8494e
	strb r0, [r3, #11]	@ 0008494e d872
.org 0x84950
	ldrb r0, [r3, #28]	@ 00084950 187f
.org 0x84952
	strb r0, [r3, #29]	@ 00084952 5877
.org 0x84954
	strb r4, [r3, #16]	@ 00084954 1c74
.org 0x84956
	str r5, [r3, #84]	@ 00084956 5d65
.org 0x84958
	str r6, [r3, #88]	@ 00084958 9e65
.org 0x8495a
	adds r0, r3, #0	@ 0008495a 181c
.org 0x8495c
	pop {r4, r5, r6}	@ 0008495c 70bc
.org 0x8495e
	pop {r1}	@ 0008495e 02bc
.org 0x84960
	bx r1	@ 00084960 0847
