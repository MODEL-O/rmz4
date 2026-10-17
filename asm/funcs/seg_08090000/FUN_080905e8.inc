@ FUN_080905e8  entry 0x080905e8  size 20
.thumb
.org 0x905e8
FUN_080905e8:
	push {lr}	@ 000905e8 00b5
.org 0x905ea
	ldr r2, [pc, #16]	@ 000905ea 044a
.org 0x905ec
	ldrb r1, [r0, #16]	@ 000905ec 017c
.org 0x905ee
	lsls r1, r1, #2	@ 000905ee 8900
.org 0x905f0
	adds r1, r1, r2	@ 000905f0 8918
.org 0x905f2
	ldr r1, [r1, #0]	@ 000905f2 0968
.org 0x905f4
	bl 0x128f80	@ 000905f4 98f0c4fc
.org 0x905f8
	pop {r0}	@ 000905f8 01bc
.org 0x905fa
	bx r0	@ 000905fa 0047
