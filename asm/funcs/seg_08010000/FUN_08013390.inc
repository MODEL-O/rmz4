@ FUN_08013390  entry 0x08013390  size 66
.thumb
.org 0x13390
FUN_08013390:
	push {lr}	@ 00013390 00b5
.org 0x13392
	ldr r2, [pc, #36]	@ 00013392 094a
.org 0x13394
	ldrh r1, [r2, #20]	@ 00013394 918a
.org 0x13396
	movs r0, #1	@ 00013396 0120
.org 0x13398
	ands r0, r1	@ 00013398 0840
.org 0x1339a
	cmp r0, #0	@ 0001339a 0028
.org 0x1339c
	beq.n 0x133bc	@ 0001339c 0ed0
.org 0x1339e
	movs r0, #162	@ 0001339e a220
.org 0x133a0
	lsls r0, r0, #1	@ 000133a0 4000
.org 0x133a2
	adds r1, r2, r0	@ 000133a2 1118
.org 0x133a4
	movs r0, #240	@ 000133a4 f020
.org 0x133a6
	lsls r0, r0, #8	@ 000133a6 0002
.org 0x133a8
	str r0, [r1, #0]	@ 000133a8 0860
.org 0x133aa
	movs r0, #164	@ 000133aa a420
.org 0x133ac
	lsls r0, r0, #1	@ 000133ac 4000
.org 0x133ae
	adds r1, r2, r0	@ 000133ae 1118
.org 0x133b0
	movs r0, #240	@ 000133b0 f020
.org 0x133b2
	lsls r0, r0, #14	@ 000133b2 8003
.org 0x133b4
	b.n 0x133d2	@ 000133b4 0de0
.org 0x133b6
	.byte 0x00	@ 000133b6 data
.org 0x133b7
	.byte 0x00	@ 000133b7 data
.org 0x133b8
	.byte 0x10,0xe9,0x02,0x02	@ 000133b8 data
.org 0x133bc
	movs r0, #162	@ 000133bc a220
.org 0x133be
	lsls r0, r0, #1	@ 000133be 4000
.org 0x133c0
	adds r1, r2, r0	@ 000133c0 1118
.org 0x133c2
	movs r0, #240	@ 000133c2 f020
.org 0x133c4
	lsls r0, r0, #8	@ 000133c4 0002
.org 0x133c6
	str r0, [r1, #0]	@ 000133c6 0860
.org 0x133c8
	movs r0, #164	@ 000133c8 a420
.org 0x133ca
	lsls r0, r0, #1	@ 000133ca 4000
.org 0x133cc
	adds r1, r2, r0	@ 000133cc 1118
.org 0x133ce
	movs r0, #180	@ 000133ce b420
.org 0x133d0
	lsls r0, r0, #10	@ 000133d0 8002
