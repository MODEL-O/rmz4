@ FUN_0805c63c  entry 0x0805c63c  size 28
.thumb
.org 0x5c63c
FUN_0805c63c:
	push {lr}	@ 0005c63c 00b5
.org 0x5c63e
	ldr r2, [pc, #24]	@ 0005c63e 064a
.org 0x5c640
	ldrb r1, [r0, #16]	@ 0005c640 017c
.org 0x5c642
	lsls r1, r1, #2	@ 0005c642 8900
.org 0x5c644
	adds r1, r1, r2	@ 0005c644 8918
.org 0x5c646
	ldrb r2, [r0, #13]	@ 0005c646 427b
.org 0x5c648
	ldr r1, [r1, #0]	@ 0005c648 0968
.org 0x5c64a
	lsls r2, r2, #2	@ 0005c64a 9200
.org 0x5c64c
	adds r2, r2, r1	@ 0005c64c 5218
.org 0x5c64e
	ldr r1, [r2, #0]	@ 0005c64e 1168
.org 0x5c650
	bl 0x128f80	@ 0005c650 ccf096fc
.org 0x5c654
	pop {r0}	@ 0005c654 01bc
.org 0x5c656
	bx r0	@ 0005c656 0047
