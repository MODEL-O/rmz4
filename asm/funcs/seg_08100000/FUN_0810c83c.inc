@ FUN_0810c83c  entry 0x0810c83c  size 20
.thumb
.org 0x10c83c
FUN_0810c83c:
	ldr r2, [pc, #16]	@ 0010c83c 044a
.org 0x10c83e
	ldrb r1, [r0, #9]	@ 0010c83e 417a
.org 0x10c840
	lsls r1, r1, #2	@ 0010c840 8900
.org 0x10c842
	adds r1, r1, r2	@ 0010c842 8918
.org 0x10c844
	movs r2, #4	@ 0010c844 0422
.org 0x10c846
	str r2, [r0, #12]	@ 0010c846 c260
.org 0x10c848
	ldr r1, [r1, #0]	@ 0010c848 0968
.org 0x10c84a
	ldr r1, [r1, #16]	@ 0010c84a 0969
.org 0x10c84c
	str r1, [r0, #20]	@ 0010c84c 4161
.org 0x10c84e
	bx lr	@ 0010c84e 7047
