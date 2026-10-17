@ FUN_08058c9c  entry 0x08058c9c  size 114
.thumb
.org 0x58c9c
FUN_08058c9c:
	push {r4, lr}	@ 00058c9c 10b5
.org 0x58c9e
	adds r4, r0, #0	@ 00058c9e 041c
.org 0x58ca0
	ldrb r0, [r4, #15]	@ 00058ca0 e07b
.org 0x58ca2
	cmp r0, #0	@ 00058ca2 0028
.org 0x58ca4
	bne.n 0x58cb4	@ 00058ca4 06d1
.org 0x58ca6
	ldr r1, [pc, #104]	@ 00058ca6 1a49
.org 0x58ca8
	adds r0, r4, #0	@ 00058ca8 201c
.org 0x58caa
	bl 0x1cf00	@ 00058caa c4f729f9
.org 0x58cae
	ldrb r0, [r4, #15]	@ 00058cae e07b
.org 0x58cb0
	adds r0, #1	@ 00058cb0 0130
.org 0x58cb2
	strb r0, [r4, #15]	@ 00058cb2 e073
.org 0x58cb4
	adds r0, r4, #0	@ 00058cb4 201c
.org 0x58cb6
	bl 0x1cff0	@ 00058cb6 c4f79bf9
.org 0x58cba
	adds r0, r4, #0	@ 00058cba 201c
.org 0x58cbc
	adds r0, #116	@ 00058cbc 7430
.org 0x58cbe
	ldr r3, [pc, #84]	@ 00058cbe 154b
.org 0x58cc0
	ldrb r1, [r4, #30]	@ 00058cc0 a17f
.org 0x58cc2
	lsls r1, r1, #8	@ 00058cc2 0902
.org 0x58cc4
	adds r2, r4, #0	@ 00058cc4 221c
.org 0x58cc6
	adds r2, #112	@ 00058cc6 7032
.org 0x58cc8
	ldrb r2, [r2, #0]	@ 00058cc8 1278
.org 0x58cca
	orrs r1, r2	@ 00058cca 1143
.org 0x58ccc
	ldr r2, [pc, #72]	@ 00058ccc 124a
.org 0x58cce
	adds r1, r1, r2	@ 00058cce 8918
.org 0x58cd0
	lsls r1, r1, #2	@ 00058cd0 8900
.org 0x58cd2
	adds r1, r1, r3	@ 00058cd2 c918
.org 0x58cd4
	adds r2, r4, #0	@ 00058cd4 221c
.org 0x58cd6
	adds r2, #113	@ 00058cd6 7132
.org 0x58cd8
	ldrb r2, [r2, #0]	@ 00058cd8 1278
.org 0x58cda
	lsls r2, r2, #24	@ 00058cda 1206
.org 0x58cdc
	asrs r2, r2, #24	@ 00058cdc 1216
.org 0x58cde
	ldr r1, [r1, #0]	@ 00058cde 0968
.org 0x58ce0
	lsls r2, r2, #2	@ 00058ce0 9200
.org 0x58ce2
	adds r2, r2, r1	@ 00058ce2 5218
.org 0x58ce4
	ldr r1, [r2, #0]	@ 00058ce4 1168
.org 0x58ce6
	ldrb r2, [r1, #0]	@ 00058ce6 0a78
.org 0x58ce8
	lsls r1, r2, #1	@ 00058ce8 5100
.org 0x58cea
	adds r1, r1, r2	@ 00058cea 8918
.org 0x58cec
	lsls r1, r1, #3	@ 00058cec c900
.org 0x58cee
	ldr r2, [pc, #44]	@ 00058cee 0b4a
.org 0x58cf0
	adds r1, r1, r2	@ 00058cf0 8918
.org 0x58cf2
	bl 0x5784	@ 00058cf2 acf747fd
.org 0x58cf6
	adds r0, r4, #0	@ 00058cf6 201c
.org 0x58cf8
	adds r0, #115	@ 00058cf8 7330
.org 0x58cfa
	ldrb r0, [r0, #0]	@ 00058cfa 0078
.org 0x58cfc
	cmp r0, #3	@ 00058cfc 0328
.org 0x58cfe
	bne.n 0x58d08	@ 00058cfe 03d1
.org 0x58d00
	movs r1, #0	@ 00058d00 0021
.org 0x58d02
	movs r0, #2	@ 00058d02 0220
.org 0x58d04
	strb r0, [r4, #14]	@ 00058d04 a073
.org 0x58d06
	strb r1, [r4, #15]	@ 00058d06 e173
.org 0x58d08
	pop {r4}	@ 00058d08 10bc
.org 0x58d0a
	pop {r0}	@ 00058d0a 01bc
.org 0x58d0c
	bx r0	@ 00058d0c 0047
