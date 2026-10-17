@ FUN_0802aa44  entry 0x0802aa44  size 70
.thumb
.org 0x2aa44
FUN_0802aa44:
	push {r4, r5, r6, lr}	@ 0002aa44 70b5
.org 0x2aa46
	ldr r4, [pc, #68]	@ 0002aa46 114c
.org 0x2aa48
	movs r0, #240	@ 0002aa48 f020
.org 0x2aa4a
	lsls r0, r0, #7	@ 0002aa4a c001
.org 0x2aa4c
	str r0, [r4, #0]	@ 0002aa4c 2060
.org 0x2aa4e
	movs r0, #160	@ 0002aa4e a020
.org 0x2aa50
	lsls r0, r0, #7	@ 0002aa50 c001
.org 0x2aa52
	str r0, [r4, #4]	@ 0002aa52 6060
.org 0x2aa54
	adds r6, r4, #0	@ 0002aa54 261c
.org 0x2aa56
	subs r6, #12	@ 0002aa56 0c3e
.org 0x2aa58
	adds r0, r6, #0	@ 0002aa58 301c
.org 0x2aa5a
	adds r1, r4, #0	@ 0002aa5a 211c
.org 0x2aa5c
	movs r2, #0	@ 0002aa5c 0022
.org 0x2aa5e
	movs r3, #0	@ 0002aa5e 0023
.org 0x2aa60
	bl 0x2c0c	@ 0002aa60 d8f7d4f8
.org 0x2aa64
	ldr r0, [pc, #40]	@ 0002aa64 0a48
.org 0x2aa66
	adds r5, r4, r0	@ 0002aa66 2518
.org 0x2aa68
	adds r0, r5, #0	@ 0002aa68 281c
.org 0x2aa6a
	bl 0x3384	@ 0002aa6a d8f78bfc
.org 0x2aa6e
	adds r0, r5, #0	@ 0002aa6e 281c
.org 0x2aa70
	adds r1, r6, #0	@ 0002aa70 311c
.org 0x2aa72
	bl 0x33bc	@ 0002aa72 d8f7a3fc
.org 0x2aa76
	ldr r0, [pc, #28]	@ 0002aa76 0748
.org 0x2aa78
	adds r4, r4, r0	@ 0002aa78 2418
.org 0x2aa7a
	ldr r1, [pc, #28]	@ 0002aa7a 0749
.org 0x2aa7c
	adds r0, r4, #0	@ 0002aa7c 201c
.org 0x2aa7e
	movs r2, #64	@ 0002aa7e 4022
.org 0x2aa80
	bl 0x10a1b4	@ 0002aa80 dff098fb
.org 0x2aa84
	pop {r4, r5, r6}	@ 0002aa84 70bc
.org 0x2aa86
	pop {r0}	@ 0002aa86 01bc
.org 0x2aa88
	bx r0	@ 0002aa88 0047
