@ FUN_08033aa4  entry 0x08033aa4  size 230
.thumb
.org 0x33aa4
FUN_08033aa4:
	push {r4, r5, lr}	@ 00033aa4 30b5
.org 0x33aa6
	sub sp, #4	@ 00033aa6 81b0
.org 0x33aa8
	adds r4, r0, #0	@ 00033aa8 041c
.org 0x33aaa
	movs r0, #129	@ 00033aaa 8120
.org 0x33aac
	lsls r0, r0, #1	@ 00033aac 4000
.org 0x33aae
	adds r5, r4, r0	@ 00033aae 2518
.org 0x33ab0
	ldrb r0, [r5, #0]	@ 00033ab0 2878
.org 0x33ab2
	cmp r0, #0	@ 00033ab2 0028
.org 0x33ab4
	bne.n 0x33ad0	@ 00033ab4 0cd1
.org 0x33ab6
	movs r1, #128	@ 00033ab6 8021
.org 0x33ab8
	lsls r1, r1, #5	@ 00033ab8 4901
.org 0x33aba
	adds r0, r4, #0	@ 00033aba 201c
.org 0x33abc
	bl 0x1cf00	@ 00033abc e9f720fa
.org 0x33ac0
	adds r0, r4, #0	@ 00033ac0 201c
.org 0x33ac2
	movs r1, #2	@ 00033ac2 0221
.org 0x33ac4
	bl 0x3c464	@ 00033ac4 08f0cefc
.org 0x33ac8
	ldrb r0, [r5, #0]	@ 00033ac8 2878
.org 0x33aca
	adds r0, #1	@ 00033aca 0130
.org 0x33acc
	strb r0, [r5, #0]	@ 00033acc 2870
.org 0x33ace
	b.n 0x33afc	@ 00033ace 15e0
.org 0x33ad0
	adds r0, r4, #0	@ 00033ad0 201c
.org 0x33ad2
	mov r1, sp	@ 00033ad2 6946
.org 0x33ad4
	bl 0x39fd8	@ 00033ad4 06f080fa
.org 0x33ad8
	lsls r0, r0, #24	@ 00033ad8 0006
.org 0x33ada
	cmp r0, #0	@ 00033ada 0028
.org 0x33adc
	beq.n 0x33af2	@ 00033adc 09d0
.org 0x33ade
	mov r0, sp	@ 00033ade 6846
.org 0x33ae0
	ldrb r0, [r0, #0]	@ 00033ae0 0078
.org 0x33ae2
	cmp r0, #1	@ 00033ae2 0128
.org 0x33ae4
	bne.n 0x33af2	@ 00033ae4 05d1
.org 0x33ae6
	movs r2, #163	@ 00033ae6 a322
.org 0x33ae8
	lsls r2, r2, #1	@ 00033ae8 5200
.org 0x33aea
	adds r1, r4, r2	@ 00033aea a118
.org 0x33aec
	ldrb r0, [r1, #0]	@ 00033aec 0878
.org 0x33aee
	adds r0, #1	@ 00033aee 0130
.org 0x33af0
	strb r0, [r1, #0]	@ 00033af0 0870
.org 0x33af2
	movs r1, #128	@ 00033af2 8021
.org 0x33af4
	lsls r1, r1, #5	@ 00033af4 4901
.org 0x33af6
	adds r0, r4, #0	@ 00033af6 201c
.org 0x33af8
	bl 0x3a3b0	@ 00033af8 06f05afc
.org 0x33afc
	adds r0, r4, #0	@ 00033afc 201c
.org 0x33afe
	bl 0x3a68c	@ 00033afe 06f0c5fd
.org 0x33b02
	lsls r0, r0, #24	@ 00033b02 0006
.org 0x33b04
	cmp r0, #0	@ 00033b04 0028
.org 0x33b06
	beq.n 0x33b5c	@ 00033b06 29d0
.org 0x33b08
	adds r0, r4, #0	@ 00033b08 201c
.org 0x33b0a
	adds r0, #113	@ 00033b0a 7130
.org 0x33b0c
	ldrb r0, [r0, #0]	@ 00033b0c 0078
.org 0x33b0e
	lsls r0, r0, #24	@ 00033b0e 0006
.org 0x33b10
	asrs r0, r0, #24	@ 00033b10 0016
.org 0x33b12
	cmp r0, #5	@ 00033b12 0528
.org 0x33b14
	ble.n 0x33b5c	@ 00033b14 22dd
.org 0x33b16
	adds r1, r4, #0	@ 00033b16 211c
.org 0x33b18
	adds r1, #180	@ 00033b18 b431
.org 0x33b1a
	movs r3, #163	@ 00033b1a a323
.org 0x33b1c
	lsls r3, r3, #1	@ 00033b1c 5b00
.org 0x33b1e
	adds r0, r4, r3	@ 00033b1e e018
.org 0x33b20
	ldrb r0, [r0, #0]	@ 00033b20 0078
.org 0x33b22
	cmp r0, #1	@ 00033b22 0128
.org 0x33b24
	bls.n 0x33b5c	@ 00033b24 1ad9
.org 0x33b26
	movs r2, #150	@ 00033b26 9622
.org 0x33b28
	lsls r2, r2, #2	@ 00033b28 9200
.org 0x33b2a
	adds r0, r4, r2	@ 00033b2a a018
.org 0x33b2c
	ldr r0, [r0, #0]	@ 00033b2c 0068
.org 0x33b2e
	movs r2, #64	@ 00033b2e 4022
.org 0x33b30
	ands r0, r2	@ 00033b30 1040
.org 0x33b32
	cmp r0, #0	@ 00033b32 0028
.org 0x33b34
	beq.n 0x33b5c	@ 00033b34 12d0
.org 0x33b36
	ldrh r1, [r1, #20]	@ 00033b36 898a
.org 0x33b38
	adds r0, r2, #0	@ 00033b38 101c
.org 0x33b3a
	ands r0, r1	@ 00033b3a 0840
.org 0x33b3c
	cmp r0, #0	@ 00033b3c 0028
.org 0x33b3e
	beq.n 0x33b5c	@ 00033b3e 0dd0
.org 0x33b40
	movs r0, #0	@ 00033b40 0020
.org 0x33b42
	movs r1, #1	@ 00033b42 0121
.org 0x33b44
	strb r1, [r4, #13]	@ 00033b44 6173
.org 0x33b46
	strb r0, [r4, #14]	@ 00033b46 a073
.org 0x33b48
	movs r1, #5	@ 00033b48 0521
.org 0x33b4a
	strb r1, [r4, #15]	@ 00033b4a e173
.org 0x33b4c
	subs r3, #69	@ 00033b4c 453b
.org 0x33b4e
	adds r2, r4, r3	@ 00033b4e e218
.org 0x33b50
	strb r1, [r2, #0]	@ 00033b50 1170
.org 0x33b52
	movs r2, #129	@ 00033b52 8122
.org 0x33b54
	lsls r2, r2, #1	@ 00033b54 5200
.org 0x33b56
	adds r1, r4, r2	@ 00033b56 a118
.org 0x33b58
	strb r0, [r1, #0]	@ 00033b58 0870
.org 0x33b5a
	b.n 0x33b82	@ 00033b5a 12e0
.org 0x33b5c
	adds r0, r4, #0	@ 00033b5c 201c
.org 0x33b5e
	adds r0, #115	@ 00033b5e 7330
.org 0x33b60
	ldrb r0, [r0, #0]	@ 00033b60 0078
.org 0x33b62
	cmp r0, #3	@ 00033b62 0328
.org 0x33b64
	bne.n 0x33b82	@ 00033b64 0dd1
.org 0x33b66
	movs r3, #128	@ 00033b66 8023
.org 0x33b68
	lsls r3, r3, #1	@ 00033b68 5b00
.org 0x33b6a
	adds r1, r4, r3	@ 00033b6a e118
.org 0x33b6c
	movs r0, #0	@ 00033b6c 0020
.org 0x33b6e
	strb r0, [r1, #0]	@ 00033b6e 0870
.org 0x33b70
	adds r0, r4, #0	@ 00033b70 201c
.org 0x33b72
	bl 0x2b7d8	@ 00033b72 f7f731fe
.org 0x33b76
	adds r1, r0, #0	@ 00033b76 011c
.org 0x33b78
	lsls r1, r1, #16	@ 00033b78 0904
.org 0x33b7a
	lsrs r1, r1, #16	@ 00033b7a 090c
.org 0x33b7c
	adds r0, r4, #0	@ 00033b7c 201c
.org 0x33b7e
	bl 0x1cf00	@ 00033b7e e9f7bff9
.org 0x33b82
	add sp, #4	@ 00033b82 01b0
.org 0x33b84
	pop {r4, r5}	@ 00033b84 30bc
.org 0x33b86
	pop {r0}	@ 00033b86 01bc
.org 0x33b88
	bx r0	@ 00033b88 0047
