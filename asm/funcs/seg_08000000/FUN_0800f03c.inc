@ FUN_0800f03c  entry 0x0800f03c  size 152
.thumb
.org 0xf03c
FUN_0800f03c:
	push {r4, lr}	@ 0000f03c 10b5
.org 0xf03e
	adds r3, r0, #0	@ 0000f03e 031c
.org 0xf040
	ldrb r2, [r3, #14]	@ 0000f040 9a7b
.org 0xf042
	cmp r2, #0	@ 0000f042 002a
.org 0xf044
	bne.n 0xf074	@ 0000f044 16d1
.org 0xf046
	ldr r1, [pc, #140]	@ 0000f046 2349
.org 0xf048
	ldr r0, [pc, #140]	@ 0000f048 2348
.org 0xf04a
	strh r0, [r1, #0]	@ 0000f04a 0880
.org 0xf04c
	ldr r0, [pc, #140]	@ 0000f04c 2348
.org 0xf04e
	strh r0, [r1, #2]	@ 0000f04e 4880
.org 0xf050
	ldr r0, [pc, #140]	@ 0000f050 2348
.org 0xf052
	ldr r1, [pc, #144]	@ 0000f052 2449
.org 0xf054
	adds r0, r0, r1	@ 0000f054 4018
.org 0xf056
	movs r1, #160	@ 0000f056 a021
.org 0xf058
	lsls r1, r1, #9	@ 0000f058 4902
.org 0xf05a
	str r1, [r0, #0]	@ 0000f05a 0160
.org 0xf05c
	movs r0, #128	@ 0000f05c 8020
.org 0xf05e
	lsls r0, r0, #1	@ 0000f05e 4000
.org 0xf060
	str r0, [r3, #68]	@ 0000f060 5864
.org 0xf062
	str r0, [r3, #72]	@ 0000f062 9864
.org 0xf064
	strh r2, [r3, #16]	@ 0000f064 1a82
.org 0xf066
	str r2, [r3, #104]	@ 0000f066 9a66
.org 0xf068
	adds r0, r3, #0	@ 0000f068 181c
.org 0xf06a
	adds r0, #108	@ 0000f06a 6c30
.org 0xf06c
	strh r2, [r0, #0]	@ 0000f06c 0280
.org 0xf06e
	ldrb r0, [r3, #14]	@ 0000f06e 987b
.org 0xf070
	adds r0, #1	@ 0000f070 0130
.org 0xf072
	strb r0, [r3, #14]	@ 0000f072 9873
.org 0xf074
	ldr r1, [r3, #68]	@ 0000f074 596c
.org 0xf076
	movs r0, #128	@ 0000f076 8020
.org 0xf078
	lsls r0, r0, #1	@ 0000f078 4000
.org 0xf07a
	cmp r1, r0	@ 0000f07a 8142
.org 0xf07c
	bne.n 0xf092	@ 0000f07c 09d1
.org 0xf07e
	ldr r1, [r3, #56]	@ 0000f07e 996b
.org 0xf080
	adds r0, #224	@ 0000f080 e030
.org 0xf082
	cmp r1, r0	@ 0000f082 8142
.org 0xf084
	ble.n 0xf092	@ 0000f084 05dd
.org 0xf086
	movs r1, #0	@ 0000f086 0021
.org 0xf088
	str r1, [r3, #68]	@ 0000f088 5964
.org 0xf08a
	movs r0, #192	@ 0000f08a c020
.org 0xf08c
	str r0, [r3, #72]	@ 0000f08c 9864
.org 0xf08e
	str r1, [r3, #76]	@ 0000f08e d964
.org 0xf090
	str r0, [r3, #80]	@ 0000f090 1865
.org 0xf092
	adds r4, r3, #0	@ 0000f092 1c1c
.org 0xf094
	adds r4, #108	@ 0000f094 6c34
.org 0xf096
	ldrh r0, [r4, #0]	@ 0000f096 2088
.org 0xf098
	ldr r1, [r3, #104]	@ 0000f098 996e
.org 0xf09a
	ldr r2, [r3, #52]	@ 0000f09a 5a6b
.org 0xf09c
	subs r1, r1, r2	@ 0000f09c 891a
.org 0xf09e
	lsls r1, r1, #4	@ 0000f09e 0901
.org 0xf0a0
	movs r2, #240	@ 0000f0a0 f022
.org 0xf0a2
	lsls r2, r2, #4	@ 0000f0a2 1201
.org 0xf0a4
	adds r1, r1, r2	@ 0000f0a4 8918
.org 0xf0a6
	cmp r0, r1	@ 0000f0a6 8842
.org 0xf0a8
	ble.n 0xf0b6	@ 0000f0a8 05dd
.org 0xf0aa
	movs r0, #0	@ 0000f0aa 0020
.org 0xf0ac
	strh r0, [r4, #0]	@ 0000f0ac 2080
.org 0xf0ae
	ldr r0, [r3, #52]	@ 0000f0ae 586b
.org 0xf0b0
	ldr r1, [pc, #52]	@ 0000f0b0 0d49
.org 0xf0b2
	ands r0, r1	@ 0000f0b2 0840
.org 0xf0b4
	str r0, [r3, #104]	@ 0000f0b4 9866
.org 0xf0b6
	ldrh r0, [r4, #0]	@ 0000f0b6 2088
.org 0xf0b8
	adds r0, #8	@ 0000f0b8 0830
.org 0xf0ba
	strh r0, [r4, #0]	@ 0000f0ba 2080
.org 0xf0bc
	ldrh r0, [r3, #16]	@ 0000f0bc 188a
.org 0xf0be
	adds r0, #1	@ 0000f0be 0130
.org 0xf0c0
	strh r0, [r3, #16]	@ 0000f0c0 1882
.org 0xf0c2
	lsls r0, r0, #16	@ 0000f0c2 0004
.org 0xf0c4
	lsrs r0, r0, #16	@ 0000f0c4 000c
.org 0xf0c6
	cmp r0, #255	@ 0000f0c6 ff28
.org 0xf0c8
	bls.n 0xf0ce	@ 0000f0c8 01d9
.org 0xf0ca
	movs r0, #0	@ 0000f0ca 0020
.org 0xf0cc
	strh r0, [r3, #16]	@ 0000f0cc 1882
.org 0xf0ce
	pop {r4}	@ 0000f0ce 10bc
.org 0xf0d0
	pop {r0}	@ 0000f0d0 01bc
.org 0xf0d2
	bx r0	@ 0000f0d2 0047
