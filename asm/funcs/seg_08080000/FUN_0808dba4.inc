@ FUN_0808dba4  entry 0x0808dba4  size 110
.thumb
.org 0x8dba4
FUN_0808dba4:
	push {r4, r5, r6, r7, lr}	@ 0008dba4 f0b5
.org 0x8dba6
	mov r7, r8	@ 0008dba6 4746
.org 0x8dba8
	push {r7}	@ 0008dba8 80b4
.org 0x8dbaa
	adds r7, r0, #0	@ 0008dbaa 071c
.org 0x8dbac
	mov r8, r1	@ 0008dbac 8846
.org 0x8dbae
	lsls r2, r2, #24	@ 0008dbae 1206
.org 0x8dbb0
	lsrs r6, r2, #24	@ 0008dbb0 160e
.org 0x8dbb2
	lsls r3, r3, #24	@ 0008dbb2 1b06
.org 0x8dbb4
	lsrs r5, r3, #24	@ 0008dbb4 1d0e
.org 0x8dbb6
	ldr r0, [pc, #92]	@ 0008dbb6 1748
.org 0x8dbb8
	ldr r0, [r0, #0]	@ 0008dbb8 0068
.org 0x8dbba
	bl 0x5500	@ 0008dbba 77f7a1fc
.org 0x8dbbe
	adds r4, r0, #0	@ 0008dbbe 041c
.org 0x8dbc0
	cmp r4, #0	@ 0008dbc0 002c
.org 0x8dbc2
	beq.n 0x8dc06	@ 0008dbc2 20d0
.org 0x8dbc4
	adds r1, r4, #0	@ 0008dbc4 211c
.org 0x8dbc6
	adds r1, #37	@ 0008dbc6 2531
.org 0x8dbc8
	movs r3, #0	@ 0008dbc8 0023
.org 0x8dbca
	movs r0, #24	@ 0008dbca 1820
.org 0x8dbcc
	strb r0, [r1, #0]	@ 0008dbcc 0870
.org 0x8dbce
	ldr r2, [pc, #72]	@ 0008dbce 124a
.org 0x8dbd0
	movs r1, #16	@ 0008dbd0 1021
.org 0x8dbd2
	movs r0, #16	@ 0008dbd2 1020
.org 0x8dbd4
	strb r0, [r4, #9]	@ 0008dbd4 6072
.org 0x8dbd6
	ldr r0, [r2, #64]	@ 0008dbd6 106c
.org 0x8dbd8
	ldr r0, [r0, #0]	@ 0008dbd8 0068
.org 0x8dbda
	str r0, [r4, #20]	@ 0008dbda 6061
.org 0x8dbdc
	movs r2, #0	@ 0008dbdc 0022
.org 0x8dbde
	strh r3, [r4, #32]	@ 0008dbde 2384
.org 0x8dbe0
	adds r0, r4, #0	@ 0008dbe0 201c
.org 0x8dbe2
	adds r0, #34	@ 0008dbe2 2230
.org 0x8dbe4
	strb r2, [r0, #0]	@ 0008dbe4 0270
.org 0x8dbe6
	ldrb r0, [r4, #11]	@ 0008dbe6 e07a
.org 0x8dbe8
	orrs r1, r0	@ 0008dbe8 0143
.org 0x8dbea
	strb r1, [r4, #11]	@ 0008dbea e172
.org 0x8dbec
	ldrb r0, [r4, #28]	@ 0008dbec 207f
.org 0x8dbee
	strb r0, [r4, #29]	@ 0008dbee 6077
.org 0x8dbf0
	str r7, [r4, #40]	@ 0008dbf0 a762
.org 0x8dbf2
	mov r3, r8	@ 0008dbf2 4346
.org 0x8dbf4
	ldr r0, [r3, #0]	@ 0008dbf4 1868
.org 0x8dbf6
	ldr r1, [r3, #4]	@ 0008dbf6 5968
.org 0x8dbf8
	str r0, [r4, #84]	@ 0008dbf8 6065
.org 0x8dbfa
	str r1, [r4, #88]	@ 0008dbfa a165
.org 0x8dbfc
	strb r6, [r4, #16]	@ 0008dbfc 2674
.org 0x8dbfe
	strb r5, [r4, #17]	@ 0008dbfe 6574
.org 0x8dc00
	adds r0, r4, #0	@ 0008dc00 201c
.org 0x8dc02
	adds r0, #184	@ 0008dc02 b830
.org 0x8dc04
	strb r2, [r0, #0]	@ 0008dc04 0270
.org 0x8dc06
	adds r0, r4, #0	@ 0008dc06 201c
.org 0x8dc08
	pop {r3}	@ 0008dc08 08bc
.org 0x8dc0a
	mov r8, r3	@ 0008dc0a 9846
.org 0x8dc0c
	pop {r4, r5, r6, r7}	@ 0008dc0c f0bc
.org 0x8dc0e
	pop {r1}	@ 0008dc0e 02bc
.org 0x8dc10
	bx r1	@ 0008dc10 0847
