@ FUN_0805aac8  entry 0x0805aac8  size 20
.thumb
.org 0x5aac8
FUN_0805aac8:
	push {lr}	@ 0005aac8 00b5
.org 0x5aaca
	ldr r2, [pc, #16]	@ 0005aaca 044a
.org 0x5aacc
	ldrb r1, [r0, #14]	@ 0005aacc 817b
.org 0x5aace
	lsls r1, r1, #2	@ 0005aace 8900
.org 0x5aad0
	adds r1, r1, r2	@ 0005aad0 8918
.org 0x5aad2
	ldr r1, [r1, #0]	@ 0005aad2 0968
.org 0x5aad4
	bl 0x128f80	@ 0005aad4 cef054fa
.org 0x5aad8
	pop {r0}	@ 0005aad8 01bc
.org 0x5aada
	bx r0	@ 0005aada 0047
