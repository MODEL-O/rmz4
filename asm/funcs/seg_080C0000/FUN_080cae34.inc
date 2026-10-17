@ FUN_080cae34  entry 0x080cae34  size 38
.thumb
.org 0xcae34
FUN_080cae34:
	push {r4, lr}	@ 000cae34 10b5
.org 0xcae36
	adds r4, r0, #0	@ 000cae36 041c
.org 0xcae38
	adds r1, r4, #0	@ 000cae38 211c
.org 0xcae3a
	adds r1, #84	@ 000cae3a 5431
.org 0xcae3c
	movs r0, #3	@ 000cae3c 0320
.org 0xcae3e
	bl 0xd0c88	@ 000cae3e 05f023ff
.org 0xcae42
	ldr r1, [pc, #24]	@ 000cae42 0649
.org 0xcae44
	ldrb r0, [r4, #9]	@ 000cae44 607a
.org 0xcae46
	lsls r0, r0, #2	@ 000cae46 8000
.org 0xcae48
	adds r0, r0, r1	@ 000cae48 4018
.org 0xcae4a
	movs r1, #4	@ 000cae4a 0421
.org 0xcae4c
	str r1, [r4, #12]	@ 000cae4c e160
.org 0xcae4e
	ldr r0, [r0, #0]	@ 000cae4e 0068
.org 0xcae50
	ldr r0, [r0, #16]	@ 000cae50 0069
.org 0xcae52
	str r0, [r4, #20]	@ 000cae52 6061
.org 0xcae54
	pop {r4}	@ 000cae54 10bc
.org 0xcae56
	pop {r0}	@ 000cae56 01bc
.org 0xcae58
	bx r0	@ 000cae58 0047
