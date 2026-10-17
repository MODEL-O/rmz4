@ FUN_080bde3c  entry 0x080bde3c  size 20
.thumb
.org 0xbde3c
FUN_080bde3c:
	push {lr}	@ 000bde3c 00b5
.org 0xbde3e
	ldr r2, [pc, #16]	@ 000bde3e 044a
.org 0xbde40
	ldrb r1, [r0, #16]	@ 000bde40 017c
.org 0xbde42
	lsls r1, r1, #2	@ 000bde42 8900
.org 0xbde44
	adds r1, r1, r2	@ 000bde44 8918
.org 0xbde46
	ldr r1, [r1, #0]	@ 000bde46 0968
.org 0xbde48
	bl 0x128f80	@ 000bde48 6bf09af8
.org 0xbde4c
	pop {r0}	@ 000bde4c 01bc
.org 0xbde4e
	bx r0	@ 000bde4e 0047
