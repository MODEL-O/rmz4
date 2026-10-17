@ FUN_08083fb4  entry 0x08083fb4  size 104
.thumb
.org 0x83fb4
FUN_08083fb4:
	push {r4, r5, lr}	@ 00083fb4 30b5
.org 0x83fb6
	adds r4, r0, #0	@ 00083fb6 041c
.org 0x83fb8
	ldrb r5, [r4, #14]	@ 00083fb8 a57b
.org 0x83fba
	cmp r5, #0	@ 00083fba 002d
.org 0x83fbc
	bne.n 0x83fce	@ 00083fbc 07d1
.org 0x83fbe
	movs r1, #224	@ 00083fbe e021
.org 0x83fc0
	lsls r1, r1, #5	@ 00083fc0 4901
.org 0x83fc2
	bl 0x1cf00	@ 00083fc2 98f79dff
.org 0x83fc6
	str r5, [r4, #96]	@ 00083fc6 2566
.org 0x83fc8
	ldrb r0, [r4, #14]	@ 00083fc8 a07b
.org 0x83fca
	adds r0, #1	@ 00083fca 0130
.org 0x83fcc
	strb r0, [r4, #14]	@ 00083fcc a073
.org 0x83fce
	ldr r0, [r4, #96]	@ 00083fce 206e
.org 0x83fd0
	adds r0, #64	@ 00083fd0 4030
.org 0x83fd2
	str r0, [r4, #96]	@ 00083fd2 2066
.org 0x83fd4
	movs r1, #224	@ 00083fd4 e021
.org 0x83fd6
	lsls r1, r1, #3	@ 00083fd6 c900
.org 0x83fd8
	cmp r0, r1	@ 00083fd8 8842
.org 0x83fda
	ble.n 0x83fde	@ 00083fda 00dd
.org 0x83fdc
	str r1, [r4, #96]	@ 00083fdc 2166
.org 0x83fde
	ldr r1, [r4, #88]	@ 00083fde a16d
.org 0x83fe0
	ldr r0, [r4, #96]	@ 00083fe0 206e
.org 0x83fe2
	adds r1, r1, r0	@ 00083fe2 0918
.org 0x83fe4
	str r1, [r4, #88]	@ 00083fe4 a165
.org 0x83fe6
	ldr r0, [r4, #84]	@ 00083fe6 606d
.org 0x83fe8
	movs r2, #160	@ 00083fe8 a022
.org 0x83fea
	lsls r2, r2, #4	@ 00083fea 1201
.org 0x83fec
	adds r1, r1, r2	@ 00083fec 8918
.org 0x83fee
	bl 0x7c7c	@ 00083fee 83f745fe
.org 0x83ff2
	lsls r0, r0, #16	@ 00083ff2 0004
.org 0x83ff4
	cmp r0, #0	@ 00083ff4 0028
.org 0x83ff6
	beq.n 0x84016	@ 00083ff6 0ed0
.org 0x83ff8
	ldr r0, [r4, #84]	@ 00083ff8 606d
.org 0x83ffa
	ldr r1, [r4, #88]	@ 00083ffa a16d
.org 0x83ffc
	bl 0x8534	@ 00083ffc 84f79afa
.org 0x84000
	ldr r1, [pc, #24]	@ 00084000 0649
.org 0x84002
	adds r0, r0, r1	@ 00084002 4018
.org 0x84004
	str r0, [r4, #88]	@ 00084004 a065
.org 0x84006
	movs r1, #0	@ 00084006 0021
.org 0x84008
	movs r0, #7	@ 00084008 0720
.org 0x8400a
	strb r0, [r4, #13]	@ 0008400a 6073
.org 0x8400c
	strb r1, [r4, #14]	@ 0008400c a173
.org 0x8400e
	adds r1, r4, #0	@ 0008400e 211c
.org 0x84010
	adds r1, #180	@ 00084010 b431
.org 0x84012
	movs r0, #1	@ 00084012 0120
.org 0x84014
	strb r0, [r1, #11]	@ 00084014 c872
.org 0x84016
	pop {r4, r5}	@ 00084016 30bc
.org 0x84018
	pop {r0}	@ 00084018 01bc
.org 0x8401a
	bx r0	@ 0008401a 0047
