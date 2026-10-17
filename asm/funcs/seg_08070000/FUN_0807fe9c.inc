@ FUN_0807fe9c  entry 0x0807fe9c  size 40
.thumb
.org 0x7fe9c
FUN_0807fe9c:
	push {r4, lr}	@ 0007fe9c 10b5
.org 0x7fe9e
	adds r4, r0, #0	@ 0007fe9e 041c
.org 0x7fea0
	ldr r0, [r4, #96]	@ 0007fea0 206e
.org 0x7fea2
	cmp r0, #0	@ 0007fea2 0028
.org 0x7fea4
	ble.n 0x7febe	@ 0007fea4 0bdd
.org 0x7fea6
	ldr r0, [r4, #84]	@ 0007fea6 606d
.org 0x7fea8
	ldr r1, [r4, #88]	@ 0007fea8 a16d
.org 0x7feaa
	adds r1, #64	@ 0007feaa 4031
.org 0x7feac
	bl 0x7c7c	@ 0007feac 87f7e6fe
.org 0x7feb0
	lsls r0, r0, #16	@ 0007feb0 0004
.org 0x7feb2
	cmp r0, #0	@ 0007feb2 0028
.org 0x7feb4
	beq.n 0x7febe	@ 0007feb4 03d0
.org 0x7feb6
	movs r1, #0	@ 0007feb6 0021
.org 0x7feb8
	movs r0, #2	@ 0007feb8 0220
.org 0x7feba
	strb r0, [r4, #13]	@ 0007feba 6073
.org 0x7febc
	strb r1, [r4, #14]	@ 0007febc a173
.org 0x7febe
	pop {r4}	@ 0007febe 10bc
.org 0x7fec0
	pop {r0}	@ 0007fec0 01bc
.org 0x7fec2
	bx r0	@ 0007fec2 0047
