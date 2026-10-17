@ FUN_080cbd88  entry 0x080cbd88  size 96
.thumb
.org 0xcbd88
FUN_080cbd88:
	push {r4, r5, lr}	@ 000cbd88 30b5
.org 0xcbd8a
	adds r4, r0, #0	@ 000cbd8a 041c
.org 0xcbd8c
	ldrb r5, [r4, #15]	@ 000cbd8c e57b
.org 0xcbd8e
	cmp r5, #0	@ 000cbd8e 002d
.org 0xcbd90
	bne.n 0xcbda2	@ 000cbd90 07d1
.org 0xcbd92
	movs r1, #146	@ 000cbd92 9221
.org 0xcbd94
	lsls r1, r1, #8	@ 000cbd94 0902
.org 0xcbd96
	bl 0x1cf00	@ 000cbd96 51f7b3f8
.org 0xcbd9a
	str r5, [r4, #96]	@ 000cbd9a 2566
.org 0xcbd9c
	ldrb r0, [r4, #15]	@ 000cbd9c e07b
.org 0xcbd9e
	adds r0, #1	@ 000cbd9e 0130
.org 0xcbda0
	strb r0, [r4, #15]	@ 000cbda0 e073
.org 0xcbda2
	adds r0, r4, #0	@ 000cbda2 201c
.org 0xcbda4
	bl 0x1cff0	@ 000cbda4 51f724f9
.org 0xcbda8
	adds r0, r4, #0	@ 000cbda8 201c
.org 0xcbdaa
	adds r0, #116	@ 000cbdaa 7430
.org 0xcbdac
	ldr r1, [pc, #36]	@ 000cbdac 0949
.org 0xcbdae
	bl 0x5784	@ 000cbdae 39f7e9fc
.org 0xcbdb2
	ldr r1, [r4, #88]	@ 000cbdb2 a16d
.org 0xcbdb4
	ldr r0, [r4, #96]	@ 000cbdb4 206e
.org 0xcbdb6
	adds r1, r1, r0	@ 000cbdb6 0918
.org 0xcbdb8
	str r1, [r4, #88]	@ 000cbdb8 a165
.org 0xcbdba
	ldr r0, [r4, #84]	@ 000cbdba 606d
.org 0xcbdbc
	bl 0x7c7c	@ 000cbdbc 3bf75eff
.org 0xcbdc0
	lsls r0, r0, #16	@ 000cbdc0 0004
.org 0xcbdc2
	cmp r0, #0	@ 000cbdc2 0028
.org 0xcbdc4
	beq.n 0xcbdd8	@ 000cbdc4 08d0
.org 0xcbdc6
	movs r1, #0	@ 000cbdc6 0021
.org 0xcbdc8
	movs r0, #2	@ 000cbdc8 0220
.org 0xcbdca
	strb r0, [r4, #13]	@ 000cbdca 6073
.org 0xcbdcc
	strb r1, [r4, #14]	@ 000cbdcc a173
.org 0xcbdce
	strb r1, [r4, #15]	@ 000cbdce e173
.org 0xcbdd0
	b.n 0xcbde8	@ 000cbdd0 0ae0
.org 0xcbdd2
	.byte 0x00	@ 000cbdd2 data
.org 0xcbdd3
	.byte 0x00	@ 000cbdd3 data
.org 0xcbdd4
	.byte 0x28,0x66,0x86,0x08	@ 000cbdd4 data
.org 0xcbdd8
	ldr r0, [r4, #96]	@ 000cbdd8 206e
.org 0xcbdda
	adds r0, #32	@ 000cbdda 2030
.org 0xcbddc
	str r0, [r4, #96]	@ 000cbddc 2066
.org 0xcbdde
	movs r1, #192	@ 000cbdde c021
.org 0xcbde0
	lsls r1, r1, #2	@ 000cbde0 8900
.org 0xcbde2
	cmp r0, r1	@ 000cbde2 8842
.org 0xcbde4
	ble.n 0xcbde8	@ 000cbde4 00dd
.org 0xcbde6
	str r1, [r4, #96]	@ 000cbde6 2166
