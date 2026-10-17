@ FUN_0800201c  entry 0x0800201c  size 10
.thumb
.org 0x201c
FUN_0800201c:
	ldr r0, [pc, #8]	@ 0000201c 0248
.org 0x201e
	adds r0, #200	@ 0000201e c830
.org 0x2020
	movs r1, #0	@ 00002020 0021
.org 0x2022
	str r1, [r0, #0]	@ 00002022 0160
.org 0x2024
	bx lr	@ 00002024 7047
