@ FUN_08088ff0  entry 0x08088ff0  size 194
.thumb
.org 0x88ff0
FUN_08088ff0:
	push {r4, r5, r6, r7, lr}	@ 00088ff0 f0b5
.org 0x88ff2
	mov r7, sl	@ 00088ff2 5746
.org 0x88ff4
	mov r6, r9	@ 00088ff4 4e46
.org 0x88ff6
	mov r5, r8	@ 00088ff6 4546
.org 0x88ff8
	push {r5, r6, r7}	@ 00088ff8 e0b4
.org 0x88ffa
	mov r9, r0	@ 00088ffa 8146
.org 0x88ffc
	mov sl, r1	@ 00088ffc 8a46
.org 0x88ffe
	lsls r2, r2, #24	@ 00088ffe 1206
.org 0x89000
	lsrs r5, r2, #24	@ 00089000 150e
.org 0x89002
	lsls r3, r3, #24	@ 00089002 1b06
.org 0x89004
	lsrs r3, r3, #24	@ 00089004 1b0e
.org 0x89006
	ldr r0, [pc, #172]	@ 00089006 2b48
.org 0x89008
	ldr r1, [pc, #172]	@ 00089008 2b49
.org 0x8900a
	adds r0, r0, r1	@ 0008900a 4018
.org 0x8900c
	mov r2, r9	@ 0008900c 4a46
.org 0x8900e
	ldr r1, [r2, #4]	@ 0008900e 5168
.org 0x89010
	ldr r0, [r0, #0]	@ 00089010 0068
.org 0x89012
	cmp r1, r0	@ 00089012 8142
.org 0x89014
	ble.n 0x890a4	@ 00089014 46dd
.org 0x89016
	ldr r4, [pc, #164]	@ 00089016 294c
.org 0x89018
	ldr r0, [r4, #0]	@ 00089018 2068
.org 0x8901a
	ldr r6, [pc, #164]	@ 0008901a 294e
.org 0x8901c
	muls r0, r6	@ 0008901c 7043
.org 0x8901e
	ldr r1, [pc, #164]	@ 0008901e 2949
.org 0x89020
	adds r0, r0, r1	@ 00089020 4018
.org 0x89022
	lsls r0, r0, #1	@ 00089022 4000
.org 0x89024
	lsrs r1, r0, #1	@ 00089024 4108
.org 0x89026
	str r1, [r4, #0]	@ 00089026 2160
.org 0x89028
	lsrs r0, r0, #17	@ 00089028 400c
.org 0x8902a
	subs r1, r3, r5	@ 0008902a 591b
.org 0x8902c
	bl 0x129198	@ 0008902c a0f0b4f8
.org 0x89030
	adds r7, r0, r5	@ 00089030 4719
.org 0x89032
	cmp r7, #0	@ 00089032 002f
.org 0x89034
	ble.n 0x890a4	@ 00089034 36dd
.org 0x89036
	mov r8, r4	@ 00089036 a046
.org 0x89038
	mov r2, r9	@ 00089038 4a46
.org 0x8903a
	ldr r6, [r2, #0]	@ 0008903a 1668
.org 0x8903c
	mov r3, sl	@ 0008903c 5346
.org 0x8903e
	ldr r2, [r3, #0]	@ 0008903e 1a68
.org 0x89040
	cmp r2, #0	@ 00089040 002a
.org 0x89042
	beq.n 0x89066	@ 00089042 10d0
.org 0x89044
	negs r4, r2	@ 00089044 5442
.org 0x89046
	mov r1, r8	@ 00089046 4146
.org 0x89048
	ldr r0, [r1, #0]	@ 00089048 0868
.org 0x8904a
	ldr r3, [pc, #116]	@ 0008904a 1d4b
.org 0x8904c
	muls r0, r3	@ 0008904c 5843
.org 0x8904e
	ldr r1, [pc, #116]	@ 0008904e 1d49
.org 0x89050
	adds r0, r0, r1	@ 00089050 4018
.org 0x89052
	lsls r0, r0, #1	@ 00089052 4000
.org 0x89054
	lsrs r1, r0, #1	@ 00089054 4108
.org 0x89056
	mov r3, r8	@ 00089056 4346
.org 0x89058
	str r1, [r3, #0]	@ 00089058 1960
.org 0x8905a
	lsrs r0, r0, #17	@ 0008905a 400c
.org 0x8905c
	lsls r1, r2, #1	@ 0008905c 5100
.org 0x8905e
	bl 0x129198	@ 0008905e a0f09bf8
.org 0x89062
	adds r4, r4, r0	@ 00089062 2418
.org 0x89064
	adds r6, r6, r4	@ 00089064 3619
.org 0x89066
	mov r0, r9	@ 00089066 4846
.org 0x89068
	ldr r5, [r0, #4]	@ 00089068 4568
.org 0x8906a
	mov r1, sl	@ 0008906a 5146
.org 0x8906c
	ldr r2, [r1, #4]	@ 0008906c 4a68
.org 0x8906e
	cmp r2, #0	@ 0008906e 002a
.org 0x89070
	beq.n 0x89094	@ 00089070 10d0
.org 0x89072
	negs r4, r2	@ 00089072 5442
.org 0x89074
	mov r3, r8	@ 00089074 4346
.org 0x89076
	ldr r0, [r3, #0]	@ 00089076 1868
.org 0x89078
	ldr r1, [pc, #68]	@ 00089078 1149
.org 0x8907a
	muls r0, r1	@ 0008907a 4843
.org 0x8907c
	ldr r3, [pc, #68]	@ 0008907c 114b
.org 0x8907e
	adds r0, r0, r3	@ 0008907e c018
.org 0x89080
	lsls r0, r0, #1	@ 00089080 4000
.org 0x89082
	lsrs r1, r0, #1	@ 00089082 4108
.org 0x89084
	mov r3, r8	@ 00089084 4346
.org 0x89086
	str r1, [r3, #0]	@ 00089086 1960
.org 0x89088
	lsrs r0, r0, #17	@ 00089088 400c
.org 0x8908a
	lsls r1, r2, #1	@ 0008908a 5100
.org 0x8908c
	bl 0x129198	@ 0008908c a0f084f8
.org 0x89090
	adds r4, r4, r0	@ 00089090 2418
.org 0x89092
	adds r5, r5, r4	@ 00089092 2d19
.org 0x89094
	adds r0, r6, #0	@ 00089094 301c
.org 0x89096
	adds r1, r5, #0	@ 00089096 291c
.org 0x89098
	movs r2, #0	@ 00089098 0022
.org 0x8909a
	bl 0xd0ff4	@ 0008909a 47f0abff
.org 0x8909e
	subs r7, #1	@ 0008909e 013f
.org 0x890a0
	cmp r7, #0	@ 000890a0 002f
.org 0x890a2
	bgt.n 0x89038	@ 000890a2 c9dc
.org 0x890a4
	pop {r3, r4, r5}	@ 000890a4 38bc
.org 0x890a6
	mov r8, r3	@ 000890a6 9846
.org 0x890a8
	mov r9, r4	@ 000890a8 a146
.org 0x890aa
	mov sl, r5	@ 000890aa aa46
.org 0x890ac
	pop {r4, r5, r6, r7}	@ 000890ac f0bc
.org 0x890ae
	pop {r0}	@ 000890ae 01bc
.org 0x890b0
	bx r0	@ 000890b0 0047
