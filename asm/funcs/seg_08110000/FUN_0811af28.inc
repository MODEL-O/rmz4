@ FUN_0811af28  entry 0x0811af28  size 182
.thumb
.org 0x11af28
FUN_0811af28:
	push {r4, r5, r6, r7, lr}	@ 0011af28 f0b5
.org 0x11af2a
	mov r7, r8	@ 0011af2a 4746
.org 0x11af2c
	push {r7}	@ 0011af2c 80b4
.org 0x11af2e
	adds r4, r0, #0	@ 0011af2e 041c
.org 0x11af30
	movs r2, #0	@ 0011af30 0022
.org 0x11af32
	ldr r0, [pc, #60]	@ 0011af32 0f48
.org 0x11af34
	adds r3, r4, r0	@ 0011af34 2318
.org 0x11af36
	movs r5, #255	@ 0011af36 ff25
.org 0x11af38
	mov r8, r3	@ 0011af38 9846
.org 0x11af3a
	adds r0, r3, r2	@ 0011af3a 9818
.org 0x11af3c
	ldrb r1, [r0, #0]	@ 0011af3c 0178
.org 0x11af3e
	orrs r1, r5	@ 0011af3e 2943
.org 0x11af40
	strb r1, [r0, #0]	@ 0011af40 0170
.org 0x11af42
	adds r0, r2, #1	@ 0011af42 501c
.org 0x11af44
	lsls r0, r0, #24	@ 0011af44 0006
.org 0x11af46
	lsrs r2, r0, #24	@ 0011af46 020e
.org 0x11af48
	cmp r2, #5	@ 0011af48 052a
.org 0x11af4a
	bls.n 0x11af3a	@ 0011af4a f6d9
.org 0x11af4c
	movs r0, #221	@ 0011af4c dd20
.org 0x11af4e
	lsls r0, r0, #4	@ 0011af4e 0001
.org 0x11af50
	adds r1, r4, r0	@ 0011af50 2118
.org 0x11af52
	movs r0, #0	@ 0011af52 0020
.org 0x11af54
	strb r0, [r1, #12]	@ 0011af54 0873
.org 0x11af56
	strb r0, [r1, #13]	@ 0011af56 4873
.org 0x11af58
	strb r0, [r1, #10]	@ 0011af58 8872
.org 0x11af5a
	movs r3, #0	@ 0011af5a 0023
.org 0x11af5c
	ldrb r0, [r1, #11]	@ 0011af5c c87a
.org 0x11af5e
	cmp r0, #0	@ 0011af5e 0028
.org 0x11af60
	bne.n 0x11af74	@ 0011af60 08d1
.org 0x11af62
	movs r0, #255	@ 0011af62 ff20
.org 0x11af64
	strb r0, [r1, #4]	@ 0011af64 0871
.org 0x11af66
	movs r0, #1	@ 0011af66 0120
.org 0x11af68
	strb r0, [r1, #10]	@ 0011af68 8872
.org 0x11af6a
	ldrb r6, [r1, #11]	@ 0011af6a ce7a
.org 0x11af6c
	movs r3, #1	@ 0011af6c 0123
.org 0x11af6e
	b.n 0x11af7e	@ 0011af6e 06e0
.org 0x11af70
	.byte 0xd4,0x0d,0x00,0x00	@ 0011af70 data
.org 0x11af74
	subs r0, #1	@ 0011af74 0138
.org 0x11af76
	lsls r0, r0, #24	@ 0011af76 0006
.org 0x11af78
	lsrs r6, r0, #24	@ 0011af78 060e
.org 0x11af7a
	movs r0, #1	@ 0011af7a 0120
.org 0x11af7c
	strb r0, [r1, #12]	@ 0011af7c 0873
.org 0x11af7e
	movs r2, #10	@ 0011af7e 0a22
.org 0x11af80
	adds r5, r3, #0	@ 0011af80 1d1c
.org 0x11af82
	ldr r0, [pc, #48]	@ 0011af82 0c48
.org 0x11af84
	ldr r0, [r0, #0]	@ 0011af84 0068
.org 0x11af86
	mov ip, r0	@ 0011af86 8446
.org 0x11af88
	movs r7, #1	@ 0011af88 0127
.org 0x11af8a
	movs r1, #221	@ 0011af8a dd21
.org 0x11af8c
	lsls r1, r1, #4	@ 0011af8c 0901
.org 0x11af8e
	adds r4, r4, r1	@ 0011af8e 6418
.org 0x11af90
	lsrs r0, r2, #2	@ 0011af90 9008
.org 0x11af92
	add r0, ip	@ 0011af92 6044
.org 0x11af94
	ldrb r1, [r0, #0]	@ 0011af94 0178
.org 0x11af96
	movs r0, #3	@ 0011af96 0320
.org 0x11af98
	ands r0, r2	@ 0011af98 1040
.org 0x11af9a
	adds r0, #4	@ 0011af9a 0430
.org 0x11af9c
	asrs r1, r0	@ 0011af9c 0141
.org 0x11af9e
	ands r1, r7	@ 0011af9e 3940
.org 0x11afa0
	cmp r1, #0	@ 0011afa0 0029
.org 0x11afa2
	beq.n 0x11afd4	@ 0011afa2 17d0
.org 0x11afa4
	adds r0, r6, r3	@ 0011afa4 f018
.org 0x11afa6
	cmp r5, r0	@ 0011afa6 8542
.org 0x11afa8
	beq.n 0x11afb8	@ 0011afa8 06d0
.org 0x11afaa
	cmp r3, #5	@ 0011afaa 052b
.org 0x11afac
	bne.n 0x11afce	@ 0011afac 0fd1
.org 0x11afae
	strb r7, [r4, #13]	@ 0011afae 6773
.org 0x11afb0
	b.n 0x11afde	@ 0011afb0 15e0
.org 0x11afb2
	.byte 0x00	@ 0011afb2 data
.org 0x11afb3
	.byte 0x00	@ 0011afb3 data
.org 0x11afb4
	.byte 0xac,0xed,0x02,0x02	@ 0011afb4 data
.org 0x11afb8
	mov r1, r8	@ 0011afb8 4146
.org 0x11afba
	adds r0, r1, r3	@ 0011afba c818
.org 0x11afbc
	strb r2, [r0, #0]	@ 0011afbc 0270
.org 0x11afbe
	ldrb r0, [r4, #10]	@ 0011afbe a07a
.org 0x11afc0
	adds r0, #1	@ 0011afc0 0130
.org 0x11afc2
	strb r0, [r4, #10]	@ 0011afc2 a072
.org 0x11afc4
	cmp r3, #4	@ 0011afc4 042b
.org 0x11afc6
	bhi.n 0x11afce	@ 0011afc6 02d8
.org 0x11afc8
	adds r0, r3, #1	@ 0011afc8 581c
.org 0x11afca
	lsls r0, r0, #24	@ 0011afca 0006
.org 0x11afcc
	lsrs r3, r0, #24	@ 0011afcc 030e
.org 0x11afce
	adds r0, r5, #1	@ 0011afce 681c
.org 0x11afd0
	lsls r0, r0, #24	@ 0011afd0 0006
.org 0x11afd2
	lsrs r5, r0, #24	@ 0011afd2 050e
.org 0x11afd4
	adds r0, r2, #1	@ 0011afd4 501c
.org 0x11afd6
	lsls r0, r0, #24	@ 0011afd6 0006
.org 0x11afd8
	lsrs r2, r0, #24	@ 0011afd8 020e
.org 0x11afda
	cmp r2, #19	@ 0011afda 132a
.org 0x11afdc
	bls.n 0x11af90	@ 0011afdc d8d9
