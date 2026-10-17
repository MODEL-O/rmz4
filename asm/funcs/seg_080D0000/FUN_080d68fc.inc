@ FUN_080d68fc  entry 0x080d68fc  size 20
.thumb
.org 0xd68fc
FUN_080d68fc:
	push {lr}	@ 000d68fc 00b5
.org 0xd68fe
	ldr r2, [pc, #16]	@ 000d68fe 044a
.org 0xd6900
	ldrb r1, [r0, #16]	@ 000d6900 017c
.org 0xd6902
	lsls r1, r1, #2	@ 000d6902 8900
.org 0xd6904
	adds r1, r1, r2	@ 000d6904 8918
.org 0xd6906
	ldr r1, [r1, #0]	@ 000d6906 0968
.org 0xd6908
	bl 0x128f80	@ 000d6908 52f03afb
.org 0xd690c
	pop {r0}	@ 000d690c 01bc
.org 0xd690e
	bx r0	@ 000d690e 0047
