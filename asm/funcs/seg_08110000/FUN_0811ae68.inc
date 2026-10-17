@ FUN_0811ae68  entry 0x0811ae68  size 182
.thumb
.org 0x11ae68
FUN_0811ae68:
	push {r4, r5, r6, r7, lr}	@ 0011ae68 f0b5
.org 0x11ae6a
	mov r7, r8	@ 0011ae6a 4746
.org 0x11ae6c
	push {r7}	@ 0011ae6c 80b4
.org 0x11ae6e
	adds r4, r0, #0	@ 0011ae6e 041c
.org 0x11ae70
	movs r2, #0	@ 0011ae70 0022
.org 0x11ae72
	ldr r0, [pc, #60]	@ 0011ae72 0f48
.org 0x11ae74
	adds r3, r4, r0	@ 0011ae74 2318
.org 0x11ae76
	movs r5, #255	@ 0011ae76 ff25
.org 0x11ae78
	mov r8, r3	@ 0011ae78 9846
.org 0x11ae7a
	adds r0, r3, r2	@ 0011ae7a 9818
.org 0x11ae7c
	ldrb r1, [r0, #0]	@ 0011ae7c 0178
.org 0x11ae7e
	orrs r1, r5	@ 0011ae7e 2943
.org 0x11ae80
	strb r1, [r0, #0]	@ 0011ae80 0170
.org 0x11ae82
	adds r0, r2, #1	@ 0011ae82 501c
.org 0x11ae84
	lsls r0, r0, #24	@ 0011ae84 0006
.org 0x11ae86
	lsrs r2, r0, #24	@ 0011ae86 020e
.org 0x11ae88
	cmp r2, #5	@ 0011ae88 052a
.org 0x11ae8a
	bls.n 0x11ae7a	@ 0011ae8a f6d9
.org 0x11ae8c
	movs r0, #221	@ 0011ae8c dd20
.org 0x11ae8e
	lsls r0, r0, #4	@ 0011ae8e 0001
.org 0x11ae90
	adds r1, r4, r0	@ 0011ae90 2118
.org 0x11ae92
	movs r0, #0	@ 0011ae92 0020
.org 0x11ae94
	strb r0, [r1, #12]	@ 0011ae94 0873
.org 0x11ae96
	strb r0, [r1, #13]	@ 0011ae96 4873
.org 0x11ae98
	strb r0, [r1, #10]	@ 0011ae98 8872
.org 0x11ae9a
	movs r3, #0	@ 0011ae9a 0023
.org 0x11ae9c
	ldrb r0, [r1, #11]	@ 0011ae9c c87a
.org 0x11ae9e
	cmp r0, #0	@ 0011ae9e 0028
.org 0x11aea0
	bne.n 0x11aeb4	@ 0011aea0 08d1
.org 0x11aea2
	movs r0, #255	@ 0011aea2 ff20
.org 0x11aea4
	strb r0, [r1, #4]	@ 0011aea4 0871
.org 0x11aea6
	movs r0, #1	@ 0011aea6 0120
.org 0x11aea8
	strb r0, [r1, #10]	@ 0011aea8 8872
.org 0x11aeaa
	ldrb r6, [r1, #11]	@ 0011aeaa ce7a
.org 0x11aeac
	movs r3, #1	@ 0011aeac 0123
.org 0x11aeae
	b.n 0x11aebe	@ 0011aeae 06e0
.org 0x11aeb0
	.byte 0xd4,0x0d,0x00,0x00	@ 0011aeb0 data
.org 0x11aeb4
	subs r0, #1	@ 0011aeb4 0138
.org 0x11aeb6
	lsls r0, r0, #24	@ 0011aeb6 0006
.org 0x11aeb8
	lsrs r6, r0, #24	@ 0011aeb8 060e
.org 0x11aeba
	movs r0, #1	@ 0011aeba 0120
.org 0x11aebc
	strb r0, [r1, #12]	@ 0011aebc 0873
.org 0x11aebe
	movs r2, #0	@ 0011aebe 0022
.org 0x11aec0
	adds r5, r3, #0	@ 0011aec0 1d1c
.org 0x11aec2
	ldr r0, [pc, #48]	@ 0011aec2 0c48
.org 0x11aec4
	ldr r0, [r0, #0]	@ 0011aec4 0068
.org 0x11aec6
	mov ip, r0	@ 0011aec6 8446
.org 0x11aec8
	movs r7, #1	@ 0011aec8 0127
.org 0x11aeca
	movs r1, #221	@ 0011aeca dd21
.org 0x11aecc
	lsls r1, r1, #4	@ 0011aecc 0901
.org 0x11aece
	adds r4, r4, r1	@ 0011aece 6418
.org 0x11aed0
	lsrs r0, r2, #2	@ 0011aed0 9008
.org 0x11aed2
	add r0, ip	@ 0011aed2 6044
.org 0x11aed4
	ldrb r1, [r0, #0]	@ 0011aed4 0178
.org 0x11aed6
	movs r0, #3	@ 0011aed6 0320
.org 0x11aed8
	ands r0, r2	@ 0011aed8 1040
.org 0x11aeda
	adds r0, #4	@ 0011aeda 0430
.org 0x11aedc
	asrs r1, r0	@ 0011aedc 0141
.org 0x11aede
	ands r1, r7	@ 0011aede 3940
.org 0x11aee0
	cmp r1, #0	@ 0011aee0 0029
.org 0x11aee2
	beq.n 0x11af14	@ 0011aee2 17d0
.org 0x11aee4
	adds r0, r6, r3	@ 0011aee4 f018
.org 0x11aee6
	cmp r5, r0	@ 0011aee6 8542
.org 0x11aee8
	beq.n 0x11aef8	@ 0011aee8 06d0
.org 0x11aeea
	cmp r3, #5	@ 0011aeea 052b
.org 0x11aeec
	bne.n 0x11af0e	@ 0011aeec 0fd1
.org 0x11aeee
	strb r7, [r4, #13]	@ 0011aeee 6773
.org 0x11aef0
	b.n 0x11af1e	@ 0011aef0 15e0
.org 0x11aef2
	.byte 0x00	@ 0011aef2 data
.org 0x11aef3
	.byte 0x00	@ 0011aef3 data
.org 0x11aef4
	.byte 0xac,0xed,0x02,0x02	@ 0011aef4 data
.org 0x11aef8
	mov r1, r8	@ 0011aef8 4146
.org 0x11aefa
	adds r0, r1, r3	@ 0011aefa c818
.org 0x11aefc
	strb r2, [r0, #0]	@ 0011aefc 0270
.org 0x11aefe
	ldrb r0, [r4, #10]	@ 0011aefe a07a
.org 0x11af00
	adds r0, #1	@ 0011af00 0130
.org 0x11af02
	strb r0, [r4, #10]	@ 0011af02 a072
.org 0x11af04
	cmp r3, #4	@ 0011af04 042b
.org 0x11af06
	bhi.n 0x11af0e	@ 0011af06 02d8
.org 0x11af08
	adds r0, r3, #1	@ 0011af08 581c
.org 0x11af0a
	lsls r0, r0, #24	@ 0011af0a 0006
.org 0x11af0c
	lsrs r3, r0, #24	@ 0011af0c 030e
.org 0x11af0e
	adds r0, r5, #1	@ 0011af0e 681c
.org 0x11af10
	lsls r0, r0, #24	@ 0011af10 0006
.org 0x11af12
	lsrs r5, r0, #24	@ 0011af12 050e
.org 0x11af14
	adds r0, r2, #1	@ 0011af14 501c
.org 0x11af16
	lsls r0, r0, #24	@ 0011af16 0006
.org 0x11af18
	lsrs r2, r0, #24	@ 0011af18 020e
.org 0x11af1a
	cmp r2, #9	@ 0011af1a 092a
.org 0x11af1c
	bls.n 0x11aed0	@ 0011af1c d8d9
