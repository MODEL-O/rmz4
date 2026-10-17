@ FUN_08084ac0  entry 0x08084ac0  size 74
.thumb
.org 0x84ac0
FUN_08084ac0:
	push {lr}	@ 00084ac0 00b5
.org 0x84ac2
	adds r2, r0, #0	@ 00084ac2 021c
.org 0x84ac4
	adds r3, r2, #0	@ 00084ac4 131c
.org 0x84ac6
	adds r3, #140	@ 00084ac6 8c33
.org 0x84ac8
	ldr r0, [r3, #0]	@ 00084ac8 1868
.org 0x84aca
	movs r1, #128	@ 00084aca 8021
.org 0x84acc
	lsls r1, r1, #2	@ 00084acc 8900
.org 0x84ace
	ands r0, r1	@ 00084ace 0840
.org 0x84ad0
	cmp r0, #0	@ 00084ad0 0028
.org 0x84ad2
	beq.n 0x84b0a	@ 00084ad2 1ad0
.org 0x84ad4
	ldr r1, [pc, #40]	@ 00084ad4 0a49
.org 0x84ad6
	ldrb r0, [r2, #9]	@ 00084ad6 507a
.org 0x84ad8
	lsls r0, r0, #2	@ 00084ad8 8000
.org 0x84ada
	adds r0, r0, r1	@ 00084ada 4018
.org 0x84adc
	movs r1, #2	@ 00084adc 0221
.org 0x84ade
	str r1, [r2, #12]	@ 00084ade d160
.org 0x84ae0
	ldr r0, [r0, #0]	@ 00084ae0 0068
.org 0x84ae2
	ldr r0, [r0, #8]	@ 00084ae2 8068
.org 0x84ae4
	str r0, [r2, #20]	@ 00084ae4 5061
.org 0x84ae6
	ldrb r0, [r2, #16]	@ 00084ae6 107c
.org 0x84ae8
	cmp r0, #1	@ 00084ae8 0128
.org 0x84aea
	bhi.n 0x84b04	@ 00084aea 0bd8
.org 0x84aec
	ldr r1, [r3, #0]	@ 00084aec 1968
.org 0x84aee
	movs r0, #128	@ 00084aee 8020
.org 0x84af0
	lsls r0, r0, #9	@ 00084af0 4002
.org 0x84af2
	ands r1, r0	@ 00084af2 0140
.org 0x84af4
	cmp r1, #0	@ 00084af4 0029
.org 0x84af6
	beq.n 0x84b04	@ 00084af6 05d0
.org 0x84af8
	movs r0, #1	@ 00084af8 0120
.org 0x84afa
	strb r0, [r2, #13]	@ 00084afa 5073
.org 0x84afc
	b.n 0x84b06	@ 00084afc 03e0
.org 0x84afe
	.byte 0x00	@ 00084afe data
.org 0x84aff
	.byte 0x00	@ 00084aff data
.org 0x84b00
	.byte 0x40,0xdb,0x85,0x08	@ 00084b00 data
.org 0x84b04
	strb r1, [r2, #13]	@ 00084b04 5173
.org 0x84b06
	movs r0, #1	@ 00084b06 0120
.org 0x84b08
	b.n 0x84b0c	@ 00084b08 00e0
