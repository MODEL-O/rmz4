@ FUN_08076fac  entry 0x08076fac  size 200
.thumb
.org 0x76fac
FUN_08076fac:
	push {r4, r5, r6, r7, lr}	@ 00076fac f0b5
.org 0x76fae
	mov r7, r8	@ 00076fae 4746
.org 0x76fb0
	push {r7}	@ 00076fb0 80b4
.org 0x76fb2
	adds r7, r0, #0	@ 00076fb2 071c
.org 0x76fb4
	ldr r0, [r7, #12]	@ 00076fb4 f868
.org 0x76fb6
	ldr r4, [r0, #44]	@ 00076fb6 c46a
.org 0x76fb8
	ldr r0, [r7, #44]	@ 00076fb8 f86a
.org 0x76fba
	mov r8, r0	@ 00076fba 8046
.org 0x76fbc
	ldr r0, [r7, #20]	@ 00076fbc 7869
.org 0x76fbe
	movs r1, #4	@ 00076fbe 0421
.org 0x76fc0
	mov ip, r1	@ 00076fc0 8c46
.org 0x76fc2
	ands r0, r1	@ 00076fc2 0840
.org 0x76fc4
	cmp r0, #0	@ 00076fc4 0028
.org 0x76fc6
	beq.n 0x7704a	@ 00076fc6 40d0
.org 0x76fc8
	mov r0, r8	@ 00076fc8 4046
.org 0x76fca
	adds r0, #217	@ 00076fca d930
.org 0x76fcc
	ldrb r2, [r0, #0]	@ 00076fcc 0278
.org 0x76fce
	cmp r2, #0	@ 00076fce 002a
.org 0x76fd0
	beq.n 0x7704a	@ 00076fd0 3bd0
.org 0x76fd2
	movs r0, #8	@ 00076fd2 0820
.org 0x76fd4
	ldrsb r0, [r4, r0]	@ 00076fd4 2056
.org 0x76fd6
	cmp r0, #0	@ 00076fd6 0028
.org 0x76fd8
	bne.n 0x7704a	@ 00076fd8 37d1
.org 0x76fda
	ldrb r5, [r4, #9]	@ 00076fda 657a
.org 0x76fdc
	cmp r5, #0	@ 00076fdc 002d
.org 0x76fde
	bne.n 0x7704a	@ 00076fde 34d1
.org 0x76fe0
	mov r3, r8	@ 00076fe0 4346
.org 0x76fe2
	ldrb r1, [r3, #10]	@ 00076fe2 997a
.org 0x76fe4
	movs r0, #16	@ 00076fe4 1020
.org 0x76fe6
	ands r0, r1	@ 00076fe6 0840
.org 0x76fe8
	ldr r6, [pc, #40]	@ 00076fe8 0a4e
.org 0x76fea
	cmp r0, #0	@ 00076fea 0028
.org 0x76fec
	beq.n 0x76ff2	@ 00076fec 01d0
.org 0x76fee
	movs r6, #192	@ 00076fee c026
.org 0x76ff0
	lsls r6, r6, #3	@ 00076ff0 f600
.org 0x76ff2
	cmp r2, #1	@ 00076ff2 012a
.org 0x76ff4
	bne.n 0x77018	@ 00076ff4 10d1
.org 0x76ff6
	adds r2, r4, #0	@ 00076ff6 221c
.org 0x76ff8
	adds r2, #180	@ 00076ff8 b432
.org 0x76ffa
	movs r0, #161	@ 00076ffa a120
.org 0x76ffc
	lsls r0, r0, #1	@ 00076ffc 4000
.org 0x76ffe
	adds r3, r4, r0	@ 00076ffe 2318
.org 0x77000
	ldrb r0, [r3, #0]	@ 00077000 1878
.org 0x77002
	movs r1, #64	@ 00077002 4021
.org 0x77004
	orrs r0, r1	@ 00077004 0843
.org 0x77006
	strb r0, [r3, #0]	@ 00077006 1870
.org 0x77008
	mov r1, ip	@ 00077008 6146
.org 0x7700a
	strb r1, [r4, #13]	@ 0007700a 6173
.org 0x7700c
	strb r5, [r4, #14]	@ 0007700c a573
.org 0x7700e
	str r6, [r2, #116]	@ 0007700e 5667
.org 0x77010
	ldr r0, [pc, #0]	@ 00077010 0048
.org 0x77012
	b.n 0x77034	@ 00077012 0fe0
.org 0x77014
	.byte 0x00,0xfa,0xff,0xff	@ 00077014 data
.org 0x77018
	adds r2, r4, #0	@ 00077018 221c
.org 0x7701a
	adds r2, #180	@ 0007701a b432
.org 0x7701c
	movs r0, #161	@ 0007701c a120
.org 0x7701e
	lsls r0, r0, #1	@ 0007701e 4000
.org 0x77020
	adds r3, r4, r0	@ 00077020 2318
.org 0x77022
	ldrb r0, [r3, #0]	@ 00077022 1878
.org 0x77024
	movs r1, #64	@ 00077024 4021
.org 0x77026
	orrs r0, r1	@ 00077026 0843
.org 0x77028
	strb r0, [r3, #0]	@ 00077028 1870
.org 0x7702a
	mov r1, ip	@ 0007702a 6146
.org 0x7702c
	strb r1, [r4, #13]	@ 0007702c 6173
.org 0x7702e
	strb r5, [r4, #14]	@ 0007702e a573
.org 0x77030
	str r6, [r2, #116]	@ 00077030 5667
.org 0x77032
	ldr r0, [pc, #68]	@ 00077032 1148
.org 0x77034
	str r0, [r2, #120]	@ 00077034 9067
.org 0x77036
	str r5, [r2, #124]	@ 00077036 d567
.org 0x77038
	movs r3, #154	@ 00077038 9a23
.org 0x7703a
	lsls r3, r3, #1	@ 0007703a 5b00
.org 0x7703c
	adds r1, r4, r3	@ 0007703c e118
.org 0x7703e
	movs r0, #64	@ 0007703e 4020
.org 0x77040
	str r0, [r1, #0]	@ 00077040 0860
.org 0x77042
	movs r1, #156	@ 00077042 9c21
.org 0x77044
	lsls r1, r1, #1	@ 00077044 4900
.org 0x77046
	adds r0, r4, r1	@ 00077046 6018
.org 0x77048
	strh r5, [r0, #0]	@ 00077048 0580
.org 0x7704a
	ldr r0, [r7, #20]	@ 0007704a 7869
.org 0x7704c
	movs r1, #1	@ 0007704c 0121
.org 0x7704e
	ands r0, r1	@ 0007704e 0840
.org 0x77050
	cmp r0, #0	@ 00077050 0028
.org 0x77052
	beq.n 0x7706e	@ 00077052 0cd0
.org 0x77054
	movs r0, #69	@ 00077054 4520
.org 0x77056
	bl 0x6984	@ 00077056 8ff795fc
.org 0x7705a
	movs r2, #0	@ 0007705a 0022
.org 0x7705c
	ldr r1, [r4, #84]	@ 0007705c 616d
.org 0x7705e
	mov r3, r8	@ 0007705e 4346
.org 0x77060
	ldr r0, [r3, #84]	@ 00077060 586d
.org 0x77062
	cmp r1, r0	@ 00077062 8142
.org 0x77064
	ble.n 0x77068	@ 00077064 00dd
.org 0x77066
	movs r2, #1	@ 00077066 0122
.org 0x77068
	mov r0, r8	@ 00077068 4046
.org 0x7706a
	adds r0, #216	@ 0007706a d830
.org 0x7706c
	strb r2, [r0, #0]	@ 0007706c 0270
.org 0x7706e
	pop {r3}	@ 0007706e 08bc
.org 0x77070
	mov r8, r3	@ 00077070 9846
.org 0x77072
	pop {r4, r5, r6, r7}	@ 00077072 f0bc
