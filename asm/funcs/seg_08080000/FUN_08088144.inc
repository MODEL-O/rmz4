@ FUN_08088144  entry 0x08088144  size 64
.thumb
.org 0x88144
FUN_08088144:
	push {r4, lr}	@ 00088144 10b5
.org 0x88146
	adds r4, r0, #0	@ 00088146 041c
.org 0x88148
	ldrb r0, [r4, #15]	@ 00088148 e07b
.org 0x8814a
	cmp r0, #0	@ 0008814a 0028
.org 0x8814c
	bne.n 0x88166	@ 0008814c 0bd1
.org 0x8814e
	adds r0, r4, #0	@ 0008814e 201c
.org 0x88150
	adds r0, #116	@ 00088150 7430
.org 0x88152
	ldr r1, [pc, #48]	@ 00088152 0c49
.org 0x88154
	bl 0x5784	@ 00088154 7df716fb
.org 0x88158
	ldr r1, [pc, #44]	@ 00088158 0b49
.org 0x8815a
	adds r0, r4, #0	@ 0008815a 201c
.org 0x8815c
	bl 0x1cf00	@ 0008815c 94f7d0fe
.org 0x88160
	ldrb r0, [r4, #15]	@ 00088160 e07b
.org 0x88162
	adds r0, #1	@ 00088162 0130
.org 0x88164
	strb r0, [r4, #15]	@ 00088164 e073
.org 0x88166
	adds r0, r4, #0	@ 00088166 201c
.org 0x88168
	bl 0x1cff0	@ 00088168 94f742ff
.org 0x8816c
	adds r0, r4, #0	@ 0008816c 201c
.org 0x8816e
	adds r0, #115	@ 0008816e 7330
.org 0x88170
	ldrb r0, [r0, #0]	@ 00088170 0078
.org 0x88172
	cmp r0, #3	@ 00088172 0328
.org 0x88174
	bne.n 0x8817e	@ 00088174 03d1
.org 0x88176
	movs r1, #0	@ 00088176 0021
.org 0x88178
	movs r0, #2	@ 00088178 0220
.org 0x8817a
	strb r0, [r4, #14]	@ 0008817a a073
.org 0x8817c
	strb r1, [r4, #15]	@ 0008817c e173
.org 0x8817e
	pop {r4}	@ 0008817e 10bc
.org 0x88180
	pop {r0}	@ 00088180 01bc
.org 0x88182
	bx r0	@ 00088182 0047
