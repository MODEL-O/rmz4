@ FUN_0809602c  entry 0x0809602c  size 126
.thumb
.org 0x9602c
FUN_0809602c:
	push {r4, r5, r6, lr}	@ 0009602c 70b5
.org 0x9602e
	adds r4, r0, #0	@ 0009602e 041c
.org 0x96030
	ldr r2, [r4, #40]	@ 00096030 a26a
.org 0x96032
	ldr r6, [r2, #40]	@ 00096032 966a
.org 0x96034
	ldrb r0, [r4, #15]	@ 00096034 e07b
.org 0x96036
	adds r1, r0, #0	@ 00096036 011c
.org 0x96038
	cmp r1, #0	@ 00096038 0029
.org 0x9603a
	bne.n 0x96042	@ 0009603a 02d1
.org 0x9603c
	str r1, [r4, #96]	@ 0009603c 2166
.org 0x9603e
	adds r0, #1	@ 0009603e 0130
.org 0x96040
	strb r0, [r4, #15]	@ 00096040 e073
.org 0x96042
	ldrb r0, [r2, #12]	@ 00096042 107b
.org 0x96044
	cmp r0, #1	@ 00096044 0128
.org 0x96046
	bhi.n 0x96058	@ 00096046 07d8
.org 0x96048
	adds r0, r4, #0	@ 00096048 201c
.org 0x9604a
	adds r0, #140	@ 0009604a 8c30
.org 0x9604c
	ldr r5, [r0, #0]	@ 0009604c 0568
.org 0x9604e
	movs r0, #128	@ 0009604e 8020
.org 0x96050
	lsls r0, r0, #2	@ 00096050 8000
.org 0x96052
	ands r5, r0	@ 00096052 0540
.org 0x96054
	cmp r5, #0	@ 00096054 002d
.org 0x96056
	beq.n 0x96078	@ 00096056 0fd0
.org 0x96058
	ldr r1, [pc, #24]	@ 00096058 0649
.org 0x9605a
	ldrb r0, [r4, #9]	@ 0009605a 607a
.org 0x9605c
	lsls r0, r0, #2	@ 0009605c 8000
.org 0x9605e
	adds r0, r0, r1	@ 0009605e 4018
.org 0x96060
	movs r1, #2	@ 00096060 0221
.org 0x96062
	str r1, [r4, #12]	@ 00096062 e160
.org 0x96064
	ldr r0, [r0, #0]	@ 00096064 0068
.org 0x96066
	ldr r0, [r0, #8]	@ 00096066 8068
.org 0x96068
	str r0, [r4, #20]	@ 00096068 6061
.org 0x9606a
	adds r0, r4, #0	@ 0009606a 201c
.org 0x9606c
	bl 0x96224	@ 0009606c 00f0daf8
.org 0x96070
	b.n 0x960aa	@ 00096070 1be0
.org 0x96072
	.byte 0x00	@ 00096072 data
.org 0x96073
	.byte 0x00	@ 00096073 data
.org 0x96074
	.byte 0x40,0xdb,0x85,0x08	@ 00096074 data
.org 0x96078
	adds r0, r4, #0	@ 00096078 201c
.org 0x9607a
	bl 0x1d1f4	@ 0009607a 87f7bbf8
.org 0x9607e
	ldr r0, [r4, #88]	@ 0009607e a06d
.org 0x96080
	ldr r1, [r4, #96]	@ 00096080 216e
.org 0x96082
	adds r0, r0, r1	@ 00096082 4018
.org 0x96084
	str r0, [r4, #88]	@ 00096084 a065
.org 0x96086
	adds r1, #64	@ 00096086 4031
.org 0x96088
	str r1, [r4, #96]	@ 00096088 2166
.org 0x9608a
	movs r0, #224	@ 0009608a e020
.org 0x9608c
	lsls r0, r0, #3	@ 0009608c c000
.org 0x9608e
	cmp r1, r0	@ 0009608e 8142
.org 0x96090
	ble.n 0x96094	@ 00096090 00dd
.org 0x96092
	str r0, [r4, #96]	@ 00096092 2066
.org 0x96094
	adds r0, r6, #0	@ 00096094 301c
.org 0x96096
	adds r0, #180	@ 00096096 b430
.org 0x96098
	ldr r1, [r4, #88]	@ 00096098 a16d
.org 0x9609a
	ldr r0, [r0, #0]	@ 0009609a 0068
.org 0x9609c
	cmp r1, r0	@ 0009609c 8142
.org 0x9609e
	blt.n 0x960aa	@ 0009609e 04db
.org 0x960a0
	str r0, [r4, #88]	@ 000960a0 a065
.org 0x960a2
	movs r0, #1	@ 000960a2 0120
.org 0x960a4
	strb r0, [r4, #13]	@ 000960a4 6073
.org 0x960a6
	strb r5, [r4, #14]	@ 000960a6 a573
.org 0x960a8
	strb r5, [r4, #15]	@ 000960a8 e573
