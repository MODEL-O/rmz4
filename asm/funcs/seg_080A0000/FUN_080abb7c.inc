@ FUN_080abb7c  entry 0x080abb7c  size 60
.thumb
.org 0xabb7c
FUN_080abb7c:
	push {lr}	@ 000abb7c 00b5
.org 0xabb7e
	adds r2, r0, #0	@ 000abb7e 021c
.org 0xabb80
	ldrb r1, [r2, #15]	@ 000abb80 d17b
.org 0xabb82
	cmp r1, #0	@ 000abb82 0029
.org 0xabb84
	bne.n 0xabb8e	@ 000abb84 03d1
.org 0xabb86
	movs r0, #8	@ 000abb86 0820
.org 0xabb88
	strb r0, [r2, #18]	@ 000abb88 9074
.org 0xabb8a
	adds r0, r1, #1	@ 000abb8a 481c
.org 0xabb8c
	strb r0, [r2, #15]	@ 000abb8c d073
.org 0xabb8e
	ldrb r0, [r2, #18]	@ 000abb8e 907c
.org 0xabb90
	subs r0, #1	@ 000abb90 0138
.org 0xabb92
	strb r0, [r2, #18]	@ 000abb92 9074
.org 0xabb94
	ldrb r1, [r2, #18]	@ 000abb94 917c
.org 0xabb96
	lsls r0, r1, #3	@ 000abb96 c800
.org 0xabb98
	adds r0, r0, r1	@ 000abb98 4018
.org 0xabb9a
	lsls r0, r0, #2	@ 000abb9a 8000
.org 0xabb9c
	adds r1, r2, #0	@ 000abb9c 111c
.org 0xabb9e
	adds r1, #194	@ 000abb9e c231
.org 0xabba0
	movs r3, #0	@ 000abba0 0023
.org 0xabba2
	strh r0, [r1, #0]	@ 000abba2 0880
.org 0xabba4
	ldrb r0, [r2, #18]	@ 000abba4 907c
.org 0xabba6
	cmp r0, #0	@ 000abba6 0028
.org 0xabba8
	bne.n 0xabbb4	@ 000abba8 04d1
.org 0xabbaa
	ldrb r0, [r2, #13]	@ 000abbaa 507b
.org 0xabbac
	adds r0, #1	@ 000abbac 0130
.org 0xabbae
	strb r0, [r2, #13]	@ 000abbae 5073
.org 0xabbb0
	strb r3, [r2, #14]	@ 000abbb0 9373
.org 0xabbb2
	strb r3, [r2, #15]	@ 000abbb2 d373
.org 0xabbb4
	pop {r0}	@ 000abbb4 01bc
.org 0xabbb6
	bx r0	@ 000abbb6 0047
