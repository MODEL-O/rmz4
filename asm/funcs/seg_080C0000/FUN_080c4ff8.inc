@ FUN_080c4ff8  entry 0x080c4ff8  size 172
.thumb
.org 0xc4ff8
FUN_080c4ff8:
	push {r4, lr}	@ 000c4ff8 10b5
.org 0xc4ffa
	adds r3, r0, #0	@ 000c4ffa 031c
.org 0xc4ffc
	ldr r4, [r3, #40]	@ 000c4ffc 9c6a
.org 0xc4ffe
	ldrb r0, [r4, #10]	@ 000c4ffe a07a
.org 0xc5000
	lsrs r1, r0, #4	@ 000c5000 0109
.org 0xc5002
	movs r0, #1	@ 000c5002 0120
.org 0xc5004
	ands r1, r0	@ 000c5004 0140
.org 0xc5006
	ldrb r0, [r3, #15]	@ 000c5006 d87b
.org 0xc5008
	cmp r0, #0	@ 000c5008 0028
.org 0xc500a
	bne.n 0xc5010	@ 000c500a 01d1
.org 0xc500c
	adds r0, #1	@ 000c500c 0130
.org 0xc500e
	strb r0, [r3, #15]	@ 000c500e d873
.org 0xc5010
	adds r2, r1, #0	@ 000c5010 0a1c
.org 0xc5012
	cmp r2, #0	@ 000c5012 002a
.org 0xc5014
	beq.n 0xc501e	@ 000c5014 03d0
.org 0xc5016
	ldrb r1, [r3, #10]	@ 000c5016 997a
.org 0xc5018
	movs r0, #16	@ 000c5018 1020
.org 0xc501a
	orrs r0, r1	@ 000c501a 0843
.org 0xc501c
	b.n 0xc5024	@ 000c501c 02e0
.org 0xc501e
	ldrb r1, [r3, #10]	@ 000c501e 997a
.org 0xc5020
	movs r0, #239	@ 000c5020 ef20
.org 0xc5022
	ands r0, r1	@ 000c5022 0840
.org 0xc5024
	strb r0, [r3, #10]	@ 000c5024 9872
.org 0xc5026
	adds r1, r2, #0	@ 000c5026 111c
.org 0xc5028
	adds r0, r3, #0	@ 000c5028 181c
.org 0xc502a
	adds r0, #76	@ 000c502a 4c30
.org 0xc502c
	strb r1, [r0, #0]	@ 000c502c 0170
.org 0xc502e
	movs r0, #74	@ 000c502e 4a20
.org 0xc5030
	adds r0, r0, r3	@ 000c5030 c018
.org 0xc5032
	mov ip, r0	@ 000c5032 8446
.org 0xc5034
	lsls r1, r1, #4	@ 000c5034 0901
.org 0xc5036
	ldrb r2, [r0, #0]	@ 000c5036 0278
.org 0xc5038
	movs r0, #17	@ 000c5038 1120
.org 0xc503a
	negs r0, r0	@ 000c503a 4042
.org 0xc503c
	ands r0, r2	@ 000c503c 1040
.org 0xc503e
	orrs r0, r1	@ 000c503e 0843
.org 0xc5040
	mov r1, ip	@ 000c5040 6146
.org 0xc5042
	strb r0, [r1, #0]	@ 000c5042 0870
.org 0xc5044
	ldr r2, [r4, #84]	@ 000c5044 626d
.org 0xc5046
	ldrb r1, [r4, #10]	@ 000c5046 a17a
.org 0xc5048
	movs r0, #16	@ 000c5048 1020
.org 0xc504a
	ands r0, r1	@ 000c504a 0840
.org 0xc504c
	cmp r0, #0	@ 000c504c 0028
.org 0xc504e
	beq.n 0xc5056	@ 000c504e 02d0
.org 0xc5050
	movs r1, #240	@ 000c5050 f021
.org 0xc5052
	lsls r1, r1, #6	@ 000c5052 8901
.org 0xc5054
	b.n 0xc5058	@ 000c5054 00e0
.org 0xc5056
	ldr r1, [pc, #76]	@ 000c5056 1349
.org 0xc5058
	adds r0, r2, r1	@ 000c5058 5018
.org 0xc505a
	str r0, [r3, #84]	@ 000c505a 5865
.org 0xc505c
	ldr r0, [r4, #88]	@ 000c505c a06d
.org 0xc505e
	str r0, [r3, #88]	@ 000c505e 9865
.org 0xc5060
	adds r0, r3, #0	@ 000c5060 181c
.org 0xc5062
	adds r0, #180	@ 000c5062 b430
.org 0xc5064
	ldrb r2, [r0, #0]	@ 000c5064 0278
.org 0xc5066
	cmp r2, #0	@ 000c5066 002a
.org 0xc5068
	bne.n 0xc509e	@ 000c5068 19d1
.org 0xc506a
	ldrb r1, [r3, #10]	@ 000c506a 997a
.org 0xc506c
	movs r0, #254	@ 000c506c fe20
.org 0xc506e
	ands r0, r1	@ 000c506e 0840
.org 0xc5070
	movs r1, #253	@ 000c5070 fd21
.org 0xc5072
	ands r0, r1	@ 000c5072 0840
.org 0xc5074
	strb r0, [r3, #10]	@ 000c5074 9872
.org 0xc5076
	adds r0, r3, #0	@ 000c5076 181c
.org 0xc5078
	adds r0, #140	@ 000c5078 8c30
.org 0xc507a
	str r2, [r0, #0]	@ 000c507a 0260
.org 0xc507c
	adds r0, #4	@ 000c507c 0430
.org 0xc507e
	str r2, [r0, #0]	@ 000c507e 0260
.org 0xc5080
	adds r0, #4	@ 000c5080 0430
.org 0xc5082
	strb r2, [r0, #0]	@ 000c5082 0270
.org 0xc5084
	ldrb r1, [r3, #10]	@ 000c5084 997a
.org 0xc5086
	movs r0, #251	@ 000c5086 fb20
.org 0xc5088
	ands r0, r1	@ 000c5088 0840
.org 0xc508a
	strb r0, [r3, #10]	@ 000c508a 9872
.org 0xc508c
	ldr r1, [pc, #24]	@ 000c508c 0649
.org 0xc508e
	ldrb r0, [r3, #9]	@ 000c508e 587a
.org 0xc5090
	lsls r0, r0, #2	@ 000c5090 8000
.org 0xc5092
	adds r0, r0, r1	@ 000c5092 4018
.org 0xc5094
	movs r1, #3	@ 000c5094 0321
.org 0xc5096
	str r1, [r3, #12]	@ 000c5096 d960
.org 0xc5098
	ldr r0, [r0, #0]	@ 000c5098 0068
.org 0xc509a
	ldr r0, [r0, #12]	@ 000c509a c068
.org 0xc509c
	str r0, [r3, #20]	@ 000c509c 5861
.org 0xc509e
	pop {r4}	@ 000c509e 10bc
.org 0xc50a0
	pop {r0}	@ 000c50a0 01bc
.org 0xc50a2
	bx r0	@ 000c50a2 0047
