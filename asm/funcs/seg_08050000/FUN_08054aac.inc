@ FUN_08054aac  entry 0x08054aac  size 88
.thumb
.org 0x54aac
FUN_08054aac:
	push {r4, r5, lr}	@ 00054aac 30b5
.org 0x54aae
	adds r4, r0, #0	@ 00054aae 041c
.org 0x54ab0
	ldrb r0, [r4, #15]	@ 00054ab0 e07b
.org 0x54ab2
	cmp r0, #0	@ 00054ab2 0028
.org 0x54ab4
	bne.n 0x54ad6	@ 00054ab4 0fd1
.org 0x54ab6
	movs r0, #87	@ 00054ab6 5720
.org 0x54ab8
	bl 0x2b10	@ 00054ab8 aef72af8
.org 0x54abc
	movs r1, #176	@ 00054abc b021
.org 0x54abe
	lsls r1, r1, #6	@ 00054abe 8901
.org 0x54ac0
	adds r0, r4, #0	@ 00054ac0 201c
.org 0x54ac2
	bl 0x1cf00	@ 00054ac2 c8f71dfa
.org 0x54ac6
	adds r0, r4, #0	@ 00054ac6 201c
.org 0x54ac8
	movs r1, #12	@ 00054ac8 0c21
.org 0x54aca
	movs r2, #0	@ 00054aca 0022
.org 0x54acc
	bl 0x5516c	@ 00054acc 00f04efb
.org 0x54ad0
	ldrb r0, [r4, #15]	@ 00054ad0 e07b
.org 0x54ad2
	adds r0, #1	@ 00054ad2 0130
.org 0x54ad4
	strb r0, [r4, #15]	@ 00054ad4 e073
.org 0x54ad6
	adds r0, r4, #0	@ 00054ad6 201c
.org 0x54ad8
	bl 0x1cff0	@ 00054ad8 c8f78afa
.org 0x54adc
	adds r5, r4, #0	@ 00054adc 251c
.org 0x54ade
	adds r5, #184	@ 00054ade b835
.org 0x54ae0
	ldr r1, [r5, #0]	@ 00054ae0 2968
.org 0x54ae2
	adds r0, r4, #0	@ 00054ae2 201c
.org 0x54ae4
	bl 0x55188	@ 00054ae4 00f050fb
.org 0x54ae8
	adds r1, r0, #0	@ 00054ae8 011c
.org 0x54aea
	cmp r1, #0	@ 00054aea 0029
.org 0x54aec
	bne.n 0x54afe	@ 00054aec 07d1
.org 0x54aee
	ldr r0, [r5, #0]	@ 00054aee 2868
.org 0x54af0
	str r0, [r4, #88]	@ 00054af0 a065
.org 0x54af2
	adds r0, r4, #0	@ 00054af2 201c
.org 0x54af4
	adds r0, #183	@ 00054af4 b730
.org 0x54af6
	strb r1, [r0, #0]	@ 00054af6 0170
.org 0x54af8
	movs r0, #4	@ 00054af8 0420
.org 0x54afa
	strb r0, [r4, #14]	@ 00054afa a073
.org 0x54afc
	strb r1, [r4, #15]	@ 00054afc e173
.org 0x54afe
	pop {r4, r5}	@ 00054afe 30bc
.org 0x54b00
	pop {r0}	@ 00054b00 01bc
.org 0x54b02
	bx r0	@ 00054b02 0047
