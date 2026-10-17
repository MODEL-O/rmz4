@ FUN_080ca024  entry 0x080ca024  size 112
.thumb
.org 0xca024
FUN_080ca024:
	push {r4, r5, lr}	@ 000ca024 30b5
.org 0xca026
	adds r4, r0, #0	@ 000ca026 041c
.org 0xca028
	ldr r1, [r4, #92]	@ 000ca028 e16d
.org 0xca02a
	cmp r1, #0	@ 000ca02a 0029
.org 0xca02c
	beq.n 0xca036	@ 000ca02c 03d0
.org 0xca02e
	ldr r0, [r4, #84]	@ 000ca02e 606d
.org 0xca030
	adds r0, r0, r1	@ 000ca030 4018
.org 0xca032
	str r0, [r4, #84]	@ 000ca032 6065
.org 0xca034
	b.n 0xca03e	@ 000ca034 03e0
.org 0xca036
	ldr r0, [r4, #88]	@ 000ca036 a06d
.org 0xca038
	ldr r1, [r4, #96]	@ 000ca038 216e
.org 0xca03a
	adds r0, r0, r1	@ 000ca03a 4018
.org 0xca03c
	str r0, [r4, #88]	@ 000ca03c a065
.org 0xca03e
	ldrb r0, [r4, #17]	@ 000ca03e 607c
.org 0xca040
	cmp r0, #0	@ 000ca040 0028
.org 0xca042
	bne.n 0xca08e	@ 000ca042 24d1
.org 0xca044
	adds r0, r4, #0	@ 000ca044 201c
.org 0xca046
	adds r0, #180	@ 000ca046 b430
.org 0xca048
	ldrb r5, [r0, #0]	@ 000ca048 0578
.org 0xca04a
	cmp r5, #0	@ 000ca04a 002d
.org 0xca04c
	bne.n 0xca08e	@ 000ca04c 1fd1
.org 0xca04e
	adds r0, r4, #0	@ 000ca04e 201c
.org 0xca050
	bl 0xca410	@ 000ca050 00f0def9
.org 0xca054
	lsls r0, r0, #24	@ 000ca054 0006
.org 0xca056
	cmp r0, #0	@ 000ca056 0028
.org 0xca058
	beq.n 0xca08e	@ 000ca058 19d0
.org 0xca05a
	movs r0, #2	@ 000ca05a 0220
.org 0xca05c
	strb r0, [r4, #13]	@ 000ca05c 6073
.org 0xca05e
	strb r5, [r4, #14]	@ 000ca05e a573
.org 0xca060
	ldr r0, [r4, #40]	@ 000ca060 a06a
.org 0xca062
	cmp r0, #0	@ 000ca062 0028
.org 0xca064
	beq.n 0xca06c	@ 000ca064 02d0
.org 0xca066
	adds r0, r4, #0	@ 000ca066 201c
.org 0xca068
	bl 0xca468	@ 000ca068 00f0fef9
.org 0xca06c
	adds r0, r4, #0	@ 000ca06c 201c
.org 0xca06e
	adds r0, #84	@ 000ca06e 5430
.org 0xca070
	ldrb r3, [r4, #10]	@ 000ca070 a37a
.org 0xca072
	lsrs r3, r3, #4	@ 000ca072 1b09
.org 0xca074
	movs r1, #1	@ 000ca074 0121
.org 0xca076
	ands r3, r1	@ 000ca076 0b40
.org 0xca078
	movs r2, #1	@ 000ca078 0122
.org 0xca07a
	bl 0xc9bc0	@ 000ca07a fff7a1fd
.org 0xca07e
	str r0, [r4, #40]	@ 000ca07e a062
.org 0xca080
	adds r1, r4, #0	@ 000ca080 211c
.org 0xca082
	adds r1, #184	@ 000ca082 b831
.org 0xca084
	ldr r0, [r4, #84]	@ 000ca084 606d
.org 0xca086
	str r0, [r1, #0]	@ 000ca086 0860
.org 0xca088
	adds r1, #4	@ 000ca088 0431
.org 0xca08a
	ldr r0, [r4, #88]	@ 000ca08a a06d
.org 0xca08c
	str r0, [r1, #0]	@ 000ca08c 0860
.org 0xca08e
	pop {r4, r5}	@ 000ca08e 30bc
.org 0xca090
	pop {r0}	@ 000ca090 01bc
.org 0xca092
	bx r0	@ 000ca092 0047
