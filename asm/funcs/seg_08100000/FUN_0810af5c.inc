@ FUN_0810af5c  entry 0x0810af5c  size 152
.thumb
.org 0x10af5c
FUN_0810af5c:
	push {r4, lr}	@ 0010af5c 10b5
.org 0x10af5e
	adds r4, r0, #0	@ 0010af5e 041c
.org 0x10af60
	ldr r2, [r4, #40]	@ 0010af60 a26a
.org 0x10af62
	ldrb r0, [r2, #1]	@ 0010af62 5078
.org 0x10af64
	cmp r0, #1	@ 0010af64 0128
.org 0x10af66
	bhi.n 0x10af7c	@ 0010af66 09d8
.org 0x10af68
	adds r0, r4, #0	@ 0010af68 201c
.org 0x10af6a
	bl 0x1cff0	@ 0010af6a 12f741f8
.org 0x10af6e
	movs r0, #128	@ 0010af6e 8020
.org 0x10af70
	lsls r0, r0, #4	@ 0010af70 0001
.org 0x10af72
	str r0, [r4, #84]	@ 0010af72 6065
.org 0x10af74
	movs r0, #160	@ 0010af74 a020
.org 0x10af76
	lsls r0, r0, #4	@ 0010af76 0001
.org 0x10af78
	str r0, [r4, #88]	@ 0010af78 a065
.org 0x10af7a
	b.n 0x10aff6	@ 0010af7a 3ce0
.org 0x10af7c
	ldrb r1, [r4, #10]	@ 0010af7c a17a
.org 0x10af7e
	movs r0, #1	@ 0010af7e 0120
.org 0x10af80
	orrs r1, r0	@ 0010af80 0143
.org 0x10af82
	strb r1, [r4, #10]	@ 0010af82 a172
.org 0x10af84
	ldrb r0, [r2, #3]	@ 0010af84 d078
.org 0x10af86
	cmp r0, #1	@ 0010af86 0128
.org 0x10af88
	bne.n 0x10afa4	@ 0010af88 0cd1
.org 0x10af8a
	ldrb r0, [r2, #2]	@ 0010af8a 9078
.org 0x10af8c
	cmp r0, #0	@ 0010af8c 0028
.org 0x10af8e
	bne.n 0x10af96	@ 0010af8e 02d1
.org 0x10af90
	movs r0, #192	@ 0010af90 c020
.org 0x10af92
	lsls r0, r0, #5	@ 0010af92 4001
.org 0x10af94
	b.n 0x10af9a	@ 0010af94 01e0
.org 0x10af96
	movs r0, #128	@ 0010af96 8020
.org 0x10af98
	lsls r0, r0, #4	@ 0010af98 0001
.org 0x10af9a
	str r0, [r4, #84]	@ 0010af9a 6065
.org 0x10af9c
	movs r0, #160	@ 0010af9c a020
.org 0x10af9e
	lsls r0, r0, #4	@ 0010af9e 0001
.org 0x10afa0
	str r0, [r4, #88]	@ 0010afa0 a065
.org 0x10afa2
	b.n 0x10aff0	@ 0010afa2 25e0
.org 0x10afa4
	cmp r0, #2	@ 0010afa4 0228
.org 0x10afa6
	bne.n 0x10afc0	@ 0010afa6 0bd1
.org 0x10afa8
	movs r0, #128	@ 0010afa8 8020
.org 0x10afaa
	lsls r0, r0, #4	@ 0010afaa 0001
.org 0x10afac
	str r0, [r4, #84]	@ 0010afac 6065
.org 0x10afae
	ldr r1, [pc, #12]	@ 0010afae 0349
.org 0x10afb0
	adds r0, r2, r1	@ 0010afb0 5018
.org 0x10afb2
	ldrb r0, [r0, #2]	@ 0010afb2 8078
.org 0x10afb4
	lsls r0, r0, #12	@ 0010afb4 0003
.org 0x10afb6
	movs r1, #192	@ 0010afb6 c021
.org 0x10afb8
	lsls r1, r1, #5	@ 0010afb8 4901
.org 0x10afba
	b.n 0x10afe4	@ 0010afba 13e0
.org 0x10afbc
	.byte 0xcc,0x0d,0x00,0x00	@ 0010afbc data
.org 0x10afc0
	cmp r0, #3	@ 0010afc0 0328
.org 0x10afc2
	bne.n 0x10afea	@ 0010afc2 12d1
.org 0x10afc4
	movs r3, #128	@ 0010afc4 8023
.org 0x10afc6
	lsls r3, r3, #8	@ 0010afc6 1b02
.org 0x10afc8
	str r3, [r4, #84]	@ 0010afc8 6365
.org 0x10afca
	ldr r0, [pc, #12]	@ 0010afca 0348
.org 0x10afcc
	adds r1, r2, r0	@ 0010afcc 1118
.org 0x10afce
	ldrb r0, [r1, #4]	@ 0010afce 0879
.org 0x10afd0
	cmp r0, #4	@ 0010afd0 0428
.org 0x10afd2
	bne.n 0x10afdc	@ 0010afd2 03d1
.org 0x10afd4
	str r3, [r4, #88]	@ 0010afd4 a365
.org 0x10afd6
	b.n 0x10aff0	@ 0010afd6 0be0
.org 0x10afd8
	.byte 0xcc,0x0d,0x00,0x00	@ 0010afd8 data
.org 0x10afdc
	ldrb r0, [r1, #4]	@ 0010afdc 0879
.org 0x10afde
	lsls r0, r0, #12	@ 0010afde 0003
.org 0x10afe0
	movs r1, #224	@ 0010afe0 e021
.org 0x10afe2
	lsls r1, r1, #6	@ 0010afe2 8901
.org 0x10afe4
	adds r0, r0, r1	@ 0010afe4 4018
.org 0x10afe6
	str r0, [r4, #88]	@ 0010afe6 a065
.org 0x10afe8
	b.n 0x10aff0	@ 0010afe8 02e0
.org 0x10afea
	movs r0, #254	@ 0010afea fe20
.org 0x10afec
	ands r1, r0	@ 0010afec 0140
.org 0x10afee
	strb r1, [r4, #10]	@ 0010afee a172
.org 0x10aff0
	adds r0, r4, #0	@ 0010aff0 201c
.org 0x10aff2
	bl 0x1cff0	@ 0010aff2 11f7fdff
