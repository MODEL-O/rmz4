@ FUN_080acda0  entry 0x080acda0  size 20
.thumb
.org 0xacda0
FUN_080acda0:
	push {lr}	@ 000acda0 00b5
.org 0xacda2
	ldr r2, [pc, #16]	@ 000acda2 044a
.org 0xacda4
	ldrb r1, [r0, #16]	@ 000acda4 017c
.org 0xacda6
	lsls r1, r1, #2	@ 000acda6 8900
.org 0xacda8
	adds r1, r1, r2	@ 000acda8 8918
.org 0xacdaa
	ldr r1, [r1, #0]	@ 000acdaa 0968
.org 0xacdac
	bl 0x128f80	@ 000acdac 7cf0e8f8
.org 0xacdb0
	pop {r0}	@ 000acdb0 01bc
.org 0xacdb2
	bx r0	@ 000acdb2 0047
