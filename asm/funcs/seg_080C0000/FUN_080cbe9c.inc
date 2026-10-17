@ FUN_080cbe9c  entry 0x080cbe9c  size 20
.thumb
.org 0xcbe9c
FUN_080cbe9c:
	push {lr}	@ 000cbe9c 00b5
.org 0xcbe9e
	ldr r2, [pc, #16]	@ 000cbe9e 044a
.org 0xcbea0
	ldrb r1, [r0, #16]	@ 000cbea0 017c
.org 0xcbea2
	lsls r1, r1, #2	@ 000cbea2 8900
.org 0xcbea4
	adds r1, r1, r2	@ 000cbea4 8918
.org 0xcbea6
	ldr r1, [r1, #0]	@ 000cbea6 0968
.org 0xcbea8
	bl 0x128f80	@ 000cbea8 5df06af8
.org 0xcbeac
	pop {r0}	@ 000cbeac 01bc
.org 0xcbeae
	bx r0	@ 000cbeae 0047
