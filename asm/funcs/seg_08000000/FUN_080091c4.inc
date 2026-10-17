@ FUN_080091c4  entry 0x080091c4  size 46
.thumb
.org 0x91c4
FUN_080091c4:
	push {lr}	@ 000091c4 00b5
.org 0x91c6
	adds r2, r0, #0	@ 000091c6 021c
.org 0x91c8
	ldr r0, [pc, #12]	@ 000091c8 0348
.org 0x91ca
	cmp r2, r0	@ 000091ca 8242
.org 0x91cc
	ble.n 0x91f0	@ 000091cc 10dd
.org 0x91ce
	ldr r0, [pc, #12]	@ 000091ce 0348
.org 0x91d0
	cmp r2, r0	@ 000091d0 8242
.org 0x91d2
	ble.n 0x91e0	@ 000091d2 05dd
.org 0x91d4
	mvns r0, r1	@ 000091d4 c843
.org 0x91d6
	b.n 0x91fe	@ 000091d6 12e0
.org 0x91d8
	.byte 0xff,0x03,0x00,0x00	@ 000091d8 data
.org 0x91dc
	.byte 0xff,0x07,0x00,0x00	@ 000091dc data
.org 0x91e0
	ldr r0, [pc, #16]	@ 000091e0 0448
.org 0x91e2
	adds r1, r1, r0	@ 000091e2 0918
.org 0x91e4
	ldr r3, [pc, #16]	@ 000091e4 044b
.org 0x91e6
	adds r0, r2, r3	@ 000091e6 d018
.org 0x91e8
	lsls r0, r0, #2	@ 000091e8 8000
.org 0x91ea
	adds r0, r1, r0	@ 000091ea 0818
.org 0x91ec
	cmp r0, #0	@ 000091ec 0028
.org 0x91ee
	bgt.n 0x91fc	@ 000091ee 05dc
.org 0x91f0
	movs r0, #0	@ 000091f0 0020
