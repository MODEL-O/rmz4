@ FUN_080e8af4  entry 0x080e8af4  size 20
.thumb
.org 0xe8af4
FUN_080e8af4:
	ldr r2, [pc, #16]	@ 000e8af4 044a
.org 0xe8af6
	ldrb r1, [r0, #9]	@ 000e8af6 417a
.org 0xe8af8
	lsls r1, r1, #2	@ 000e8af8 8900
.org 0xe8afa
	adds r1, r1, r2	@ 000e8afa 8918
.org 0xe8afc
	movs r2, #4	@ 000e8afc 0422
.org 0xe8afe
	str r2, [r0, #12]	@ 000e8afe c260
.org 0xe8b00
	ldr r1, [r1, #0]	@ 000e8b00 0968
.org 0xe8b02
	ldr r1, [r1, #16]	@ 000e8b02 0969
.org 0xe8b04
	str r1, [r0, #20]	@ 000e8b04 4161
.org 0xe8b06
	bx lr	@ 000e8b06 7047
