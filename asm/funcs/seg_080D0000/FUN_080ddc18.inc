@ FUN_080ddc18  entry 0x080ddc18  size 88
.thumb
.org 0xddc18
FUN_080ddc18:
	push {r4, lr}	@ 000ddc18 10b5
.org 0xddc1a
	adds r4, r0, #0	@ 000ddc1a 041c
.org 0xddc1c
	bl 0x1cff0	@ 000ddc1c 3ff7e8f9
.org 0xddc20
	ldr r0, [r4, #84]	@ 000ddc20 606d
.org 0xddc22
	ldr r2, [r4, #92]	@ 000ddc22 e26d
.org 0xddc24
	adds r0, r0, r2	@ 000ddc24 8018
.org 0xddc26
	str r0, [r4, #84]	@ 000ddc26 6065
.org 0xddc28
	ldr r0, [r4, #88]	@ 000ddc28 a06d
.org 0xddc2a
	ldr r1, [r4, #96]	@ 000ddc2a 216e
.org 0xddc2c
	adds r0, r0, r1	@ 000ddc2c 4018
.org 0xddc2e
	str r0, [r4, #88]	@ 000ddc2e a065
.org 0xddc30
	cmp r2, #0	@ 000ddc30 002a
.org 0xddc32
	beq.n 0xddc3a	@ 000ddc32 02d0
.org 0xddc34
	ldr r0, [r4, #100]	@ 000ddc34 606e
.org 0xddc36
	subs r0, r2, r0	@ 000ddc36 101a
.org 0xddc38
	str r0, [r4, #92]	@ 000ddc38 e065
.org 0xddc3a
	ldr r0, [r4, #96]	@ 000ddc3a 206e
.org 0xddc3c
	adds r0, #64	@ 000ddc3c 4030
.org 0xddc3e
	str r0, [r4, #96]	@ 000ddc3e 2066
.org 0xddc40
	ldr r0, [r4, #84]	@ 000ddc40 606d
.org 0xddc42
	ldr r1, [r4, #88]	@ 000ddc42 a16d
.org 0xddc44
	ldr r2, [pc, #40]	@ 000ddc44 0a4a
.org 0xddc46
	adds r1, r1, r2	@ 000ddc46 8918
.org 0xddc48
	bl 0x7c7c	@ 000ddc48 2af718f8
.org 0xddc4c
	lsls r0, r0, #16	@ 000ddc4c 0004
.org 0xddc4e
	cmp r0, #0	@ 000ddc4e 0028
.org 0xddc50
	beq.n 0xddc6a	@ 000ddc50 0bd0
.org 0xddc52
	ldr r1, [pc, #32]	@ 000ddc52 0849
.org 0xddc54
	ldrb r0, [r4, #9]	@ 000ddc54 607a
.org 0xddc56
	lsls r0, r0, #2	@ 000ddc56 8000
.org 0xddc58
	adds r0, r0, r1	@ 000ddc58 4018
.org 0xddc5a
	movs r1, #2	@ 000ddc5a 0221
.org 0xddc5c
	str r1, [r4, #12]	@ 000ddc5c e160
.org 0xddc5e
	ldr r0, [r0, #0]	@ 000ddc5e 0068
.org 0xddc60
	ldr r0, [r0, #8]	@ 000ddc60 8068
.org 0xddc62
	str r0, [r4, #20]	@ 000ddc62 6061
.org 0xddc64
	adds r0, r4, #0	@ 000ddc64 201c
.org 0xddc66
	bl 0xdd6e0	@ 000ddc66 fff73bfd
.org 0xddc6a
	pop {r4}	@ 000ddc6a 10bc
.org 0xddc6c
	pop {r0}	@ 000ddc6c 01bc
.org 0xddc6e
	bx r0	@ 000ddc6e 0047
