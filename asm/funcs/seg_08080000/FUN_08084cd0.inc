@ FUN_08084cd0  entry 0x08084cd0  size 74
.thumb
.org 0x84cd0
FUN_08084cd0:
	push {r4, lr}	@ 00084cd0 10b5
.org 0x84cd2
	adds r4, r0, #0	@ 00084cd2 041c
.org 0x84cd4
	ldrb r0, [r4, #14]	@ 00084cd4 a07b
.org 0x84cd6
	cmp r0, #0	@ 00084cd6 0028
.org 0x84cd8
	beq.n 0x84ce0	@ 00084cd8 02d0
.org 0x84cda
	cmp r0, #1	@ 00084cda 0128
.org 0x84cdc
	beq.n 0x84cfc	@ 00084cdc 0ed0
.org 0x84cde
	b.n 0x84d14	@ 00084cde 19e0
.org 0x84ce0
	movs r0, #59	@ 00084ce0 3b20
.org 0x84ce2
	bl 0x2b10	@ 00084ce2 7df715ff
.org 0x84ce6
	ldr r1, [pc, #52]	@ 00084ce6 0d49
.org 0x84ce8
	ldrb r0, [r4, #16]	@ 00084ce8 207c
.org 0x84cea
	lsls r0, r0, #1	@ 00084cea 4000
.org 0x84cec
	adds r0, r0, r1	@ 00084cec 4018
.org 0x84cee
	ldrh r1, [r0, #0]	@ 00084cee 0188
.org 0x84cf0
	adds r0, r4, #0	@ 00084cf0 201c
.org 0x84cf2
	bl 0x1cf00	@ 00084cf2 98f705f9
.org 0x84cf6
	ldrb r0, [r4, #14]	@ 00084cf6 a07b
.org 0x84cf8
	adds r0, #1	@ 00084cf8 0130
.org 0x84cfa
	strb r0, [r4, #14]	@ 00084cfa a073
.org 0x84cfc
	adds r0, r4, #0	@ 00084cfc 201c
.org 0x84cfe
	bl 0x1cff0	@ 00084cfe 98f777f9
.org 0x84d02
	adds r0, r4, #0	@ 00084d02 201c
.org 0x84d04
	adds r0, #115	@ 00084d04 7330
.org 0x84d06
	ldrb r0, [r0, #0]	@ 00084d06 0078
.org 0x84d08
	cmp r0, #3	@ 00084d08 0328
.org 0x84d0a
	bne.n 0x84d14	@ 00084d0a 03d1
.org 0x84d0c
	movs r1, #0	@ 00084d0c 0021
.org 0x84d0e
	movs r0, #2	@ 00084d0e 0220
.org 0x84d10
	strb r0, [r4, #13]	@ 00084d10 6073
.org 0x84d12
	strb r1, [r4, #14]	@ 00084d12 a173
.org 0x84d14
	pop {r4}	@ 00084d14 10bc
.org 0x84d16
	pop {r0}	@ 00084d16 01bc
.org 0x84d18
	bx r0	@ 00084d18 0047
