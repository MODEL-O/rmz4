@ FUN_080b8060  entry 0x080b8060  size 152
.thumb
.org 0xb8060
FUN_080b8060:
	push {r4, r5, r6, r7, lr}	@ 000b8060 f0b5
.org 0xb8062
	mov r7, r8	@ 000b8062 4746
.org 0xb8064
	push {r7}	@ 000b8064 80b4
.org 0xb8066
	adds r7, r0, #0	@ 000b8066 071c
.org 0xb8068
	ldr r0, [r7, #40]	@ 000b8068 b86a
.org 0xb806a
	mov r8, r0	@ 000b806a 8046
.org 0xb806c
	ldrb r0, [r7, #14]	@ 000b806c b87b
.org 0xb806e
	cmp r0, #0	@ 000b806e 0028
.org 0xb8070
	bne.n 0xb8082	@ 000b8070 07d1
.org 0xb8072
	movs r0, #89	@ 000b8072 5920
.org 0xb8074
	bl 0x2b10	@ 000b8074 4af74cfd
.org 0xb8078
	movs r0, #34	@ 000b8078 2220
.org 0xb807a
	strb r0, [r7, #18]	@ 000b807a b874
.org 0xb807c
	ldrb r0, [r7, #14]	@ 000b807c b87b
.org 0xb807e
	adds r0, #1	@ 000b807e 0130
.org 0xb8080
	strb r0, [r7, #14]	@ 000b8080 b873
.org 0xb8082
	adds r0, r7, #0	@ 000b8082 381c
.org 0xb8084
	bl 0x1cff0	@ 000b8084 64f7b4ff
.org 0xb8088
	ldr r0, [r7, #100]	@ 000b8088 786e
.org 0xb808a
	movs r1, #3	@ 000b808a 0321
.org 0xb808c
	ands r1, r0	@ 000b808c 0140
.org 0xb808e
	adds r0, #1	@ 000b808e 0130
.org 0xb8090
	str r0, [r7, #100]	@ 000b8090 7866
.org 0xb8092
	cmp r1, #0	@ 000b8092 0029
.org 0xb8094
	bne.n 0xb80a2	@ 000b8094 05d1
.org 0xb8096
	adds r0, r7, #0	@ 000b8096 381c
.org 0xb8098
	adds r0, #84	@ 000b8098 5430
.org 0xb809a
	movs r1, #3	@ 000b809a 0321
.org 0xb809c
	movs r2, #0	@ 000b809c 0022
.org 0xb809e
	bl 0xe41b8	@ 000b809e 2cf08bf8
.org 0xb80a2
	ldr r5, [r7, #84]	@ 000b80a2 7d6d
.org 0xb80a4
	movs r2, #128	@ 000b80a4 8022
.org 0xb80a6
	lsls r2, r2, #2	@ 000b80a6 9200
.org 0xb80a8
	adds r1, r5, r2	@ 000b80a8 a918
.org 0xb80aa
	mov r2, r8	@ 000b80aa 4246
.org 0xb80ac
	ldr r0, [r2, #84]	@ 000b80ac 506d
.org 0xb80ae
	subs r0, r0, r1	@ 000b80ae 401a
.org 0xb80b0
	ldrb r1, [r7, #18]	@ 000b80b0 b97c
.org 0xb80b2
	bl 0x128fb8	@ 000b80b2 70f081ff
.org 0xb80b6
	adds r6, r0, #0	@ 000b80b6 061c
.org 0xb80b8
	str r6, [r7, #92]	@ 000b80b8 fe65
.org 0xb80ba
	ldr r4, [r7, #88]	@ 000b80ba bc6d
.org 0xb80bc
	ldr r0, [pc, #56]	@ 000b80bc 0e48
.org 0xb80be
	adds r1, r4, r0	@ 000b80be 2118
.org 0xb80c0
	mov r2, r8	@ 000b80c0 4246
.org 0xb80c2
	ldr r0, [r2, #88]	@ 000b80c2 906d
.org 0xb80c4
	subs r0, r0, r1	@ 000b80c4 401a
.org 0xb80c6
	ldrb r1, [r7, #18]	@ 000b80c6 b97c
.org 0xb80c8
	bl 0x128fb8	@ 000b80c8 70f076ff
.org 0xb80cc
	str r0, [r7, #96]	@ 000b80cc 3866
.org 0xb80ce
	adds r5, r5, r6	@ 000b80ce ad19
.org 0xb80d0
	str r5, [r7, #84]	@ 000b80d0 7d65
.org 0xb80d2
	adds r4, r4, r0	@ 000b80d2 2418
.org 0xb80d4
	str r4, [r7, #88]	@ 000b80d4 bc65
.org 0xb80d6
	ldrb r0, [r7, #18]	@ 000b80d6 b87c
.org 0xb80d8
	subs r0, #1	@ 000b80d8 0138
.org 0xb80da
	strb r0, [r7, #18]	@ 000b80da b874
.org 0xb80dc
	negs r0, r0	@ 000b80dc 4042
.org 0xb80de
	adds r1, r7, #0	@ 000b80de 391c
.org 0xb80e0
	adds r1, #36	@ 000b80e0 2431
.org 0xb80e2
	strb r0, [r1, #0]	@ 000b80e2 0870
.org 0xb80e4
	ldrb r0, [r7, #18]	@ 000b80e4 b87c
.org 0xb80e6
	cmp r0, #0	@ 000b80e6 0028
.org 0xb80e8
	bne.n 0xb80ee	@ 000b80e8 01d1
.org 0xb80ea
	strb r0, [r7, #13]	@ 000b80ea 7873
.org 0xb80ec
	strb r0, [r7, #14]	@ 000b80ec b873
.org 0xb80ee
	pop {r3}	@ 000b80ee 08bc
.org 0xb80f0
	mov r8, r3	@ 000b80f0 9846
.org 0xb80f2
	pop {r4, r5, r6, r7}	@ 000b80f2 f0bc
.org 0xb80f4
	pop {r0}	@ 000b80f4 01bc
.org 0xb80f6
	bx r0	@ 000b80f6 0047
