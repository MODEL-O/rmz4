@ FUN_0807bd48  entry 0x0807bd48  size 30
.thumb
.org 0x7bd48
FUN_0807bd48:
	push {r4, lr}	@ 0007bd48 10b5
.org 0x7bd4a
	adds r4, r0, #0	@ 0007bd4a 041c
.org 0x7bd4c
	bl 0x7e9b0	@ 0007bd4c 02f030fe
.org 0x7bd50
	ldr r1, [pc, #20]	@ 0007bd50 0549
.org 0x7bd52
	ldrb r0, [r4, #13]	@ 0007bd52 607b
.org 0x7bd54
	lsls r0, r0, #2	@ 0007bd54 8000
.org 0x7bd56
	adds r0, r0, r1	@ 0007bd56 4018
.org 0x7bd58
	ldr r1, [r0, #0]	@ 0007bd58 0168
.org 0x7bd5a
	adds r0, r4, #0	@ 0007bd5a 201c
.org 0x7bd5c
	bl 0x128f80	@ 0007bd5c adf010f9
.org 0x7bd60
	pop {r4}	@ 0007bd60 10bc
.org 0x7bd62
	pop {r0}	@ 0007bd62 01bc
.org 0x7bd64
	bx r0	@ 0007bd64 0047
