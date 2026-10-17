@ FUN_080aebb0  entry 0x080aebb0  size 86
.thumb
.org 0xaebb0
FUN_080aebb0:
	push {r4, lr}	@ 000aebb0 10b5
.org 0xaebb2
	adds r3, r0, #0	@ 000aebb2 031c
.org 0xaebb4
	ldrb r0, [r3, #14]	@ 000aebb4 987b
.org 0xaebb6
	cmp r0, #0	@ 000aebb6 0028
.org 0xaebb8
	bne.n 0xaebf0	@ 000aebb8 1ad1
.org 0xaebba
	adds r1, r3, #0	@ 000aebba 191c
.org 0xaebbc
	adds r1, #140	@ 000aebbc 8c31
.org 0xaebbe
	ldr r2, [r1, #0]	@ 000aebbe 0a68
.org 0xaebc0
	movs r0, #128	@ 000aebc0 8020
.org 0xaebc2
	lsls r0, r0, #9	@ 000aebc2 4002
.org 0xaebc4
	ands r2, r0	@ 000aebc4 0240
.org 0xaebc6
	adds r4, r1, #0	@ 000aebc6 0c1c
.org 0xaebc8
	cmp r2, #0	@ 000aebc8 002a
.org 0xaebca
	beq.n 0xaebd2	@ 000aebca 02d0
.org 0xaebcc
	movs r0, #1	@ 000aebcc 0120
.org 0xaebce
	strb r0, [r3, #13]	@ 000aebce 5873
.org 0xaebd0
	b.n 0xaebd4	@ 000aebd0 00e0
.org 0xaebd2
	strb r2, [r3, #13]	@ 000aebd2 5a73
.org 0xaebd4
	movs r1, #0	@ 000aebd4 0021
.org 0xaebd6
	str r1, [r4, #0]	@ 000aebd6 2160
.org 0xaebd8
	adds r0, r3, #0	@ 000aebd8 181c
.org 0xaebda
	adds r0, #144	@ 000aebda 9030
.org 0xaebdc
	str r1, [r0, #0]	@ 000aebdc 0160
.org 0xaebde
	adds r0, #4	@ 000aebde 0430
.org 0xaebe0
	strb r1, [r0, #0]	@ 000aebe0 0170
.org 0xaebe2
	ldrb r1, [r3, #10]	@ 000aebe2 997a
.org 0xaebe4
	movs r0, #251	@ 000aebe4 fb20
.org 0xaebe6
	ands r0, r1	@ 000aebe6 0840
.org 0xaebe8
	strb r0, [r3, #10]	@ 000aebe8 9872
.org 0xaebea
	ldrb r0, [r3, #14]	@ 000aebea 987b
.org 0xaebec
	adds r0, #1	@ 000aebec 0130
.org 0xaebee
	strb r0, [r3, #14]	@ 000aebee 9873
.org 0xaebf0
	ldr r0, [pc, #20]	@ 000aebf0 0548
.org 0xaebf2
	ldrb r1, [r3, #13]	@ 000aebf2 597b
.org 0xaebf4
	lsls r1, r1, #2	@ 000aebf4 8900
.org 0xaebf6
	adds r1, r1, r0	@ 000aebf6 0918
.org 0xaebf8
	ldr r1, [r1, #0]	@ 000aebf8 0968
.org 0xaebfa
	adds r0, r3, #0	@ 000aebfa 181c
.org 0xaebfc
	bl 0x128f80	@ 000aebfc 7af0c0f9
.org 0xaec00
	pop {r4}	@ 000aec00 10bc
.org 0xaec02
	pop {r0}	@ 000aec02 01bc
.org 0xaec04
	bx r0	@ 000aec04 0047
