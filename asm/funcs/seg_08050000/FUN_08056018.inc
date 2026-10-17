@ FUN_08056018  entry 0x08056018  size 188
.thumb
.org 0x56018
FUN_08056018:
	push {r4, r5, r6, r7, lr}	@ 00056018 f0b5
.org 0x5601a
	adds r4, r0, #0	@ 0005601a 041c
.org 0x5601c
	ldrb r0, [r4, #15]	@ 0005601c e07b
.org 0x5601e
	cmp r0, #0	@ 0005601e 0028
.org 0x56020
	bne.n 0x5603e	@ 00056020 0dd1
.org 0x56022
	ldr r1, [pc, #176]	@ 00056022 2c49
.org 0x56024
	adds r0, r4, #0	@ 00056024 201c
.org 0x56026
	bl 0x1cf00	@ 00056026 c6f76bff
.org 0x5602a
	adds r0, r4, #0	@ 0005602a 201c
.org 0x5602c
	adds r0, #188	@ 0005602c bc30
.org 0x5602e
	ldr r0, [r0, #0]	@ 0005602e 0068
.org 0x56030
	str r0, [r4, #92]	@ 00056030 e065
.org 0x56032
	movs r0, #128	@ 00056032 8020
.org 0x56034
	negs r0, r0	@ 00056034 4042
.org 0x56036
	str r0, [r4, #96]	@ 00056036 2066
.org 0x56038
	ldrb r0, [r4, #15]	@ 00056038 e07b
.org 0x5603a
	adds r0, #1	@ 0005603a 0130
.org 0x5603c
	strb r0, [r4, #15]	@ 0005603c e073
.org 0x5603e
	adds r0, r4, #0	@ 0005603e 201c
.org 0x56040
	bl 0x1cff0	@ 00056040 c6f7d6ff
.org 0x56044
	adds r0, r4, #0	@ 00056044 201c
.org 0x56046
	adds r0, #116	@ 00056046 7430
.org 0x56048
	ldr r3, [pc, #140]	@ 00056048 234b
.org 0x5604a
	ldrb r1, [r4, #30]	@ 0005604a a17f
.org 0x5604c
	lsls r1, r1, #8	@ 0005604c 0902
.org 0x5604e
	adds r2, r4, #0	@ 0005604e 221c
.org 0x56050
	adds r2, #112	@ 00056050 7032
.org 0x56052
	ldrb r2, [r2, #0]	@ 00056052 1278
.org 0x56054
	orrs r1, r2	@ 00056054 1143
.org 0x56056
	ldr r2, [pc, #132]	@ 00056056 214a
.org 0x56058
	adds r1, r1, r2	@ 00056058 8918
.org 0x5605a
	lsls r1, r1, #2	@ 0005605a 8900
.org 0x5605c
	adds r1, r1, r3	@ 0005605c c918
.org 0x5605e
	adds r2, r4, #0	@ 0005605e 221c
.org 0x56060
	adds r2, #113	@ 00056060 7132
.org 0x56062
	ldrb r2, [r2, #0]	@ 00056062 1278
.org 0x56064
	lsls r2, r2, #24	@ 00056064 1206
.org 0x56066
	asrs r2, r2, #24	@ 00056066 1216
.org 0x56068
	ldr r1, [r1, #0]	@ 00056068 0968
.org 0x5606a
	lsls r2, r2, #2	@ 0005606a 9200
.org 0x5606c
	adds r2, r2, r1	@ 0005606c 5218
.org 0x5606e
	ldr r1, [r2, #0]	@ 0005606e 1168
.org 0x56070
	ldrb r2, [r1, #0]	@ 00056070 0a78
.org 0x56072
	lsls r1, r2, #1	@ 00056072 5100
.org 0x56074
	adds r1, r1, r2	@ 00056074 8918
.org 0x56076
	lsls r1, r1, #3	@ 00056076 c900
.org 0x56078
	ldr r2, [pc, #100]	@ 00056078 194a
.org 0x5607a
	adds r1, r1, r2	@ 0005607a 8918
.org 0x5607c
	bl 0x5784	@ 0005607c aff782fb
.org 0x56080
	adds r3, r4, #0	@ 00056080 231c
.org 0x56082
	adds r3, #188	@ 00056082 bc33
.org 0x56084
	ldr r1, [r3, #0]	@ 00056084 1968
.org 0x56086
	ldr r0, [r4, #96]	@ 00056086 206e
.org 0x56088
	adds r1, r1, r0	@ 00056088 0918
.org 0x5608a
	str r1, [r3, #0]	@ 0005608a 1960
.org 0x5608c
	adds r5, r4, #0	@ 0005608c 251c
.org 0x5608e
	adds r5, #84	@ 0005608e 5435
.org 0x56090
	ldr r6, [pc, #80]	@ 00056090 144e
.org 0x56092
	movs r7, #181	@ 00056092 b527
.org 0x56094
	adds r7, r7, r4	@ 00056094 3f19
.org 0x56096
	mov ip, r7	@ 00056096 bc46
.org 0x56098
	ldrb r0, [r7, #0]	@ 00056098 3878
.org 0x5609a
	lsls r0, r0, #1	@ 0005609a 4000
.org 0x5609c
	adds r0, r0, r6	@ 0005609c 8019
.org 0x5609e
	movs r2, #0	@ 0005609e 0022
.org 0x560a0
	ldrsh r0, [r0, r2]	@ 000560a0 805e
.org 0x560a2
	lsls r0, r0, #1	@ 000560a2 4000
.org 0x560a4
	adds r0, r1, r0	@ 000560a4 0818
.org 0x560a6
	str r0, [r5, #4]	@ 000560a6 6860
.org 0x560a8
	ldr r0, [r4, #92]	@ 000560a8 e06d
.org 0x560aa
	ldr r7, [pc, #60]	@ 000560aa 0f4f
.org 0x560ac
	adds r2, r0, r7	@ 000560ac c219
.org 0x560ae
	cmp r1, r2	@ 000560ae 9142
.org 0x560b0
	bgt.n 0x560ce	@ 000560b0 0ddc
.org 0x560b2
	str r2, [r3, #0]	@ 000560b2 1a60
.org 0x560b4
	mov r1, ip	@ 000560b4 6146
.org 0x560b6
	ldrb r0, [r1, #0]	@ 000560b6 0878
.org 0x560b8
	lsls r0, r0, #1	@ 000560b8 4000
.org 0x560ba
	adds r0, r0, r6	@ 000560ba 8019
.org 0x560bc
	movs r7, #0	@ 000560bc 0027
.org 0x560be
	ldrsh r0, [r0, r7]	@ 000560be c05f
.org 0x560c0
	lsls r0, r0, #1	@ 000560c0 4000
.org 0x560c2
	adds r0, r2, r0	@ 000560c2 1018
.org 0x560c4
	str r0, [r5, #4]	@ 000560c4 6860
.org 0x560c6
	movs r1, #0	@ 000560c6 0021
.org 0x560c8
	movs r0, #3	@ 000560c8 0320
.org 0x560ca
	strb r0, [r4, #14]	@ 000560ca a073
.org 0x560cc
	strb r1, [r4, #15]	@ 000560cc e173
.org 0x560ce
	pop {r4, r5, r6, r7}	@ 000560ce f0bc
.org 0x560d0
	pop {r0}	@ 000560d0 01bc
.org 0x560d2
	bx r0	@ 000560d2 0047
