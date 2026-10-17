@ FUN_080db9f4  entry 0x080db9f4  size 146
.thumb
.org 0xdb9f4
FUN_080db9f4:
	push {r4, lr}	@ 000db9f4 10b5
.org 0xdb9f6
	adds r4, r0, #0	@ 000db9f6 041c
.org 0xdb9f8
	ldrb r0, [r4, #15]	@ 000db9f8 e07b
.org 0xdb9fa
	cmp r0, #0	@ 000db9fa 0028
.org 0xdb9fc
	bne.n 0xdba14	@ 000db9fc 0ad1
.org 0xdb9fe
	ldr r1, [pc, #64]	@ 000db9fe 1049
.org 0xdba00
	adds r0, r4, #0	@ 000dba00 201c
.org 0xdba02
	bl 0x1cf00	@ 000dba02 41f77dfa
.org 0xdba06
	movs r0, #28	@ 000dba06 1c20
.org 0xdba08
	strb r0, [r4, #18]	@ 000dba08 a074
.org 0xdba0a
	ldr r0, [pc, #56]	@ 000dba0a 0e48
.org 0xdba0c
	str r0, [r4, #96]	@ 000dba0c 2066
.org 0xdba0e
	ldrb r0, [r4, #15]	@ 000dba0e e07b
.org 0xdba10
	adds r0, #1	@ 000dba10 0130
.org 0xdba12
	strb r0, [r4, #15]	@ 000dba12 e073
.org 0xdba14
	adds r0, r4, #0	@ 000dba14 201c
.org 0xdba16
	bl 0x1cff0	@ 000dba16 41f7ebfa
.org 0xdba1a
	ldrb r0, [r4, #18]	@ 000dba1a a07c
.org 0xdba1c
	subs r0, #1	@ 000dba1c 0138
.org 0xdba1e
	strb r0, [r4, #18]	@ 000dba1e a074
.org 0xdba20
	lsls r0, r0, #24	@ 000dba20 0006
.org 0xdba22
	cmp r0, #0	@ 000dba22 0028
.org 0xdba24
	bne.n 0xdba4c	@ 000dba24 12d1
.org 0xdba26
	ldr r1, [pc, #32]	@ 000dba26 0849
.org 0xdba28
	ldrb r0, [r4, #9]	@ 000dba28 607a
.org 0xdba2a
	lsls r0, r0, #2	@ 000dba2a 8000
.org 0xdba2c
	adds r0, r0, r1	@ 000dba2c 4018
.org 0xdba2e
	movs r1, #2	@ 000dba2e 0221
.org 0xdba30
	str r1, [r4, #12]	@ 000dba30 e160
.org 0xdba32
	ldr r0, [r0, #0]	@ 000dba32 0068
.org 0xdba34
	ldr r0, [r0, #8]	@ 000dba34 8068
.org 0xdba36
	str r0, [r4, #20]	@ 000dba36 6061
.org 0xdba38
	adds r0, r4, #0	@ 000dba38 201c
.org 0xdba3a
	bl 0xdbba4	@ 000dba3a 00f0b3f8
.org 0xdba3e
	b.n 0xdba8c	@ 000dba3e 25e0
.org 0xdba40
	.byte 0x0d,0x40,0x00,0x00	@ 000dba40 data
.org 0xdba44
	.byte 0x00,0xff,0xff,0xff	@ 000dba44 data
.org 0xdba48
	.byte 0x64,0x6f,0x86,0x08	@ 000dba48 data
.org 0xdba4c
	ldr r0, [r4, #96]	@ 000dba4c 206e
.org 0xdba4e
	adds r0, #64	@ 000dba4e 4030
.org 0xdba50
	str r0, [r4, #96]	@ 000dba50 2066
.org 0xdba52
	movs r1, #224	@ 000dba52 e021
.org 0xdba54
	lsls r1, r1, #3	@ 000dba54 c900
.org 0xdba56
	cmp r0, r1	@ 000dba56 8842
.org 0xdba58
	ble.n 0xdba5c	@ 000dba58 00dd
.org 0xdba5a
	str r1, [r4, #96]	@ 000dba5a 2166
.org 0xdba5c
	ldr r1, [r4, #88]	@ 000dba5c a16d
.org 0xdba5e
	ldr r0, [r4, #96]	@ 000dba5e 206e
.org 0xdba60
	adds r1, r1, r0	@ 000dba60 0918
.org 0xdba62
	str r1, [r4, #88]	@ 000dba62 a165
.org 0xdba64
	ldr r0, [r4, #84]	@ 000dba64 606d
.org 0xdba66
	ldr r2, [pc, #44]	@ 000dba66 0b4a
.org 0xdba68
	adds r1, r1, r2	@ 000dba68 8918
.org 0xdba6a
	bl 0x7c7c	@ 000dba6a 2cf707f9
.org 0xdba6e
	lsls r0, r0, #16	@ 000dba6e 0004
.org 0xdba70
	cmp r0, #0	@ 000dba70 0028
.org 0xdba72
	beq.n 0xdba8c	@ 000dba72 0bd0
.org 0xdba74
	ldr r1, [pc, #32]	@ 000dba74 0849
.org 0xdba76
	ldrb r0, [r4, #9]	@ 000dba76 607a
.org 0xdba78
	lsls r0, r0, #2	@ 000dba78 8000
.org 0xdba7a
	adds r0, r0, r1	@ 000dba7a 4018
.org 0xdba7c
	movs r1, #2	@ 000dba7c 0221
.org 0xdba7e
	str r1, [r4, #12]	@ 000dba7e e160
.org 0xdba80
	ldr r0, [r0, #0]	@ 000dba80 0068
.org 0xdba82
	ldr r0, [r0, #8]	@ 000dba82 8068
.org 0xdba84
	str r0, [r4, #20]	@ 000dba84 6061
