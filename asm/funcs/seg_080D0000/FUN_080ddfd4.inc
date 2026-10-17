@ FUN_080ddfd4  entry 0x080ddfd4  size 202
.thumb
.org 0xddfd4
FUN_080ddfd4:
	push {r4, r5, r6, lr}	@ 000ddfd4 70b5
.org 0xddfd6
	mov r6, sl	@ 000ddfd6 5646
.org 0xddfd8
	mov r5, r9	@ 000ddfd8 4d46
.org 0xddfda
	mov r4, r8	@ 000ddfda 4446
.org 0xddfdc
	push {r4, r5, r6}	@ 000ddfdc 70b4
.org 0xddfde
	sub sp, #8	@ 000ddfde 82b0
.org 0xddfe0
	mov sl, r0	@ 000ddfe0 8246
.org 0xddfe2
	ldr r0, [r0, #84]	@ 000ddfe2 406d
.org 0xddfe4
	str r0, [sp, #0]	@ 000ddfe4 0090
.org 0xddfe6
	mov r1, sl	@ 000ddfe6 5146
.org 0xddfe8
	ldr r0, [r1, #88]	@ 000ddfe8 886d
.org 0xddfea
	str r0, [sp, #4]	@ 000ddfea 0190
.org 0xddfec
	ldr r2, [pc, #176]	@ 000ddfec 2c4a
.org 0xddfee
	mov r9, r2	@ 000ddfee 9146
.org 0xddff0
	ldr r5, [pc, #176]	@ 000ddff0 2c4d
.org 0xddff2
	ldr r0, [r5, #0]	@ 000ddff2 2868
.org 0xddff4
	ldr r1, [pc, #176]	@ 000ddff4 2c49
.org 0xddff6
	mov r8, r1	@ 000ddff6 8846
.org 0xddff8
	mov r3, r8	@ 000ddff8 4346
.org 0xddffa
	muls r3, r0	@ 000ddffa 4343
.org 0xddffc
	ldr r6, [pc, #172]	@ 000ddffc 2b4e
.org 0xddffe
	adds r3, r3, r6	@ 000ddffe 9b19
.org 0xde000
	lsls r3, r3, #1	@ 000de000 5b00
.org 0xde002
	lsrs r0, r3, #1	@ 000de002 5808
.org 0xde004
	str r0, [r5, #0]	@ 000de004 2860
.org 0xde006
	lsrs r3, r3, #17	@ 000de006 5b0c
.org 0xde008
	movs r4, #1	@ 000de008 0124
.org 0xde00a
	ands r3, r4	@ 000de00a 2340
.org 0xde00c
	lsls r3, r3, #4	@ 000de00c 1b01
.org 0xde00e
	mov r0, sp	@ 000de00e 6846
.org 0xde010
	mov r1, r9	@ 000de010 4946
.org 0xde012
	movs r2, #0	@ 000de012 0022
.org 0xde014
	bl 0xd4c8c	@ 000de014 f6f73afe
.org 0xde018
	ldr r0, [r5, #0]	@ 000de018 2868
.org 0xde01a
	mov r3, r8	@ 000de01a 4346
.org 0xde01c
	muls r3, r0	@ 000de01c 4343
.org 0xde01e
	adds r3, r3, r6	@ 000de01e 9b19
.org 0xde020
	lsls r3, r3, #1	@ 000de020 5b00
.org 0xde022
	lsrs r0, r3, #1	@ 000de022 5808
.org 0xde024
	str r0, [r5, #0]	@ 000de024 2860
.org 0xde026
	lsrs r3, r3, #17	@ 000de026 5b0c
.org 0xde028
	ands r3, r4	@ 000de028 2340
.org 0xde02a
	lsls r3, r3, #4	@ 000de02a 1b01
.org 0xde02c
	orrs r3, r4	@ 000de02c 2343
.org 0xde02e
	mov r0, sp	@ 000de02e 6846
.org 0xde030
	mov r1, r9	@ 000de030 4946
.org 0xde032
	movs r2, #0	@ 000de032 0022
.org 0xde034
	bl 0xd4c8c	@ 000de034 f6f72afe
.org 0xde038
	movs r2, #28	@ 000de038 1c22
.org 0xde03a
	add r9, r2	@ 000de03a 9144
.org 0xde03c
	ldr r0, [r5, #0]	@ 000de03c 2868
.org 0xde03e
	mov r3, r8	@ 000de03e 4346
.org 0xde040
	muls r3, r0	@ 000de040 4343
.org 0xde042
	adds r3, r3, r6	@ 000de042 9b19
.org 0xde044
	lsls r3, r3, #1	@ 000de044 5b00
.org 0xde046
	lsrs r0, r3, #1	@ 000de046 5808
.org 0xde048
	lsrs r3, r3, #17	@ 000de048 5b0c
.org 0xde04a
	ands r3, r4	@ 000de04a 2340
.org 0xde04c
	lsls r3, r3, #4	@ 000de04c 1b01
.org 0xde04e
	mov r1, r8	@ 000de04e 4146
.org 0xde050
	muls r1, r0	@ 000de050 4143
.org 0xde052
	adds r0, r1, #0	@ 000de052 081c
.org 0xde054
	adds r0, r0, r6	@ 000de054 8019
.org 0xde056
	lsls r0, r0, #1	@ 000de056 4000
.org 0xde058
	lsrs r1, r0, #1	@ 000de058 4108
.org 0xde05a
	str r1, [r5, #0]	@ 000de05a 2960
.org 0xde05c
	lsrs r0, r0, #17	@ 000de05c 400c
.org 0xde05e
	ands r0, r4	@ 000de05e 2040
.org 0xde060
	orrs r3, r0	@ 000de060 0343
.org 0xde062
	mov r0, sp	@ 000de062 6846
.org 0xde064
	mov r1, r9	@ 000de064 4946
.org 0xde066
	movs r2, #0	@ 000de066 0022
.org 0xde068
	bl 0xd4c8c	@ 000de068 f6f710fe
.org 0xde06c
	movs r0, #1	@ 000de06c 0120
.org 0xde06e
	mov r1, sp	@ 000de06e 6946
.org 0xde070
	bl 0xd0c88	@ 000de070 f2f70afe
.org 0xde074
	movs r0, #42	@ 000de074 2a20
.org 0xde076
	bl 0x2b10	@ 000de076 24f74bfd
.org 0xde07a
	ldr r1, [pc, #52]	@ 000de07a 0d49
.org 0xde07c
	mov r2, sl	@ 000de07c 5246
.org 0xde07e
	ldrb r0, [r2, #9]	@ 000de07e 507a
.org 0xde080
	lsls r0, r0, #2	@ 000de080 8000
.org 0xde082
	adds r0, r0, r1	@ 000de082 4018
.org 0xde084
	movs r1, #4	@ 000de084 0421
.org 0xde086
	str r1, [r2, #12]	@ 000de086 d160
.org 0xde088
	ldr r0, [r0, #0]	@ 000de088 0068
.org 0xde08a
	ldr r0, [r0, #16]	@ 000de08a 0069
.org 0xde08c
	str r0, [r2, #20]	@ 000de08c 5061
.org 0xde08e
	add sp, #8	@ 000de08e 02b0
.org 0xde090
	pop {r3, r4, r5}	@ 000de090 38bc
.org 0xde092
	mov r8, r3	@ 000de092 9846
.org 0xde094
	mov r9, r4	@ 000de094 a146
.org 0xde096
	mov sl, r5	@ 000de096 aa46
.org 0xde098
	pop {r4, r5, r6}	@ 000de098 70bc
.org 0xde09a
	pop {r0}	@ 000de09a 01bc
.org 0xde09c
	bx r0	@ 000de09c 0047
