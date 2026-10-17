@ FUN_0804a888  entry 0x0804a888  size 20
.thumb
.org 0x4a888
FUN_0804a888:
	push {lr}	@ 0004a888 00b5
.org 0x4a88a
	ldr r2, [pc, #16]	@ 0004a88a 044a
.org 0x4a88c
	ldrb r1, [r0, #16]	@ 0004a88c 017c
.org 0x4a88e
	lsls r1, r1, #2	@ 0004a88e 8900
.org 0x4a890
	adds r1, r1, r2	@ 0004a890 8918
.org 0x4a892
	ldr r1, [r1, #0]	@ 0004a892 0968
.org 0x4a894
	bl 0x128f80	@ 0004a894 def074fb
.org 0x4a898
	pop {r0}	@ 0004a898 01bc
.org 0x4a89a
	bx r0	@ 0004a89a 0047
