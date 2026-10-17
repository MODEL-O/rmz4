@ FUN_080cfbc4  entry 0x080cfbc4  size 102
.thumb
.org 0xcfbc4
FUN_080cfbc4:
	push {r4, lr}	@ 000cfbc4 10b5
.org 0xcfbc6
	adds r4, r0, #0	@ 000cfbc6 041c
.org 0xcfbc8
	ldr r1, [r4, #40]	@ 000cfbc8 a16a
.org 0xcfbca
	ldrb r0, [r4, #15]	@ 000cfbca e07b
.org 0xcfbcc
	cmp r0, #0	@ 000cfbcc 0028
.org 0xcfbce
	bne.n 0xcfbf2	@ 000cfbce 10d1
.org 0xcfbd0
	adds r0, r1, #0	@ 000cfbd0 081c
.org 0xcfbd2
	adds r0, #184	@ 000cfbd2 b830
.org 0xcfbd4
	ldr r0, [r0, #0]	@ 000cfbd4 0068
.org 0xcfbd6
	movs r1, #128	@ 000cfbd6 8021
.org 0xcfbd8
	lsls r1, r1, #5	@ 000cfbd8 4901
.org 0xcfbda
	adds r0, r0, r1	@ 000cfbda 4018
.org 0xcfbdc
	str r0, [r4, #92]	@ 000cfbdc e065
.org 0xcfbde
	ldr r1, [r4, #88]	@ 000cfbde a16d
.org 0xcfbe0
	subs r0, r0, r1	@ 000cfbe0 401a
.org 0xcfbe2
	str r0, [r4, #100]	@ 000cfbe2 6066
.org 0xcfbe4
	adds r1, r4, #0	@ 000cfbe4 211c
.org 0xcfbe6
	adds r1, #184	@ 000cfbe6 b831
.org 0xcfbe8
	movs r0, #64	@ 000cfbe8 4020
.org 0xcfbea
	str r0, [r1, #0]	@ 000cfbea 0860
.org 0xcfbec
	ldrb r0, [r4, #15]	@ 000cfbec e07b
.org 0xcfbee
	adds r0, #1	@ 000cfbee 0130
.org 0xcfbf0
	strb r0, [r4, #15]	@ 000cfbf0 e073
.org 0xcfbf2
	adds r0, r4, #0	@ 000cfbf2 201c
.org 0xcfbf4
	bl 0x1cff0	@ 000cfbf4 4df7fcf9
.org 0xcfbf8
	adds r2, r4, #0	@ 000cfbf8 221c
.org 0xcfbfa
	adds r2, #184	@ 000cfbfa b832
.org 0xcfbfc
	ldr r1, [r2, #0]	@ 000cfbfc 1168
.org 0xcfbfe
	subs r1, #1	@ 000cfbfe 0139
.org 0xcfc00
	str r1, [r2, #0]	@ 000cfc00 1160
.org 0xcfc02
	ldr r0, [r4, #100]	@ 000cfc02 606e
.org 0xcfc04
	negs r0, r0	@ 000cfc04 4042
.org 0xcfc06
	muls r0, r1	@ 000cfc06 4843
.org 0xcfc08
	cmp r0, #0	@ 000cfc08 0028
.org 0xcfc0a
	bge.n 0xcfc0e	@ 000cfc0a 00da
.org 0xcfc0c
	adds r0, #63	@ 000cfc0c 3f30
.org 0xcfc0e
	asrs r1, r0, #6	@ 000cfc0e 8111
.org 0xcfc10
	ldr r0, [r4, #92]	@ 000cfc10 e06d
.org 0xcfc12
	adds r0, r0, r1	@ 000cfc12 4018
.org 0xcfc14
	str r0, [r4, #88]	@ 000cfc14 a065
.org 0xcfc16
	ldr r1, [r2, #0]	@ 000cfc16 1168
.org 0xcfc18
	cmp r1, #0	@ 000cfc18 0029
.org 0xcfc1a
	bne.n 0xcfc24	@ 000cfc1a 03d1
.org 0xcfc1c
	movs r0, #2	@ 000cfc1c 0220
.org 0xcfc1e
	strb r0, [r4, #13]	@ 000cfc1e 6073
.org 0xcfc20
	strb r1, [r4, #14]	@ 000cfc20 a173
.org 0xcfc22
	strb r1, [r4, #15]	@ 000cfc22 e173
.org 0xcfc24
	pop {r4}	@ 000cfc24 10bc
.org 0xcfc26
	pop {r0}	@ 000cfc26 01bc
.org 0xcfc28
	bx r0	@ 000cfc28 0047
