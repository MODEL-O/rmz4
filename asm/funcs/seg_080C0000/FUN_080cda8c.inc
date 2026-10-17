@ FUN_080cda8c  entry 0x080cda8c  size 20
.thumb
.org 0xcda8c
FUN_080cda8c:
	ldr r2, [pc, #16]	@ 000cda8c 044a
.org 0xcda8e
	ldrb r1, [r0, #9]	@ 000cda8e 417a
.org 0xcda90
	lsls r1, r1, #2	@ 000cda90 8900
.org 0xcda92
	adds r1, r1, r2	@ 000cda92 8918
.org 0xcda94
	movs r2, #4	@ 000cda94 0422
.org 0xcda96
	str r2, [r0, #12]	@ 000cda96 c260
.org 0xcda98
	ldr r1, [r1, #0]	@ 000cda98 0968
.org 0xcda9a
	ldr r1, [r1, #16]	@ 000cda9a 0969
.org 0xcda9c
	str r1, [r0, #20]	@ 000cda9c 4161
.org 0xcda9e
	bx lr	@ 000cda9e 7047
