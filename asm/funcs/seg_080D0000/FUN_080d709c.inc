@ FUN_080d709c  entry 0x080d709c  size 80
.thumb
.org 0xd709c
FUN_080d709c:
	push {r4, lr}	@ 000d709c 10b5
.org 0xd709e
	adds r4, r0, #0	@ 000d709e 041c
.org 0xd70a0
	bl 0x1cff0	@ 000d70a0 45f7a6ff
.org 0xd70a4
	ldr r0, [r4, #96]	@ 000d70a4 206e
.org 0xd70a6
	adds r0, #64	@ 000d70a6 4030
.org 0xd70a8
	str r0, [r4, #96]	@ 000d70a8 2066
.org 0xd70aa
	movs r1, #224	@ 000d70aa e021
.org 0xd70ac
	lsls r1, r1, #3	@ 000d70ac c900
.org 0xd70ae
	cmp r0, r1	@ 000d70ae 8842
.org 0xd70b0
	ble.n 0xd70b4	@ 000d70b0 00dd
.org 0xd70b2
	str r1, [r4, #96]	@ 000d70b2 2166
.org 0xd70b4
	ldr r1, [r4, #88]	@ 000d70b4 a16d
.org 0xd70b6
	ldr r0, [r4, #96]	@ 000d70b6 206e
.org 0xd70b8
	adds r1, r1, r0	@ 000d70b8 0918
.org 0xd70ba
	str r1, [r4, #88]	@ 000d70ba a165
.org 0xd70bc
	ldr r0, [r4, #84]	@ 000d70bc 606d
.org 0xd70be
	movs r2, #160	@ 000d70be a022
.org 0xd70c0
	lsls r2, r2, #4	@ 000d70c0 1201
.org 0xd70c2
	adds r1, r1, r2	@ 000d70c2 8918
.org 0xd70c4
	bl 0x7c7c	@ 000d70c4 30f7dafd
.org 0xd70c8
	lsls r0, r0, #16	@ 000d70c8 0004
.org 0xd70ca
	cmp r0, #0	@ 000d70ca 0028
.org 0xd70cc
	beq.n 0xd70e6	@ 000d70cc 0bd0
.org 0xd70ce
	ldr r1, [pc, #28]	@ 000d70ce 0749
.org 0xd70d0
	ldrb r0, [r4, #9]	@ 000d70d0 607a
.org 0xd70d2
	lsls r0, r0, #2	@ 000d70d2 8000
.org 0xd70d4
	adds r0, r0, r1	@ 000d70d4 4018
.org 0xd70d6
	movs r1, #2	@ 000d70d6 0221
.org 0xd70d8
	str r1, [r4, #12]	@ 000d70d8 e160
.org 0xd70da
	ldr r0, [r0, #0]	@ 000d70da 0068
.org 0xd70dc
	ldr r0, [r0, #8]	@ 000d70dc 8068
.org 0xd70de
	str r0, [r4, #20]	@ 000d70de 6061
.org 0xd70e0
	adds r0, r4, #0	@ 000d70e0 201c
.org 0xd70e2
	bl 0xd6f44	@ 000d70e2 fff72fff
.org 0xd70e6
	pop {r4}	@ 000d70e6 10bc
.org 0xd70e8
	pop {r0}	@ 000d70e8 01bc
.org 0xd70ea
	bx r0	@ 000d70ea 0047
