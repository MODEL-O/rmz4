@ FUN_08047150  entry 0x08047150  size 20
.thumb
.org 0x47150
FUN_08047150:
	push {lr}	@ 00047150 00b5
.org 0x47152
	ldr r2, [pc, #16]	@ 00047152 044a
.org 0x47154
	ldrb r1, [r0, #16]	@ 00047154 017c
.org 0x47156
	lsls r1, r1, #2	@ 00047156 8900
.org 0x47158
	adds r1, r1, r2	@ 00047158 8918
.org 0x4715a
	ldr r1, [r1, #0]	@ 0004715a 0968
.org 0x4715c
	bl 0x128f80	@ 0004715c e1f010ff
.org 0x47160
	pop {r0}	@ 00047160 01bc
.org 0x47162
	bx r0	@ 00047162 0047
