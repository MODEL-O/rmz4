@ FUN_08079aa4  entry 0x08079aa4  size 98
.thumb
.org 0x79aa4
FUN_08079aa4:
	push {r4, r5, lr}	@ 00079aa4 30b5
.org 0x79aa6
	adds r4, r0, #0	@ 00079aa6 041c
.org 0x79aa8
	ldrb r5, [r4, #14]	@ 00079aa8 a57b
.org 0x79aaa
	cmp r5, #0	@ 00079aaa 002d
.org 0x79aac
	bne.n 0x79ac2	@ 00079aac 09d1
.org 0x79aae
	ldr r0, [pc, #88]	@ 00079aae 1648
.org 0x79ab0
	bl 0x2b10	@ 00079ab0 89f72ef8
.org 0x79ab4
	movs r0, #128	@ 00079ab4 8020
.org 0x79ab6
	negs r0, r0	@ 00079ab6 4042
.org 0x79ab8
	str r0, [r4, #96]	@ 00079ab8 2066
.org 0x79aba
	strb r5, [r4, #18]	@ 00079aba a574
.org 0x79abc
	ldrb r0, [r4, #14]	@ 00079abc a07b
.org 0x79abe
	adds r0, #1	@ 00079abe 0130
.org 0x79ac0
	strb r0, [r4, #14]	@ 00079ac0 a073
.org 0x79ac2
	adds r0, r4, #0	@ 00079ac2 201c
.org 0x79ac4
	bl 0x1cff0	@ 00079ac4 a3f794fa
.org 0x79ac8
	ldr r2, [r4, #88]	@ 00079ac8 a26d
.org 0x79aca
	ldr r0, [r4, #96]	@ 00079aca 206e
.org 0x79acc
	adds r2, r2, r0	@ 00079acc 1218
.org 0x79ace
	str r2, [r4, #88]	@ 00079ace a265
.org 0x79ad0
	adds r3, r4, #0	@ 00079ad0 231c
.org 0x79ad2
	adds r3, #180	@ 00079ad2 b433
.org 0x79ad4
	ldr r1, [pc, #52]	@ 00079ad4 0d49
.org 0x79ad6
	ldrb r0, [r4, #18]	@ 00079ad6 a07c
.org 0x79ad8
	lsls r0, r0, #1	@ 00079ad8 4000
.org 0x79ada
	adds r0, r0, r1	@ 00079ada 4018
.org 0x79adc
	movs r5, #0	@ 00079adc 0025
.org 0x79ade
	ldrsh r1, [r0, r5]	@ 00079ade 415f
.org 0x79ae0
	lsls r1, r1, #2	@ 00079ae0 8900
.org 0x79ae2
	ldr r0, [r3, #0]	@ 00079ae2 1868
.org 0x79ae4
	adds r0, r0, r1	@ 00079ae4 4018
.org 0x79ae6
	str r0, [r4, #84]	@ 00079ae6 6065
.org 0x79ae8
	ldrb r0, [r4, #18]	@ 00079ae8 a07c
.org 0x79aea
	adds r0, #1	@ 00079aea 0130
.org 0x79aec
	strb r0, [r4, #18]	@ 00079aec a074
.org 0x79aee
	ldr r0, [r3, #4]	@ 00079aee 5868
.org 0x79af0
	cmp r2, r0	@ 00079af0 8242
.org 0x79af2
	bge.n 0x79b00	@ 00079af2 05da
.org 0x79af4
	str r0, [r4, #88]	@ 00079af4 a065
.org 0x79af6
	ldrb r0, [r4, #15]	@ 00079af6 e07b
.org 0x79af8
	adds r0, #1	@ 00079af8 0130
.org 0x79afa
	strb r0, [r4, #15]	@ 00079afa e073
.org 0x79afc
	movs r0, #0	@ 00079afc 0020
.org 0x79afe
	strb r0, [r4, #14]	@ 00079afe a073
.org 0x79b00
	pop {r4, r5}	@ 00079b00 30bc
.org 0x79b02
	pop {r0}	@ 00079b02 01bc
.org 0x79b04
	bx r0	@ 00079b04 0047
