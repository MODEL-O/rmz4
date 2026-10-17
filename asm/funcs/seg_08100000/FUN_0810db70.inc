@ FUN_0810db70  entry 0x0810db70  size 102
.thumb
.org 0x10db70
FUN_0810db70:
	push {r4, r5, r6, r7, lr}	@ 0010db70 f0b5
.org 0x10db72
	sub sp, #16	@ 0010db72 84b0
.org 0x10db74
	adds r4, r0, #0	@ 0010db74 041c
.org 0x10db76
	lsls r1, r1, #16	@ 0010db76 0904
.org 0x10db78
	lsrs r1, r1, #16	@ 0010db78 090c
.org 0x10db7a
	mov ip, r1	@ 0010db7a 8c46
.org 0x10db7c
	lsls r2, r2, #16	@ 0010db7c 1204
.org 0x10db7e
	lsrs r7, r2, #16	@ 0010db7e 170c
.org 0x10db80
	lsls r3, r3, #16	@ 0010db80 1b04
.org 0x10db82
	lsrs r0, r3, #16	@ 0010db82 180c
.org 0x10db84
	lsls r2, r0, #16	@ 0010db84 0204
.org 0x10db86
	adds r0, r2, #0	@ 0010db86 101c
.org 0x10db88
	asrs r0, r0, #16	@ 0010db88 0014
.org 0x10db8a
	mov r3, sp	@ 0010db8a 6b46
.org 0x10db8c
	adds r1, r3, r0	@ 0010db8c 1918
.org 0x10db8e
	movs r0, #0	@ 0010db8e 0020
.org 0x10db90
	strb r0, [r1, #0]	@ 0010db90 0870
.org 0x10db92
	ldr r1, [pc, #68]	@ 0010db92 1149
.org 0x10db94
	adds r0, r2, r1	@ 0010db94 5018
.org 0x10db96
	cmp r0, #0	@ 0010db96 0028
.org 0x10db98
	blt.n 0x10dbc4	@ 0010db98 14db
.org 0x10db9a
	movs r6, #15	@ 0010db9a 0f26
.org 0x10db9c
	movs r5, #255	@ 0010db9c ff25
.org 0x10db9e
	asrs r2, r0, #16	@ 0010db9e 0214
.org 0x10dba0
	mov r0, sp	@ 0010dba0 6846
.org 0x10dba2
	adds r3, r0, r2	@ 0010dba2 8318
.org 0x10dba4
	adds r1, r4, #0	@ 0010dba4 211c
.org 0x10dba6
	ands r1, r6	@ 0010dba6 3140
.org 0x10dba8
	adds r0, r1, #0	@ 0010dba8 081c
.org 0x10dbaa
	adds r0, #48	@ 0010dbaa 3030
.org 0x10dbac
	strb r0, [r3, #0]	@ 0010dbac 1870
.org 0x10dbae
	ands r0, r5	@ 0010dbae 2840
.org 0x10dbb0
	cmp r0, #57	@ 0010dbb0 3928
.org 0x10dbb2
	bls.n 0x10dbba	@ 0010dbb2 02d9
.org 0x10dbb4
	adds r0, r1, #0	@ 0010dbb4 081c
.org 0x10dbb6
	adds r0, #55	@ 0010dbb6 3730
.org 0x10dbb8
	strb r0, [r3, #0]	@ 0010dbb8 1870
.org 0x10dbba
	lsrs r4, r4, #4	@ 0010dbba 2409
.org 0x10dbbc
	subs r0, r2, #1	@ 0010dbbc 501e
.org 0x10dbbe
	lsls r0, r0, #16	@ 0010dbbe 0004
.org 0x10dbc0
	cmp r0, #0	@ 0010dbc0 0028
.org 0x10dbc2
	bge.n 0x10db9e	@ 0010dbc2 ecda
.org 0x10dbc4
	mov r0, sp	@ 0010dbc4 6846
.org 0x10dbc6
	mov r1, ip	@ 0010dbc6 6146
.org 0x10dbc8
	adds r2, r7, #0	@ 0010dbc8 3a1c
.org 0x10dbca
	bl 0x10da2c	@ 0010dbca fff72fff
.org 0x10dbce
	add sp, #16	@ 0010dbce 04b0
.org 0x10dbd0
	pop {r4, r5, r6, r7}	@ 0010dbd0 f0bc
.org 0x10dbd2
	pop {r0}	@ 0010dbd2 01bc
.org 0x10dbd4
	bx r0	@ 0010dbd4 0047
